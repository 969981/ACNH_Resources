
long FUN_0017bccc(long param_1,int param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int local_24;
  
  local_24 = 0;
  if (param_1 != 0) {
    if (param_5 == (undefined4 *)0x0) {
      return -1;
    }
    if (param_3 == 0) {
      return -1;
    }
    lVar3 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298);
    if (lVar3 == 0) {
      return -1;
    }
    uVar1 = nnsslConnectionWrite(lVar3,param_3,&local_24);
    uVar2 = nnResultIsFailure(uVar1);
    if ((uVar2 & 1) == 0) {
      return (long)local_24;
    }
    uVar2 = FUN_0017b2a8(uVar1,0x1987b);
    uVar1 = 0x51;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x17;
    }
    *param_5 = uVar1;
  }
  return -1;
}

