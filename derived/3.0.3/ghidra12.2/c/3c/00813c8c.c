
void FUN_00813c8c(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88 [4];
  int local_64;
  
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = "daily_playtime";
  FUN_0260140c(local_88,&local_b8);
  plVar1 = DAT_04ccc690;
  puVar2 = PTR_DAT_04bc3270;
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  local_88[0] = PTR_DAT_04bc3270 + 0x10;
  plVar6 = *(long **)(param_1 + 0x68);
  local_a0 = 0;
  local_98 = 0x1000007b2;
  local_90 = 0x400000001;
  if ((char)DAT_04ccc690[1] == '\0') {
    lVar5 = nn::oe::GetProgramTotalActiveTime();
    *plVar1 = lVar5;
    *(undefined1 *)(plVar1 + 1) = 1;
  }
  else {
    lVar5 = *DAT_04ccc690;
  }
  plVar3 = DAT_04ccc690;
  plVar1 = *(long **)(param_1 + 0x78);
  local_b0 = (char *)((lVar5 - *plVar6) / 1000000000 + *(long *)(param_1 + 0x70));
  if ((char)DAT_04ccc690[1] == '\0') {
    lVar5 = nn::oe::GetProgramTotalActiveTime();
    *plVar3 = lVar5;
    *(undefined1 *)(plVar3 + 1) = 1;
  }
  else {
    lVar5 = *DAT_04ccc690;
  }
  plVar3 = DAT_04ccc690;
  plVar6 = *(long **)(param_1 + 0x88);
  local_a8 = (lVar5 - *plVar1) / 1000000000 + *(long *)(param_1 + 0x80);
  if ((char)DAT_04ccc690[1] == '\0') {
    lVar5 = nn::oe::GetProgramTotalActiveTime();
    *plVar3 = lVar5;
    *(undefined1 *)(plVar3 + 1) = 1;
  }
  else {
    lVar5 = *DAT_04ccc690;
  }
  local_a0 = (lVar5 - *plVar6) / 1000000000 + *(long *)(param_1 + 0x90);
  local_98 = *param_3;
  local_90 = param_3[1];
  local_b8._0_4_ = param_2;
  FUN_025951c0(local_88,&local_b8);
  local_88[0] = puVar2 + 0x10;
  iVar4 = FUN_02595490(local_88);
  if (((iVar4 == -1) ||
      (local_b8._0_4_ = (**(code **)(local_88[0] + 0x20))(local_88), 0xc < (int)local_b8)) &&
     (local_64 == 0)) {
    local_64 = 1;
  }
  FUN_02601530(local_88);
  return;
}

