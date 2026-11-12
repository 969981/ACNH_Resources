
void FUN_0084a40c(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if ((plVar2 == (long *)0x0) || (plVar2[0x227] == 0)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2b0);
  FUN_038501b0((float)uVar1,plVar2[0x227],0);
  lVar3 = plVar2[0x227];
  if (*(char *)(lVar3 + 0x2c0) != '\0') {
    *(undefined1 *)(lVar3 + 0x2c0) = 0;
    FUN_03855b20(lVar3 + 0xc0,0);
  }
  FUN_0384f8c0(lVar3,&DAT_04cdc5b8,0,0);
                    /* WARNING: Could not recover jumptable at 0x0084a49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x120))(plVar2,&DAT_04cdc5b8,uVar1,0);
  return;
}

