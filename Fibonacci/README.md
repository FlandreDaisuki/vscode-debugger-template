# Video demo

[Video](https://youtu.be/Ok4p1XgZGEY)

1. 點**除錯**圖示, 選組態**GDB**
2. 改要除錯的`program`，這邊設定成專案資料夾下的`a.out`
3. `MIMode`這裡使用`lldb`，用`gdb`則不用改
4. `Ctrl+Shift+p`叫出命令列，叫出**工作執行器**
5. 這邊只設定簡單的一個編譯指令，可以很複雜
6. 回到**launch.json**將**command/taskName**加入`preLaunchTask`
7. 可以下中斷點啦 :smile: