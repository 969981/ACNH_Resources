
void FUN_013b9b10(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  pbVar1 = (byte *)(param_1 + 0x300);
  if ((*pbVar1 >> 1 & 1) == 0) {
    *pbVar1 = *pbVar1 | 2;
    local_4 = 1;
    local_8 = 0;
    FUN_013b7618(param_1,&local_4,&local_8);
    if ((char)local_8 != '\0') {
      uVar2 = FUN_013b77f4(param_1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_013b795c(param_1);
    }
    if (*(int *)(param_1 + 0x280) != 0) {
      FUN_03ebb160(param_1 + 0x278,0);
    }
  }
  return;
}

