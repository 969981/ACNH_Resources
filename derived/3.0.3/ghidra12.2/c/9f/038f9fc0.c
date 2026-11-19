
void FUN_038f9fc0(long param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined8 uVar14;
  long *plVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  void *pvVar20;
  short sVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  long lVar25;
  ulong uVar26;
  size_t __size;
  int *piVar27;
  long *plVar28;
  ulong uVar29;
  undefined1 auStack_a0 [64];
  
  puVar4 = PTR_DAT_04bb2698;
  lVar25 = *(long *)PTR_DAT_04bb2698;
  if (lVar25 == 0) {
    plVar8 = malloc(0x260);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar25 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x260,8);
  }
  puVar5 = PTR_DAT_04bd1150;
  plVar8[6] = 0;
  plVar8[7] = (long)(plVar8 + 8);
  plVar8[0x49] = 0x200;
  plVar8[0x4a] = 0;
  *(undefined1 *)(plVar8 + 0x4b) = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)"untitled";
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = 0;
  lVar25 = *(long *)puVar4;
  *(long **)(param_1 + 0x28) = plVar8;
  if (lVar25 == 0) {
    plVar8 = malloc(0x78);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar25 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x78,8);
  }
  puVar5 = PTR_DAT_04bd11b8;
  plVar8[6] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x10001;
  *(undefined1 *)((long)plVar8 + 0x3c) = 0;
  plVar8[0xe] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = 0;
  *(long **)(param_1 + 0x318) = plVar8;
  FUN_0390d714(plVar8,1,param_2);
  plVar8 = *(long **)(param_1 + 0x318);
  piVar27 = (int *)(*(long *)plVar8[1] + (ulong)*(ushort *)(plVar8[1] + 10) * 0xc);
  *(undefined1 *)(piVar27 + 2) = 6;
  *piVar27 = 0x10;
  uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,6);
  *(ushort *)((long)piVar27 + 6) = (ushort)uVar6 & 0xff;
  uVar6 = ((uVar6 & 0xff) * 4 + (int)plVar8[6]) - 1 & (uVar6 & 0xff) * -4;
  *(uint *)(plVar8 + 6) = uVar6;
  *(short *)(piVar27 + 1) = (short)uVar6;
  *(uint *)(plVar8 + 6) = (int)plVar8[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
  *(short *)(plVar8[1] + 10) = *(short *)(plVar8[1] + 10) + 1;
  if (*(short *)(plVar8[1] + 10) == *(short *)(plVar8[1] + 8)) {
    *(uint *)(plVar8 + 6) = (int)plVar8[6] + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(*(undefined8 *)(param_1 + 0x318),param_2,1,1);
  lVar25 = DAT_05ae77d8;
  puVar1 = (uint *)(DAT_05ae77d8 + 0xe8);
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(short *)(param_1 + 0x5c0) = (short)uVar6;
  uVar6 = *(int *)(lVar25 + 0xf4) - (uVar6 & 0xffff);
  uVar29 = (ulong)uVar6;
  if ((int)uVar6 < 1) {
LAB_038fa2dc:
    uVar6 = *(uint *)(param_1 + 0x5a0);
  }
  else {
    lVar7 = *(long *)puVar4;
    uVar26 = uVar29 << 7 | 8;
    if (lVar7 == 0) {
      puVar10 = malloc(uVar26);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar7 + 8);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa2dc;
      }
      puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar26,8);
    }
    if (puVar10 == (ulong *)0x0) goto LAB_038fa2dc;
    puVar11 = puVar10 + 1;
    *puVar10 = uVar29;
    puVar10 = puVar11;
    do {
      *puVar10 = 0;
      puVar10[1] = 0x3f80000000000000;
      puVar10[2] = 0x4170000000000000;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined8 *)((long)puVar10 + 0x1c) = 0x101070707020101;
      *(undefined1 *)((long)puVar10 + 0x24) = 0;
      *(undefined2 *)((long)puVar10 + 0x26) = 0;
      *(undefined1 *)(puVar10 + 0xf) = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10 = puVar10 + 0x10;
    } while (puVar10 != puVar11 + uVar29 * 0x10);
    *(uint *)(param_1 + 0x5a0) = uVar6;
    *(ulong **)(param_1 + 0x5a8) = puVar11;
  }
  if (0 < (int)uVar6) {
    lVar7 = *(long *)puVar4;
    if (lVar7 == 0) {
      pvVar13 = malloc((long)(int)(uVar6 << 3));
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar7 + 8);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa350;
      }
      pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(int)(uVar6 << 3),8);
    }
    if (pvVar13 != (void *)0x0) {
      *(void **)(param_1 + 0x5b8) = pvVar13;
      *(undefined4 *)(param_1 + 0x5b0) = 0;
      *(uint *)(param_1 + 0x5b4) = uVar6;
    }
  }
LAB_038fa350:
  puVar1 = (uint *)(lVar25 + 0xec);
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(short *)(param_1 + 0x3da) = (short)uVar6;
  uVar6 = *(int *)(lVar25 + 0xf0) - (uVar6 & 0xffff);
  uVar6 = uVar6 | uVar6 >> 1;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
  if (uVar6 < 2) {
LAB_038fa47c:
    uVar6 = *(uint *)(param_1 + 0x368);
    puVar12 = *(undefined4 **)(param_1 + 0x370);
    if (uVar6 == 0) goto LAB_038fa52c;
LAB_038fa488:
    uVar17 = 0;
    do {
      uVar29 = (ulong)uVar17;
      uVar17 = uVar17 + 1;
      puVar19 = (undefined4 *)((long)puVar12 + ((long)(uVar29 << 0x20) >> 0x1b));
      *puVar19 = 0xffffffff;
      puVar19[1] = 0;
      *(undefined8 *)(puVar19 + 2) = 0;
      *(undefined8 *)(puVar19 + 4) = 0;
      *(undefined8 *)(puVar19 + 6) = 0;
    } while (uVar6 != uVar17);
    iVar18 = *(int *)(param_1 + 0x368);
    if (0 < iVar18) {
      lVar25 = *(long *)puVar4;
      if (lVar25 == 0) {
        pvVar13 = malloc((long)iVar18 << 3);
      }
      else {
        plVar8 = param_2;
        if (param_2 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar25 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_038fa52c;
        }
        pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar18 << 3,8);
      }
      if (pvVar13 != (void *)0x0) {
        *(void **)(param_1 + 0x380) = pvVar13;
        *(undefined4 *)(param_1 + 0x378) = 0;
        *(int *)(param_1 + 0x37c) = iVar18;
      }
      goto LAB_038fa52c;
    }
LAB_038fa620:
    uVar6 = *(uint *)(param_1 + 0x398);
  }
  else {
    lVar25 = *(long *)puVar4;
    uVar6 = uVar6 >> 1;
    uVar29 = (ulong)uVar6;
    if (lVar25 == 0) {
      puVar12 = malloc(uVar29 << 5);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar25 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa47c;
      }
      puVar12 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar29 << 5,8);
    }
    if (puVar12 == (undefined4 *)0x0) goto LAB_038fa47c;
    uVar26 = uVar29 & 3;
    puVar19 = puVar12;
    if ((uVar6 & 3) != 0) {
      do {
        *puVar19 = 0;
        uVar26 = uVar26 - 1;
        puVar19[1] = 0;
        puVar19 = puVar19 + 8;
      } while (uVar26 != 0);
    }
    if (2 < (uVar29 - 1 & 0x7ffffffffffffff)) {
      do {
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[8] = 0;
        puVar19[9] = 0;
        puVar19[0x10] = 0;
        puVar19[0x11] = 0;
        puVar19[0x18] = 0;
        puVar19[0x19] = 0;
        puVar19 = puVar19 + 0x20;
      } while (puVar19 != puVar12 + uVar29 * 8);
    }
    *(uint *)(param_1 + 0x368) = uVar6;
    *(undefined4 **)(param_1 + 0x370) = puVar12;
    if (uVar6 != 0) goto LAB_038fa488;
LAB_038fa52c:
    iVar18 = *(int *)(param_1 + 0x368);
    if (iVar18 < 1) goto LAB_038fa620;
    lVar25 = *(long *)puVar4;
    if (lVar25 == 0) {
      pvVar13 = malloc((long)iVar18 << 3);
joined_r0x038fa808:
      if (pvVar13 != (void *)0x0) {
        *(void **)(param_1 + 0x390) = pvVar13;
        *(undefined4 *)(param_1 + 0x388) = 0;
        *(int *)(param_1 + 0x38c) = iVar18;
      }
    }
    else {
      plVar8 = param_2;
      if (param_2 != (long *)0x0) {
LAB_038fa57c:
        pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar18 << 3,8);
        goto joined_r0x038fa808;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar25 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_038fa57c;
    }
    iVar23 = *(int *)(param_1 + 0x368);
    iVar18 = iVar23 + 3;
    if (-1 < iVar23) {
      iVar18 = iVar23;
    }
    if (iVar23 < 4) goto LAB_038fa620;
    lVar25 = *(long *)puVar4;
    uVar6 = iVar18 >> 2;
    if (lVar25 == 0) {
      pvVar13 = malloc((ulong)uVar6 << 3);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar25 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa620;
      }
      pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar6 << 3,8);
    }
    if (pvVar13 == (void *)0x0) goto LAB_038fa620;
    *(uint *)(param_1 + 0x398) = uVar6;
    *(void **)(param_1 + 0x3a0) = pvVar13;
  }
  if (0 < (int)uVar6) {
    lVar25 = *(long *)puVar4;
    if (lVar25 == 0) {
      pvVar13 = malloc((long)(int)(uVar6 << 3));
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar25 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa6a4;
      }
      pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(int)(uVar6 << 3),8);
    }
    if (pvVar13 != (void *)0x0) {
      *(void **)(param_1 + 0x3b0) = pvVar13;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      *(uint *)(param_1 + 0x3ac) = uVar6;
    }
  }
LAB_038fa6a4:
  uVar6 = *(uint *)(param_1 + 0x398);
  if (uVar6 == 0) {
LAB_038fa82c:
    uVar6 = *(uint *)(param_1 + 0x3b8);
  }
  else {
    iVar18 = *(int *)(param_1 + 0x3a8);
    if (iVar18 < *(int *)(param_1 + 0x3ac)) {
      lVar25 = *(long *)(param_1 + 0x3a0);
      uVar17 = 0;
      do {
        if (iVar18 < *(int *)(param_1 + 0x3ac)) {
          *(long *)(*(long *)(param_1 + 0x3b0) + (long)iVar18 * 8) =
               lVar25 + ((long)((ulong)uVar17 << 0x20) >> 0x1d);
          iVar18 = *(int *)(param_1 + 0x3a8) + 1;
          *(int *)(param_1 + 0x3a8) = iVar18;
        }
        uVar17 = uVar17 + 1;
      } while (uVar6 != uVar17);
      uVar6 = *(uint *)(param_1 + 0x398);
    }
    if ((int)uVar6 < 1) goto LAB_038fa82c;
    uVar29 = (ulong)uVar6;
    lVar25 = *(long *)puVar4;
    __size = (uVar29 + (ulong)uVar6 * 0x10) * 8;
    if (lVar25 == 0) {
      pvVar13 = malloc(__size);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar25 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa82c;
      }
      pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
    }
    if (pvVar13 == (void *)0x0) goto LAB_038fa82c;
    uVar26 = uVar29 & 7;
    pvVar20 = pvVar13;
    if ((uVar6 & 7) != 0) {
      do {
        *(undefined4 *)((long)pvVar20 + 0x80) = 0;
        pvVar20 = (void *)((long)pvVar20 + 0x88);
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    if (6 < (uVar29 - 1 & 0x1fffffffffffffff)) {
      do {
        *(undefined4 *)((long)pvVar20 + 0x80) = 0;
        *(undefined4 *)((long)pvVar20 + 0x108) = 0;
        *(undefined4 *)((long)pvVar20 + 400) = 0;
        *(undefined4 *)((long)pvVar20 + 0x218) = 0;
        *(undefined4 *)((long)pvVar20 + 0x2a0) = 0;
        *(undefined4 *)((long)pvVar20 + 0x328) = 0;
        *(undefined4 *)((long)pvVar20 + 0x3b0) = 0;
        *(undefined4 *)((long)pvVar20 + 0x438) = 0;
        pvVar20 = (void *)((long)pvVar20 + 0x440);
      } while (pvVar20 != (void *)((long)pvVar13 + uVar29 * 0x88));
    }
    *(uint *)(param_1 + 0x3b8) = uVar6;
    *(void **)(param_1 + 0x3c0) = pvVar13;
  }
  if (0 < (int)uVar6) {
    lVar25 = *(long *)puVar4;
    if (lVar25 == 0) {
      pvVar13 = malloc((long)(int)(uVar6 << 3));
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar25 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_038fa8a0;
      }
      pvVar13 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(int)(uVar6 << 3),8);
    }
    if (pvVar13 != (void *)0x0) {
      *(void **)(param_1 + 0x3d0) = pvVar13;
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(uint *)(param_1 + 0x3cc) = uVar6;
    }
  }
LAB_038fa8a0:
  iVar18 = *(int *)(param_1 + 0x3b8);
  if (iVar18 != 0) {
    lVar25 = *(long *)(param_1 + 0x3c0);
    sVar21 = 0;
    iVar23 = 0;
    do {
      lVar7 = lVar25 + (long)iVar23 * 0x88;
      *(undefined4 *)(lVar7 + 0x80) = 0;
      *(short *)(lVar7 + 0x84) = sVar21;
      if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
        *(long *)(*(long *)(param_1 + 0x3d0) + (long)*(int *)(param_1 + 0x3c8) * 8) =
             lVar25 + (long)iVar23 * 0x88;
        *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
      }
      iVar23 = iVar23 + 1;
      sVar21 = sVar21 + 1;
    } while (iVar18 != iVar23);
  }
  lVar25 = *(long *)puVar4;
  if (lVar25 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar25 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_038fa970;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
LAB_038fa970:
  plVar8[6] = 0;
  plVar28 = plVar8 + 1;
  *plVar28 = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  bVar16 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0;
  *plVar8 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar15 = param_2;
  if (param_2 == (long *)0x0) {
    lVar7 = *(long *)puVar4;
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar15 = (long *)(lVar7 + 8);
    if (lVar25 != 0) {
      plVar15 = (long *)(lVar25 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    bVar16 = *(byte *)(plVar8 + 5) & 0xfe;
  }
  plVar8[6] = 0;
  *plVar28 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  puVar5 = PTR_DAT_04bd0fa8;
  uVar14 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(plVar8 + 5) = bVar16;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  FUN_038f8590(uVar14,plVar8,plVar15,0x400000,4,1);
  lVar25 = plVar8[3];
  *(undefined2 *)((long)plVar8 + 0x2a) = 1;
  iVar18 = 0;
  if (plVar8[4] != 0) {
    iVar18 = (int)*plVar28 - *(int *)(plVar8[4] + 0x10);
  }
  if (lVar25 == 0) {
    uVar22 = 0;
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined4 *)(lVar25 + 0x104);
    uVar22 = 0x400000;
  }
  *(int *)(param_1 + 0xc0) = iVar18;
  *(undefined4 *)(param_1 + 0xc4) = uVar24;
  *(undefined4 *)(param_1 + 0xd8) = uVar22;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(long *)(param_1 + 200) = lVar25;
  *(long **)(param_1 + 0xd0) = plVar8;
  iVar18 = *(int *)(param_1 + 0x398);
  *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0xfc | *(int *)(param_1 + 0x304) != 0;
  if (param_2 == (long *)0x0) {
    lVar7 = *(long *)puVar4;
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar7 + 8);
    if (lVar25 != 0) {
      param_2 = (long *)(lVar25 + 0xa8);
    }
    param_2 = (long *)*param_2;
  }
  plVar8 = (long *)(param_1 + 0x5d8);
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined2 *)(param_1 + 0x5fa) = 0;
  *(byte *)(param_1 + 0x5f8) = *(byte *)(param_1 + 0x5f8) & 0xfe;
  if (iVar18 == 0) {
    uVar29 = 0;
    *(undefined2 *)(param_1 + 0x5fa) = 0x10;
    lVar25 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar5,param_1 + 0x5d0,param_2,(long)iVar18 << 5,0x10,0x10);
    *(undefined2 *)(param_1 + 0x5fa) = 0x10;
    if (*(long *)(param_1 + 0x5f0) == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = (ulong)(uint)(*(int *)plVar8 - *(int *)(*(long *)(param_1 + 0x5f0) + 0x10));
    }
    lVar25 = 0;
    if (*(long *)(param_1 + 0x5e8) != 0) {
      lVar25 = (*DAT_04c61fd0)();
    }
  }
  memset((void *)(lVar25 + uVar29),0,*(size_t *)(param_1 + 0x5e0));
  lVar25 = *(long *)(param_1 + 0x5e8);
  if (*(long *)(param_1 + 0x5f0) == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = *(int *)plVar8 - *(int *)(*(long *)(param_1 + 0x5f0) + 0x10);
  }
  if (lVar25 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x5e0);
    uVar6 = (**(code **)PTR_DAT_04bcf030)(lVar25);
    if ((uVar6 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar25,iVar18,uVar14);
    }
  }
  (*DAT_04c62088)(auStack_a0,*(undefined8 *)(DAT_05ae77d8 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_a0);
  if (*(long *)(param_1 + 0x5f0) == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = *plVar8 - *(long *)(*(long *)(param_1 + 0x5f0) + 0x10);
  }
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_a0,*(undefined8 *)(param_1 + 0x5e8),lVar25,*(undefined8 *)(param_1 + 0x5e0));
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x608,auStack_a0);
  uVar14 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x608);
  *(undefined8 *)(param_1 + 0x638) = uVar14;
  return;
}

