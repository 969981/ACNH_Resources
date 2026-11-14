
void FUN_017814e0(float param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  
  puVar7 = PTR_DAT_04bbe300;
  puVar6 = PTR_DAT_04bbe2f8;
  puVar5 = PTR_DAT_04bb5ce0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    iVar10 = (int)((1.0 - param_1) * (float)*(int *)(*(long *)puVar5 + 0xd20));
    if (iVar10 < *(int *)((long)param_2 + 0x29c)) {
      *(int *)((long)param_2 + 0x29c) = iVar10;
    }
    uVar13 = *(uint *)(param_2 + 0xe0);
    *(undefined4 *)(param_2 + 0x54) = 2;
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0178160c;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0178160c:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)((long)param_2 + 0x704);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_017816f8;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017816f8:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)((long)param_2 + 0xadc);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_017817ec;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017817ec:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)(param_2 + 0x15c);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_017818dc;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017818dc:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)(param_2 + 0x15d);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_017819cc;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017819cc:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)((long)param_2 + 0xae4);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01781abc;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01781abc:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)((long)param_2 + 0xaec);
    if ((uVar13 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01781bac;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01781bac:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(puVar7);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          FUN_017814e0(param_1,plVar12);
        }
      }
    }
    uVar13 = *(uint *)(param_2 + 0x15e);
    if ((uVar13 == 0) || (lVar11 = *(long *)puVar3, lVar11 == 0)) {
      return;
    }
    param_2 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                        ((ulong)(uVar13 >> 0x11) & 0x7ff8));
    if (((param_2 == (long *)0x0) || ((*(uint *)(param_2 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(param_2 + 0x46) != uVar13)) {
      param_2 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar11 = *(long *)puVar3;
      iVar10 = (**(code **)(*plVar12 + 0x60))();
      if (iVar10 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01781ca0;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01781ca0:
      uVar13 = 0;
    }
    if (param_2 == (long *)0x0) {
      return;
    }
    lVar11 = param_2[0x2a];
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
      *(undefined **)puVar6 = puVar1;
      __cxa_guard_release(puVar7);
    }
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2,puVar6);
    uVar2 = 0;
    if ((int)lVar11 == 1) {
      uVar2 = uVar13;
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
  } while( true );
}

