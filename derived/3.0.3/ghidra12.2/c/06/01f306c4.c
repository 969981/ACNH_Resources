
void FUN_01f306c4(long param_1)

{
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x77f0) = *(undefined4 *)(param_1 + 0x77b0);
  local_20 = local_20 + 0x10;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x80;
  pcStack_18 = "PlayerBirthdayPinata";
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_20,0,0,PTR_DAT_04bb32e0);
  return;
}

