
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_029cb2b0(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined2 *puVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  ulong uVar28;
  char cVar29;
  undefined1 uVar30;
  int iVar31;
  undefined1 uVar32;
  int *piVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  uint *puVar36;
  undefined4 *puVar37;
  undefined1 uVar38;
  long lVar39;
  long *plVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined **local_90;
  long *plStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  
  puVar6 = PTR_DAT_04bb2698;
  lVar39 = *(long *)PTR_DAT_04bb2698;
  if (lVar39 == 0) {
    puVar9 = malloc(800);
    if (puVar9 != (undefined2 *)0x0) goto LAB_029cb344;
LAB_029cb490:
    uVar21 = *(uint *)(param_1 + 0x40);
    if (uVar21 != 0) {
      puVar9 = *(undefined2 **)(param_1 + 0x48);
      goto LAB_029cb49c;
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar39 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_029cb490;
    }
    puVar9 = (undefined2 *)(**(code **)(*plVar7 + 0x30))(plVar7,800,0x10);
    if (puVar9 == (undefined2 *)0x0) goto LAB_029cb490;
LAB_029cb344:
    *(undefined8 *)(puVar9 + 0xa8) = 0;
    *(undefined8 *)(puVar9 + 0xac) = 0;
    *(undefined4 *)((long)puVar9 + 0x11f) = 0;
    *(undefined8 *)(puVar9 + 0x10c) = 0;
    *(undefined4 *)((long)puVar9 + 0x13f) = 0;
    *(undefined8 *)(puVar9 + 0x16c) = 0;
    *(undefined4 *)((long)puVar9 + 0x15f) = 0;
    *puVar9 = 0;
    *(undefined4 *)((long)puVar9 + 0x17f) = 0;
    *(undefined1 *)(puVar9 + 1) = 0;
    *(undefined8 *)(puVar9 + 0x18c) = 0;
    *(undefined8 *)(puVar9 + 0x188) = 0;
    *(undefined4 *)((long)puVar9 + 0x9f) = 0;
    *(undefined4 *)((long)puVar9 + 0xbf) = 0;
    *(undefined4 *)((long)puVar9 + 0xdf) = 0;
    *(undefined4 *)((long)puVar9 + 0xff) = 0;
    *(undefined8 *)(puVar9 + 0x108) = 0;
    *(undefined8 *)(puVar9 + 0x118) = 0;
    *(undefined8 *)(puVar9 + 0x128) = 0;
    *(undefined8 *)(puVar9 + 0x138) = 0;
    *(undefined8 *)(puVar9 + 0x148) = 0;
    *(undefined8 *)(puVar9 + 0x158) = 0;
    *(undefined8 *)(puVar9 + 0x168) = 0;
    *(undefined8 *)(puVar9 + 0x178) = 0;
    *(undefined8 *)(puVar9 + 200) = 0;
    *(undefined8 *)(puVar9 + 0xcc) = 0;
    *(undefined4 *)((long)puVar9 + 0x19f) = 0;
    *(undefined8 *)(puVar9 + 0xd8) = 0;
    *(undefined8 *)(puVar9 + 0xdc) = 0;
    *(undefined4 *)((long)puVar9 + 0x1bf) = 0;
    *(undefined8 *)(puVar9 + 0xe8) = 0;
    *(undefined8 *)(puVar9 + 0xec) = 0;
    *(undefined4 *)((long)puVar9 + 0x1df) = 0;
    *(undefined8 *)(puVar9 + 0xf8) = 0;
    *(undefined8 *)(puVar9 + 0xfc) = 0;
    *(undefined4 *)((long)puVar9 + 0x1ff) = 0;
    *(undefined4 *)((long)puVar9 + 0x21f) = 0;
    *(undefined4 *)((long)puVar9 + 0x23f) = 0;
    *(undefined4 *)((long)puVar9 + 0x25f) = 0;
    *(undefined4 *)((long)puVar9 + 0x27f) = 0;
    *(undefined4 *)((long)puVar9 + 0x29f) = 0;
    *(undefined4 *)((long)puVar9 + 0x2bf) = 0;
    *(undefined4 *)((long)puVar9 + 0x2df) = 0;
    *(undefined4 *)((long)puVar9 + 0x2ff) = 0;
    uVar21 = 0x19;
    *(undefined8 *)(puVar9 + 0x11c) = 0;
    *(undefined8 *)(puVar9 + 300) = 0;
    *(undefined8 *)(puVar9 + 0x13c) = 0;
    *(undefined8 *)(puVar9 + 0x14c) = 0;
    *(undefined8 *)(puVar9 + 0x15c) = 0;
    *(undefined8 *)(puVar9 + 0x17c) = 0;
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 0xc) = 0;
    *(undefined4 *)((long)puVar9 + 0x1f) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    *(undefined8 *)(puVar9 + 0x1c) = 0;
    *(undefined4 *)((long)puVar9 + 0x3f) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x2c) = 0;
    *(undefined4 *)((long)puVar9 + 0x5f) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x3c) = 0;
    *(undefined4 *)((long)puVar9 + 0x7f) = 0;
    *(undefined8 *)(puVar9 + 0x48) = 0;
    *(undefined8 *)(puVar9 + 0x4c) = 0;
    *(undefined8 *)(puVar9 + 0x58) = 0;
    *(undefined8 *)(puVar9 + 0x5c) = 0;
    *(undefined8 *)(puVar9 + 0x68) = 0;
    *(undefined8 *)(puVar9 + 0x6c) = 0;
    *(undefined8 *)(puVar9 + 0x78) = 0;
    *(undefined8 *)(puVar9 + 0x7c) = 0;
    *(undefined8 *)(puVar9 + 0x88) = 0;
    *(undefined8 *)(puVar9 + 0x8c) = 0;
    *(undefined8 *)(puVar9 + 0x98) = 0;
    *(undefined8 *)(puVar9 + 0x9c) = 0;
    *(undefined8 *)(puVar9 + 0xb8) = 0;
    *(undefined8 *)(puVar9 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x19;
    *(undefined2 **)(param_1 + 0x48) = puVar9;
LAB_029cb49c:
    uVar24 = 0;
    do {
      iVar18 = *(int *)(param_1 + 0x60);
      iVar31 = *(int *)(param_1 + 0x58);
      if (iVar18 < iVar31) {
        *(int *)(param_1 + 0x60) = iVar18 + 1;
        iVar18 = *(int *)(param_1 + 0x5c) + iVar18;
        iVar2 = 0;
        if (iVar31 <= iVar18) {
          iVar2 = iVar31;
        }
        *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar18 - iVar2) * 8) =
             (long)puVar9 + ((long)((ulong)uVar24 << 0x20) >> 0x1b);
      }
      uVar24 = uVar24 + 1;
    } while (uVar21 != uVar24);
  }
  puVar4 = PTR_DAT_04bc3f78;
  lVar39 = *(long *)puVar6;
  *(undefined4 *)(param_1 + 0x3cc) = 0x18;
  *(long *)puVar4 = param_1;
  if (lVar39 == 0) {
    pvVar10 = malloc(0x1f410);
    if (pvVar10 != (void *)0x0) goto LAB_029cb568;
LAB_029cb5f4:
    iVar18 = *(int *)(param_1 + 0x3d0);
    if (iVar18 != 0) {
      puVar26 = *(undefined4 **)(param_1 + 0x3d8);
      goto LAB_029cb600;
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar39 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_029cb5f4;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1f410,0x10);
    if (pvVar10 == (void *)0x0) goto LAB_029cb5f4;
LAB_029cb568:
    puVar4 = PTR_DAT_04bb2020;
    iVar18 = 0x640;
    *(undefined8 *)((long)pvVar10 + 8) = 0x640;
    puVar5 = PTR_DAT_04bb2120;
    puVar26 = (undefined4 *)((long)pvVar10 + 0x10);
    puVar37 = puVar26;
    do {
      *(undefined1 *)(puVar37 + 1) = 0;
      *puVar37 = 0;
      *(undefined4 *)((long)puVar37 + 5) = 0xffffffff;
      *(undefined2 *)((long)puVar37 + 9) = 0x500;
      *(undefined8 *)(puVar37 + 3) = 0;
      puVar37[5] = 0xffff0000;
      puVar37[10] = 0xffffffff;
      *(undefined8 *)(puVar37 + 6) = 0xffffffff;
      *(undefined8 *)(puVar37 + 8) = 0xffffffff;
      *(undefined **)(puVar37 + 0xc) = puVar4 + 0x10;
      *(undefined **)(puVar37 + 0xe) = puVar5;
      *(undefined8 *)(puVar37 + 0x10) = 0;
      *(undefined8 *)(puVar37 + 0x12) = 0;
      puVar37 = puVar37 + 0x14;
    } while (puVar37 != (undefined4 *)((long)pvVar10 + 0x1f410));
    *(undefined4 *)(param_1 + 0x3d0) = 0x640;
    *(undefined4 **)(param_1 + 0x3d8) = puVar26;
LAB_029cb600:
    iVar31 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x3f0);
      iVar3 = *(int *)(param_1 + 1000);
      if (iVar2 < iVar3) {
        *(int *)(param_1 + 0x3f0) = iVar2 + 1;
        iVar2 = *(int *)(param_1 + 0x3ec) + iVar2;
        iVar1 = 0;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        *(undefined4 **)(*(long *)(param_1 + 0x3e0) + (long)(iVar2 - iVar1) * 8) =
             puVar26 + (long)iVar31 * 0x14;
      }
      iVar31 = iVar31 + 1;
    } while (iVar18 != iVar31);
  }
  *(undefined4 *)(param_1 + 0xcc3c) = 0x20;
  *(long *)PTR_DAT_04bc3fb8 = param_1;
  pvVar10 = *(void **)(param_1 + 0xcc50);
  lVar39 = param_2[2];
  lVar8 = param_2[3];
  plVar40 = (long *)*param_2;
  lVar14 = param_2[1];
  plVar7 = (long *)(param_1 + 0xcc40);
  if (pvVar10 != (void *)0x0) {
    local_80 = &LAB_029cd96c;
    uStack_78 = 0;
    local_90 = &PTR_LAB_04a98478;
    plStack_88 = plVar7;
    if (*plVar7 == 0) {
      *(undefined4 *)(param_1 + 0xcc58) = 0;
      *(undefined8 *)(param_1 + 0xcc40) = 0;
      lVar11 = *(long *)puVar6;
      if (lVar11 != 0) goto LAB_029cb6e0;
LAB_029cb718:
      free(pvVar10);
    }
    else {
      FUN_029cd980(*plVar7,&local_90);
      pvVar10 = *(void **)(param_1 + 0xcc50);
      *(undefined4 *)(param_1 + 0xcc58) = 0;
      *(undefined8 *)(param_1 + 0xcc40) = 0;
      if (pvVar10 != (void *)0x0) {
        lVar11 = *(long *)puVar6;
        if (lVar11 == 0) goto LAB_029cb718;
LAB_029cb6e0:
        plVar12 = (long *)FUN_038cb610(lVar11,pvVar10);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12,pvVar10);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xcc5c) = 0;
    *(undefined8 *)(param_1 + 0xcc48) = 0;
    *(undefined8 *)(param_1 + 0xcc50) = 0;
  }
  uVar21 = *(uint *)(lVar14 + 0x1c0);
  if ((int)uVar21 < 1) {
    if ((*(long *)(lVar14 + 0xb0) == 0) ||
       (puVar23 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar23 == (uint *)0x0)) {
      uVar21 = 0;
    }
    else {
      uVar21 = *puVar23;
    }
  }
  uVar24 = *(uint *)(lVar39 + 0x1c0);
  if ((int)uVar24 < 1) {
    if ((*(long *)(lVar39 + 0xb0) == 0) ||
       (puVar23 = *(uint **)(*(long *)(lVar39 + 0xb0) + 8), puVar23 == (uint *)0x0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = *puVar23;
    }
  }
  uVar41 = *(uint *)(lVar8 + 0x1c0);
  if ((int)uVar41 < 1) {
    if ((*(long *)(lVar8 + 0xb0) == 0) ||
       (puVar23 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8), puVar23 == (uint *)0x0)) {
      uVar41 = 0;
    }
    else {
      uVar41 = *puVar23;
    }
  }
  uVar25 = uVar24 + uVar21 + uVar41;
  uVar22 = uVar25 - 1;
  if (0 < (int)uVar25) {
    lVar11 = *(long *)puVar6;
    if (lVar11 == 0) {
      pvVar10 = malloc((long)(int)(uVar25 * 0x38));
    }
    else {
      if (plVar40 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar17 = (undefined8 *)(lVar11 + 8);
        if (lVar13 != 0) {
          puVar17 = (undefined8 *)(lVar13 + 0xa8);
        }
        plVar40 = (long *)*puVar17;
        if (plVar40 == (long *)0x0) goto LAB_029cb8a0;
      }
      pvVar10 = (void *)(**(code **)(*plVar40 + 0x30))(plVar40,(long)(int)(uVar25 * 0x38),8);
    }
    if (pvVar10 != (void *)0x0) {
      *(uint *)(param_1 + 0xcc5c) = uVar25;
      *(void **)(param_1 + 0xcc48) = pvVar10;
      if (1 < uVar25) {
        if (uVar22 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          plVar40 = (long *)((long)pvVar10 + 0x38);
          do {
            uVar16 = uVar16 + 2;
            plVar40[-7] = (long)plVar40;
            *plVar40 = (long)(plVar40 + 7);
            plVar40 = plVar40 + 0xe;
          } while (((ulong)uVar22 & 0xfffffffe) != uVar16);
        }
        if ((uVar22 & 1) != 0) {
          plVar40 = (long *)((long)pvVar10 + uVar16 * 0x38);
          *plVar40 = (long)(plVar40 + 7);
        }
      }
      *(undefined8 *)((long)pvVar10 + (long)(int)(uVar22 * 7) * 8) = 0;
      *(void **)(param_1 + 0xcc50) = pvVar10;
    }
  }
LAB_029cb8a0:
  if (0 < (int)uVar21) {
    uVar16 = 0;
    uVar25 = 0x187;
    uVar38 = 0x4d;
    uVar15 = 100;
    pcVar19 = PTR_DAT_04bc3f80;
    puVar23 = (uint *)PTR_DAT_04bc3f88;
LAB_029cb9b4:
    if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
      if ((((*(long *)(lVar14 + 0xb0) == 0) ||
           (puVar27 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar27 == (uint *)0x0)) ||
          ((uVar16 < *(uint *)(lVar14 + 200) &&
           (*(char *)(*(long *)(lVar14 + 0xd0) + uVar16) == '\0')))) ||
         (((*puVar27 <= uVar16 || (puVar27[1] == 0)) || ((ushort)puVar27[2] == 0))))
      goto LAB_029cba60;
      iVar18 = 0xc;
      if (*(char *)((long)puVar27 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      puVar27 = (uint *)((ulong)(puVar27[1] * (int)uVar16 + (uint)(ushort)puVar27[2] * 8 + iVar18) +
                        (long)puVar27);
      uVar22 = *puVar27;
    }
    else if (uVar16 < *(uint *)(lVar14 + 0x1c0)) {
      uVar28 = uVar16;
      if (*(uint *)(lVar14 + 0x1b0) <= uVar16) {
        uVar28 = 0;
      }
      puVar27 = *(uint **)(*(long *)(lVar14 + 0x1b8) + uVar28 * 8);
      uVar22 = *puVar27;
    }
    else {
LAB_029cba60:
      puVar27 = (uint *)0x0;
      uVar22 = uRam0000000000000000;
    }
    uVar30 = uVar38;
    uVar34 = uVar15;
    uVar20 = uVar25;
    if (uVar22 != 0) {
      cVar29 = *pcVar19;
      do {
        uVar28 = (ulong)uVar22;
        if (cVar29 != '\0') {
          uVar22 = puVar23[1];
          if ((int)uVar22 < 0) {
            if ((uVar22 == 0xffffffff) && (uVar28 != 0)) goto LAB_029cbab0;
          }
          else if ((ushort *)((ulong)uVar22 + (long)puVar27) != (ushort *)0x0) {
            uVar20 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar27);
            goto LAB_029cbb44;
          }
LAB_029cbbd0:
          uVar22 = *puVar27;
joined_r0x029cbb48:
          if (uVar22 == 0) goto LAB_029cbbe0;
          uVar28 = (ulong)puVar23[3];
          goto LAB_029cbb50;
        }
        cVar29 = '\x01';
        puVar23[4] = 0xffffffff;
        puVar23[5] = 0xffffffff;
        puVar23[0] = 0xffffffff;
        puVar23[1] = 0xffffffff;
        puVar23[2] = 0xffffffff;
        puVar23[3] = 0xffffffff;
        uVar28 = (ulong)*puVar27;
        *pcVar19 = '\x01';
        if (uVar28 == 0) goto LAB_029cbbd0;
LAB_029cbab0:
        lVar11 = (long)puVar27 - uVar28;
        if (lVar11 == 0) {
LAB_029cbb44:
          uVar22 = *puVar27;
          goto joined_r0x029cbb48;
        }
        lVar13 = 0xc;
        if (*(char *)(lVar11 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        if (lVar13 + lVar11 == 0) goto LAB_029cbbd0;
        uVar28 = (ulong)*(ushort *)(lVar11 + 8);
        puVar23[1] = 0xfffffffe;
        if (uVar28 == 0) goto LAB_029cbbd0;
        puVar36 = (uint *)(lVar13 + lVar11 + 4);
        while (puVar36[-1] != 0x3637ebb9) {
          puVar36 = puVar36 + 2;
          uVar28 = uVar28 - 1;
          if (uVar28 == 0) goto LAB_029cbbd0;
        }
        uVar22 = 0;
        if (*puVar36 != 0xffffffff) {
          uVar22 = *puVar36;
        }
        puVar23[1] = uVar22;
        uVar22 = *puVar27;
      } while (uVar22 != 0);
    }
    uVar32 = 0x3c;
    uVar42 = 0x3f800000;
    goto LAB_029cbd58;
  }
LAB_029cbe9c:
  puVar4 = PTR_DAT_04bc3f98;
  puVar6 = PTR_DAT_04bc3f90;
  if (0 < (int)uVar24) {
    uVar16 = 0;
LAB_029cbf68:
    if ((int)*(uint *)(lVar39 + 0x1c0) < 1) {
      if ((((*(long *)(lVar39 + 0xb0) == 0) ||
           (puVar23 = *(uint **)(*(long *)(lVar39 + 0xb0) + 8), puVar23 == (uint *)0x0)) ||
          ((uVar16 < *(uint *)(lVar39 + 200) &&
           (*(char *)(*(long *)(lVar39 + 0xd0) + uVar16) == '\0')))) ||
         (((*puVar23 <= uVar16 || (puVar23[1] == 0)) || ((ushort)puVar23[2] == 0))))
      goto LAB_029cc010;
      iVar18 = 0xc;
      if (*(char *)((long)puVar23 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar16 + (uint)(ushort)puVar23[2] * 8 + iVar18) +
                        (long)puVar23);
      uVar21 = *puVar23;
    }
    else if (uVar16 < *(uint *)(lVar39 + 0x1c0)) {
      uVar28 = uVar16;
      if (*(uint *)(lVar39 + 0x1b0) <= uVar16) {
        uVar28 = 0;
      }
      puVar23 = *(uint **)(*(long *)(lVar39 + 0x1b8) + uVar28 * 8);
      uVar21 = *puVar23;
    }
    else {
LAB_029cc010:
      puVar23 = (uint *)0x0;
      uVar21 = uRam0000000000000000;
    }
    if (uVar21 != 0) {
      cVar29 = *puVar6;
      do {
        uVar28 = (ulong)uVar21;
        if (cVar29 != '\0') {
          uVar21 = *(uint *)(puVar4 + 4);
          if ((int)uVar21 < 0) {
            if ((uVar21 == 0xffffffff) && (uVar28 != 0)) goto LAB_029cc05c;
          }
          else if ((ushort *)((ulong)uVar21 + (long)puVar23) != (ushort *)0x0) {
            uVar21 = (uint)*(ushort *)((ulong)uVar21 + (long)puVar23);
            goto LAB_029cc0f0;
          }
LAB_029cc100:
          uVar21 = 0x187;
          uVar25 = *puVar23;
          if (uVar25 == 0) goto LAB_029cc1c0;
LAB_029cc10c:
          cVar29 = *puVar6;
          goto LAB_029cc110;
        }
        cVar29 = '\x01';
        *puVar6 = 1;
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        uVar28 = (ulong)*puVar23;
        if (uVar28 == 0) goto LAB_029cc100;
LAB_029cc05c:
        lVar14 = (long)puVar23 - uVar28;
        uVar21 = 0x187;
        if (lVar14 == 0) {
LAB_029cc0f0:
          uVar25 = *puVar23;
          if (uVar25 != 0) goto LAB_029cc10c;
          goto LAB_029cc1c0;
        }
        lVar11 = 0xc;
        if (*(char *)(lVar14 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        if (lVar11 + lVar14 == 0) goto LAB_029cc100;
        uVar28 = (ulong)*(ushort *)(lVar14 + 8);
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        if (uVar28 == 0) goto LAB_029cc100;
        piVar33 = (int *)(lVar11 + lVar14 + 4);
        while (piVar33[-1] != 0x3637ebb9) {
          piVar33 = piVar33 + 2;
          uVar28 = uVar28 - 1;
          if (uVar28 == 0) goto LAB_029cc100;
        }
        iVar18 = 0;
        if (*piVar33 != -1) {
          iVar18 = *piVar33;
        }
        *(int *)(puVar4 + 4) = iVar18;
        uVar21 = *puVar23;
      } while (uVar21 != 0);
    }
    uVar15 = 100;
    uVar21 = 0x187;
    goto LAB_029cc2a0;
  }
LAB_029cc338:
  if ((int)uVar41 < 1) {
    return 1;
  }
  uVar16 = 0;
  uVar21 = 0x187;
  uVar15 = 0x4d;
  uVar38 = 100;
  puVar23 = (uint *)PTR_DAT_04bc3fb0;
  pcVar19 = PTR_DAT_04bc3fa0;
  puVar17 = (undefined8 *)PTR_DAT_04bc3fa8;
LAB_029cc464:
  if ((int)*(uint *)(lVar8 + 0x1c0) < 1) {
    puVar27 = (uint *)0x0;
    if ((*(long *)(lVar8 + 0xb0) != 0) &&
       (puVar27 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8), puVar27 != (uint *)0x0)) {
      if (((uVar16 < *(uint *)(lVar8 + 200)) &&
          (*(char *)(*(long *)(lVar8 + 0xd0) + uVar16) == '\0')) ||
         (((*puVar27 <= uVar16 || (puVar27[1] == 0)) || ((ushort)puVar27[2] == 0))))
      goto LAB_029cc4f4;
      iVar18 = 0xc;
      if (*(char *)((long)puVar27 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      puVar27 = (uint *)((ulong)(puVar27[1] * (int)uVar16 + (uint)(ushort)puVar27[2] * 8 + iVar18) +
                        (long)puVar27);
    }
  }
  else if (uVar16 < *(uint *)(lVar8 + 0x1c0)) {
    uVar28 = uVar16;
    if (*(uint *)(lVar8 + 0x1b0) <= uVar16) {
      uVar28 = 0;
    }
    puVar27 = *(uint **)(*(long *)(lVar8 + 0x1b8) + uVar28 * 8);
  }
  else {
LAB_029cc4f4:
    puVar27 = (uint *)0x0;
  }
  uVar24 = *puVar27;
  uVar30 = uVar15;
  uVar25 = uVar21;
  uVar34 = uVar38;
  if (uVar24 != 0) {
    cVar29 = *pcVar19;
    do {
      uVar28 = (ulong)uVar24;
      if (cVar29 != '\0') {
        uVar24 = *(uint *)(puVar17 + 1);
        if ((int)uVar24 < 0) {
          if ((uVar24 == 0xffffffff) && (uVar28 != 0)) goto LAB_029cc548;
        }
        else if ((ushort *)((ulong)uVar24 + (long)puVar27) != (ushort *)0x0) {
          uVar25 = (uint)*(ushort *)((ulong)uVar24 + (long)puVar27);
          goto LAB_029cc5d4;
        }
LAB_029cc660:
        uVar24 = *puVar27;
joined_r0x029cc5d8:
        if (uVar24 == 0) goto LAB_029cc670;
        uVar28 = (ulong)*(uint *)(puVar17 + 2);
        goto LAB_029cc5e0;
      }
      cVar29 = '\x01';
      puVar17[2] = 0xffffffffffffffff;
      *puVar17 = 0xffffffffffffffff;
      puVar17[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar17 + 3) = 0xffffffff;
      uVar28 = (ulong)*puVar27;
      *pcVar19 = '\x01';
      if (uVar28 == 0) goto LAB_029cc660;
LAB_029cc548:
      lVar39 = (long)puVar27 - uVar28;
      if (lVar39 == 0) {
LAB_029cc5d4:
        uVar24 = *puVar27;
        goto joined_r0x029cc5d8;
      }
      lVar14 = 0xc;
      if (*(char *)(lVar39 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      if (lVar14 + lVar39 == 0) goto LAB_029cc660;
      uVar28 = (ulong)*(ushort *)(lVar39 + 8);
      *(undefined4 *)(puVar17 + 1) = 0xfffffffe;
      if (uVar28 == 0) goto LAB_029cc660;
      piVar33 = (int *)(lVar14 + lVar39 + 4);
      while (piVar33[-1] != 0x3637ebb9) {
        piVar33 = piVar33 + 2;
        uVar28 = uVar28 - 1;
        if (uVar28 == 0) goto LAB_029cc660;
      }
      iVar18 = 0;
      if (*piVar33 != -1) {
        iVar18 = *piVar33;
      }
      *(int *)(puVar17 + 1) = iVar18;
      uVar24 = *puVar27;
    } while (uVar24 != 0);
  }
  uVar32 = 0x3c;
  uVar42 = 0x3f800000;
  goto LAB_029cc7e8;
  while( true ) {
    lVar13 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    if (lVar13 + lVar11 == 0) goto LAB_029cbc10;
    uVar28 = (ulong)*(ushort *)(lVar11 + 8);
    puVar23[3] = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cbc10;
    puVar36 = (uint *)(lVar13 + lVar11 + 4);
    while (puVar36[-1] != 0xeaaf51c9) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cbc10;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    puVar23[3] = (uint)uVar28;
    uVar22 = *puVar27;
    if (uVar22 == 0) break;
LAB_029cbb50:
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cbc10;
      uVar30 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar22 = *puVar27;
      if (uVar22 != 0) goto LAB_029cbc1c;
LAB_029cbc00:
      uVar32 = 0x3c;
      goto LAB_029cbd54;
    }
    if ((uVar28 != 0xffffffff) || (lVar11 = (long)puVar27 - (ulong)uVar22, lVar11 == 0)) {
LAB_029cbc10:
      uVar22 = *puVar27;
      if (uVar22 == 0) goto LAB_029cbc00;
LAB_029cbc1c:
      uVar28 = (ulong)puVar23[4];
      goto LAB_029cbc20;
    }
  }
LAB_029cbbe0:
  uVar32 = 0x3c;
  goto LAB_029cbd54;
LAB_029cbc20:
  do {
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cbcc0;
      uVar32 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar22 = *puVar27;
joined_r0x029cbcb0:
      if (uVar22 != 0) {
        uVar28 = (ulong)puVar23[5];
        goto LAB_029cbcd0;
      }
      break;
    }
    if ((uVar28 != 0xffffffff) || (lVar11 = (long)puVar27 - (ulong)uVar22, lVar11 == 0)) {
LAB_029cbcc0:
      uVar32 = 0x3c;
      uVar22 = *puVar27;
      goto joined_r0x029cbcb0;
    }
    lVar13 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    if (lVar13 + lVar11 == 0) goto LAB_029cbcc0;
    uVar28 = (ulong)*(ushort *)(lVar11 + 8);
    puVar23[4] = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cbcc0;
    puVar36 = (uint *)(lVar13 + lVar11 + 4);
    while (puVar36[-1] != 0xafad124b) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cbcc0;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    uVar32 = 0x3c;
    puVar23[4] = (uint)uVar28;
    uVar22 = *puVar27;
  } while (uVar22 != 0);
  goto LAB_029cbd54;
  while( true ) {
    lVar13 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    if (lVar13 + lVar11 == 0) goto LAB_029cbe0c;
    uVar28 = (ulong)*(ushort *)(lVar11 + 8);
    puVar23[5] = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cbe0c;
    puVar36 = (uint *)(lVar13 + lVar11 + 4);
    while (puVar36[-1] != 0x9b88ebfe) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cbe0c;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    puVar23[5] = (uint)uVar28;
    uVar22 = *puVar27;
    if (uVar22 == 0) break;
LAB_029cbcd0:
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cbe0c;
      uVar34 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar22 = *puVar27;
      if (uVar22 != 0) {
LAB_029cbe18:
        uVar28 = (ulong)*puVar23;
        goto LAB_029cbe1c;
      }
      break;
    }
    if ((uVar28 != 0xffffffff) || (lVar11 = (long)puVar27 - (ulong)uVar22, lVar11 == 0)) {
LAB_029cbe0c:
      uVar22 = *puVar27;
      if (uVar22 != 0) goto LAB_029cbe18;
      break;
    }
  }
LAB_029cbd54:
  uVar42 = 0x3f800000;
LAB_029cbd58:
  if (*(int *)(param_1 + 0xcc58) < *(int *)(param_1 + 0xcc5c)) {
    puVar17 = *(undefined8 **)(param_1 + 0xcc48);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xcc48) = *puVar17;
    }
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined1 *)((long)puVar17 + 0x24) = 0;
    *(undefined1 *)((long)puVar17 + 0x25) = uVar30;
    *(undefined1 *)((long)puVar17 + 0x26) = uVar32;
    *(undefined1 *)((long)puVar17 + 0x27) = uVar34;
    *(undefined4 *)(puVar17 + 5) = uVar42;
    *(uint *)(puVar17 + 4) = uVar20;
    puVar17[6] = plVar7;
    *puVar17 = &PTR_LAB_04a984c8;
    puVar17[1] = 0;
    *(int *)(param_1 + 0xcc58) = *(int *)(param_1 + 0xcc58) + 1;
    lVar11 = FUN_029ce080(plVar7,*(undefined8 *)(param_1 + 0xcc40));
    *(long *)(param_1 + 0xcc40) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
    pcVar19 = PTR_DAT_04bc3f80;
    puVar23 = (uint *)PTR_DAT_04bc3f88;
  }
  else {
    for (lVar11 = *plVar7; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while ((int)uVar20 < *(int *)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_029cb9a8;
      }
      if ((int)uVar20 <= *(int *)(lVar11 + 0x20)) {
        *(undefined1 *)(lVar11 + 0x24) = 0;
        *(undefined1 *)(lVar11 + 0x25) = uVar30;
        *(undefined1 *)(lVar11 + 0x26) = uVar32;
        *(undefined1 *)(lVar11 + 0x27) = uVar34;
        *(undefined4 *)(lVar11 + 0x28) = uVar42;
        break;
      }
    }
  }
LAB_029cb9a8:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar21) goto LAB_029cbe9c;
  goto LAB_029cb9b4;
LAB_029cbe1c:
  if (-1 < (int)uVar28) {
    if ((undefined4 *)(uVar28 + (long)puVar27) != (undefined4 *)0x0) {
      uVar42 = *(undefined4 *)(uVar28 + (long)puVar27);
      goto LAB_029cbd58;
    }
    goto LAB_029cbd54;
  }
  if (uVar28 != 0xffffffff) goto LAB_029cbd54;
  lVar11 = (long)puVar27 - (ulong)uVar22;
  if (lVar11 == 0) goto LAB_029cbd54;
  lVar13 = 0xc;
  if (*(char *)(lVar11 + 10) != '\0') {
    lVar13 = 0x1c;
  }
  if (lVar13 + lVar11 == 0) goto LAB_029cbd54;
  uVar28 = (ulong)*(ushort *)(lVar11 + 8);
  *puVar23 = 0xfffffffe;
  if (uVar28 == 0) goto LAB_029cbd54;
  puVar36 = (uint *)(lVar13 + lVar11 + 4);
  while (puVar36[-1] != 0x9ad7622) {
    puVar36 = puVar36 + 2;
    uVar28 = uVar28 - 1;
    if (uVar28 == 0) goto LAB_029cbd54;
  }
  uVar28 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar28 = (ulong)*puVar36;
  }
  *puVar23 = (uint)uVar28;
  uVar22 = *puVar27;
  if (uVar22 == 0) goto LAB_029cbd54;
  goto LAB_029cbe1c;
LAB_029cc110:
  do {
    uVar28 = (ulong)uVar25;
    if (cVar29 != '\0') {
      uVar25 = *(uint *)(puVar4 + 0xc);
      if ((int)uVar25 < 0) {
        if ((uVar25 == 0xffffffff) && (uVar28 != 0)) goto LAB_029cc14c;
      }
      else if ((undefined1 *)((ulong)uVar25 + (long)puVar23) != (undefined1 *)0x0) {
        uVar15 = *(undefined1 *)((ulong)uVar25 + (long)puVar23);
        goto LAB_029cc1d4;
      }
LAB_029cc1e0:
      uVar15 = 100;
      uVar25 = *puVar23;
      if (uVar25 == 0) goto LAB_029cc2a0;
LAB_029cc1ec:
      cVar29 = *puVar6;
      goto LAB_029cc1f0;
    }
    cVar29 = '\x01';
    *puVar6 = 1;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    uVar28 = (ulong)*puVar23;
    if (uVar28 == 0) goto LAB_029cc1e0;
LAB_029cc14c:
    lVar14 = (long)puVar23 - uVar28;
    uVar15 = 100;
    if (lVar14 == 0) {
LAB_029cc1d4:
      uVar25 = *puVar23;
      if (uVar25 != 0) goto LAB_029cc1ec;
      goto LAB_029cc2a0;
    }
    lVar11 = 0xc;
    if (*(char *)(lVar14 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    if (lVar11 + lVar14 == 0) goto LAB_029cc1e0;
    uVar28 = (ulong)*(ushort *)(lVar14 + 8);
    *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cc1e0;
    piVar33 = (int *)(lVar11 + lVar14 + 4);
    while (piVar33[-1] != -0x64771402) {
      piVar33 = piVar33 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cc1e0;
    }
    iVar18 = 0;
    if (*piVar33 != -1) {
      iVar18 = *piVar33;
    }
    *(int *)(puVar4 + 0xc) = iVar18;
    uVar25 = *puVar23;
  } while (uVar25 != 0);
LAB_029cc1c0:
  uVar15 = 100;
LAB_029cc2a0:
  uVar42 = 0x3f800000;
LAB_029cc2a4:
  if (*(int *)(param_1 + 0xcc58) < *(int *)(param_1 + 0xcc5c)) {
    puVar17 = *(undefined8 **)(param_1 + 0xcc48);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xcc48) = *puVar17;
    }
    *puVar17 = &PTR_LAB_04a984c8;
    puVar17[1] = 0;
    *(undefined2 *)((long)puVar17 + 0x24) = 0x4d01;
    *(undefined1 *)((long)puVar17 + 0x27) = uVar15;
    *(undefined1 *)((long)puVar17 + 0x26) = 0x3c;
    *(undefined4 *)(puVar17 + 5) = uVar42;
    *(uint *)(puVar17 + 4) = uVar21;
    puVar17[6] = plVar7;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(int *)(param_1 + 0xcc58) = *(int *)(param_1 + 0xcc58) + 1;
    lVar14 = FUN_029ce080(plVar7,*(undefined8 *)(param_1 + 0xcc40));
    *(long *)(param_1 + 0xcc40) = lVar14;
    *(undefined8 *)(lVar14 + 0x18) = 1;
  }
  else {
    for (lVar14 = *plVar7; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x10)) {
      while ((int)uVar21 < *(int *)(lVar14 + 0x20)) {
        lVar14 = *(long *)(lVar14 + 8);
        if (lVar14 == 0) goto LAB_029cbf5c;
      }
      if ((int)uVar21 <= *(int *)(lVar14 + 0x20)) {
        *(undefined1 *)(lVar14 + 0x27) = uVar15;
        *(undefined4 *)(lVar14 + 0x28) = uVar42;
        *(undefined2 *)(lVar14 + 0x24) = 0x4d01;
        *(undefined1 *)(lVar14 + 0x26) = 0x3c;
        break;
      }
    }
  }
LAB_029cbf5c:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar24) goto LAB_029cc338;
  goto LAB_029cbf68;
LAB_029cc1f0:
  if (cVar29 == '\0') {
    cVar29 = '\x01';
    *puVar6 = 1;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    uVar25 = *puVar23;
  }
  else {
    uVar22 = *(uint *)puVar4;
    if (-1 < (int)uVar22) {
      if ((undefined4 *)((ulong)uVar22 + (long)puVar23) != (undefined4 *)0x0) {
        uVar42 = *(undefined4 *)((ulong)uVar22 + (long)puVar23);
        goto LAB_029cc2a4;
      }
      goto LAB_029cc2a0;
    }
    if (uVar22 != 0xffffffff) goto LAB_029cc2a0;
  }
  if (((ulong)uVar25 == 0) || (lVar14 = (long)puVar23 - (ulong)uVar25, lVar14 == 0))
  goto LAB_029cc2a0;
  lVar11 = 0xc;
  if (*(char *)(lVar14 + 10) != '\0') {
    lVar11 = 0x1c;
  }
  if (lVar11 + lVar14 == 0) goto LAB_029cc2a0;
  uVar28 = (ulong)*(ushort *)(lVar14 + 8);
  *(undefined4 *)puVar4 = 0xfffffffe;
  if (uVar28 == 0) goto LAB_029cc2a0;
  piVar33 = (int *)(lVar11 + lVar14 + 4);
  while (piVar33[-1] != 0x9ad7622) {
    piVar33 = piVar33 + 2;
    uVar28 = uVar28 - 1;
    if (uVar28 == 0) goto LAB_029cc2a0;
  }
  iVar18 = 0;
  if (*piVar33 != -1) {
    iVar18 = *piVar33;
  }
  *(int *)puVar4 = iVar18;
  uVar25 = *puVar23;
  if (uVar25 == 0) goto LAB_029cc2a0;
  goto LAB_029cc1f0;
  while( true ) {
    lVar14 = 0xc;
    if (*(char *)(lVar39 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar39 == 0) goto LAB_029cc6a0;
    uVar28 = (ulong)*(ushort *)(lVar39 + 8);
    *(undefined4 *)(puVar17 + 2) = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cc6a0;
    puVar36 = (uint *)(lVar14 + lVar39 + 4);
    while (puVar36[-1] != 0xeaaf51c9) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cc6a0;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    *(int *)(puVar17 + 2) = (int)uVar28;
    uVar24 = *puVar27;
    if (uVar24 == 0) break;
LAB_029cc5e0:
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cc6a0;
      uVar30 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar24 = *puVar27;
      if (uVar24 != 0) goto LAB_029cc6ac;
LAB_029cc690:
      uVar32 = 0x3c;
      goto LAB_029cc7e4;
    }
    if ((uVar28 != 0xffffffff) || (lVar39 = (long)puVar27 - (ulong)uVar24, lVar39 == 0)) {
LAB_029cc6a0:
      uVar24 = *puVar27;
      if (uVar24 == 0) goto LAB_029cc690;
LAB_029cc6ac:
      uVar28 = (ulong)*(uint *)((long)puVar17 + 0x14);
      goto LAB_029cc6b0;
    }
  }
LAB_029cc670:
  uVar32 = 0x3c;
  goto LAB_029cc7e4;
LAB_029cc6b0:
  do {
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cc750;
      uVar32 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar24 = *puVar27;
joined_r0x029cc740:
      if (uVar24 != 0) {
        uVar28 = (ulong)*(uint *)(puVar17 + 3);
        goto LAB_029cc760;
      }
      break;
    }
    if ((uVar28 != 0xffffffff) || (lVar39 = (long)puVar27 - (ulong)uVar24, lVar39 == 0)) {
LAB_029cc750:
      uVar32 = 0x3c;
      uVar24 = *puVar27;
      goto joined_r0x029cc740;
    }
    lVar14 = 0xc;
    if (*(char *)(lVar39 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar39 == 0) goto LAB_029cc750;
    uVar28 = (ulong)*(ushort *)(lVar39 + 8);
    *(undefined4 *)((long)puVar17 + 0x14) = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cc750;
    puVar36 = (uint *)(lVar14 + lVar39 + 4);
    while (puVar36[-1] != 0xafad124b) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cc750;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    uVar32 = 0x3c;
    *(int *)((long)puVar17 + 0x14) = (int)uVar28;
    uVar24 = *puVar27;
  } while (uVar24 != 0);
  goto LAB_029cc7e4;
  while( true ) {
    lVar14 = 0xc;
    if (*(char *)(lVar39 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar39 == 0) goto LAB_029cc930;
    uVar28 = (ulong)*(ushort *)(lVar39 + 8);
    *(undefined4 *)(puVar17 + 3) = 0xfffffffe;
    if (uVar28 == 0) goto LAB_029cc930;
    puVar36 = (uint *)(lVar14 + lVar39 + 4);
    while (puVar36[-1] != 0x9b88ebfe) {
      puVar36 = puVar36 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) goto LAB_029cc930;
    }
    uVar28 = 0;
    if (*puVar36 != 0xffffffff) {
      uVar28 = (ulong)*puVar36;
    }
    *(int *)(puVar17 + 3) = (int)uVar28;
    uVar24 = *puVar27;
    if (uVar24 == 0) break;
LAB_029cc760:
    if (-1 < (int)uVar28) {
      if ((undefined1 *)(uVar28 + (long)puVar27) == (undefined1 *)0x0) goto LAB_029cc930;
      uVar34 = *(undefined1 *)(uVar28 + (long)puVar27);
      uVar24 = *puVar27;
      if (uVar24 != 0) {
LAB_029cc93c:
        uVar28 = (ulong)*(uint *)((long)puVar17 + 4);
        goto LAB_029cc940;
      }
      break;
    }
    if ((uVar28 != 0xffffffff) || (lVar39 = (long)puVar27 - (ulong)uVar24, lVar39 == 0)) {
LAB_029cc930:
      uVar24 = *puVar27;
      if (uVar24 != 0) goto LAB_029cc93c;
      break;
    }
  }
LAB_029cc7e4:
  uVar42 = 0x3f800000;
LAB_029cc7e8:
  uVar24 = *puVar27;
  uVar22 = 0;
  if ((uVar24 != 0) && (puVar27 != (uint *)(ulong)uVar24)) {
    puVar36 = (uint *)((long)puVar27 - (long)(ulong)uVar24);
    uVar22 = 0;
    if (*puVar36 != 0) {
      uVar24 = puVar36[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar36[2] != 0)) {
        lVar39 = 0xc;
        if (*(char *)((long)puVar36 + 10) != '\0') {
          lVar39 = 0x1c;
        }
        lVar39 = (long)puVar36 + lVar39 + (ulong)(ushort)puVar36[2] * 8;
        if (lVar39 != 0) {
          uVar22 = 0;
          if ((ulong)uVar24 != 0) {
            uVar22 = (uint)((ulong)((long)puVar27 - lVar39) / (ulong)uVar24);
          }
          if (*puVar36 <= uVar22) {
            uVar22 = 0xffffffff;
          }
          if ((uVar22 < *puVar23) &&
             (uVar22 = (uint)*(ushort *)(*(long *)(puVar23 + 2) + (long)(int)uVar22 * 2), uVar22 < 5
             )) goto LAB_029cc864;
        }
      }
      uVar22 = 0;
    }
  }
LAB_029cc864:
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar22);
  uVar35 = (undefined1)(0x5040302ff >> (((ulong)uVar22 & 7) << 3));
  if (4 < (ulong)uVar22) {
    uVar35 = 0xff;
  }
  if (*(int *)(param_1 + 0xcc58) < *(int *)(param_1 + 0xcc5c)) {
    puVar17 = *(undefined8 **)(param_1 + 0xcc48);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xcc48) = *puVar17;
    }
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined1 *)((long)puVar17 + 0x24) = uVar35;
    *(undefined1 *)((long)puVar17 + 0x25) = uVar30;
    *(undefined1 *)((long)puVar17 + 0x26) = uVar32;
    *(undefined1 *)((long)puVar17 + 0x27) = uVar34;
    *(undefined4 *)(puVar17 + 5) = uVar42;
    *(uint *)(puVar17 + 4) = uVar25;
    puVar17[6] = plVar7;
    *puVar17 = &PTR_LAB_04a984c8;
    puVar17[1] = 0;
    *(int *)(param_1 + 0xcc58) = *(int *)(param_1 + 0xcc58) + 1;
    lVar39 = FUN_029ce080(plVar7,*(undefined8 *)(param_1 + 0xcc40));
    *(long *)(param_1 + 0xcc40) = lVar39;
    *(undefined8 *)(lVar39 + 0x18) = 1;
    puVar23 = (uint *)PTR_DAT_04bc3fb0;
    pcVar19 = PTR_DAT_04bc3fa0;
    puVar17 = (undefined8 *)PTR_DAT_04bc3fa8;
  }
  else {
    for (lVar39 = *plVar7; lVar39 != 0; lVar39 = *(long *)(lVar39 + 0x10)) {
      while ((int)uVar25 < *(int *)(lVar39 + 0x20)) {
        lVar39 = *(long *)(lVar39 + 8);
        if (lVar39 == 0) goto LAB_029cc458;
      }
      if ((int)uVar25 <= *(int *)(lVar39 + 0x20)) {
        *(undefined1 *)(lVar39 + 0x24) = uVar35;
        *(undefined1 *)(lVar39 + 0x25) = uVar30;
        *(undefined1 *)(lVar39 + 0x26) = uVar32;
        *(undefined1 *)(lVar39 + 0x27) = uVar34;
        *(undefined4 *)(lVar39 + 0x28) = uVar42;
        break;
      }
    }
  }
LAB_029cc458:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar41) {
    return 1;
  }
  goto LAB_029cc464;
LAB_029cc940:
  if (-1 < (int)uVar28) {
    if ((undefined4 *)(uVar28 + (long)puVar27) != (undefined4 *)0x0) {
      uVar42 = *(undefined4 *)(uVar28 + (long)puVar27);
      goto LAB_029cc7e8;
    }
    goto LAB_029cc7e4;
  }
  if (uVar28 != 0xffffffff) goto LAB_029cc7e4;
  lVar39 = (long)puVar27 - (ulong)uVar24;
  if (lVar39 == 0) goto LAB_029cc7e4;
  lVar14 = 0xc;
  if (*(char *)(lVar39 + 10) != '\0') {
    lVar14 = 0x1c;
  }
  if (lVar14 + lVar39 == 0) goto LAB_029cc7e4;
  uVar28 = (ulong)*(ushort *)(lVar39 + 8);
  *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
  if (uVar28 == 0) goto LAB_029cc7e4;
  puVar36 = (uint *)(lVar14 + lVar39 + 4);
  while (puVar36[-1] != 0x9ad7622) {
    puVar36 = puVar36 + 2;
    uVar28 = uVar28 - 1;
    if (uVar28 == 0) goto LAB_029cc7e4;
  }
  uVar28 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar28 = (ulong)*puVar36;
  }
  *(int *)((long)puVar17 + 4) = (int)uVar28;
  uVar24 = *puVar27;
  if (uVar24 == 0) goto LAB_029cc7e4;
  goto LAB_029cc940;
}

