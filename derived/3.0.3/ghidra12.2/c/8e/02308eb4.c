
void FUN_02308eb4(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_70;
  char *pcStack_68;
  int local_4c;
  char *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar2 = PTR_DAT_04bb2020;
  if (*param_1 == '\0') {
    return;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "act_break_tool";
  FUN_025ffac8(&local_70,&local_48,param_1 + 1);
  puVar1 = PTR_DAT_04bc3200 + 0x10;
  local_48 = param_1 + 4;
  local_70 = puVar1;
  FUN_02588b90(&local_70,&local_48);
  local_70 = puVar1;
  iVar3 = FUN_02588d70(&local_70);
  if (iVar3 != -1) {
    iVar3 = (**(code **)(local_70 + 0x20))(&local_70);
    local_48 = (char *)CONCAT44(local_48._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_02308f68;
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
LAB_02308f68:
  FUN_02601530(&local_70);
  if (*param_1 != '\0') {
    local_70 = puVar2 + 0x10;
    pcStack_68 = "BreakToolCount";
    local_34[0] = param_1[1];
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    uVar4 = FUN_02582fe0(local_34);
    local_48 = (char *)CONCAT44(local_48._4_4_,uVar4);
    FUN_021294b0(&local_70,1,&local_48);
  }
  return;
}

