
void FUN_0378ddd0(long param_1,char *param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  char *__src;
  int iVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  char *pcVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  ulong *puVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined *local_100;
  undefined ***pppuStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  ulong *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  char *local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  char *local_78;
  long lStack_70;
  
  if (*param_2 != '\0') {
    puVar28 = (ulong *)(param_1 + 0x68);
    uVar29 = *puVar28;
    if (uVar29 != 0) {
      lVar15 = *(long *)(uVar29 + 8);
      while (lVar15 != 0) {
        *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
        uVar29 = *(ulong *)(uVar29 + 8);
        lVar15 = *(long *)(uVar29 + 8);
      }
      do {
        while( true ) {
          puVar26 = *(undefined8 **)(uVar29 + 0x28);
          FUN_00767998(puVar26,0);
          *puVar26 = 0;
          *(undefined4 *)(puVar26 + 1) = 0;
          puVar26[2] = 0;
          *(undefined4 *)(puVar26 + 3) = 0;
          iVar13 = *(int *)(param_1 + 0x60);
          iVar30 = *(int *)(param_1 + 0x58);
          if (iVar13 < iVar30) {
            *(int *)(param_1 + 0x60) = iVar13 + 1;
            iVar13 = *(int *)(param_1 + 0x5c) + iVar13;
            iVar14 = 0;
            if (iVar30 <= iVar13) {
              iVar14 = iVar30;
            }
            *(undefined8 **)(*(long *)(param_1 + 0x50) + (long)(iVar13 - iVar14) * 8) = puVar26;
          }
          lVar15 = *(long *)(uVar29 + 0x10);
          if (lVar15 == 0) break;
          *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
          uVar29 = *(ulong *)(uVar29 + 0x10);
          lVar15 = *(long *)(uVar29 + 8);
          while (lVar15 != 0) {
            *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
            uVar29 = *(ulong *)(uVar29 + 8);
            lVar15 = *(long *)(uVar29 + 8);
          }
        }
        uVar16 = uVar29;
        do {
          uVar29 = *(ulong *)(uVar16 + 0x18) & 0xfffffffffffffffe;
          if (uVar29 == 0) {
            local_b0 = &LAB_0378eea8;
            local_a8 = 0;
            uStack_a4 = 0;
            uStack_a2 = 0;
            local_c0 = &PTR_LAB_04b46ec8;
            local_b8 = puVar28;
            if (*puVar28 != 0) {
              FUN_0378eec0(*puVar28,&local_c0);
            }
            goto LAB_0378df1c;
          }
          bVar12 = *(ulong *)(uVar29 + 8) != uVar16;
          uVar16 = uVar29;
        } while (bVar12);
      } while( true );
    }
LAB_0378df1c:
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    FUN_03f45838(param_1 + 0x18);
    if (*(long *)(param_1 + 0x10) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    **(undefined1 **)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    **(undefined1 **)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    plVar22 = *(long **)(param_1 + 0x1f8);
    if (plVar22 != (long *)(param_1 + 0x1f0)) {
      plVar19 = plVar22 + -0x13;
      do {
        plVar7 = (long *)plVar22[1];
        plVar24 = plVar7;
        if (*plVar22 != 0) {
          *(long **)(*plVar22 + 8) = plVar7;
          plVar24 = (long *)plVar22[1];
        }
        if (plVar24 != (long *)0x0) {
          *plVar24 = *plVar22;
        }
        *plVar22 = 0;
        plVar22[1] = 0;
        *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
        *plVar19 = *(long *)(param_1 + 0x208);
        *(long **)(param_1 + 0x208) = plVar19;
        plVar19 = plVar7 + -0x13;
        plVar22 = plVar7;
      } while (plVar19 != (long *)(param_1 + 0x158));
    }
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  iVar13 = *(int *)(param_1 + 0xb0);
  if (iVar13 != 0) {
    iVar30 = 0;
LAB_0378e02c:
    iVar14 = *(int *)(param_1 + 0xac) + iVar30;
    lVar15 = *(long *)(param_1 + 0x68);
    iVar21 = 0;
    if (*(int *)(param_1 + 0xa8) <= iVar14) {
      iVar21 = *(int *)(param_1 + 0xa8);
    }
    if (lVar15 != 0) {
      iVar14 = *(int *)(*(long *)(param_1 + 0xa0) + (long)(iVar14 - iVar21) * 4);
      do {
        while (*(int *)(lVar15 + 0x20) <= iVar14) {
          if (iVar14 <= *(int *)(lVar15 + 0x20)) {
            puVar26 = *(undefined8 **)(lVar15 + 0x28);
            FUN_00767998(puVar26,0xffffffff);
            *puVar26 = 0;
            *(undefined4 *)(puVar26 + 1) = 0;
            puVar26[2] = 0;
            *(undefined4 *)(puVar26 + 3) = 0;
            lVar15 = *(long *)(param_1 + 0x68);
            if (lVar15 == 0) goto LAB_0378e100;
            lVar18 = lVar15;
            goto LAB_0378e0c0;
          }
          lVar15 = *(long *)(lVar15 + 0x10);
          if (lVar15 == 0) goto LAB_0378e020;
        }
        lVar15 = *(long *)(lVar15 + 8);
      } while (lVar15 != 0);
    }
    goto LAB_0378e020;
  }
LAB_0378e138:
  *(undefined8 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xd8) != 0 || *(int *)(param_1 + 0x168) != 0) {
    if ((*(int *)(param_1 + 0x80) != 0) && (uVar29 = *(ulong *)(param_1 + 0x68), uVar29 != 0)) {
      lVar15 = *(long *)(uVar29 + 8);
      while (lVar15 != 0) {
        *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
        uVar29 = *(ulong *)(uVar29 + 8);
        lVar15 = *(long *)(uVar29 + 8);
      }
      do {
        while (lVar15 = *(long *)(uVar29 + 0x10), lVar15 != 0) {
          *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
          uVar29 = *(ulong *)(uVar29 + 0x10);
          lVar15 = *(long *)(uVar29 + 8);
          while (lVar15 != 0) {
            *(ulong *)(lVar15 + 0x18) = *(ulong *)(lVar15 + 0x18) & 1 | uVar29;
            uVar29 = *(ulong *)(uVar29 + 8);
            lVar15 = *(long *)(uVar29 + 8);
          }
        }
        uVar16 = uVar29;
        do {
          uVar29 = *(ulong *)(uVar16 + 0x18) & 0xfffffffffffffffe;
          if (uVar29 == 0) goto LAB_0378e1f4;
          bVar12 = *(ulong *)(uVar29 + 8) != uVar16;
          uVar16 = uVar29;
        } while (bVar12);
      } while( true );
    }
LAB_0378e1f4:
    puVar28 = (ulong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(byte *)puVar28 = *(byte *)puVar28 & 0xfd;
    FUN_03f45838(param_1 + 0x18);
    if (*(long *)(param_1 + 0x10) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    pcVar17 = *(char **)(param_1 + 0xd0);
    if ((*pcVar17 != '\0') || (**(char **)(param_1 + 0x160) != '\0')) {
      local_c8 = 0;
      local_e0 = PTR_DAT_04bb2120;
      uStack_d8 = 0;
      pppuStack_f8 = (undefined ***)(PTR_DAT_04bb2020 + 0x10);
      local_f0 = PTR_DAT_04bb2120;
      local_100 = PTR_DAT_04bb3cd8 + 0x10;
      local_d0 = *(undefined4 *)(param_1 + 0x90);
      puStack_e8 = (undefined *)pppuStack_f8;
      if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
        local_c0 = (undefined **)((ulong)local_c0 & 0xffffffffffff0000);
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
        local_b0 = (undefined1 *)0x0;
        local_a8 = SUB84(&local_100,0);
        uStack_a4 = (undefined2)((ulong)&local_100 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_100 >> 0x30);
        local_a0 = SUB84(pppuStack_f8,0);
        local_9c = (undefined1)((ulong)pppuStack_f8 >> 0x20);
        uStack_9b = (undefined1)((ulong)pppuStack_f8 >> 0x28);
        uStack_9a = (undefined2)((ulong)pppuStack_f8 >> 0x30);
        local_78 = "SimpleObject";
        local_b8 = puVar28;
        local_98 = pcVar17;
        puStack_90 = (undefined *)pppuStack_f8;
        local_88 = *(char **)(param_1 + 0x160);
        puStack_80 = (undefined *)pppuStack_f8;
        lStack_70 = param_1 + 0x18;
        FUN_03839ca0(*(undefined8 *)PTR_DAT_04bcb3d8,&local_c0,0);
        pcVar17 = *(char **)(param_1 + 0xd0);
      }
    }
    *pcVar17 = '\0';
    *(undefined4 *)(param_1 + 0xd8) = 0;
    **(undefined1 **)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_038386d0(param_1 + 8);
    if (((*(byte *)(param_1 + 8) & 1) == 0) || (lVar15 = *(long *)(param_1 + 0x10), lVar15 == 0)) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar15 + 0x18);
      if ((*(byte *)(lVar15 + 8) & 10) != 2) {
        puVar26 = (undefined8 *)0x0;
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    if ((puVar26 == (undefined8 *)0x0) ||
       (uVar29 = (**(code **)*puVar26)(puVar26,PTR_DAT_04bbd398), (uVar29 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (*(int *)(param_1 + 200) == 0 && *(int *)(param_1 + 0x98) == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0xc4) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      return;
    }
    *(undefined8 **)(param_1 + 0x38) = puVar26;
  }
  iVar13 = *(int *)(param_1 + 200);
  plVar22 = (long *)(param_1 + 0x1f0);
  if (iVar13 != 0) {
    iVar14 = *(int *)(param_1 + 0x200);
    iVar30 = 0;
    do {
      iVar21 = *(int *)(param_1 + 0xc4) + iVar30;
      iVar3 = 0;
      if (*(int *)(param_1 + 0xc0) <= iVar21) {
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      if (*(int *)(param_1 + 0x218) <= iVar14) break;
      puVar26 = *(undefined8 **)(param_1 + 0x208);
      if (puVar26 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x208) = *puVar26;
      }
      lVar15 = *(long *)(param_1 + 0xb8);
      iVar21 = iVar21 - iVar3;
      uVar32 = *(undefined4 *)(lVar15 + (long)iVar21 * 0x98);
      pcVar17 = (char *)(puVar26 + 3);
      *pcVar17 = '\0';
      puVar26[1] = pcVar17;
      puVar26[2] = 0x8000000000;
      *(undefined4 *)puVar26 = uVar32;
      __src = *(char **)(lVar15 + (long)iVar21 * 0x98 + 8);
      if (pcVar17 != __src) {
        uVar31 = *(uint *)(lVar15 + (long)iVar21 * 0x98 + 0x10);
        if (uVar31 == 0xffffffff) {
          uVar31 = 0xffffffff;
          pcVar20 = __src;
          do {
            cVar8 = *pcVar20;
            uVar31 = uVar31 + 1;
            pcVar20 = pcVar20 + 1;
          } while (cVar8 != '\0');
        }
        if ((int)uVar31 < 1) {
          uVar31 = 0;
        }
        else {
          if (0x7e < (int)uVar31) {
            uVar31 = 0x7f;
          }
          memcpy(pcVar17,__src,(ulong)uVar31);
          pcVar17 = pcVar17 + uVar31;
        }
        *pcVar17 = '\0';
        *(uint *)(puVar26 + 2) = uVar31;
      }
      plVar19 = puVar26 + 0x13;
      *plVar19 = 0;
      puVar26[0x14] = 0;
      lVar15 = *plVar22;
      *plVar22 = (long)plVar19;
      *plVar19 = lVar15;
      puVar26[0x14] = plVar22;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 8) = plVar19;
      }
      iVar30 = iVar30 + 1;
      iVar14 = *(int *)(param_1 + 0x200) + 1;
      *(int *)(param_1 + 0x200) = iVar14;
    } while (iVar13 != iVar30);
  }
  iVar13 = *(int *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  puVar11 = PTR_DAT_04bb2020;
  if (iVar13 != 0) {
    iVar30 = 0;
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      lVar23 = *(long *)(param_1 + 0x1f8);
      lVar25 = lVar23 + -0x98;
      lVar18 = *(long *)(param_1 + 0x88);
      iVar14 = *(int *)(param_1 + 0x90);
      lVar15 = (long)*(int *)(param_1 + 0x94) + (long)iVar30;
      iVar21 = (int)lVar15;
      if (lVar25 != param_1 + 0x158) {
        iVar3 = 0;
        if (iVar14 <= iVar21) {
          iVar3 = iVar14;
        }
        lVar15 = lVar18 + (lVar15 - iVar3) * 0xa0;
        uVar31 = *(uint *)(lVar15 + 0x18);
        do {
          if (*(uint *)(lVar25 + 0x10) == uVar31) {
            if ((int)uVar31 < 1) goto LAB_0378e49c;
            pcVar17 = *(char **)(lVar15 + 0x10);
            if (**(char **)(lVar25 + 8) == *pcVar17) {
              uVar29 = 0;
              do {
                if ((ulong)uVar31 - 1 == uVar29) goto LAB_0378e49c;
                lVar9 = uVar29 + 1;
                lVar10 = uVar29 + 1;
                uVar29 = uVar29 + 1;
              } while ((*(char **)(lVar25 + 8))[lVar9] == pcVar17[lVar10]);
              if (uVar31 <= uVar29) goto LAB_0378e49c;
            }
          }
          lVar23 = *(long *)(lVar23 + 8);
          lVar25 = lVar23 + -0x98;
        } while (lVar25 != param_1 + 0x158);
      }
      iVar3 = 0;
      if (iVar14 <= iVar21) {
        iVar3 = iVar14;
      }
      if (*(int *)(lVar18 + ((long)iVar21 - (long)iVar3) * 0xa0) < 0) {
LAB_0378e5d0:
        lVar15 = 0;
      }
      else {
        iVar14 = *(int *)(param_1 + 0x60);
        if (iVar14 == 0) break;
        if (iVar14 < 1) goto LAB_0378e5d0;
        iVar5 = *(int *)(param_1 + 0x58);
        iVar6 = *(int *)(param_1 + 0x5c);
        iVar4 = 0;
        if (iVar5 <= iVar6) {
          iVar4 = iVar5;
        }
        lVar15 = *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar6 - iVar4) * 8);
        iVar4 = 0;
        if (iVar6 + 1 < iVar5) {
          iVar4 = iVar6 + 1;
        }
        *(int *)(param_1 + 0x5c) = iVar4;
        *(int *)(param_1 + 0x60) = iVar14 + -1;
      }
      lVar18 = lVar18 + ((long)iVar21 - (long)iVar3) * 0xa0;
      local_9c = 0;
      uStack_9b = 0;
      local_b8 = *(ulong **)(lVar18 + 0x10);
      lVar23 = *(long *)(param_1 + 0x38);
      local_a8 = *(undefined4 *)(lVar18 + 4);
      iVar14 = *(int *)(lVar23 + 0x1c0);
      uVar32 = *(undefined4 *)(lVar18 + 8);
      uStack_a4 = (undefined2)uVar32;
      uStack_a2 = (undefined2)((uint)uVar32 >> 0x10);
      local_a0 = *(undefined4 *)(lVar18 + 0xc);
      iVar21 = *(int *)(lVar23 + 0x1b8);
      if (iVar21 <= iVar14) {
LAB_0378e7c0:
        if (lVar15 != 0) {
LAB_0378e7c4:
          iVar13 = *(int *)(param_1 + 0x60);
          iVar30 = *(int *)(param_1 + 0x58);
          if (iVar13 < iVar30) {
            *(int *)(param_1 + 0x60) = iVar13 + 1;
            iVar13 = *(int *)(param_1 + 0x5c) + iVar13;
            iVar14 = 0;
            if (iVar30 <= iVar13) {
              iVar14 = iVar30;
            }
            *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar13 - iVar14) * 8) = lVar15;
          }
        }
        break;
      }
      *(int *)(lVar23 + 0x1c0) = iVar14 + 1;
      if (*(long *)(lVar23 + 0x1b0) == 0) goto LAB_0378e7c0;
      iVar14 = *(int *)(lVar23 + 0x1bc) + iVar14;
      iVar3 = 0;
      if (iVar21 <= iVar14) {
        iVar3 = iVar21;
      }
      puVar27 = (undefined1 *)(*(long *)(lVar23 + 0x1b0) + (long)(iVar14 - iVar3) * 0xb0);
      *puVar27 = 0;
      puVar27[1] = 0;
      *(long *)(puVar27 + 8) = lVar15;
      *(undefined4 *)(puVar27 + 0x10) = local_a8;
      *(undefined4 *)(puVar27 + 0x14) = uVar32;
      *(undefined4 *)(puVar27 + 0x18) = local_a0;
      local_c0 = ppuVar2;
      local_b0 = (undefined1 *)lVar15;
      (**(code **)(puVar11 + 0x28))(&local_c0);
      puVar28 = *(ulong **)(puVar27 + 0x20);
      if (puVar28 != local_b8) {
        lVar18 = 0;
        do {
          pbVar1 = (byte *)((long)local_b8 + lVar18);
          lVar18 = lVar18 + 1;
        } while (*pbVar1 != 0);
        uVar31 = (int)lVar18 - 1;
        if (*(int *)(puVar27 + 0x2c) <= (int)uVar31) {
          uVar31 = *(int *)(puVar27 + 0x2c) - 1;
        }
        if ((int)uVar31 < 1) {
          uVar31 = 0;
        }
        else {
          memcpy(puVar28,local_b8,(ulong)uVar31);
          puVar28 = (ulong *)((long)puVar28 + (ulong)uVar31);
        }
        *(byte *)puVar28 = 0;
        *(uint *)(puVar27 + 0x28) = uVar31;
      }
      if (lVar15 != 0) {
        if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x84)) {
          iVar14 = *(int *)(param_1 + 0x94) + iVar30;
          puVar26 = *(undefined8 **)(param_1 + 0x70);
          iVar21 = 0;
          if (*(int *)(param_1 + 0x90) <= iVar14) {
            iVar21 = *(int *)(param_1 + 0x90);
          }
          if (puVar26 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x70) = *puVar26;
          }
          lVar18 = *(long *)(param_1 + 0x88);
          puVar26[2] = 0;
          puVar26[3] = 0;
          *puVar26 = &PTR_LAB_04b46ea0;
          puVar26[1] = 0;
          puVar26[5] = lVar15;
          puVar26[6] = param_1 + 0x68;
          *(undefined4 *)(puVar26 + 4) = *(undefined4 *)(lVar18 + (long)(iVar14 - iVar21) * 0xa0);
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          lVar15 = FUN_029ce080(param_1 + 0x68,*(undefined8 *)(param_1 + 0x68));
          *(long *)(param_1 + 0x68) = lVar15;
          *(undefined8 *)(lVar15 + 0x18) = 1;
          goto LAB_0378e49c;
        }
        goto LAB_0378e7c4;
      }
LAB_0378e49c:
      iVar30 = iVar30 + 1;
    } while (iVar13 != iVar30);
  }
  *(undefined8 *)(param_1 + 0x94) = 0;
  pppuStack_f8 = &local_c0;
  local_b8 = (ulong *)((ulong)local_b8 & 0xffffffffffffff00);
  local_b0 = (undefined1 *)0x0;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_c0 = (undefined **)(PTR_DAT_04bb3d08 + 0x10);
  local_100 = (undefined *)0x0;
  FUN_03838950(param_1 + 8,&local_100);
  plVar22 = *(long **)(param_1 + 0x1f8);
  while( true ) {
    plVar19 = plVar22;
    plVar7 = plVar19 + -0x13;
    if ((long *)(param_1 + 0x158) == plVar7) break;
    lVar15 = plVar19[-0x13];
    iVar13 = (int)lVar15 + -1;
    plVar22 = (long *)plVar19[1];
    *(int *)(plVar19 + -0x13) = iVar13;
    if (iVar13 == 0 || (int)lVar15 < 1) {
      if (*plVar19 != 0) {
        *(long *)(*plVar19 + 8) = plVar19[1];
      }
      if ((long *)plVar19[1] != (long *)0x0) {
        *(long *)plVar19[1] = *plVar19;
      }
      *plVar19 = 0;
      plVar19[1] = 0;
      *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
      *plVar7 = *(long *)(param_1 + 0x208);
      *(long **)(param_1 + 0x208) = plVar7;
    }
  }
  return;
LAB_0378e0c0:
  do {
    if (iVar14 < *(int *)(lVar18 + 0x20)) {
      lVar18 = *(long *)(lVar18 + 8);
    }
    else {
      if (iVar14 <= *(int *)(lVar18 + 0x20)) {
        local_c0 = (undefined **)CONCAT44(local_c0._4_4_,iVar14);
        lVar15 = FUN_0378e900(lVar15,&local_c0);
        *(long *)(param_1 + 0x68) = lVar15;
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x18) = 1;
        }
        break;
      }
      lVar18 = *(long *)(lVar18 + 0x10);
    }
  } while (lVar18 != 0);
LAB_0378e100:
  iVar14 = *(int *)(param_1 + 0x60);
  iVar21 = *(int *)(param_1 + 0x58);
  if (iVar14 < iVar21) {
    *(int *)(param_1 + 0x60) = iVar14 + 1;
    iVar14 = *(int *)(param_1 + 0x5c) + iVar14;
    iVar3 = 0;
    if (iVar21 <= iVar14) {
      iVar3 = iVar21;
    }
    *(undefined8 **)(*(long *)(param_1 + 0x50) + (long)(iVar14 - iVar3) * 8) = puVar26;
  }
LAB_0378e020:
  iVar30 = iVar30 + 1;
  if (iVar13 == iVar30) goto LAB_0378e138;
  goto LAB_0378e02c;
}

