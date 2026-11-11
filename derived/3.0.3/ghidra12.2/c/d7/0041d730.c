
void FUN_0041d730(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_04bd2ca0;
  puVar1 = PTR_DAT_04bd2a48;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar1 + 0x10);
  lVar3 = FUN_00187df4(4);
  param_1[3] = (long)(PTR_DAT_04bd2a58 + 0x10);
  plVar4 = (long *)FUN_00185a6c(0x20);
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((long)plVar4 + 0xc) = 1;
    puVar1 = PTR_DAT_04bd2ca8;
    plVar4[2] = lVar3;
    *plVar4 = (long)(puVar1 + 0x10);
  }
  param_1[4] = (long)plVar4;
  lVar3 = FUN_00185a6c(8);
  if (lVar3 != 0) {
    FUN_0040d108(lVar3);
  }
  param_1[5] = lVar3;
  *(undefined4 *)(param_1 + 6) = 0x10;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_CO-4_6_11-Release");
  FUN_0019c050();
  **(undefined4 **)(param_1[4] + 0x10) = 0;
  return;
}

