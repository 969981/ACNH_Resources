
uint FUN_02206b60(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  local_34 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar2 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 1;
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 2;
  uVar2 = (uint)(param_1 == (uVar2 & 0xffff));
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 3;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 4;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 5;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 6;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 7;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 8;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  local_34 = 9;
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  pcStack_40 = "HarvestPlazaPlace";
  local_48 = puVar1;
  uVar3 = FUN_02196ed0(&local_34,&local_48);
  if (param_1 == (uVar3 & 0xffff)) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

