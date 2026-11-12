
undefined * FUN_00996914(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  puVar2 = (undefined *)
           FUN_009a7850(*(undefined8 *)PTR_DAT_04bb4820,*(undefined4 *)(param_1 + 0x2a0),
                        param_1 + 0x2a4);
  if (puVar2 == (undefined *)0x0) {
    if (((DAT_04cff880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cff880), iVar1 != 0)) {
      local_28 = 0;
      local_58 = PTR_DAT_04bb2020 + 0x10;
      pcStack_50 = "CreatureShow";
      pcStack_40 = "CreatureShow";
      puStack_30 = &DAT_0407ebb1;
      local_48 = local_58;
      local_38 = local_58;
      FUN_0099c14c(&DAT_04cff780,&local_58,0);
      FUN_001001d0(FUN_0099c370,&DAT_04cff780,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_04cff880);
      puVar2 = &DAT_04cff780;
    }
    else {
      puVar2 = &DAT_04cff780;
    }
  }
  return puVar2;
}

