
void FUN_03bf12d0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  size_t sVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ushort uVar9;
  short sVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  long lVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  ulong *puVar19;
  void *pvVar20;
  long lVar21;
  ushort uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong *puVar31;
  ulong uVar32;
  uint *puVar33;
  ulong *puVar34;
  char *pcVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  long *local_88;
  ulong local_70;
  ulong local_68;
  
  plVar1 = (long *)(param_1 + 8);
  plVar16 = plVar1 + param_2;
  uVar5 = (ulong)param_2;
  if (1 < param_2) {
    uVar5 = 0;
    plVar16 = plVar1;
  }
  if (*plVar16 != 0) {
    FUN_03bf0d30();
    plVar1[uVar5] = 0;
  }
  lVar36 = *(long *)PTR_DAT_04bb2698;
  if (lVar36 == 0) {
    puVar17 = malloc(0x78);
  }
  else {
    plVar16 = param_3;
    if (param_3 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar36 + 8);
      if (lVar15 != 0) {
        plVar16 = (long *)(lVar15 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        puVar17 = (uint *)0x0;
        goto LAB_03bf1398;
      }
    }
    puVar17 = (uint *)(**(code **)(*plVar16 + 0x30))(plVar16,0x78,8);
  }
LAB_03bf1398:
  *puVar17 = 0;
  puVar24 = puVar17 + 4;
  *puVar24 = 0;
  puVar17[8] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar25 = puVar17 + 0x10;
  *puVar25 = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar42 = puVar17 + 0x12;
  puVar42[0] = 0;
  puVar42[1] = 0;
  puVar26 = puVar17 + 0x14;
  *puVar26 = 0;
  puVar17[10] = 0;
  puVar17[0xb] = 0;
  puVar17[0xc] = 0;
  puVar17[0xe] = 0;
  puVar17[0xf] = 0;
  puVar41 = puVar17 + 0x16;
  puVar41[0] = 0;
  puVar41[1] = 0;
  puVar17[0x1c] = 0;
  puVar17[0x1d] = 0;
  puVar17[0x18] = 0;
  puVar17[0x19] = 0;
  puVar17[0x1a] = 0;
  puVar17[0x1b] = 0;
  lVar15 = *(long *)(param_1 + -0x50);
  lVar36 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x20))();
  uVar9 = *(ushort *)(lVar15 + 0x44);
  uVar27 = (ulong)uVar9;
  sVar10 = *(short *)(lVar15 + 0x46);
  uVar28 = (ulong)sVar10;
  plVar16 = (long *)(*(long *)(lVar15 + 0x18) + 0x18);
  plVar6 = plVar16 + param_2;
  if (1 < param_2) {
    plVar6 = plVar16;
  }
  lVar29 = *plVar6;
  lVar30 = *(long *)(lVar29 + 8);
  uVar38 = *(uint *)(lVar30 + 0x1c);
  uVar37 = (ulong)uVar38;
  if (0 < (int)uVar38) {
    sVar2 = uVar37 * 0x28 + 8;
    lVar39 = *(long *)PTR_DAT_04bb2698;
    if (lVar39 == 0) {
      puVar19 = malloc(sVar2);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar39 + 8);
        if (lVar18 != 0) {
          plVar16 = (long *)(lVar18 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03bf156c;
      }
      puVar19 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,sVar2,4);
    }
    if (puVar19 != (ulong *)0x0) {
      uVar32 = uVar37 * 0x28 - 0x28;
      puVar31 = puVar19 + 1;
      *puVar19 = uVar37;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar32;
      puVar34 = puVar31;
      if ((SUB164(auVar11 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
        puVar19[1] = 0;
        *(undefined1 *)(puVar19 + 2) = 1;
        puVar34 = puVar19 + 6;
        puVar19[3] = 0;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined4 *)(puVar19 + 5) = 0xffff;
      }
      if (0x27 < uVar32) {
        do {
          *puVar34 = 0;
          *(undefined1 *)(puVar34 + 1) = 1;
          puVar34[2] = 0;
          *(undefined4 *)(puVar34 + 3) = 0;
          *(undefined4 *)(puVar34 + 4) = 0xffff;
          puVar34[5] = 0;
          *(undefined1 *)(puVar34 + 6) = 1;
          puVar34[7] = 0;
          *(undefined4 *)(puVar34 + 8) = 0;
          *(undefined4 *)(puVar34 + 9) = 0xffff;
          puVar34 = puVar34 + 10;
        } while (puVar34 != puVar31 + uVar37 * 5);
      }
      *puVar17 = uVar38;
      *(ulong **)(puVar17 + 2) = puVar31;
    }
  }
LAB_03bf156c:
  uVar38 = *(uint *)(lVar30 + 0x24);
  uVar37 = (ulong)uVar38;
  if (0 < (int)uVar38) {
    sVar2 = uVar37 * 0x28 + 8;
    lVar39 = *(long *)PTR_DAT_04bb2698;
    if (lVar39 == 0) {
      puVar19 = malloc(sVar2);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar39 + 8);
        if (lVar18 != 0) {
          plVar16 = (long *)(lVar18 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03bf1690;
      }
      puVar19 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,sVar2,4);
    }
    if (puVar19 != (ulong *)0x0) {
      uVar32 = uVar37 * 0x28 - 0x28;
      puVar31 = puVar19 + 1;
      *puVar19 = uVar37;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar32;
      puVar34 = puVar31;
      if ((SUB164(auVar12 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
        puVar19[1] = 0;
        *(undefined1 *)(puVar19 + 2) = 1;
        puVar34 = puVar19 + 6;
        puVar19[3] = 0;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined4 *)(puVar19 + 5) = 0xffff;
      }
      if (0x27 < uVar32) {
        do {
          *puVar34 = 0;
          *(undefined1 *)(puVar34 + 1) = 1;
          puVar34[2] = 0;
          *(undefined4 *)(puVar34 + 3) = 0;
          *(undefined4 *)(puVar34 + 4) = 0xffff;
          puVar34[5] = 0;
          *(undefined1 *)(puVar34 + 6) = 1;
          puVar34[7] = 0;
          *(undefined4 *)(puVar34 + 8) = 0;
          *(undefined4 *)(puVar34 + 9) = 0xffff;
          puVar34 = puVar34 + 10;
        } while (puVar34 != puVar31 + uVar37 * 5);
      }
      puVar17[4] = uVar38;
      *(ulong **)(puVar17 + 6) = puVar31;
    }
  }
LAB_03bf1690:
  uVar38 = *(uint *)(lVar30 + 0x28);
  uVar37 = (ulong)uVar38;
  if (0 < (int)uVar38) {
    sVar2 = uVar37 * 0x28 + 8;
    lVar39 = *(long *)PTR_DAT_04bb2698;
    if (lVar39 == 0) {
      puVar19 = malloc(sVar2);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar39 + 8);
        if (lVar18 != 0) {
          plVar16 = (long *)(lVar18 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03bf17bc;
      }
      puVar19 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,sVar2,4);
    }
    if (puVar19 != (ulong *)0x0) {
      uVar32 = uVar37 * 0x28 - 0x28;
      puVar31 = puVar19 + 1;
      *puVar19 = uVar37;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      puVar34 = puVar31;
      if ((SUB164(auVar13 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
        puVar19[1] = 0;
        *(undefined1 *)(puVar19 + 2) = 1;
        puVar34 = puVar19 + 6;
        puVar19[3] = 0;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined4 *)(puVar19 + 5) = 0xffff;
      }
      if (0x27 < uVar32) {
        do {
          *puVar34 = 0;
          *(undefined1 *)(puVar34 + 1) = 1;
          puVar34[2] = 0;
          *(undefined4 *)(puVar34 + 3) = 0;
          *(undefined4 *)(puVar34 + 4) = 0xffff;
          puVar34[5] = 0;
          *(undefined1 *)(puVar34 + 6) = 1;
          puVar34[7] = 0;
          *(undefined4 *)(puVar34 + 8) = 0;
          *(undefined4 *)(puVar34 + 9) = 0xffff;
          puVar34 = puVar34 + 10;
        } while (puVar34 != puVar31 + uVar37 * 5);
      }
      puVar17[8] = uVar38;
      *(ulong **)(puVar17 + 10) = puVar31;
    }
  }
LAB_03bf17bc:
  param_1 = param_1 + -0x80;
  if (sVar10 != 0) {
    if (sVar10 < 1) {
LAB_03bf1848:
      uVar28 = (ulong)puVar17[0xc];
      if (0 < (int)puVar17[0xc]) goto LAB_03bf1870;
    }
    else {
      sVar2 = (uVar28 & 0xffffffff) << 3;
      lVar39 = *(long *)PTR_DAT_04bb2698;
      if (lVar39 == 0) {
        pvVar20 = malloc(sVar2);
      }
      else {
        plVar16 = param_3;
        if (param_3 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar39 + 8);
          if (lVar18 != 0) {
            plVar16 = (long *)(lVar18 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_03bf1848;
        }
        pvVar20 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,sVar2,8);
      }
      if (pvVar20 == (void *)0x0) goto LAB_03bf1848;
      *(void **)(puVar17 + 0xe) = pvVar20;
      puVar17[0xc] = (int)sVar10;
LAB_03bf1870:
      uVar37 = uVar28 & 3;
      if (uVar28 - 1 < 3) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        do {
          lVar39 = uVar32 * 8;
          uVar32 = uVar32 + 4;
          *(undefined8 *)(*(long *)(puVar17 + 0xe) + lVar39) = 0;
          *(undefined8 *)(*(long *)(puVar17 + 0xe) + lVar39 + 8) = 0;
          *(undefined8 *)(*(long *)(puVar17 + 0xe) + lVar39 + 0x10) = 0;
          *(undefined8 *)(*(long *)(puVar17 + 0xe) + lVar39 + 0x18) = 0;
        } while ((uVar28 & 0xfffffffc) != uVar32);
      }
      if (uVar37 != 0) {
        lVar39 = uVar32 << 3;
        do {
          uVar37 = uVar37 - 1;
          *(undefined8 *)(*(long *)(puVar17 + 0xe) + lVar39) = 0;
          lVar39 = lVar39 + 8;
        } while (uVar37 != 0);
      }
    }
    uVar28 = (ulong)*(uint *)(lVar30 + 0x14);
    if (*(uint *)(lVar30 + 0x14) != 0) {
      uVar37 = 0;
      lVar39 = *(long *)(lVar29 + 0x38);
      local_68 = *(ulong *)PTR_DAT_04bb38c0;
      local_70 = *(ulong *)PTR_DAT_04bb38c8;
      puVar3 = PTR_DAT_04bd23f8 + 0x10;
      do {
        puVar33 = (uint *)(lVar39 + uVar37 * 8);
        uVar32 = (ulong)*puVar33;
        pcVar35 = (char *)(local_70 | uVar32);
        uVar22 = *(ushort *)(lVar15 + 0x46);
        pcVar7 = pcVar35 + 0x100000000;
        if (local_68 <= uVar32) {
          pcVar7 = pcVar35;
        }
        if (0 < (short)uVar22) {
          lVar18 = *(long *)(lVar15 + 0x58);
          uVar32 = 0;
          do {
            iVar14 = strcmp(*(char **)(lVar18 + uVar32 * 8),pcVar7);
            if (iVar14 == 0) {
              uVar38 = (uint)uVar32;
              if ((-1 < (int)uVar38) && ((int)uVar38 < (int)sVar10)) {
                lVar18 = *(long *)PTR_DAT_04bb2698;
                if (lVar18 == 0) {
                  plVar16 = malloc(0x40);
                }
                else {
                  plVar16 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar16 = (long *)(lVar18 + 8);
                    if (lVar21 != 0) {
                      plVar16 = (long *)(lVar21 + 0xa8);
                    }
                    plVar16 = (long *)*plVar16;
                  }
                  plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x40,8);
                }
                plVar16[2] = (long)puVar17;
                plVar16[3] = (long)puVar33;
                plVar16[4] = 0;
                *(undefined4 *)(plVar16 + 5) = 0;
                plVar16[6] = 0;
                *(undefined1 *)(plVar16 + 7) = 0;
                *plVar16 = (long)puVar3;
                plVar16[1] = param_1;
                if (puVar17[0xc] <= uVar38) {
                  uVar32 = 0;
                }
                *(long **)(*(long *)(puVar17 + 0xe) + uVar32 * 8) = plVar16;
                local_68 = *(ulong *)PTR_DAT_04bb38c0;
                local_70 = *(ulong *)PTR_DAT_04bb38c8;
                uVar28 = (ulong)*(uint *)(lVar30 + 0x14);
              }
              break;
            }
            uVar32 = uVar32 + 1;
          } while (uVar22 != uVar32);
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 < uVar28);
    }
  }
  if (uVar9 != 0) {
    lVar39 = *(long *)PTR_DAT_04bb2698;
    if (lVar39 == 0) {
      pvVar20 = malloc(uVar27 << 3);
      if (pvVar20 != (void *)0x0) goto LAB_03bf1af0;
LAB_03bf1b18:
      uVar27 = (ulong)*puVar25;
      if ((int)*puVar25 < 1) goto LAB_03bf1ba8;
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar39 + 8);
        if (lVar18 != 0) {
          plVar16 = (long *)(lVar18 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03bf1b18;
      }
      pvVar20 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,uVar27 << 3,8);
      if (pvVar20 == (void *)0x0) goto LAB_03bf1b18;
LAB_03bf1af0:
      *(void **)puVar42 = pvVar20;
      *puVar25 = (uint)uVar9;
      if (uVar9 == 0) goto LAB_03bf1ba8;
    }
    uVar28 = uVar27 & 3;
    if ((uint)uVar27 < 4) {
      uVar37 = 0;
    }
    else {
      uVar37 = 0;
      do {
        lVar39 = uVar37 * 8;
        uVar37 = uVar37 + 4;
        *(undefined8 *)(*(long *)puVar42 + lVar39) = 0;
        *(undefined8 *)(*(long *)puVar42 + lVar39 + 8) = 0;
        *(undefined8 *)(*(long *)puVar42 + lVar39 + 0x10) = 0;
        *(undefined8 *)(*(long *)puVar42 + lVar39 + 0x18) = 0;
      } while ((uVar27 & 0xfffffffc) != uVar37);
    }
    if (uVar28 != 0) {
      lVar39 = uVar37 << 3;
      do {
        uVar28 = uVar28 - 1;
        *(undefined8 *)(*(long *)puVar42 + lVar39) = 0;
        lVar39 = lVar39 + 8;
      } while (uVar28 != 0);
    }
  }
LAB_03bf1ba8:
  uVar38 = *(uint *)(lVar36 + 0x3c);
  uVar27 = (ulong)uVar38;
  if (uVar38 != 0) {
    if ((int)uVar38 < 1) {
LAB_03bf1c28:
      uVar27 = (ulong)*puVar26;
      if ((int)*puVar26 < 1) goto LAB_03bf1cd8;
    }
    else {
      lVar39 = *(long *)PTR_DAT_04bb2698;
      if (lVar39 == 0) {
        pvVar20 = malloc(uVar27 << 3);
      }
      else {
        plVar16 = param_3;
        if (param_3 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar39 + 8);
          if (lVar18 != 0) {
            plVar16 = (long *)(lVar18 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_03bf1c28;
        }
        pvVar20 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,uVar27 << 3,8);
      }
      if (pvVar20 == (void *)0x0) goto LAB_03bf1c28;
      *(void **)puVar41 = pvVar20;
      *puVar26 = uVar38;
    }
    uVar28 = uVar27 & 3;
    if (uVar27 - 1 < 3) {
      uVar37 = 0;
    }
    else {
      uVar37 = 0;
      do {
        lVar39 = uVar37 * 8;
        uVar37 = uVar37 + 4;
        *(undefined8 *)(*(long *)puVar41 + lVar39) = 0;
        *(undefined8 *)(*(long *)puVar41 + lVar39 + 8) = 0;
        *(undefined8 *)(*(long *)puVar41 + lVar39 + 0x10) = 0;
        *(undefined8 *)(*(long *)puVar41 + lVar39 + 0x18) = 0;
      } while ((uVar27 & 0xfffffffc) != uVar37);
    }
    if (uVar28 != 0) {
      lVar39 = uVar37 << 3;
      do {
        uVar28 = uVar28 - 1;
        *(undefined8 *)(*(long *)puVar41 + lVar39) = 0;
        lVar39 = lVar39 + 8;
      } while (uVar28 != 0);
    }
  }
LAB_03bf1cd8:
  if (*(int *)(lVar30 + 0x20) == 0) {
    iVar14 = *(int *)(lVar30 + 0x28);
    uVar23 = 0;
  }
  else {
    uVar27 = 0;
    lVar29 = *(long *)(lVar29 + 0x50);
    do {
      puVar33 = (uint *)(lVar29 + uVar27 * 0x10);
      pcVar35 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*puVar33);
      pcVar7 = pcVar35 + 0x100000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*puVar33) {
        pcVar7 = pcVar35;
      }
      if (puVar33[1] == 0) {
        uVar22 = *(ushort *)(lVar15 + 0x44);
        if (uVar22 != 0) {
          uVar28 = 0;
          do {
            lVar39 = *(long *)(*(long *)(lVar15 + 0x48) + uVar28 * 8);
            if (lVar39 != 0) {
              (**(code **)(*(long *)(lVar39 + 8) + 0x18))((long *)(lVar39 + 8));
              iVar14 = strcmp(pcVar7,*(char **)(lVar39 + 0x10));
              if (iVar14 == 0) {
                if ((uint)uVar28 < (uint)uVar9) {
                  lVar39 = *(long *)PTR_DAT_04bb2698;
                  if (lVar39 == 0) {
                    pvVar20 = malloc(0x30);
                  }
                  else {
                    plVar16 = param_3;
                    if (param_3 == (long *)0x0) {
                      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
                      plVar16 = (long *)(lVar39 + 8);
                      if (lVar18 != 0) {
                        plVar16 = (long *)(lVar18 + 0xa8);
                      }
                      plVar16 = (long *)*plVar16;
                    }
                    pvVar20 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x30,8);
                  }
                  FUN_03bf2460(pvVar20,param_1,puVar24,uVar28 & 0xffffffff,0,puVar33,param_2);
                  puVar33 = puVar25;
                  puVar40 = puVar42;
                  goto LAB_03bf1d2c;
                }
                break;
              }
              uVar22 = *(ushort *)(lVar15 + 0x44);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar22);
        }
      }
      else {
        uVar37 = (ulong)*(uint *)(lVar36 + 0x3c);
        if (*(uint *)(lVar36 + 0x3c) != 0) {
          uVar28 = 0;
          do {
            lVar39 = *(long *)(*(long *)(lVar36 + 0x40) + uVar28 * 8);
            if (lVar39 != 0) {
              (**(code **)(*(long *)(lVar39 + 8) + 0x18))((long *)(lVar39 + 8));
              iVar14 = strcmp(pcVar7,*(char **)(lVar39 + 0x10));
              if (iVar14 == 0) {
                if ((-1 < (int)uVar28) && ((int)uVar28 < (int)uVar38)) {
                  lVar39 = *(long *)PTR_DAT_04bb2698;
                  if (lVar39 == 0) {
                    pvVar20 = malloc(0x30);
                  }
                  else {
                    plVar16 = param_3;
                    if (param_3 == (long *)0x0) {
                      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
                      plVar16 = (long *)(lVar39 + 8);
                      if (lVar18 != 0) {
                        plVar16 = (long *)(lVar18 + 0xa8);
                      }
                      plVar16 = (long *)*plVar16;
                    }
                    pvVar20 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x30,8);
                  }
                  FUN_03bf2460(pvVar20,param_1,puVar24,uVar28 & 0xffffffff,1,puVar33,param_2);
                  puVar33 = puVar26;
                  puVar40 = puVar41;
LAB_03bf1d2c:
                  uVar37 = uVar28 & 0xffffffff;
                  if (*puVar33 <= (uint)uVar28) {
                    uVar37 = 0;
                  }
                  *(void **)(*(long *)puVar40 + uVar37 * 8) = pvVar20;
                }
                break;
              }
              uVar37 = (ulong)*(uint *)(lVar36 + 0x3c);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar37);
        }
      }
      uVar23 = *(uint *)(lVar30 + 0x20);
      uVar27 = uVar27 + 1;
    } while (uVar27 < uVar23);
    iVar14 = *(int *)(lVar30 + 0x28);
  }
  if (iVar14 != 0) {
    lVar36 = *(long *)PTR_DAT_04bb2698;
    if (lVar36 == 0) {
      plVar16 = malloc(0x20);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar36 + 8);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x20,8);
    }
    plVar16[2] = (long)(puVar17 + 8);
    *plVar16 = (long)(PTR_DAT_04bd2400 + 0x10);
    plVar16[1] = param_1;
    *(undefined1 *)(plVar16 + 3) = 1;
    *(long **)(puVar17 + 0x18) = plVar16;
    uVar23 = *(uint *)(lVar30 + 0x20);
  }
  uVar38 = uVar23 + *(int *)(lVar30 + 0x14) + 1;
  if (0 < (int)uVar38) {
    lVar36 = *(long *)PTR_DAT_04bb2698;
    if (lVar36 == 0) {
      pvVar20 = malloc((long)(int)(uVar38 * 8));
    }
    else {
      local_88 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar8 = (undefined8 *)(lVar36 + 8);
        if (lVar15 != 0) {
          puVar8 = (undefined8 *)(lVar15 + 0xa8);
        }
        local_88 = (long *)*puVar8;
        if (local_88 == (long *)0x0) goto LAB_03bf2074;
      }
      pvVar20 = (void *)(**(code **)(*local_88 + 0x30))(local_88,(long)(int)(uVar38 * 8),8);
    }
    if (pvVar20 != (void *)0x0) {
      *(void **)(puVar17 + 0x1c) = pvVar20;
      puVar17[0x1a] = 0;
      puVar17[0x1b] = uVar38;
    }
  }
LAB_03bf2074:
  uVar38 = puVar17[0xc];
  if (0 < (int)uVar38) {
    uVar23 = 0;
    do {
      uVar4 = uVar23;
      if (uVar38 <= uVar23) {
        uVar4 = 0;
      }
      lVar36 = *(long *)(*(long *)(puVar17 + 0xe) + (ulong)uVar4 * 8);
      if ((lVar36 != 0) && ((int)puVar17[0x1a] < (int)puVar17[0x1b])) {
        *(long *)(*(long *)(puVar17 + 0x1c) + (long)(int)puVar17[0x1a] * 8) = lVar36;
        puVar17[0x1a] = puVar17[0x1a] + 1;
        uVar38 = puVar17[0xc];
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < (int)uVar38);
  }
  uVar38 = *puVar25;
  if (0 < (int)uVar38) {
    uVar23 = 0;
    do {
      uVar4 = uVar23;
      if (uVar38 <= uVar23) {
        uVar4 = 0;
      }
      lVar36 = *(long *)(*(long *)puVar42 + (ulong)uVar4 * 8);
      if ((lVar36 != 0) && ((int)puVar17[0x1a] < (int)puVar17[0x1b])) {
        *(long *)(*(long *)(puVar17 + 0x1c) + (long)(int)puVar17[0x1a] * 8) = lVar36;
        puVar17[0x1a] = puVar17[0x1a] + 1;
        uVar38 = puVar17[0x10];
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < (int)uVar38);
  }
  uVar38 = *puVar26;
  if (0 < (int)uVar38) {
    uVar23 = 0;
    do {
      uVar4 = uVar23;
      if (uVar38 <= uVar23) {
        uVar4 = 0;
      }
      lVar36 = *(long *)(*(long *)puVar41 + (ulong)uVar4 * 8);
      if ((lVar36 != 0) && ((int)puVar17[0x1a] < (int)puVar17[0x1b])) {
        *(long *)(*(long *)(puVar17 + 0x1c) + (long)(int)puVar17[0x1a] * 8) = lVar36;
        puVar17[0x1a] = puVar17[0x1a] + 1;
        uVar38 = puVar17[0x14];
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < (int)uVar38);
  }
  if ((*(long *)(puVar17 + 0x18) != 0) && ((int)puVar17[0x1a] < (int)puVar17[0x1b])) {
    *(long *)(*(long *)(puVar17 + 0x1c) + (long)(int)puVar17[0x1a] * 8) = *(long *)(puVar17 + 0x18);
    puVar17[0x1a] = puVar17[0x1a] + 1;
  }
  plVar1[uVar5] = (long)puVar17;
  return;
}

