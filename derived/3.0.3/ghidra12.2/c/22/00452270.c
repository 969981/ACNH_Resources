
void FUN_00452270(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 7;
  uVar1 = uVar2 | 0x800001;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  *(ulong *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (param_2 != 0) {
    uVar1 = uVar2 | 0x800009;
    *(ulong *)(param_1 + 0x70) = uVar1;
    *(long *)(param_1 + 0x90) = param_2;
  }
  *(ulong *)(param_1 + 0x70) = uVar1 | 0x100000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}

