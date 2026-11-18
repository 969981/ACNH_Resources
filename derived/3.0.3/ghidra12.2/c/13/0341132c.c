
void FUN_0341132c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))((int)param_1,param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    if (*(uint *)(DAT_05751390 + 8) <= param_2) {
      uVar1 = 0;
    }
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    *(int *)(*(long *)(DAT_05751390 + 0x10) + uVar2) =
         *(int *)(*(long *)(DAT_05751390 + 0x10) + uVar2) + -1;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

