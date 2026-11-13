
undefined1 FUN_01035444(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *local_30;
  char *pcStack_28;
  undefined4 local_4;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "ChangeSymbol";
  local_4 = param_2;
  bVar1 = FUN_0279d900(&local_4,&local_30,0);
  **(byte **)(param_1 + 8) = bVar1 & 1;
  return **(undefined1 **)(param_1 + 8);
}

