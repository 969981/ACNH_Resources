
bool FUN_01f09524(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  if ((uVar1 & 1) != 0) {
    if ((*(int *)((long)param_1 + 0x77f4) != 0x3c) && ((int)param_1[0xef6] != 0x3c)) {
      return *(int *)((long)param_1 + 0x77f4) != 0x3d && (int)param_1[0xef6] != 0x3d;
    }
  }
  return false;
}

