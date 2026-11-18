
undefined4 FUN_032ef434(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0x8001;
  }
  *param_2 = 0xff;
  param_2[2] = 0xff;
  param_2[0x70380] = 0xff;
  *(undefined4 *)(param_2 + 0x78eb8) = 0xffffffff;
  *(undefined2 *)(param_2 + 0x78ebc) = 0xffff;
  *(undefined2 *)(param_2 + 0x79cc8) = 0;
  *(undefined2 *)(param_2 + 0x79e9c) = 0;
  param_2[0x79e9e] = 0;
  *(undefined2 *)(param_2 + 0x83e00) = 0;
  *(undefined2 *)(param_2 + 0x85b40) = 0;
  memset(param_2 + 0x70388,0,0xa00);
  *(undefined4 *)(param_2 + 0x78ed8) = 0;
  *(undefined8 *)(param_2 + 0x78ec8) = 0;
  *(undefined8 *)(param_2 + 0x78ed0) = 0;
  uVar2 = FUN_001008b0(param_2 + 8,param_2 + 0x79c80);
  uVar1 = 0xffff8064;
  if (-1 < (short)uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

