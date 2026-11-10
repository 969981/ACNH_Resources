
void FUN_002c509c(long param_1,long param_2)

{
  short sVar1;
  undefined *local_40 [3];
  short local_28;
  
  local_40[0] = PTR_DAT_04bccf70 + 0x10;
  sVar1 = *(short *)(param_1 + 0x5c8);
  FUN_0021f5a0(local_40,*(undefined4 *)(param_1 + 0x5cc));
  local_28 = *(short *)PTR_DAT_04bce1e0;
  if ((ushort)(sVar1 + 1U) <= *(ushort *)PTR_DAT_04bce1e8) {
    local_28 = sVar1 + 1;
  }
  if (param_2 != 0) {
    FUN_0021f54c(param_2,local_40);
  }
  FUN_0021f584(local_40);
  return;
}

