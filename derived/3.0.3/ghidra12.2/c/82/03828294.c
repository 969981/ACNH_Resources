
void FUN_03828294(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float local_2c;
  undefined4 local_28;
  float fStack_24;
  
  lVar1 = *(long *)(param_2 + 8);
  local_2c = (float)(int)*(short *)(lVar1 + 8) * 5.0 + 2.5;
  fStack_24 = (float)(int)*(short *)(lVar1 + 10) * 5.0 + 2.5;
  local_28 = *(undefined4 *)(lVar1 + 0xc);
  uVar2 = FUN_015cb8d4(&local_2c,0);
  *(undefined4 *)(lVar1 + 0xc) = uVar2;
  *param_2 = 1;
  return;
}

