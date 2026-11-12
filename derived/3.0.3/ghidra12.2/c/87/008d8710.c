
undefined8 FUN_008d8710(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *__s;
  long *plVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  int local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined8 local_80;
  uint *local_78;
  uint local_64;
  
  if (*(uint *)(param_1 + 0x31804) < 7 &&
      (1 << (ulong)(*(uint *)(param_1 + 0x31804) & 0x1f) & 0x74U) != 0) {
    *(undefined4 *)(param_1 + 0x315d4) = 0;
  }
  *(undefined4 *)(param_1 + 0x31804) = 0;
  *(undefined2 *)(param_1 + 0x317ea) = 0x100;
  uVar11 = 0;
  if ((param_2 & 1) == 0) {
    uVar11 = 0x24;
  }
  if ((*(int *)(param_1 + 0x410) != 0x21) && (iVar5 = *(int *)(param_1 + 0x31080), 0 < iVar5)) {
    __s = *(undefined8 **)(param_1 + 0x30780);
    *(undefined4 *)(param_1 + 0x307f4) = 0;
    *(undefined2 *)(param_1 + 0x37fac) = 0x101;
    if (__s == &DAT_0407ebb1) {
LAB_008d87f8:
      puVar12 = *(undefined4 **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar5 - 1) * 8);
    }
    else {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x30788) < 1) {
        iVar5 = *(int *)(param_1 + 0x30788) + -1;
      }
      memset(__s,0,(long)iVar5);
      *(undefined1 *)((long)__s + (long)iVar5) = 0;
      iVar5 = *(int *)(param_1 + 0x31080);
      if (0 < iVar5) goto LAB_008d87f8;
      puVar12 = (undefined4 *)(param_1 + 0x410);
    }
    FUN_03ebb160(param_1 + 0x408,*puVar12);
    *(undefined1 *)(param_1 + 0x37fac) = 0;
    *(undefined4 *)(param_1 + 0x30954) = uVar11;
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return 1;
  }
  uVar16 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar16 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar16)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_008d88cc;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008d88cc:
    uVar16 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return 1;
  }
  lVar13 = plVar14[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3278);
  uVar2 = 0;
  if ((int)lVar13 == 1) {
    uVar2 = uVar16;
  }
  if ((uVar8 & 1) == 0) {
    return 1;
  }
  if (uVar2 == 0) {
    return 1;
  }
  FUN_008d8e34(param_1,1);
  local_98 = *(undefined8 *)(param_1 + 0x2a8);
  local_90 = *(undefined4 *)(param_1 + 0x2b0);
  puVar12 = (undefined4 *)FUN_0252d9bc(0);
  puVar4 = PTR_DAT_04bb3238;
  if (puVar12 != (undefined4 *)0x0) {
    local_90 = puVar12[2];
    local_98 = CONCAT44((float)puVar12[1] + 0.1,*puVar12);
  }
  plVar7 = (long *)plVar14[0x51];
  local_80 = &local_98;
  local_88 = &PTR_FUN_04926ac8;
  puVar1 = (uint *)(plVar14 + 0x4f);
  if (plVar7 == plVar14 + 0x50) {
    uVar16 = *(uint *)PTR_DAT_04bb3238;
    puVar17 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    puVar17 = (uint *)(plVar7 + -1);
    do {
      uVar8 = (*(code *)*local_88)(&local_88,puVar17);
      if ((uVar8 & 1) != 0) goto LAB_008d89d0;
      plVar7 = (long *)plVar7[1];
      puVar17 = (uint *)(plVar7 + -1);
    } while (puVar17 != puVar1);
    puVar17 = (uint *)PTR_DAT_04bb3238;
LAB_008d89d0:
    uVar16 = *puVar17;
    puVar17 = (uint *)PTR_DAT_04bb3238;
  }
  PTR_DAT_04bb3238 = (undefined *)puVar17;
  if (uVar16 != 0) {
    lVar13 = plVar14[0x51];
    local_88 = &PTR_FUN_04926af0;
    puVar15 = (uint *)(lVar13 + -8);
    if (puVar15 == puVar1) {
      puVar15 = puVar17;
    }
    else {
      do {
        uVar8 = (*(code *)*local_88)(&local_88,puVar15);
        if ((uVar8 & 1) != 0) goto LAB_008d8b4c;
        lVar13 = *(long *)(lVar13 + 8);
        puVar15 = (uint *)(lVar13 + -8);
      } while (puVar15 != puVar1);
      puVar15 = puVar17;
    }
LAB_008d8b4c:
    if ((*puVar15 != 0) || (lVar13 = *(long *)puVar3, lVar13 == 0)) goto LAB_008d8cc0;
    plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                        ((ulong)(uVar16 >> 0x11) & 0x7ff8));
    if ((plVar14 == (long *)0x0) ||
       (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar16)))) {
      plVar14 = (long *)0x0;
    }
    if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar16 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_008d8bf0;
        uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008d8bf0:
      uVar16 = 0;
    }
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0x2a];
      uVar2 = *(uint *)(plVar14 + 0x49);
      if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32b0);
      }
      uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb32a8);
      if (((((int)lVar13 == 1) && ((uVar6 & uVar16) != 0)) && ((uVar2 >> 4 & 1) != 0)) &&
         (uVar8 = FUN_00906834(plVar14), (uVar8 & 1) != 0)) {
        plVar14[0x58] = 0x1400000001;
      }
    }
    goto LAB_008d8cc0;
  }
  lVar13 = plVar14[0x51];
  local_64 = *(uint *)puVar4;
  local_80 = (undefined8 *)(param_1 + 0x30708);
  local_88 = &PTR_FUN_04926aa0;
  local_78 = &local_64;
  puVar15 = (uint *)(lVar13 + -8);
  if (puVar15 != puVar1) {
    do {
      uVar8 = (*(code *)*local_88)(&local_88,puVar15);
      if ((uVar8 & 1) != 0) goto LAB_008d8aac;
      lVar13 = *(long *)(lVar13 + 8);
      puVar15 = (uint *)(lVar13 + -8);
    } while (puVar15 != puVar1);
    puVar15 = puVar17;
LAB_008d8aac:
    local_64 = *puVar15;
  }
  if ((local_64 == 0) || (lVar13 = *(long *)puVar3, lVar13 == 0)) goto LAB_008d8cc0;
  plVar7 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + (ulong)(local_64 >> 0x14) * 8);
  if ((plVar7 == (long *)0x0) ||
     (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != local_64)))) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar9 + 0x60))();
    if (iVar5 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_008d8be8;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008d8be8:
    uVar16 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar13 = plVar7[0x2a];
    uVar2 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32b0);
    }
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32a8);
    if (((((int)lVar13 == 1) && ((uVar6 & uVar16) != 0)) && ((uVar2 >> 4 & 1) != 0)) &&
       ((*(int *)((long)plVar7 + 0x15c) == 0x45 && (*(char *)((long)plVar7 + 0x2cc) != '\0')))) {
      local_9c = FUN_008f89b0(plVar14,&local_64);
      if ((((local_9c != 0) &&
           ((FUN_00711b7c(&local_88,&local_9c,0), local_88 != (undefined **)0x0 &&
            ((char)local_80 != '\0')))) && (local_80._1_1_ != '\0')) && (local_80._2_1_ != '\0')) {
        FUN_00906bd4();
      }
      uVar8 = FUN_03eaf030(&local_98,plVar7 + 0x4f,0);
      if ((uVar8 & 1) == 0) {
        FUN_00906bd4(plVar7);
      }
    }
  }
LAB_008d8cc0:
  bVar10 = *(byte *)(param_1 + 0x309b8);
  *(undefined1 *)(param_1 + 0x37fc0) = 1;
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  *(undefined1 *)(param_1 + 0x37fc0) = 0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(undefined4 *)(param_1 + 0x3080c) = 0;
  *(byte *)(param_1 + 0x309b8) = bVar10;
  *(undefined1 *)(param_1 + 0x31767) = 1;
  FUN_03ebb160(param_1 + 0x408,0x1a);
  return 1;
}

