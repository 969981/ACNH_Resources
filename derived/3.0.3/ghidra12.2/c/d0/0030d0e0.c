
bool FUN_0030d0e0(long *param_1)

{
  ulong uVar1;
  
  if ((int)param_1[0xc5] != 0) {
    return false;
  }
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1,1);
  if ((uVar1 & 1) == 0) {
    return (*(char *)((long)param_1 + 0x35) != '\0' || *(char *)((long)param_1 + 0x34) != '\0') ||
           ((*(char *)((long)param_1 + 0x33) != '\0' || *(char *)((long)param_1 + 0x32) != '\0') ||
           (*(char *)((long)param_1 + 0x31) != '\0' || (char)param_1[6] != '\0'));
  }
  return false;
}

