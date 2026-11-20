
void FUN_03ebe330(long param_1,long *param_2)

{
  size_t __size;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  short *psVar17;
  long lVar18;
  
  *(long *)(param_1 + 0x18) = param_2[2];
  *(long *)(param_1 + 0x30) = param_2[3];
  puVar4 = PTR_DAT_04bb2698;
  uVar1 = *(uint *)((long)param_2 + 0x4c);
  if (0 < (int)uVar1) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar9 = malloc((ulong)uVar1 * 0x98);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03ebe458;
      }
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar1 * 0x98,8);
    }
    if (pvVar9 != (void *)0x0) {
      lVar18 = 0;
      do {
        puVar12 = (undefined8 *)((long)pvVar9 + lVar18);
        lVar18 = lVar18 + 0x98;
        puVar12[0xe] = 0;
        *(undefined1 *)(puVar12 + 0xf) = 0xff;
        *(undefined4 *)((long)puVar12 + 0x7c) = 0;
        *(undefined2 *)((long)puVar12 + 0x7a) = 0;
        *(undefined4 *)(puVar12 + 10) = 0;
        *(undefined8 *)((long)puVar12 + 0x54) = 0;
        *(undefined2 *)((long)puVar12 + 0x5c) = 0;
        puVar12[0x12] = 0;
        puVar12[0x10] = 0xbf800000;
        puVar12[0x11] = 0xbf800000bf800000;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0xffffffffffffffff;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[0xc] = 0xffffffff;
        puVar12[0xd] = 0;
      } while ((ulong)uVar1 * 0x98 != lVar18);
      *(uint *)(param_1 + 0x48) = uVar1;
      *(void **)(param_1 + 0x50) = pvVar9;
    }
  }
LAB_03ebe458:
  uVar1 = *(uint *)(param_2 + 9);
  if (0 < (int)uVar1) {
    lVar18 = *(long *)puVar4;
    __size = (ulong)uVar1 * 0x34 + 8;
    if (lVar18 == 0) {
      puVar10 = malloc(__size);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03ebe528;
      }
      puVar10 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
    }
    if (puVar10 != (ulong *)0x0) {
      puVar11 = puVar10 + 1;
      *puVar10 = (ulong)uVar1;
      puVar10 = puVar11;
      do {
        *(undefined4 *)puVar10 = 0;
        *(undefined8 *)((long)puVar10 + 4) = 0;
        *(undefined8 *)((long)puVar10 + 0xc) = 0x3f800000;
        *(undefined8 *)((long)puVar10 + 0x14) = 0xbf80000000000000;
        *(undefined8 *)((long)puVar10 + 0x1c) = 0xbf800000;
        *(undefined8 *)((long)puVar10 + 0x24) = 0xbf80000000000000;
        *(undefined4 *)((long)puVar10 + 0x2c) = 0xbf800000;
        *(undefined2 *)(puVar10 + 6) = 0;
        *(undefined1 *)((long)puVar10 + 0x32) = 0;
        puVar10 = (ulong *)((long)puVar10 + 0x34);
      } while (puVar10 != (ulong *)((long)puVar11 + (ulong)uVar1 * 0x34));
      *(uint *)(param_1 + 0x58) = uVar1;
      *(ulong **)(param_1 + 0x60) = puVar11;
    }
  }
LAB_03ebe528:
  lVar18 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (lVar18 == 0) {
    pvVar9 = malloc(0xb8);
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0xb8,8);
  }
  FUN_03ec3fb0(pvVar9,(int)param_2[6],(int)param_2[7],*(undefined4 *)((long)param_2 + 0x34),
               *(undefined4 *)((long)param_2 + 0x34),*param_2,*(undefined8 *)(param_1 + 0x18));
  *(void **)(param_1 + 0x98) = pvVar9;
  lVar18 = *(long *)puVar4;
  *(char *)(param_1 + 0xac) = (char)param_2[4];
  *(long *)(param_1 + 0x90) = param_2[5];
  if (lVar18 == 0) {
    puVar12 = malloc(0x98);
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      puVar12 = (undefined8 *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_03ebe610;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x98,8);
  }
LAB_03ebe610:
  puVar12[0xe] = 0;
  puVar12[0x10] = 0xbf800000;
  puVar12[0x11] = 0xbf800000bf800000;
  uVar16 = 0;
  *(undefined1 *)(puVar12 + 0xf) = 0xff;
  *(undefined4 *)((long)puVar12 + 0x7c) = 0;
  *(undefined2 *)((long)puVar12 + 0x7a) = 0;
  *(undefined4 *)(puVar12 + 10) = 0;
  *(undefined2 *)((long)puVar12 + 0x5c) = 0;
  puVar12[4] = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar12 + 0x54) = 0;
  puVar12[5] = 0;
  puVar12[0x12] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[0xc] = 0xffffffff;
  puVar12[0xd] = 0;
  *(undefined8 **)(param_1 + 0x70) = puVar12;
  lVar18 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  uVar1 = *(uint *)(*(long *)(lVar18 + 8) + 0x10);
  if (uVar1 < *(uint *)(lVar18 + 0x38)) {
    uVar16 = *(undefined8 *)(*(long *)(lVar18 + 0x40) + (long)(int)uVar1 * 8);
  }
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 0xf) = 0xff;
  puVar12[0xe] = uVar16;
  *(undefined4 *)((long)puVar12 + 0x7c) = 0;
  *(undefined2 *)((long)puVar12 + 0x7a) = 0;
  *(undefined4 *)(puVar12 + 10) = 0;
  puVar12[9] = 0;
  *(undefined8 *)((long)puVar12 + 0x54) = 0;
  *(undefined2 *)((long)puVar12 + 0x5c) = 0;
  puVar12[4] = 0xffffffffffffffff;
  puVar12[0x12] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  lVar18 = *(long *)puVar4;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[0x10] = 0xbf800000;
  puVar12[0x11] = 0xbf800000bf800000;
  puVar12[0xc] = 0xffffffff;
  puVar12[0xd] = 0;
  if (lVar18 == 0) {
    puVar13 = malloc(0x48);
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar13 = (undefined4 *)0x0;
        goto LAB_03ebe738;
      }
    }
    puVar13 = (undefined4 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x48,8);
  }
LAB_03ebe738:
  *puVar13 = 0;
  lVar18 = *(long *)puVar4;
  *(undefined8 *)(puVar13 + 2) = 0;
  puVar13[6] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  puVar13[0xc] = 0;
  *(undefined8 *)(puVar13 + 0xe) = 0;
  puVar13[0x10] = 0;
  puVar13[10] = 0;
  puVar13[4] = 0;
  *(undefined4 **)(param_1 + 0x40) = puVar13;
  plVar7 = (long *)*param_2;
  if (lVar18 == 0) {
    pvVar9 = malloc(0x800);
    if (pvVar9 != (void *)0x0) goto LAB_03ebe7b8;
LAB_03ebe814:
    lVar18 = *(long *)puVar4;
    if (lVar18 != 0) goto LAB_03ebe81c;
LAB_03ebe8c8:
    pvVar9 = malloc(0x600);
joined_r0x03ebe864:
    if (pvVar9 == (void *)0x0) {
      lVar18 = *(long *)puVar4;
    }
    else {
      lVar18 = 0;
      do {
        puVar12 = (undefined8 *)((long)pvVar9 + lVar18);
        lVar18 = lVar18 + 0x30;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined4 *)(puVar12 + 4) = 0;
        puVar12[5] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      } while (lVar18 != 0x600);
      *(void **)(puVar13 + 8) = pvVar9;
      puVar13[6] = 0x40;
      lVar18 = *(long *)puVar4;
    }
    if (lVar18 == 0) goto LAB_03ebe92c;
    if (plVar7 != (long *)0x0) {
LAB_03ebe90c:
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x600,8);
      goto joined_r0x03ebe934;
    }
LAB_03ebe8e0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar12 = (undefined8 *)(lVar18 + 8);
    if (lVar8 != 0) {
      puVar12 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*puVar12;
    if (plVar7 != (long *)0x0) goto LAB_03ebe90c;
  }
  else {
    plVar14 = plVar7;
    if (plVar7 != (long *)0x0) {
LAB_03ebe7a0:
      pvVar9 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x800,8);
      if (pvVar9 == (void *)0x0) goto LAB_03ebe814;
LAB_03ebe7b8:
      lVar18 = 0;
      do {
        puVar12 = (undefined8 *)((long)pvVar9 + lVar18);
        lVar18 = lVar18 + 0x40;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        puVar12[2] = 0;
        *(undefined2 *)(puVar12 + 3) = 0;
        puVar12[4] = 0;
        *(undefined4 *)(puVar12 + 5) = 0;
        puVar12[6] = 0;
        *(undefined2 *)(puVar12 + 7) = 0;
      } while (lVar18 != 0x800);
      *(void **)(puVar13 + 2) = pvVar9;
      *puVar13 = 0x40;
      lVar18 = *(long *)puVar4;
      if (lVar18 == 0) goto LAB_03ebe8c8;
LAB_03ebe81c:
      plVar14 = plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03ebe824;
LAB_03ebe850:
      pvVar9 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x600,8);
      goto joined_r0x03ebe864;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar8 != 0) {
      plVar14 = (long *)(lVar8 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 != (long *)0x0) goto LAB_03ebe7a0;
    lVar18 = *(long *)puVar4;
    if (lVar18 == 0) goto LAB_03ebe8c8;
LAB_03ebe824:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar8 != 0) {
      plVar14 = (long *)(lVar8 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 != (long *)0x0) goto LAB_03ebe850;
    lVar18 = *(long *)puVar4;
    if (lVar18 != 0) goto LAB_03ebe8e0;
LAB_03ebe92c:
    pvVar9 = malloc(0x600);
joined_r0x03ebe934:
    if (pvVar9 != (void *)0x0) {
      lVar18 = 0;
      do {
        puVar12 = (undefined8 *)((long)pvVar9 + lVar18);
        lVar18 = lVar18 + 0x30;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined4 *)(puVar12 + 4) = 0;
        puVar12[5] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      } while (lVar18 != 0x600);
      *(void **)(puVar13 + 0xe) = pvVar9;
      puVar13[0xc] = 0x40;
    }
  }
  if (-1 < *(short *)(*(long *)(param_1 + 0x90) + 0x20)) {
    lVar18 = *(long *)puVar4;
    if (lVar18 == 0) {
      plVar7 = malloc(0x38);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          goto LAB_03ebe9dc;
        }
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
    }
LAB_03ebe9dc:
    psVar17 = (short *)param_2[8];
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x20);
    plVar7[5] = 0;
    plVar7[6] = 0;
    puVar5 = PTR_DAT_04bd4768;
    *(undefined8 *)((long)plVar7 + 0xc) = 0;
    *(undefined8 *)((long)plVar7 + 0x14) = 0;
    *(undefined8 *)((long)plVar7 + 0x1c) = 0;
    *(undefined4 *)(plVar7 + 1) = uVar2;
    *plVar7 = (long)(puVar5 + 0x10);
    if (psVar17 != (short *)0x0) {
      uVar15 = FUN_03b36f10(psVar17);
      if ((uVar15 & 1) == 0) {
        psVar17 = (short *)0x0;
LAB_03ebea44:
        lVar18 = 0;
      }
      else {
        uVar3 = *(uint *)(psVar17 + 6);
        uVar1 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        if (*psVar17 != 0x5942) {
          uVar1 = uVar3;
        }
        if (uVar1 == 0) goto LAB_03ebea44;
        lVar18 = (long)psVar17 + (ulong)uVar1;
      }
      plVar7[5] = (long)psVar17;
      plVar7[6] = lVar18;
    }
    *(long **)(param_1 + 0x28) = plVar7;
  }
  iVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x168))();
  if (0 < iVar6) {
    lVar18 = *(long *)puVar4;
    if (lVar18 == 0) {
      puVar12 = malloc(0x20);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      puVar12 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
    plVar7 = *(long **)(param_1 + 0x18);
    lVar18 = *param_2;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    (**(code **)(*plVar7 + 0x160))(plVar7,puVar12,lVar18);
    *(undefined8 **)(param_1 + 0xb8) = puVar12;
  }
  lVar18 = *(long *)puVar4;
  if (lVar18 == 0) {
    puVar12 = malloc(0x10);
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
  }
  *puVar12 = 0xffff0000ffff;
  puVar12[1] = 0xffff0000ffff;
  *(undefined8 **)(param_1 + 0x110) = puVar12;
  *(long *)(param_1 + 0x130) = param_2[10];
  *(long *)(param_1 + 0x140) = param_2[0xb];
  iVar6 = (int)param_2[0xc];
  if (iVar6 < 1) goto LAB_03ebecac;
  lVar18 = *(long *)puVar4;
  if (lVar18 == 0) {
    pvVar9 = malloc((long)iVar6 << 3);
joined_r0x03ebecd8:
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 200) = pvVar9;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(int *)(param_1 + 0xc4) = iVar6;
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) {
LAB_03ebebac:
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar6 << 3,8);
      goto joined_r0x03ebecd8;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar18 + 8);
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ebebac;
  }
  iVar6 = (int)param_2[0xc];
  if (iVar6 < 1) goto LAB_03ebecac;
  lVar18 = *(long *)puVar4;
  if (lVar18 == 0) {
    pvVar9 = malloc((long)iVar6 << 3);
joined_r0x03ebece8:
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0xd8) = pvVar9;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(int *)(param_1 + 0xd4) = iVar6;
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) {
LAB_03ebec1c:
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar6 << 3,8);
      goto joined_r0x03ebece8;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar18 + 8);
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ebec1c;
  }
  iVar6 = (int)param_2[0xc];
  if (0 < iVar6) {
    lVar18 = *(long *)puVar4;
    if (lVar18 == 0) {
      pvVar9 = malloc((long)iVar6 << 3);
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          param_2 = (long *)(lVar8 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_03ebecac;
      }
      pvVar9 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)iVar6 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0xe8) = pvVar9;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(int *)(param_1 + 0xe4) = iVar6;
    }
  }
LAB_03ebecac:
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffb;
  return;
}

