
void FUN_0084a4b0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar3 = *(long *)(param_1 + 0x70) + 0x278;
  }
  if (*(int *)(lVar3 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 0x17c) * 0x23;
    *(int *)(param_1 + 0x2f0) = iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2f0);
  }
  if ((((iVar1 < 0) || (*(int *)(param_1 + 0x2f0) = iVar1 + -1, iVar1 + -1 != 0)) ||
      (plVar2 = *(long **)(param_1 + 0x60), plVar2 == (long *)0x0)) || (plVar2[0x227] == 0)) {
    return;
  }
  FUN_038501b0(0x41200000,plVar2[0x227],0);
  lVar3 = plVar2[0x227];
  if (*(char *)(lVar3 + 0x2c0) != '\0') {
    *(undefined1 *)(lVar3 + 0x2c0) = 0;
    FUN_03855b20(lVar3 + 0xc0,0);
  }
  FUN_0384f8c0(lVar3,&DAT_04cdc5b8,0,0);
                    /* WARNING: Could not recover jumptable at 0x0084a58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x120))(plVar2,&DAT_04cdc5b8,10,0);
  return;
}

