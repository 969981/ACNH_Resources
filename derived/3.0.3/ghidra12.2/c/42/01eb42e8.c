
bool FUN_01eb42e8(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x4b8))();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)((long)param_1 + 0x77f4) != 0x3e && (int)param_1[0xef6] != 0x3e;
  }
  return bVar1;
}

