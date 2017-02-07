###README

##1.初始化
  #若不使用额外添加拖拽等手势,可以在storyboard或xib中放置一个UIview,使其类名为当前类
  #若要额外添加拖拽等手势(请自行添加),建议使用代码创建,方法为UIview的初始化方法:
  LSRoundMenuButton *XXX = [[LSRoundMenuButton alloc] initWithFrame:CGRectMake(x, y, w, h)];
  [YYYY addSubView:XXX];
  
##2.属性设置
  #设置背景颜色:XXX.backgroundColor = [UIColor XXXXX];
  #设置整体颜色:XXX.mainColor = [UIColor XXXXX];
  #设置弹出圈内的按钮是否依次弹出:XXX.jumpOutButtonOnebyOne = YES/NO;
  #设置中心按钮尺寸:XXX.centerButtonSize = CGSizeMake(w, d);
  #设置中心按钮类型:XXX.centerIconType = XXXXXX,IconTypePlus(默认类型,即中间显示一个加号),IconTypeUserDraw(自定义类型,需自定义)
   ##若是IconTypeUserDraw自定义类型,需在以下方法中自定义中心按钮(以添加三个横杠为例):
   [XXX setDrawCenterButtonIconBlock:^(CGRect rect, UIControlState state) {
        if (state == UIControlStateNormal){
            UIBezierPath* rectanglePath = [UIBezierPath bezierPathWithRect: CGRectMake((rect.size.width - 15)/2, rect.size.height/2 - 5, 15, 1)];
            [UIColor.whiteColor setFill];
            [rectanglePath fill];
 			UIBezierPath* rectangle2Path = [UIBezierPath bezierPathWithRect: CGRectMake((rect.size.width - 15)/2, rect.size.height/2, 15, 1)];
            [UIColor.whiteColor setFill];
            [rectangle2Path fill];
 			UIBezierPath* rectangle3Path = [UIBezierPath bezierPathWithRect: CGRectMake((rect.size.width - 15)/2, rect.size.height/2 + 5, 15, 1)];
            [UIColor.whiteColor setFill];
            [rectangle3Path fill];
        }
    }];
  #设置弹出圈内的按钮的图片:[XXX loadButtonWithIcons: , startDegree: layoutDegree: ];第一个参数是图片数组,数组放图片名字即可,第二个参数是第一个图片添加位置的角度,第三个参数是展开的角度
  #设置点击一个弹出圈内的按钮的相应事件:[XXX setButtonClickBlock:^(NSInteger idx) {响应事件}]; block块中传入的索引即可添加图片时其对应的数组索引,以便进行相应准确判断