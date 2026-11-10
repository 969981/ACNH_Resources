
undefined8 FUN_001671bc(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_14;
  
  if (param_4 < 0) {
    return 0xfffffe0b;
  }
  if (param_3 == 0) {
    local_14 = param_4 - *(int *)(param_1 + 0x95c);
    if (local_14 == 0) {
      return 0;
    }
    piVar3 = (int *)(param_1 + 0x95c);
    lVar1 = param_1 + 0x950;
    lVar2 = param_1 + 0x958;
  }
  else {
    lVar2 = FUN_0016bd5c(param_1,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)(lVar2 + 0xcc);
    local_14 = param_4 - *piVar3;
    if (local_14 == 0) {
      return 0;
    }
    lVar1 = lVar2 + 0xc0;
    lVar2 = lVar2 + 200;
  }
  if (local_14 < 0) {
    uVar4 = FUN_00168560(piVar3,lVar1,lVar2,&local_14);
    return uVar4;
  }
  uVar4 = FUN_00168650();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (local_14 < 1) {
    return 0;
  }
  uVar4 = FUN_001717d8(param_1,0,param_3);
  return uVar4;
}

