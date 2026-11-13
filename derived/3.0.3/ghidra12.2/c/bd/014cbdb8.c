
bool FUN_014cbdb8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_014ed7fc(param_1 + 0xb40);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    FUN_014e70e0(param_1 + 0x720,param_1 + 0xb40);
    bVar1 = *(int *)(param_1 + 0x3c0) != 0x16;
    if (bVar1) {
      FUN_03ebb160(param_1 + 0x3b8);
    }
  }
  return bVar1;
}

