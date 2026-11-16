
void FUN_0260e0d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_80;
  long local_78;
  int local_5c;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb3350;
  local_24 = param_3;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  puVar3 = PTR_DAT_04bc3578;
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "parse_player_activity_flag";
  FUN_026012f4(&local_80,&local_50,&local_24);
  puVar2 = PTR_DAT_04bc3398;
  local_58 = 0;
  local_80 = PTR_DAT_04bc3398 + 0x10;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    if (local_78 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if ((*(long *)(local_78 + 8) != 0) &&
         (lVar5 = FUN_03f28fa0(*(long *)(local_78 + 8),200), lVar5 == 0)) {
        *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
      }
    }
    local_58 = lVar5;
  }
  FUN_025c3880(&local_80,&local_50);
  lVar7 = *(long *)puVar1;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)puVar3,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  local_80 = puVar2 + 0x10;
  iVar4 = FUN_025c3c20(&local_80);
  if (iVar4 != -1) {
    iVar4 = (**(code **)(local_80 + 0x20))(&local_80);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
    if (iVar4 < 0xd) goto LAB_0260e240;
  }
  if (local_5c == 0) {
    local_5c = 1;
  }
LAB_0260e240:
  FUN_02601530(&local_80);
  return;
}

