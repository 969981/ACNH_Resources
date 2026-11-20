
void FUN_03eaaa80(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  uint uStack_1c;
  undefined8 local_18;
  
  uVar1 = *(uint *)((short *)*param_1 + 6);
  local_18 = 0;
  uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_1c = uVar2 >> 0x10 | uVar2 << 0x10;
  if (*(short *)*param_1 != 0x5942) {
    uStack_1c = uVar1;
  }
  local_20 = 0;
  FUN_03eaaad0(param_1,&local_20);
  return;
}

