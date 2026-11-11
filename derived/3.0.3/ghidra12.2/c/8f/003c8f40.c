
bool FUN_003c8f40(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((char)param_1[3] == '\0') {
    return false;
  }
  lVar2 = *param_1;
  uVar1 = FUN_003c9188(lVar2);
  return *(int *)(lVar2 + (uVar1 & 0xffffffff)) == 0x54415746;
}

