
void FUN_002cb0d8(long param_1,ulong *param_2,ulong *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_3;
  uVar4 = *param_2;
  if (uVar3 <= uVar4) {
    plVar2 = (long *)FUN_00228380();
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (undefined4)((long)(uVar4 - uVar3) / *plVar2);
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  return;
}

