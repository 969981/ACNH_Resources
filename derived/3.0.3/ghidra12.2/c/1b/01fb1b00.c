
bool FUN_01fb1b00(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(int *)(param_2 + 0x60) == 0) {
    return false;
  }
  if (*(int *)(param_1[1] + 0x750) == 1 && *(char *)(param_2 + 0x70) == '\0') {
    bVar1 = false;
  }
  else if (((*(byte *)((long)param_1 + 0xafb1) & 1) == 0) &&
          (uVar2 = (**(code **)(*param_1 + 0x608))(), (uVar2 & 1) != 0)) {
    bVar1 = *(int *)(param_2 + 0x6c) == 1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

