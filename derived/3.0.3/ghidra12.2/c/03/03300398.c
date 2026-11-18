
bool FUN_03300398(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = param_1 + 0x230;
  bVar2 = lVar5 != param_1 + 0x38;
  if (lVar5 != lVar1 && bVar2) {
    FUN_032e4b30(param_1 + 0x6e8,3,0);
    uVar4 = *(uint *)(param_1 + 0x1050);
    if ((((uVar4 < 10) && ((1 << (ulong)(uVar4 & 0x1f) & 0x30dU) != 0)) &&
        (lVar3 = *(long *)(param_1 + 0x518), lVar3 != 0)) &&
       (*(long *)(lVar3 + 0x20) != lVar3 + 0x38)) {
      FUN_033066f0();
      FUN_032ae1e0(*(long *)(param_1 + 0x518) + 0x540);
      uVar4 = *(uint *)(param_1 + 0x1050);
      *(undefined1 *)(param_1 + 0x16405) = 0;
    }
    if (uVar4 != 1) {
      if ((*(char *)(param_1 + 0x106a) != '\0') ||
         ((*(char *)(param_1 + 0x16408) != '\0' && (*(int *)(param_1 + 0x1568) == 0)))) {
        FUN_0335e5c0(*(undefined8 *)(param_1 + 0x520));
        uVar4 = *(uint *)(param_1 + 0x1050);
      }
      switch(uVar4) {
      case 0:
      case 3:
        break;
      case 2:
        break;
      case 4:
        break;
      case 8:
      case 9:
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x6e0) + 8) != 0) {
      FUN_0332065c();
    }
    FUN_033014cc(param_1);
    lVar3 = *(long *)(param_1 + 0x528);
    if (*(long *)(lVar3 + 0x398) != 0) {
      plVar8 = *(long **)PTR_DAT_04bc9410;
      nn::os::LockMutex((MutexType *)(plVar8 + 5));
      lVar6 = *(long *)(lVar3 + 0x3a8);
      lVar7 = *(long *)(lVar3 + 0x3a0);
      *(undefined8 *)(lVar3 + 0x3a8) = 0;
      *(undefined8 *)(lVar3 + 0x398) = 0;
      *(undefined8 *)(lVar3 + 0x3a0) = 0;
      if ((undefined8 *)*plVar8 == (undefined8 *)(lVar3 + 0x398)) {
        *plVar8 = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar6;
      }
      nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
    }
    lVar6 = DAT_05688e68;
    plVar8 = *(long **)(lVar3 + 0x390);
    if (*plVar8 != 0) {
      lVar3 = plVar8[1];
      lVar7 = plVar8[2];
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      if (*(long **)(lVar6 + 0x560) == plVar8) {
        *(long *)(lVar6 + 0x560) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar7;
      }
    }
    if (((*(long *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
       (plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x80), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x20))();
    }
    *(long *)(param_1 + 0x28) = lVar1;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  return lVar5 != lVar1 && bVar2;
}

