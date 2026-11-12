
undefined8
FUN_008da650(long param_1,float *param_2,int param_3,undefined4 param_4,long *param_5,byte param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  long *plVar12;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar4 = *(uint *)(param_1 + 0x410) - 1;
  if (((uVar4 < 0x1d) && ((0x1603c001U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) ||
     ((*(uint *)(param_1 + 0x410) | 2) == 10)) {
    return 0;
  }
  local_70 = *(undefined8 *)(param_1 + 0x2a8);
  local_68 = *(undefined4 *)(param_1 + 0x2b0);
  local_64 = param_4;
  puVar6 = (undefined4 *)FUN_0252d9bc(0);
  if (puVar6 != (undefined4 *)0x0) {
    local_68 = puVar6[2];
    local_70 = CONCAT44((float)puVar6[1] + 0.1,*puVar6);
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) goto LAB_008da93c;
  uVar4 = *(uint *)PTR_DAT_04bb32f8;
  if (((uVar4 == 0) ||
      (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar4)))) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_008da7c0;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008da7c0:
    uVar4 = 0;
  }
  if (plVar12 == (long *)0x0) goto LAB_008da93c;
  lVar9 = plVar12[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
  uVar2 = 0;
  if ((int)lVar9 == 1) {
    uVar2 = uVar4;
  }
  if (((((uVar8 & 1) == 0) || (uVar2 == 0)) ||
      (uVar4 = FUN_008f8e30(plVar12,&local_70,&local_64), uVar4 == 0)) ||
     (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 == 0)) goto LAB_008da93c;
  plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar4)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_008da8c8;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008da8c8:
    uVar4 = 0;
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    uVar2 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32b0);
    }
    uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32a8);
    if (((((int)lVar9 == 1) && ((uVar4 & uVar5) != 0)) && ((uVar2 >> 4 & 1) != 0)) &&
       (uVar8 = FUN_00906834(plVar12), (uVar8 & 1) != 0)) {
      plVar12[0x58] = 0x1400000001;
    }
  }
LAB_008da93c:
  *(undefined1 *)(param_1 + 0x37fbe) = 1;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x410) != -1) {
    iVar3 = *(int *)(param_1 + 0x410);
  }
  FUN_008c3440(param_1,iVar3);
  *(undefined1 *)(param_1 + 0x37fbe) = 0;
  if (param_3 == 0) {
    if (((!NAN(*param_2)) && (!NAN(param_2[1]))) && (!NAN(param_2[2]))) {
      *(float *)(param_1 + 0x307b4) = *param_2;
      *(float *)(param_1 + 0x307b8) = param_2[1];
      *(float *)(param_1 + 0x307bc) = param_2[2];
      *(undefined1 *)(param_1 + 0x37fb4) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x307b0) = param_3;
  }
  pvVar10 = *(void **)(param_1 + 0x306a0);
  (**(code **)(*param_5 + 0x18))(param_5);
  pvVar11 = (void *)param_5[1];
  if (pvVar10 != pvVar11) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar9 = 0;
    do {
      if (*(char *)(param_5[1] + lVar9) == '\0') goto LAB_008daa3c;
      lVar1 = param_5[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_008daa3c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_008daa3c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_008daa3c:
    iVar3 = (int)lVar9;
    if (*(int *)(param_1 + 0x306a8) <= (int)lVar9) {
      iVar3 = *(int *)(param_1 + 0x306a8) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar10 + (long)iVar3) = 0;
  }
  pvVar10 = *(void **)(param_1 + 0x306d8);
  (**(code **)(*param_5 + 0x18))(param_5);
  pvVar11 = (void *)param_5[1];
  if (pvVar10 != pvVar11) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar9 = 0;
    do {
      if (*(char *)(param_5[1] + lVar9) == '\0') goto LAB_008daadc;
      lVar1 = param_5[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_008daadc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_008daadc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_008daadc:
    iVar3 = (int)lVar9;
    if (*(int *)(param_1 + 0x306e0) <= (int)lVar9) {
      iVar3 = *(int *)(param_1 + 0x306e0) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar10 + (long)iVar3) = 0;
  }
  *(byte *)(param_1 + 0x37fb8) = param_6 & 1;
  FUN_03ebb160(param_1 + 0x408,0x21);
  return 1;
}

