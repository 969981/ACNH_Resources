
bool FUN_03ea9708(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint local_28;
  byte local_24;
  
  local_28 = 0;
  local_24 = 0;
  uVar1 = FUN_03ea9450(param_1,&local_28);
  if ((uVar1 & 1) == 0) {
LAB_03ea9764:
    lVar2 = 0;
  }
  else {
    if (local_24 - 0xc0 < 2) {
      lVar2 = *param_1;
      lVar3 = lVar2 + (ulong)local_28;
      goto LAB_03ea976c;
    }
    if (local_24 != 0xff) goto LAB_03ea9764;
    lVar2 = *param_1;
  }
  lVar3 = 0;
LAB_03ea976c:
  *param_2 = lVar2;
  param_2[1] = lVar3;
  return lVar2 != 0;
}

