import Cocoa

class CPInstallPluginsViewController: NSViewController, CPCLITaskDelegate {

  @objc dynamic var pluginsToInstall = [String]()
  // must be DI'd before viewWillAppear
  var userProject: CPUserProject!
  var failed: Bool = false
  var pluginsInstalled: (() -> ())?

  @objc dynamic var installTask: CPCLITask?

  override func viewWillAppear() {
    super.viewWillAppear()
    titleLabel.stringValue = ~"plugins installing message"

    let command = "plugins install"
    failed = false

    installTask = CPCLITask(userProject: userProject, command: command, arguments: pluginsToInstall, delegate: self, qualityOfService:.userInitiated)
    installTask?.run()
  }

  func task(_ task: CPCLITask!, didUpdateOutputContents updatedOutput: NSAttributedString!) {
    failed = failed && updatedOutput.string.contains("ERROR:")
  }

  @IBOutlet weak var titleLabel: NSTextField!
  @IBOutlet weak var exitButton: NSButton!
  func taskCompleted(_ task: CPCLITask!) {
    if failed {
      exitButton.title = ~"Exit"
      titleLabel.stringValue = ~"plugin failed to install message"

    } else {
      exitButton.title = ~"Close"
      titleLabel.stringValue = ~"plugins all installed message"
      pluginsInstalled?()
    }
  }

  @IBAction func exitTapped(_ sender: AnyObject) {
    guard let window = view.window else { return }
    view.window?.sheetParent?.endSheet(window)
  }
}
