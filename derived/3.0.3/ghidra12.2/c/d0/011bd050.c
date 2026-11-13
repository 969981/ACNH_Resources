
void FUN_011bd050(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 == (long *)0x0) || (plVar2[0x227] == 0)) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_038501b0(0,plVar2[0x227],uVar1);
  lVar3 = plVar2[0x227];
  if (*(char *)(lVar3 + 0x2c0) != '\0') {
    *(undefined1 *)(lVar3 + 0x2c0) = 0;
    FUN_03855b20(lVar3 + 0xc0,0);
  }
  FUN_0384f8c0(lVar3,param_1 + 0x68,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x011bd0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x120))(plVar2,param_1 + 0x68,0,uVar1);
  return;
}

