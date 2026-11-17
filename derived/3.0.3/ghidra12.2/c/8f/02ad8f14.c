
void FUN_02ad8f14(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bc47b0 + 0x10;
  *param_1 = &PTR_FUN_04a9f4b8;
  param_1[1] = puVar1;
  (**(code **)(DAT_05613e28 + 0x18))(&DAT_05613e28);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = (char *)DAT_05613e30;
  pcStack_58 = "Player00";
  local_60 = puVar1;
  local_50 = puVar1;
  FUN_02ad2970(param_1 + 2,&local_50,&local_60,0);
  (**(code **)(DAT_05613e28 + 0x18))(&DAT_05613e28);
  pcStack_58 = "Player01";
  pcStack_48 = (char *)DAT_05613e30;
  local_60 = puVar1;
  local_50 = puVar1;
  FUN_02ad2970(param_1 + 0x144,&local_50,&local_60,0);
  FUN_02ad94d8(param_1 + 0x286,&DAT_05613e28,&local_50);
  pcStack_48 = "Bridge";
  local_50 = puVar1;
  FUN_02ad4154(param_1 + 0x78f,&DAT_05613e28,&local_50);
  pcStack_48 = "Slope";
  local_50 = puVar1;
  FUN_02ad2970(param_1 + 0x12e2,&DAT_05613e28,&local_50,0);
  param_1[0x12e2] = PTR_DAT_04bc47b8 + 0x10;
  pcStack_48 = "Facility";
  local_50 = puVar1;
  FUN_02ad4e04(param_1 + 0x1424,&DAT_05613e28,&local_50);
  param_1[0x2845] = PTR_DAT_04bc47c0 + 0x10;
  (**(code **)(DAT_05613e28 + 0x18))(&DAT_05613e28);
  pcStack_58 = "WherearenPlayerWall";
  pcStack_48 = (char *)DAT_05613e30;
  local_60 = puVar1;
  local_50 = puVar1;
  FUN_02ad2970(param_1 + 0x2846,&local_50,&local_60,0);
  (**(code **)(DAT_05613e28 + 0x18))(&DAT_05613e28);
  pcStack_58 = "WherearenNpcWall";
  pcStack_48 = (char *)DAT_05613e30;
  local_60 = puVar1;
  local_50 = puVar1;
  FUN_02ad2970(param_1 + 0x2988,&local_50,&local_60,0);
  return;
}

