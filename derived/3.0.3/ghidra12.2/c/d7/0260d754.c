
void FUN_0260d754(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_a0;
  undefined1 local_98;
  undefined *local_90;
  long local_88;
  int local_6c;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  puVar3 = PTR_DAT_04bc3578;
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025a4e00(&local_90);
  uVar1 = *(undefined1 *)(param_2 + 0x2c);
  local_a0 = param_3;
  local_98 = uVar1;
  FUN_02602bc0(&local_90,4);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsTimeSly";
  if (local_88 != 0) {
    FUN_026054d0(local_88,&local_50,uVar1);
  }
  FUN_025a52e0(&local_90,&local_a0);
  FUN_025a58e8(&local_90);
  FUN_025a5b70(&local_90);
  local_90 = PTR_DAT_04bc32e0 + 0x10;
  iVar4 = FUN_025a5f9c(&local_90);
  if (iVar4 == -1) {
LAB_0260d86c:
    if (local_6c == 0) {
      local_6c = 1;
    }
  }
  else {
    iVar4 = (**(code **)(local_90 + 0x20))(&local_90);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
    if (0xc < iVar4) goto LAB_0260d86c;
  }
  FUN_02601530(&local_90);
  lVar7 = *(long *)puVar2;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)puVar3,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025aa1e8(&local_90);
  FUN_02602bc0(&local_90,5);
  local_90 = PTR_DAT_04bc32f0 + 0x10;
  iVar4 = FUN_025ab978(&local_90);
  if (iVar4 != -1) {
    iVar4 = (**(code **)(local_90 + 0x20))(&local_90);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
    if (iVar4 < 0xd) goto LAB_0260d918;
  }
  if (local_6c == 0) {
    local_6c = 1;
  }
LAB_0260d918:
  FUN_02601530(&local_90);
  lVar7 = *(long *)puVar2;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)puVar3,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_02606fc0(*(undefined8 *)(param_1 + 0x98));
  lVar7 = *(long *)puVar2;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  if ((*(long *)(lVar7 + 0x60) != lVar5) &&
     (uVar6 = FUN_03f26e50(*(undefined8 *)puVar3,5000), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  return;
}

