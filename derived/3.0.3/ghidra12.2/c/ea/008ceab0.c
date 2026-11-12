
void FUN_008ceab0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  undefined **local_70;
  long local_68;
  uint *puStack_60;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_70 = (undefined **)CONCAT44(local_70._4_4_,0x21);
  if (0 < (int)*(uint *)(param_1 + 0x31080)) {
    puVar10 = *(undefined8 **)(param_1 + 0x31088);
    lVar11 = (ulong)*(uint *)(param_1 + 0x31080) << 3;
    do {
      if (*(int *)*puVar10 == 0x21) goto LAB_008ceb20;
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if (*(int *)(param_1 + 0x410) != 0x21) {
    return;
  }
LAB_008ceb20:
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar5 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar5 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar5)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_008cebcc;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008cebcc:
    uVar5 = 0;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar11 = plVar12[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
  puVar3 = PTR_DAT_04bb3238;
  uVar1 = 0;
  if ((int)lVar11 == 1) {
    uVar1 = uVar5;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  plVar7 = (long *)plVar12[0x51];
  puStack_60 = &local_34;
  local_68 = param_1 + 0x30708;
  local_70 = &PTR_FUN_04926aa0;
  uVar5 = *(uint *)PTR_DAT_04bb3238;
  local_34 = uVar5;
  if (plVar7 != plVar12 + 0x50) {
    puVar13 = (uint *)(plVar7 + -1);
    do {
      uVar8 = (*(code *)*local_70)(&local_70,puVar13);
      if ((uVar8 & 1) != 0) goto LAB_008cec9c;
      plVar7 = (long *)plVar7[1];
      puVar13 = (uint *)(plVar7 + -1);
    } while (puVar13 != (uint *)(plVar12 + 0x4f));
    puVar13 = (uint *)puVar3;
LAB_008cec9c:
    uVar5 = *puVar13;
  }
  local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar5);
  if (uVar5 == 0) {
    return;
  }
  local_34 = FUN_008ce890(param_2);
  if (local_34 == 0) {
    return;
  }
  if ((uint)local_70 == local_34) {
    return;
  }
  uVar5 = FUN_008f89b0(plVar12,&local_70);
  if (uVar5 == 0) {
LAB_008cedc0:
    lVar11 = *(long *)puVar2;
    if (lVar11 != 0) {
      if ((((uint)local_70 == 0) ||
          (plVar7 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)((uint)local_70 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0))
         || (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 ||
             (*(uint *)(plVar7 + 0x46) != (uint)local_70)))) {
        plVar7 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar9 + 0x60))();
        if (iVar4 < 0x11) {
          uVar5 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_008cee5c;
          uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_008cee5c:
        uVar5 = 0;
      }
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[0x2a];
        uVar1 = *(uint *)(plVar7 + 0x49);
        if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32b0);
        }
        uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32a8);
        if (((((int)lVar11 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar1 >> 4 & 1) != 0)) &&
           (uVar8 = FUN_03eaf030(param_2,plVar7 + 0x4f,0), (uVar8 & 1) == 0)) {
          FUN_00906bd4(plVar7);
        }
      }
    }
  }
  else {
    lVar11 = *(long *)puVar2;
    if (lVar11 != 0) {
      plVar7 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8);
      if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar7 + 0x46) != uVar5)) {
        plVar7 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar9 + 0x60))();
        if (iVar4 < 0x11) {
          uVar5 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_008ced64;
          uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_008ced64:
        uVar5 = 0;
      }
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[0x2a];
        uVar1 = *(uint *)(plVar7 + 0x49);
        if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32b0);
        }
        uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32a8);
        if ((((int)lVar11 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
          FUN_00906bd4(plVar7);
        }
      }
      goto LAB_008cedc0;
    }
  }
  uVar5 = FUN_008f8e30(plVar12,param_2,&local_34);
  if ((uVar5 != 0) && (local_34 != uVar5)) {
    lVar11 = *(long *)puVar2;
    if (lVar11 == 0) {
      return;
    }
    plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8);
    if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar12 + 0x46) != uVar5)) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar7 + 0x60))();
      if (iVar4 < 0x11) {
        uVar5 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_008cef7c;
        uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008cef7c:
      uVar5 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x2a];
      uVar1 = *(uint *)(plVar12 + 0x49);
      if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32b0);
      }
      uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32a8);
      if (((((int)lVar11 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar1 >> 4 & 1) != 0)) &&
         (uVar8 = FUN_00906834(plVar12), (uVar8 & 1) != 0)) {
        plVar12[0x58] = 0x1400000001;
      }
    }
  }
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    return;
  }
  if (((local_34 == 0) ||
      (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                           ((ulong)(local_34 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != local_34)))) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto LAB_008cf090;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto LAB_008cf090;
    }
  }
  uVar5 = 0;
LAB_008cf090:
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    uVar1 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32b0);
    }
    uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32a8);
    if (((((int)lVar11 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar1 >> 4 & 1) != 0)) &&
       (uVar8 = FUN_00906834(plVar12), (uVar8 & 1) != 0)) {
      plVar12[0x58] = 0x1400000001;
    }
  }
  return;
}

