
long FUN_032c3370(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((((uVar1 & 1) == 0) && ((uVar1 >> 9 & 1) != 0)) &&
     (uVar2 = FUN_032c1eb0(param_1,param_3,1), (uVar2 & 1) != 0)) {
    param_2 = param_1;
  }
  else if (((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) == 0)) {
    uVar2 = FUN_032c1eb0(param_1,param_3,0);
    lVar3 = param_1;
    if ((uVar2 & 1) == 0) {
      lVar3 = param_2;
    }
    for (lVar4 = *(long *)(param_1 + 8); param_2 = lVar3, lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x18)) {
      lVar3 = FUN_032c3370(lVar4,lVar3,param_3);
    }
  }
  return param_2;
}

