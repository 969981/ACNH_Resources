
undefined8 FUN_0016e3ec(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar3 = FUN_0016e544(param_1,param_2,0xfffffe07,"PRIORITY: stream_id == 0");
    return uVar3;
  }
  piVar5 = (int *)(param_2 + 0x10);
  if (*piVar5 == *(int *)(param_2 + 8)) {
    uVar3 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),1,"depend on itself");
    return uVar3;
  }
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    lVar4 = FUN_001726f0(param_1);
    if (lVar4 == 0) {
      uVar1 = *(uint *)(param_2 + 8);
      if (uVar1 == 0) {
        return 0;
      }
      if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
        iVar2 = *(int *)(param_1 + 0x934);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x938);
      }
      if ((int)uVar1 <= iVar2) {
        return 0;
      }
      lVar4 = FUN_0016c73c(param_1,uVar1,0,piVar5,5,0);
      if (lVar4 == 0) {
        return 0xfffffc7b;
      }
      uVar3 = FUN_0016cf28(param_1);
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_0016c5c4(param_1,lVar4,piVar5);
      if ((int)uVar3 < -900) {
        return uVar3;
      }
      uVar3 = FUN_0016cf28(param_1);
      iVar2 = (int)uVar3;
    }
    if (iVar2 < -900) {
      return uVar3;
    }
  }
  if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
     (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
     iVar2 == 0)) {
    return 0;
  }
  return 0xfffffc7a;
}

