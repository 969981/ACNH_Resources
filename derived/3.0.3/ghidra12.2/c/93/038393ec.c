
undefined8 FUN_038393ec(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = *param_2;
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
    lVar6 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar7;
    lVar4 = *(long *)(lVar5 + 0x10);
  }
  FUN_0383e430(lVar4 + 0x1488);
  FUN_03834380(lVar4 + 0x1530);
  if (*(int *)(lVar4 + 0x1498) == 0 && *(int *)(lVar4 + 0x1540) == 0) {
    FUN_03838390(lVar4 + 8);
  }
  __ptr = *(void **)(lVar5 + 0x10);
  if ((((*(byte *)((long)__ptr + 8) & 1) == 0) || ((*(byte *)((long)__ptr + 0x1490) & 1) == 0)) ||
     ((*(byte *)((long)__ptr + 0x1538) & 1) == 0)) goto LAB_03839578;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar7 = 1;
LAB_038394c0:
    FUN_03f457c4((long)__ptr + 0x1568);
    FUN_03f457c4((long)__ptr + 0x1508);
    if (*(long *)((long)__ptr + 0x14e0) != 0) {
      FUN_03f45838((long)__ptr + 0x14d0);
    }
    if (*(long *)((long)__ptr + 0x14c8) != 0) {
      *(undefined8 *)((long)__ptr + 0x14c8) = 0;
      FUN_03831710(DAT_05ae2a30 + 0xe8);
    }
    FUN_03f457c4((long)__ptr + 0x14d0);
    FUN_03f457c4((long)__ptr + 0x1428);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar7 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar4;
    __ptr = *(void **)(lVar5 + 0x10);
    if (__ptr != (void *)0x0) goto LAB_038394c0;
  }
  if (lVar7 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar7;
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
LAB_03839578:
  if (lVar6 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar6;
  }
  return 1;
}

