
void FUN_020ef374(undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 local_38;
  char *pcStack_30;
  undefined4 local_24;
  
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "FireworksAroundWater";
  local_24 = param_1;
  FUN_021be8c0(&local_24,&local_38,param_2);
  local_24._0_2_ = CONCAT11((char)param_2,(char)param_1);
  uVar1 = (ulong)local_38 >> 0x30;
  local_38 = (undefined *)CONCAT26((ushort)uVar1 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d1250) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1250,&local_38,&local_24,2,0);
  }
  return;
}

