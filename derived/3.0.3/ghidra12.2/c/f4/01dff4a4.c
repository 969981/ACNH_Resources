
undefined8 FUN_01dff4a4(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (*(char *)(param_1 + 0x108) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x109) == '\0') {
    return 0;
  }
  uVar2 = FUN_01d77c78(param_2);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_01d77c78(param_2);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    return 0;
  }
  bVar1 = FUN_01e06398(DAT_0538adc8,(long)param_2 + 0xd,param_2);
  *(byte *)((long)param_2 + 0xc) = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_01d77c78(param_2);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(param_2 + 1)) {
  case 0:
    uVar5 = *(uint *)((long)param_2 + 4);
    uVar7 = *(uint *)(param_1 + 0x170);
    if (uVar7 == uVar5 || (uVar7 < uVar5 || (int)uVar7 < (int)uVar5)) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x178);
    break;
  case 1:
    uVar5 = *(uint *)((long)param_2 + 4);
    uVar7 = *(uint *)(param_1 + 0x180);
    if (uVar7 == uVar5 || (uVar7 < uVar5 || (int)uVar7 < (int)uVar5)) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x188);
    break;
  case 2:
    lVar3 = *(long *)(param_1 + 0x1b8);
    uVar5 = *(uint *)((long)param_2 + 4);
    uVar7 = *(uint *)(param_1 + 0x1b0);
    if (lVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    if ((int)uVar7 <= (int)uVar5) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
      return 0;
    }
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x250);
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_2 + 4);
    uVar7 = *(uint *)(param_1 + 0x248);
    goto LAB_01dff5ec;
  case 4:
    lVar3 = *(long *)(param_1 + 0x208);
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_2 + 4);
    uVar7 = *(uint *)(param_1 + 0x200);
LAB_01dff5ec:
    if (uVar7 <= uVar5) {
      uVar5 = 0;
    }
    break;
  default:
    goto LAB_01dff4c0;
  }
  if (*(long *)(lVar3 + (long)(int)uVar5 * 8) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x2a8);
    uVar6 = *param_2;
    *(undefined8 *)((long)puVar4 + 7) = *(undefined8 *)((long)param_2 + 7);
    *puVar4 = uVar6;
    *(undefined1 *)(*(long *)(param_1 + 0x2a8) + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x2d0) = 0x14;
    nn::os::LockMutex((MutexType *)(param_1 + 0x658));
    FUN_03ebb160(param_1 + 8,2);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
    return 1;
  }
LAB_01dff4c0:
  return 0;
}

