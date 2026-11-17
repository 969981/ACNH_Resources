
void FUN_03112334(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_01bea9c8(param_1 + 0x45);
  iVar1 = (int)param_1[0xbc];
  if (((-1 < iVar1) && (*(int *)(param_1 + 0xbc) = iVar1 + -1, iVar1 == 0 || iVar1 + -1 == 0)) &&
     (*(undefined4 *)(param_1 + 0xbc) = 0xffffffff, (int)param_1[0x36] != 4)) {
LAB_03112414:
                    /* WARNING: Could not recover jumptable at 0x03112428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  if (param_1[0x44] == 0) {
    uVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (((uVar3 & 1) == 0) && ((int)param_1[0x36] != 4)) goto LAB_03112414;
  }
  else {
    plVar2 = (long *)param_1[0x43];
    if ((((plVar2 == (long *)0x0) ||
         (uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,0), (uVar3 & 1) != 0)) &&
        ((*(long **)(param_1[0x42] + 0x1b0) != (long *)0x0 &&
         (((uVar3 = (**(code **)(**(long **)(param_1[0x42] + 0x1b0) + 0x48))(), (uVar3 & 1) == 0 &&
           ((int)param_1[0x36] != 2)) && ((int)param_1[0x36] != 4)))))) &&
       (*(int *)((long)param_1 + 0x234) == 0xd)) {
      if (*(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) == -1) {
        *(undefined4 *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) = 2;
      }
    }
  }
  return;
}

