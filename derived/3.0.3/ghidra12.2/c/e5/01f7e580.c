
void FUN_01f7e580(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  uint uVar10;
  undefined *local_78;
  char *pcStack_70;
  undefined **local_68;
  undefined **ppuStack_60;
  uint *local_58;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01f7e648;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01f7e648:
    uVar10 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
  puVar3 = PTR_DAT_04bb3238;
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  plVar5 = (long *)plVar8[0x51];
  local_58 = &local_44;
  ppuStack_60 = &local_78;
  local_68 = &PTR_FUN_04926aa0;
  uVar10 = *(uint *)PTR_DAT_04bb3238;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "CameraArea:2";
  local_44 = uVar10;
  if (plVar5 != plVar8 + 0x50) {
    puVar9 = (uint *)(plVar5 + -1);
    do {
      uVar6 = (*(code *)*local_68)(&local_68,puVar9);
      if ((uVar6 & 1) != 0) goto LAB_01f7e72c;
      plVar5 = (long *)plVar5[1];
      puVar9 = (uint *)(plVar5 + -1);
    } while (puVar9 != (uint *)(plVar8 + 0x4f));
    puVar9 = (uint *)puVar3;
LAB_01f7e72c:
    uVar10 = *puVar9;
  }
  if (uVar10 == 0) {
    return;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar10 >> 0x14) * 8);
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01f7e7c8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f7e7c8;
    }
  }
  uVar10 = 0;
joined_r0x01f7e7c8:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32b0);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32a8);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      if ((param_2 & 1) == 0) {
        FUN_00906588(plVar8);
      }
      else {
        FUN_00906410();
      }
    }
  }
  return;
}

