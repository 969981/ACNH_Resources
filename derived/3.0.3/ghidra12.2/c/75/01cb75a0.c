
undefined8 FUN_01cb75a0(uint *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ushort *puVar17;
  byte bVar18;
  byte *pbVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  ushort uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  char cVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  undefined1 local_82c;
  uint *local_820;
  undefined *local_810;
  undefined4 local_808;
  undefined4 uStack_804;
  long local_800;
  undefined *local_7f8;
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  uint *local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d0,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar9 = (void *)FUN_01a451fc(&local_7d8);
  memset(pvVar9,0,0x754);
  memcpy(auStack_7d0,&DAT_0535cbc8,0x754);
  puVar2 = PTR_DAT_04bb43c0;
  uVar5 = 0;
  do {
    (**(code **)(local_7d8 + 0x10))(&local_7f8,&local_7d8,uVar5);
    lVar10 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
    uVar7 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar10 + (ulong)(uVar5 >> 5) * 4) & uVar7) != 0) {
      lVar10 = *(long *)puVar2;
      uVar6 = FUN_0277d6c4(&local_7f8);
      if (*(long *)puVar2 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar11 = (**(code **)*param_2)(param_2,&local_7f8), (uVar11 & 1) != 0))
        goto LAB_01cb76b0;
      }
      lVar10 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
      lVar35 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar10 + lVar35) = *(uint *)(lVar10 + lVar35) & (uVar7 ^ 0xffffffff);
    }
LAB_01cb76b0:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  if (DAT_04cd19d8 == 0) {
    pbVar19 = &DAT_0548e140;
LAB_01cb77b0:
    if (*pbVar19 < 8) goto LAB_01cb781c;
LAB_01cb77bc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01cb7814:
      pbVar19 = &DAT_0548e168;
      goto LAB_01cb781c;
    }
    lVar10 = *DAT_0537d558;
    bVar18 = *(byte *)(lVar10 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar18 != 0xffffffffffffffff) {
      puVar25 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
      if (7 < bVar18) {
        puVar25 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar25 & 8) != 0) {
        pbVar19 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar18 = *pbVar19;
    if (7 < bVar18) goto LAB_01cb7814;
  }
  else {
    pbVar19 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar19 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01cb77b0;
      }
      goto LAB_01cb77bc;
    }
LAB_01cb781c:
    bVar18 = *pbVar19;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
  }
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_7f8 = (undefined *)CONCAT71(local_7f8._1_7_,bVar18);
  lVar10 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_7f8,1);
  puVar1 = PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
    return 0;
  }
  lVar35 = lVar10 + 0x194b0;
  if (*(long *)(lVar10 + 0x194b8) == 0) {
    lVar35 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar20 = *(long **)(lVar35 + 0x1100);
    if (plVar20 != (long *)0x0) goto LAB_01cb7894;
LAB_01cb78b8:
    uVar11 = 0;
    lVar10 = *(long *)PTR_DAT_04bb46b0;
  }
  else {
    plVar20 = *(long **)(lVar10 + 0x1a5b0);
    if (plVar20 == (long *)0x0) goto LAB_01cb78b8;
LAB_01cb7894:
    if ((undefined8 *)*plVar20 == (undefined8 *)0x0) goto LAB_01cb78b8;
    uVar11 = (*(code *)**(undefined8 **)*plVar20)();
    uVar11 = uVar11 & 0xffffffff;
    lVar10 = *(long *)puVar1;
  }
  if (lVar10 != 0) {
    lVar33 = *(long *)(lVar35 + 0x10e0);
    lVar34 = *(long *)(lVar35 + 0x10e8);
    puVar21 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar21 + 0x38))();
      if (lVar10 != 0) {
        lVar10 = lVar10 + 0x70;
        goto LAB_01cb7910;
      }
    }
    else if (((puVar21 != (undefined8 *)0x0) && ((long *)puVar21[0x26] != (long *)0x0)) &&
            (lVar10 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar10 != 0)) {
LAB_01cb7910:
      lVar34 = lVar34 + lVar33;
      if ((*(long **)(lVar10 + 0x1c2520) == (long *)0x0) ||
         (puVar21 = (undefined8 *)**(long **)(lVar10 + 0x1c2520), puVar21 == (undefined8 *)0x0)) {
        local_82c = *(undefined1 *)(*(long *)(lVar10 + 0x1c2508) + *(long *)(lVar10 + 0x1c2500) + 1)
        ;
      }
      else {
        uVar12 = (**(code **)*puVar21)();
        local_82c = *(undefined1 *)(*(long *)(lVar10 + 0x1c2508) + *(long *)(lVar10 + 0x1c2500) + 1)
        ;
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x1c2520) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar10 + 0x1c2520) + 8),
           puVar21 != (undefined8 *)0x0)) {
          (**(code **)*puVar21)();
        }
      }
      lVar33 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
      lVar10 = 0;
      uVar12 = 0;
      do {
        puVar25 = (uint *)(lVar33 + lVar10);
        lVar10 = lVar10 + 4;
        uVar5 = *puVar25 - (*puVar25 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar5 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + (int)uVar12;
        uVar12 = (ulong)uVar5;
      } while (lVar10 != 0x754);
      if (uVar5 == 0) {
        uVar37 = 1;
        goto LAB_01cb7bf4;
      }
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        pvVar9 = malloc(uVar12 << 1);
      }
      else {
        lVar33 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar20 = (long *)(lVar10 + 8);
        if (lVar33 != 0) {
          plVar20 = (long *)(lVar33 + 0xa8);
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) goto LAB_01cb7bf0;
        pvVar9 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar12 << 1,8);
      }
      if (pvVar9 != (void *)0x0) {
        *param_1 = uVar5;
        *(void **)(param_1 + 2) = pvVar9;
        lVar10 = *(long *)PTR_DAT_04bb2698;
        if (lVar10 == 0) {
          puVar13 = malloc(uVar12 << 4);
        }
        else {
          lVar33 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar20 = (long *)(lVar10 + 8);
          if (lVar33 != 0) {
            plVar20 = (long *)(lVar33 + 0xa8);
          }
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_01cb7bf0;
          puVar13 = (undefined4 *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar12 << 4,8);
        }
        if (puVar13 != (undefined4 *)0x0) {
          uVar16 = uVar12 & 3;
          puVar22 = puVar13;
          if ((uVar5 & 3) != 0) {
            do {
              *puVar22 = 0;
              uVar16 = uVar16 - 1;
              *(undefined8 *)(puVar22 + 2) = 0;
              puVar22 = puVar22 + 4;
            } while (uVar16 != 0);
          }
          if (2 < (uVar12 - 1 & 0xfffffffffffffff)) {
            do {
              *puVar22 = 0;
              *(undefined8 *)(puVar22 + 2) = 0;
              puVar22[4] = 0;
              *(undefined8 *)(puVar22 + 6) = 0;
              puVar22[8] = 0;
              *(undefined8 *)(puVar22 + 10) = 0;
              puVar22[0xc] = 0;
              *(undefined8 *)(puVar22 + 0xe) = 0;
              puVar22 = puVar22 + 0x10;
            } while (puVar22 != puVar13 + uVar12 * 4);
          }
          param_1[4] = uVar5;
          *(undefined4 **)(param_1 + 6) = puVar13;
          lVar10 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
          uVar12 = 0;
          do {
            if ((*(uint *)(lVar10 + (uVar12 >> 5) * 4) >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0)
            goto LAB_01cb7b70;
            uVar5 = (uint)uVar12 + 1;
            uVar12 = (ulong)uVar5;
          } while (uVar5 != 15000);
          uVar12 = 0;
LAB_01cb7b70:
          lVar33 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
          iVar26 = 15000;
          do {
            if ((*(uint *)(lVar33 + (ulong)(iVar26 - 1U >> 5) * 4) >> (ulong)(iVar26 - 1U & 0x1f) &
                1) != 0) break;
            iVar26 = iVar26 + -1;
          } while (iVar26 != 0);
          uVar37 = 1;
          if (iVar26 != (int)uVar12) {
            uVar5 = 0;
            puVar1 = PTR_DAT_04bc0510 + 0x10;
LAB_01cb7c50:
            puVar13 = (undefined4 *)(PTR_DAT_04bbfe58 + uVar12 * 8);
            if (0x752 < (uint)(uVar12 >> 3)) {
              puVar13 = (undefined4 *)PTR_DAT_04bbfe58;
            }
            puVar22 = (undefined4 *)&DAT_05586008;
            if ((uint)uVar12 < 0x3a99) {
              puVar22 = puVar13;
            }
            local_7e0 = *puVar22;
            uStack_7dc = puVar22[1];
            uVar4 = FUN_0277d6c4(&local_7e0);
            uVar7 = uVar5;
            if (*param_1 <= uVar5) {
              uVar7 = 0;
            }
            *(undefined2 *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 2) = uVar4;
            local_7e8 = (uint *)0x0;
            lVar33 = *(long *)puVar2;
            local_7f0 = local_7e0;
            uStack_7ec = uStack_7dc;
            local_7f8 = puVar1;
            uVar7 = FUN_0277d6c4(&local_7f0);
            if (*(long *)puVar2 == 0) {
LAB_01cb7d40:
              local_820 = (uint *)0x0;
            }
            else {
              lVar33 = *(long *)(lVar33 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if ((*(uint *)(lVar33 + 0x1d8) <= uVar7) ||
                 (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
              goto LAB_01cb7d40;
              lVar33 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(&local_7e0);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if ((*(uint *)(lVar33 + 0x1d8) <= uVar7) ||
                 (local_820 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar7 * 8),
                 local_820 == (uint *)0x0)) goto LAB_01cb7d40;
              local_7e8 = local_820;
            }
            iVar8 = FUN_01ad7260(&local_7f8);
            if (iVar8 == 0) {
LAB_01cb82b0:
              do {
                uVar7 = (int)uVar12 + 1;
                uVar12 = (ulong)uVar7;
                if (0x752 < uVar7 >> 3) {
                  uVar7 = 0x3a95;
                  goto LAB_01cb82e0;
                }
              } while ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) ==
                       0);
              goto LAB_01cb7c40;
            }
            if ((local_820 == (uint *)0x0) || (uVar7 = *local_820, uVar7 == 0)) {
LAB_01cb7e70:
              uVar24 = 0;
              uVar32 = 0;
            }
            else {
              cVar29 = DAT_05326940;
              do {
                if (cVar29 != '\0') {
                  if ((int)DAT_05326a64 < 0) {
                    if (DAT_05326a64 == 0xffffffff) goto joined_r0x01cb7d90;
                    goto LAB_01cb7e70;
                  }
                  if ((short *)((ulong)DAT_05326a64 + (long)local_820) == (short *)0x0) {
LAB_01cb7eb0:
                    uVar32 = 0;
                    uVar24 = 0;
                  }
                  else {
                    uVar6 = (uint)*(short *)((ulong)DAT_05326a64 + (long)local_820);
                    uVar7 = uVar6 << 3;
                    if ((uVar6 >> 4 & 0x1ffffff) < 0x7d) {
                      uVar24 = *(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                               (ulong)(uVar7 & 0x18) & 1;
                    }
                    else {
                      uVar24 = 0;
                    }
                    uVar30 = (uVar6 & 0x1fffffff) >> 4;
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x19 | 1) & 1) != 0)) {
                      uVar32 = uVar24 | 2;
                      uVar24 = uVar24 + 1;
                    }
                    else {
                      uVar32 = uVar24;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1a | 2) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 4;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1b | 3) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 8;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1c | 4) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 0x10;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1d | 5) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 0x20;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1e | 6) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 0x40;
                    }
                    if ((uVar30 < 0x7d) &&
                       ((*(uint *)(lVar34 + (ulong)((uVar6 & 0x1fffffff) >> 2) * 4) >>
                         (ulong)(uVar7 & 0x1f | 7) & 1) != 0)) {
                      uVar24 = uVar24 + 1;
                      uVar32 = uVar32 | 0x80;
                      goto LAB_01cb7ec8;
                    }
                  }
                  break;
                }
                cVar29 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar7 = *local_820;
joined_r0x01cb7d90:
                puVar25 = (uint *)(ulong)uVar7;
                if (puVar25 == (uint *)0x0) {
                  uVar24 = 0;
                  uVar32 = 0;
                  break;
                }
                uVar24 = 0;
                uVar32 = 0;
                if (local_820 == puVar25) break;
                lVar33 = 0xc;
                if (*(char *)((long)local_820 + (10 - (long)puVar25)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)local_820 + (lVar33 - (long)puVar25);
                if (lVar33 == 0) goto LAB_01cb7e70;
                uVar16 = (ulong)*(ushort *)((long)local_820 + (8 - (long)puVar25));
                *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
                if (uVar16 == 0) goto LAB_01cb7eb0;
                piVar28 = (int *)(lVar33 + 4);
                while (piVar28[-1] != -0x34a14cc1) {
                  piVar28 = piVar28 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_01cb7eb0;
                }
                uVar24 = 0;
                uVar32 = 0;
                iVar8 = 0;
                if (*piVar28 != -1) {
                  iVar8 = *piVar28;
                }
                *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar8;
                uVar7 = *local_820;
              } while (uVar7 != 0);
            }
            uVar32 = uVar32 | uVar24 == 0;
            if (uVar24 < 2) {
              uVar24 = 1;
            }
LAB_01cb7ec8:
            uVar7 = param_1[4];
            lVar36 = *(long *)(param_1 + 6);
            lVar33 = *(long *)PTR_DAT_04bb2698;
            if (lVar33 == 0) {
              puVar15 = malloc((ulong)uVar24);
joined_r0x01cb7f44:
              if (puVar15 != (undefined1 *)0x0) {
                uVar6 = uVar5;
                if (uVar7 <= uVar5) {
                  uVar6 = 0;
                }
                puVar25 = (uint *)(lVar36 + (ulong)uVar6 * 0x10);
                *puVar25 = uVar24;
                *(undefined1 **)(puVar25 + 2) = puVar15;
                iVar8 = FUN_01ad7260(&local_7f8);
                if (((iVar8 == 0) || (uVar16 = FUN_01ae6580(&local_7f8), (uVar16 & 1) == 0)) ||
                   (iVar8 = FUN_01afe130(&local_7f8), iVar8 == 1)) {
                  bVar18 = 0;
                }
                else {
                  bVar18 = 1;
                }
                if (local_820 == (uint *)0x0) goto LAB_01cb80a0;
                uVar7 = *local_820;
                uVar23 = 0;
                if ((uVar7 == 0) || (local_820 == (uint *)(ulong)uVar7)) goto LAB_01cb80a4;
                puVar25 = (uint *)((long)local_820 - (long)(ulong)uVar7);
                if (*puVar25 == 0) goto LAB_01cb80a0;
                uVar7 = puVar25[1];
                if ((uVar7 == 0) || ((ulong)(ushort)puVar25[2] == 0)) {
LAB_01cb8030:
                  if ((*puVar25 == 0) ||
                     ((uVar7 = puVar25[1], uVar7 == 0 || ((ulong)(ushort)puVar25[2] == 0)))) {
LAB_01cb80a0:
                    uVar23 = 0;
                  }
                  else {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
                    uVar23 = 0;
                    if (lVar33 != 0) {
                      uVar6 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar6 = (uint)((ulong)((long)local_820 - lVar33) / (ulong)uVar7);
                      }
                      if (*puVar25 <= uVar6) {
                        uVar6 = 0xffffffff;
                      }
                      if ((DAT_05327190 <= uVar6) ||
                         (uVar23 = *(ushort *)(DAT_05327198 + (long)(int)uVar6 * 2), 0x13d < uVar23)
                         ) goto LAB_01cb80a0;
                    }
                  }
LAB_01cb80a4:
                  bVar3 = (bool)(bVar18 ^ 1);
                  if (uVar23 == 0x121) {
                    bVar3 = true;
                  }
                  if (bVar3) goto LAB_01cb81e0;
                  local_810 = (undefined *)CONCAT71(local_810._1_7_,local_82c);
                  FUN_01af193c(&local_7e0,&local_810,PTR_LAB_04bc0418);
                  local_800 = 0;
                  local_808 = local_7e0;
                  uStack_804 = uStack_7dc;
                  lVar33 = *(long *)puVar2;
                  local_810 = PTR_DAT_04bc0510 + 0x10;
                  uVar7 = FUN_0277d6c4(&local_808);
                  if (*(long *)puVar2 != 0) {
                    lVar33 = *(long *)(lVar33 + 0x57e58);
                    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                    if ((uVar7 < *(uint *)(lVar33 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                      lVar33 = *(long *)PTR_DAT_04bc0428;
                      uVar7 = FUN_0277d6c4(&local_7e0);
                      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                      if (uVar7 < *(uint *)(lVar33 + 0x1d8)) {
                        lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar7 * 8);
                        if (lVar33 != 0) {
                          local_800 = lVar33;
                        }
                      }
                    }
                  }
                  iVar8 = FUN_01ad7260(&local_810);
                  if ((iVar8 == 0) ||
                     (puVar17 = (ushort *)FUN_01afd600(&local_810), puVar17 == (ushort *)0x0)) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = *puVar17 & 7;
                    uVar6 = FUN_01ad7260(&local_810);
                    if (uVar6 <= uVar7) {
                      uVar7 = 0;
                    }
                  }
                  if ((1 << (ulong)uVar7 & uVar32) == 0) goto LAB_01cb81e0;
                  uVar24 = uVar24 - 1;
                  *puVar15 = (char)uVar7;
                  if (uVar24 == 0) goto LAB_01cb82b0;
                  uVar32 = uVar32 & (1 << (ulong)uVar7 ^ 0xffffffffU);
                  iVar8 = 1;
                }
                else {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar25 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
                  if (lVar33 == 0) goto LAB_01cb8030;
                  uVar6 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar6 = (uint)((ulong)((long)local_820 - lVar33) / (ulong)uVar7);
                  }
                  if (*puVar25 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((DAT_05327190 <= uVar6) ||
                     (*(short *)(DAT_05327198 + (long)(int)uVar6 * 2) != 0x120)) goto LAB_01cb8030;
LAB_01cb81e0:
                  iVar8 = 0;
                }
                uVar7 = 1;
                uVar6 = uVar32 - (uVar32 >> 1 & 0x55555555);
                uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                iVar27 = 2;
                uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
                uVar6 = uVar6 + (uVar6 >> 8);
                do {
                  if (uVar32 == 0) {
LAB_01cb8220:
                    cVar29 = -1;
                  }
                  else {
                    cVar29 = -1;
                    if (uVar7 <= (uVar6 + (uVar6 >> 0x10) & 0x3f)) {
                      iVar31 = iVar27;
                      uVar30 = uVar32;
                      do {
                        iVar31 = iVar31 + -1;
                        if (iVar31 < 2) {
                          uVar30 = uVar30 - 1 & (uVar30 ^ 0xffffffff);
                          uVar30 = uVar30 - (uVar30 >> 1 & 0x55555555);
                          uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
                          uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
                          iVar31 = uVar30 + (uVar30 >> 8);
                          cVar29 = (char)iVar31 + (char)((uint)iVar31 >> 0x10);
                          goto LAB_01cb8224;
                        }
                        uVar30 = uVar30 - 1 & uVar30;
                      } while (uVar30 != 0);
                      goto LAB_01cb8220;
                    }
                  }
LAB_01cb8224:
                  puVar15[iVar8] = cVar29;
                  bVar3 = uVar7 != uVar24;
                  uVar7 = uVar7 + 1;
                  iVar8 = iVar8 + 1;
                  iVar27 = iVar27 + 1;
                } while (bVar3);
                goto LAB_01cb82b0;
              }
            }
            else {
              lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar20 = (long *)(lVar33 + 8);
              if (lVar14 != 0) {
                plVar20 = (long *)(lVar14 + 0xa8);
              }
              plVar20 = (long *)*plVar20;
              if (plVar20 != (long *)0x0) {
                puVar15 = (undefined1 *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar24,8);
                goto joined_r0x01cb7f44;
              }
            }
            uVar37 = 0;
          }
          goto LAB_01cb7bf4;
        }
      }
    }
  }
LAB_01cb7bf0:
  uVar37 = 0;
LAB_01cb7bf4:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar35 + 0x1100) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(lVar35 + 0x1100) + 8), puVar21 != (undefined8 *)0x0)) {
    (**(code **)*puVar21)();
  }
  return uVar37;
  while( true ) {
    uVar6 = uVar7 + 1;
    if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
    goto LAB_01cb7c38;
    if ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)
    goto LAB_01cb7c3c;
    uVar7 = uVar7 - 3;
    if (uVar7 == 0xfffffffd) break;
LAB_01cb82e0:
    uVar6 = uVar7 + 2;
    if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
LAB_01cb7c38:
      uVar7 = uVar6;
LAB_01cb7c3c:
      uVar12 = (ulong)(uVar7 + 1);
      goto LAB_01cb7c40;
    }
  }
  uVar12 = 0;
LAB_01cb7c40:
  uVar5 = uVar5 + 1;
  uVar37 = 1;
  if (iVar26 == (int)uVar12) goto LAB_01cb7bf4;
  goto LAB_01cb7c50;
}

