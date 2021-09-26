# 某科学的语音识别定位器

简介在这里：[项目简介](https://www.amghank.cn/2021/09/04/%E3%80%902021%E9%9B%86%E5%88%9B%E8%B5%9B%E3%80%91Cortex-M3%E8%AF%AD%E9%9F%B3%E8%AF%86%E5%88%AB%E5%A3%B0%E6%BA%90%E5%AE%9A%E4%BD%8D%E7%B3%BB%E7%BB%9F/#more)

## 2021.9.26：目前开源语音识别加速器部分

### 语音识别加速器配置方式：


- 环境：Vivado 2018.2 + Vivado HLS 2018.2

1. clone本项目所有内容
2. 打开Vivado HLS 2018.2 （其他版本没测试过，不清楚能否打开）
3. Open Project ，索引本项目目录
4. 对加速器内部进行修改裁剪，例如更改TOP函数的输入输出口、添加pipline或memory优化等

![加速器的top_function](https://z3.ax1x.com/2021/09/26/4cBt4P.jpg)

5. 网络权重保存在speech_weights.h，后期再写训练权重的教程吧(咕咕咕)

后面再不定期更新吧，这个东西感觉还很粗糙，而且最近事情比较多