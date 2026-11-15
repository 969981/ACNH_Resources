
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021c1588(undefined1 *param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0x244db4da;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x200] = 0xff;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x201) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0xfffe;
  FUN_0277d4ac(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x218) = 0x7fc00000;
  if (param_1[0x228] != '\0') {
    param_1[0x228] = 0;
  }
  *(undefined4 *)(param_1 + 0x2c2) = 0x101;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  uVar2 = DAT_0558600c;
  uVar1 = _DAT_05586008;
  *(undefined2 *)(param_1 + 0x2c0) = 0;
  param_1[0x2c6] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d2] = 0;
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  *(undefined8 *)(param_1 + 0x2c8) = 0x1010000ff00;
  if ((param_3 & 1) != 0) {
    FUN_021ca0d0(param_1,0);
    if (*param_2 != 0) {
      FUN_020937ac(param_1 + 0x10);
      return;
    }
  }
  return;
}

