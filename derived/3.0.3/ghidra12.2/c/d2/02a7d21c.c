
void FUN_02a7d21c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bc4788;
  *param_1 = &PTR_FUN_04a9c918;
  param_1[0x17] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0xda] = puVar1;
  puVar2 = PTR_DAT_04bbc5d8;
  param_1[0xcc] = puVar1;
  param_1[0xbe] = puVar1;
  param_1[0xb0] = puVar1;
  param_1[0xa2] = puVar1;
  param_1[0x94] = puVar1;
  param_1[0x86] = puVar1;
  param_1[0x78] = puVar1;
  param_1[0x6a] = puVar1;
  param_1[0x5c] = puVar1;
  param_1[0x4e] = puVar1;
  param_1[0x40] = puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x32] = puVar1;
  param_1[0x24] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0xd5] = puVar2;
  param_1[199] = puVar2;
  param_1[0xb9] = puVar2;
  param_1[0xab] = puVar2;
  param_1[0x9d] = puVar2;
  param_1[0x8f] = puVar2;
  param_1[0x81] = puVar2;
  param_1[0x73] = puVar2;
  param_1[0x65] = puVar2;
  param_1[0x57] = puVar2;
  param_1[0x49] = puVar2;
  param_1[0x3b] = puVar2;
  param_1[0x2d] = puVar2;
  param_1[0x1f] = puVar2;
  param_1[0x1a] = puVar2;
  param_1[8] = puVar2;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0xd] = puVar1;
  lVar3 = *(long *)puVar2;
  param_1[3] = puVar1;
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a7d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

