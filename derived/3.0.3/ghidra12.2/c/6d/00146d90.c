
void FUN_00146d90(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x1118) = 0;
  auVar1 = FUN_00147178();
  *(undefined8 *)(param_1 + 0x1058) = 0;
  *(undefined4 *)(param_1 + 0x1060) = 0;
  *(undefined8 *)(param_1 + 0x1070) = 0;
  *(undefined4 *)(param_1 + 0x1078) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1018) = auVar1;
  *(byte *)(param_1 + 0x111c) = *(byte *)(param_1 + 0x111c) & 0xfd;
  *(uint *)(param_1 + 0xfcc) = *(uint *)(param_1 + 0xfcc) & 0x90;
  FUN_00146dfc(param_1,auVar1._0_8_,auVar1._8_8_);
  return;
}

