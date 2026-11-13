
void FUN_01300510(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *__s;
  undefined *puVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bbc5d8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_0498da20;
  puVar1 = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = 0;
  param_1[5] = puVar2;
  FUN_0131a4e4(param_1 + 7);
  __s = param_1 + 0x13f;
  memset(__s,0,0x930);
  puVar3 = PTR_DAT_04bbc298 + 0x10;
  plVar4 = param_1 + 0x19;
  *plVar4 = (long)puVar3;
  param_1[0x1a] = puVar1;
  param_1[0x1b] = puVar2;
  param_1[0x1c] = 0;
  param_1[0x1d] = puVar2;
  param_1[0x1e] = 0;
  memset(param_1 + 0x1f,0,0x900);
  FUN_01302100(plVar4);
  param_1[0x13f] = puVar3;
  param_1[0x140] = puVar1;
  param_1[0x142] = 0;
  param_1[0x141] = puVar2;
  param_1[0x144] = 0;
  param_1[0x143] = puVar2;
  memset(param_1 + 0x145,0,0x900);
  FUN_01302100(__s);
  param_1[0x267] = 0;
  puVar2 = PTR_DAT_04bbc240;
  param_1[0x269] = 0;
  puVar1 = PTR_DAT_04bb2e18;
  param_1[0x26c] = 0;
  param_1[0x265] = &PTR_LAB_0498da40;
  param_1[0x26a] = &PTR_LAB_0498da40;
  param_1[0x26e] = 0;
  param_1[0x266] = puVar2 + 0x10;
  param_1[0x26b] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0x268] = puVar1 + 0x10;
  param_1[0x26d] = puVar1 + 0x10;
  FUN_0131af5c(param_1 + 7);
  FUN_01302100(plVar4);
  FUN_01302100(__s);
  *(undefined4 *)(param_1 + 0x267) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  return;
}

