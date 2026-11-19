
/* WARNING: Removing unreachable block (ram,0x0386952c) */

void FUN_038694bc(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((int)param_2[0x15] != 5 && (int)param_2[0x15] != 2) {
    if (*(uint *)(param_2 + 0x15) < 7 &&
        (1 << (ulong)(*(uint *)(param_2 + 0x15) & 0x1f) & 0x58U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03869568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xa8))(param_2);
      return;
    }
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((int)param_2[0x15] == 5) {
    iVar2 = 6;
  }
  else {
    if ((int)param_2[0x15] != 2) goto LAB_03869590;
    FUN_038693c0(uVar1,param_2);
    iVar2 = 3;
  }
  if (iVar2 == 2) {
    *(undefined1 *)((long)param_2 + 0x165) = 0;
  }
  *(int *)(param_2 + 0x15) = iVar2;
LAB_03869590:
  *(undefined1 *)(param_1 + 0x164) = 0;
  (**(code **)(*param_2 + 0x58))(param_2);
  *(undefined1 *)((long)param_2 + 0x165) = 1;
  return;
}

