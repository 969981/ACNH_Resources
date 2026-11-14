
byte FUN_01db307c(long param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  void *__ptr;
  
  if ((1 < *(int *)(param_1 + 8) - 1U) &&
     ((*(int *)(param_1 + 8) != 0 || ((*(byte *)(param_1 + 0xc0) >> 2 & 1) != 0)))) {
    return 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x38))();
    *(long *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  __ptr = *(void **)(param_1 + 0x78);
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    lVar6 = *(long *)(*(long *)(DAT_04c88f78 + 0x1d0) + 0x50);
    uVar1 = *(uint *)(lVar6 + 0x10);
    uVar7 = (ulong)uVar1;
    if (1 < uVar1) {
      uVar7 = 0;
    }
    lVar6 = *(long *)(lVar6 + uVar7 * 8);
    if (0 < *(int *)(lVar6 + 0x18)) {
      lVar6 = **(long **)(lVar6 + 8);
      bVar2 = lVar6 != 0;
      if (lVar6 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 6;
        **(long **)(param_1 + 0xb8) = lVar6;
      }
      FUN_03ebb160(param_1,uVar4);
      bVar5 = 1;
      goto LAB_01db3190;
    }
  }
  bVar5 = 0;
  bVar2 = false;
LAB_01db3190:
  return bVar5 | bVar2;
}

