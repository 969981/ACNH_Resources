
void FUN_02ad67cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_04a9f498;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bbc5d8 + 0x10;
  param_1[0xc3] = puVar1;
  param_1[0xbe] = puVar2;
  param_1[0xb5] = puVar1;
  param_1[0xb0] = puVar2;
  param_1[0xa7] = puVar1;
  param_1[0xa2] = puVar2;
  param_1[0x99] = puVar1;
  param_1[0x94] = puVar2;
  param_1[0x8b] = puVar1;
  param_1[0x86] = puVar2;
  param_1[0x7d] = puVar1;
  param_1[0x78] = puVar2;
  param_1[0x6f] = puVar1;
  param_1[0x6a] = puVar2;
  param_1[0x61] = puVar1;
  param_1[0x5c] = puVar2;
  param_1[0x53] = puVar1;
  param_1[0x4e] = puVar2;
  param_1[0x45] = puVar1;
  param_1[0x40] = puVar2;
  param_1[0x37] = puVar1;
  param_1[0x32] = puVar2;
  param_1[0x29] = puVar1;
  param_1[0x24] = puVar2;
  param_1[0x1b] = puVar1;
  param_1[0x16] = puVar2;
  param_1[0xd] = puVar1;
  puVar1 = PTR_DAT_04bb2698;
  param_1[8] = puVar2;
  lVar3 = *(long *)puVar1;
  param_1[3] = puVar2;
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02ad68a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

