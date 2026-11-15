
void FUN_020b1e80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **local_c8;
  undefined **ppuStack_c0;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  if (DAT_054541a4 != '\0') {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
      local_48 = 0;
      local_70 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_38 = 0;
      local_60 = 0;
      local_80 = puVar1;
      puStack_78 = puVar2;
      local_68 = puVar2;
      local_58 = puVar1;
      puStack_50 = puVar2;
      local_40 = puVar2;
      FUN_0125f884(&local_58,&local_80);
      local_98 = (int)local_48;
      if ((int)local_70 <= (int)local_48) {
        local_98 = (int)local_70;
      }
      iStack_94 = local_48._4_4_;
      if (local_70._4_4_ <= local_48._4_4_) {
        iStack_94 = local_70._4_4_;
      }
      local_88 = (int)local_38;
      if ((int)local_38 <= (int)local_70) {
        local_88 = (int)local_70;
      }
      iStack_84 = local_38._4_4_;
      if (local_38._4_4_ <= local_70._4_4_) {
        iStack_84 = local_70._4_4_;
      }
      if ((int)local_60 <= local_98) {
        local_98 = (int)local_60;
      }
      if (local_60._4_4_ <= iStack_94) {
        iStack_94 = local_60._4_4_;
      }
      ppuStack_c0 = &local_a8;
      if (local_88 <= (int)local_60) {
        local_88 = (int)local_60;
      }
      local_c8 = &PTR_FUN_04a73300;
      if (iStack_84 <= local_60._4_4_) {
        iStack_84 = local_60._4_4_;
      }
      if (*(int *)(param_1 + 0xb88) != 0) {
        lVar4 = (long)*(int *)(param_1 + 0xb88) << 3;
        puVar3 = *(undefined8 **)(param_1 + 0xb90);
        local_a8 = puVar1;
        puStack_a0 = puVar2;
        local_90 = puVar2;
        do {
          (*(code *)*local_c8)(&local_c8,*puVar3);
          lVar4 = lVar4 + -8;
          puVar3 = puVar3 + 1;
        } while (lVar4 != 0);
      }
    }
    DAT_054541a4 = '\0';
  }
  return;
}

