
void FUN_01781e50(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  puVar6 = PTR_DAT_04bbe300;
  puVar5 = PTR_DAT_04bbe2f8;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    uVar12 = *(uint *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x54) = 4;
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01781f44;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01781f44:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)((long)param_1 + 0x704);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01782024;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01782024:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)((long)param_1 + 0xadc);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01782104;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01782104:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0x15c);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_017821e8;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017821e8:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0x15d);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_017822d8;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017822d8:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)((long)param_1 + 0xae4);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_017823c8;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017823c8:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)((long)param_1 + 0xaec);
    if ((uVar12 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_017824b8;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017824b8:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_01781e50(plVar11);
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0x15e);
    if ((uVar12 == 0) || (lVar10 = *(long *)puVar3, lVar10 == 0)) {
      return;
    }
    param_1 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                        ((ulong)(uVar12 >> 0x11) & 0x7ff8));
    if (((param_1 == (long *)0x0) || ((*(uint *)(param_1 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(param_1 + 0x46) != uVar12)) {
      param_1 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar7 = (**(code **)(*plVar11 + 0x60))();
      if (iVar7 < 0x11) {
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_017825b0;
        uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_017825b0:
      uVar12 = 0;
    }
    if (param_1 == (long *)0x0) {
      return;
    }
    lVar10 = param_1[0x2a];
    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
      *(undefined **)puVar5 = puVar1;
      __cxa_guard_release(puVar6);
    }
    uVar9 = (**(code **)(*param_1 + 0x20))(param_1,puVar5);
    uVar2 = 0;
    if ((int)lVar10 == 1) {
      uVar2 = uVar12;
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
  } while( true );
}

