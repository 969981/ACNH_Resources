
void FUN_032d8f84(long param_1)

{
  long local_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_28 = *(long *)(param_1 + 8);
  local_20 = PTR_DAT_04bc8e78 + 0x10;
  puStack_18 = PTR_DAT_04bb2da0;
  if (*(undefined **)(local_28 + 0xd8) != (undefined *)0x0) {
    puStack_18 = *(undefined **)(local_28 + 0xd8);
  }
  FUN_032d70a8(&local_28,&local_20);
  return;
}

