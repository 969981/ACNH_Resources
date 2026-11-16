
void FUN_027af560(undefined8 param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_30;
  undefined8 *puStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  uVar1 = *param_3;
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar2 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar3 * 4) == 0) {
        if (uVar1 == (uint)uVar3) goto LAB_027af5c8;
        goto LAB_027af5e8;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar3);
  }
  if (uVar1 == 0xffffffff) {
LAB_027af5c8:
                    /* WARNING: Could not recover jumptable at 0x027af5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x38))();
    return;
  }
LAB_027af5e8:
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "STR_MailAddress";
  if (*param_3 < 0x2b) {
    puStack_28 = (undefined8 *)(&PTR_s_NoUsed_04a91150)[*param_3];
  }
  else {
    puStack_28 = &DAT_0407ebb1;
  }
  local_20 = local_30;
  FUN_006f50a0(param_2,&local_20,&local_30,0);
  return;
}

