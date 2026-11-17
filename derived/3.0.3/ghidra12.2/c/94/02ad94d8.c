
void FUN_02ad94d8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  long lStack_38;
  
  *param_1 = &PTR_FUN_04a9f4d8;
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_38 = param_2[1];
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Npc00";
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_02ad2970(param_1 + 1,&local_40,&local_50,0);
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_38 = param_2[1];
  pcStack_48 = "Npc01";
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_02ad2970(param_1 + 0x143,&local_40,&local_50,0);
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_38 = param_2[1];
  pcStack_48 = "Npc02";
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_02ad2970(param_1 + 0x285,&local_40,&local_50,0);
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_38 = param_2[1];
  pcStack_48 = "Npc03";
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_02ad2970(param_1 + 0x3c7,&local_40,&local_50,0);
  return;
}

