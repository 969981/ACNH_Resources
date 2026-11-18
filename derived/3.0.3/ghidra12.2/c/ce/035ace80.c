
undefined8 FUN_035ace80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x18))((long *)(param_1 + 0x20));
  iVar1 = FUN_006bd550(*(undefined8 *)(param_1 + 0x28),0);
  uVar2 = 1;
  if (iVar1 < -0x304414e) {
    if (iVar1 < -0x334c5a57) {
      if (iVar1 == -0x66e21be2) {
        return 1;
      }
      if (iVar1 == -0x5b347dbe) {
        return 1;
      }
      iVar3 = -0x340050af;
    }
    else if (iVar1 < -0x23505a26) {
      if (iVar1 == -0x334c5a57) {
        return 1;
      }
      iVar3 = -0x2e1cd929;
    }
    else {
      if (iVar1 == -0x23505a26) {
        return 1;
      }
      iVar3 = -0xe4b9955;
    }
  }
  else if (iVar1 < 0x5cbd8817) {
    if (iVar1 < 0x1467c85d) {
      if (iVar1 == -0x304414e) {
        return 1;
      }
      iVar3 = 0xe02cb53;
    }
    else {
      if (iVar1 == 0x1467c85d) {
        return 1;
      }
      iVar3 = 0x4b87b2f9;
    }
  }
  else if (iVar1 < 0x698dcfdc) {
    if (iVar1 == 0x5cbd8817) {
      return 1;
    }
    iVar3 = 0x610129f4;
  }
  else {
    if (iVar1 == 0x698dcfdc) {
      return 1;
    }
    iVar3 = 0x761cf0e6;
  }
  if ((iVar1 != iVar3) &&
     ((((DAT_05574040 == 0 || ((*(byte *)(DAT_05574040 + 0x453) >> 2 & 1) == 0)) ||
       (DAT_04c93e08 == 0)) ||
      ((*(int *)(DAT_04c93e08 + 0x468) != *(int *)(param_1 + 200) &&
       (*(int *)(DAT_04c93e08 + 0x46c) != *(int *)(param_1 + 200))))))) {
    uVar2 = 0;
  }
  return uVar2;
}

