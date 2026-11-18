
undefined8 FUN_0327eaa4(long *param_1,long param_2)

{
  undefined8 uVar1;
  short sVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  undefined2 local_22;
  
  uVar1 = DAT_05ae78f0;
  local_48 = 0;
  uStack_40 = 0x3f80000000000000;
  local_38 = 0x4170000000000000;
  local_30 = 0;
  local_24 = 0;
  local_22 = 0;
  local_2c = 0x101070707020101;
  FUN_038f94d0(&local_48,*(undefined8 *)(param_2 + 8));
  sVar2 = FUN_038fbe40(uVar1,&local_48,0);
  *param_1 = (long)sVar2;
  return 1;
}

