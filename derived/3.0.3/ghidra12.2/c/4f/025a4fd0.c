
void FUN_025a4fd0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined1 local_98 [88];
  undefined1 local_40 [16];
  PosixTime aPStack_18 [8];
  
  FUN_02602d90();
  puVar1 = PTR_DAT_04bb2020;
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 != 0) {
    plVar8 = *(long **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      plVar8 = (long *)*plVar8;
    }
    else if ((plVar8 == (long *)0x0) || (plVar8 = (long *)plVar8[0x26], plVar8 == (long *)0x0))
    goto LAB_025a50ec;
    lVar7 = (**(code **)(*plVar8 + 0x38))();
    if (lVar7 != 0) {
      local_98._8_8_ = "ShopLevel";
      local_98._0_8_ = puVar1 + 0x10;
      iVar4 = FUN_02b5a6c0();
      if (*(long *)(param_1 + 8) == 0) {
        local_40._0_4_ = 2;
      }
      else {
        local_40._0_4_ = iVar4;
        FUN_02605660(*(long *)(param_1 + 8),local_98,(long)iVar4);
        local_98._8_8_ = "OfficeLevel";
        local_40._0_4_ = 2;
        if (*(long *)(param_1 + 8) != 0) {
          local_98._0_8_ = puVar1 + 0x10;
          FUN_02605660(*(long *)(param_1 + 8),local_98,2);
        }
      }
      local_98._8_8_ = "MuseumLevel";
      local_98._0_8_ = puVar1 + 0x10;
      local_40._0_4_ = FUN_02b5a890();
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),local_98,(long)(int)local_40._0_4_);
      }
      local_98._8_8_ = "TailorLevel";
      local_98._0_8_ = puVar1 + 0x10;
      local_40._0_4_ = FUN_02b5abe0();
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),local_98,(long)(int)local_40._0_4_);
      }
    }
  }
LAB_025a50ec:
  local_40 = FUN_026837a0();
  if (local_40._0_8_ != 0 || local_40._8_8_ != 0) {
    local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffffff00);
    local_98._0_16_ = local_40;
    nn::account::GetUserExistence((bool *)&local_a8,(Uid *)local_98);
    if ((char)local_a8 != '\0') {
      cVar3 = FUN_006b7b00(local_40);
      bVar2 = cVar3 == '\x01';
      goto LAB_025a5134;
    }
  }
  bVar2 = false;
LAB_025a5134:
  local_98._0_8_ = puVar1 + 0x10;
  local_98._8_8_ = "IsBackUpSetting";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),local_98,bVar2);
  }
  if ((bVar2 != false) &&
     (uVar5 = FUN_02641630(*(undefined8 *)(*(long *)PTR_DAT_04bb2268 + 0x28),aPStack_18),
     (uVar5 & 1) != 0)) {
    uVar6 = nn::time::ToCalendarTimeInUtc(aPStack_18);
    FUN_0071b954(local_98,"%04d-%02d-%02d %02d:%02d:%02d",(int)(short)uVar6,
                 ((int)uVar6 << 8) >> 0x18,(int)uVar6 >> 0x18,(int)((ulong)uVar6 >> 8) >> 0x18,
                 (int)((ulong)uVar6 >> 0x10) >> 0x18,(int)((ulong)uVar6 >> 0x18) >> 0x18);
    local_40._8_8_ = "backup_created_at";
    local_40._0_8_ = puVar1 + 0x10;
    (**(code **)(local_98._0_8_ + 0x18))(local_98);
    pcStack_a0 = (char *)local_98._8_8_;
    if (*(long *)(param_1 + 8) != 0) {
      local_a8 = puVar1 + 0x10;
      FUN_02605980(*(long *)(param_1 + 8),local_40,&local_a8);
    }
  }
  return;
}

