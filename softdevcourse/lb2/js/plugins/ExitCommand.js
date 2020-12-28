(function(){
 	var _custom_title = Window_TitleCommand.prototype.makeCommandList
 	Window_TitleCommand.prototype.makeCommandList = function() {
 	_custom_title.call(this);
 	this.addCommand('Выход',   'exit');
 	};


 	var _custom_sctitle = Scene_Title.prototype.createCommandWindow
 	Scene_Title.prototype.createCommandWindow = function() {
 	_custom_sctitle.call(this);
 	this._commandWindow.setHandler('exit',  this.commandExit.bind(this));
	};

	Scene_Title.prototype.commandExit = function() {
	SceneManager.terminate();
	};

	var _custom_ge = Window_GameEnd.prototype.makeCommandList
	Window_GameEnd.prototype.makeCommandList = function() {
	_custom_ge.call(this);
    this.addCommand('Выход', 'exit');
	};

	var _custom_scge = Scene_GameEnd.prototype.createCommandWindow
	Scene_GameEnd.prototype.createCommandWindow = function() {
	_custom_scge.call(this);
    this._commandWindow.setHandler('exit',   this.exitCommand.bind(this));
	};

	Scene_GameEnd.prototype.exitCommand = function(){
	SceneManager.terminate();
	}

})();