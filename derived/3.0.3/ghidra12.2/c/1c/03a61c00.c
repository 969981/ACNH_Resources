
void FUN_03a61c00(long param_1,undefined4 *param_2,long param_3,long *param_4,long param_5)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  void *pvVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  ulong *puVar26;
  uint *puVar27;
  size_t sVar28;
  undefined4 uVar29;
  ulong uVar30;
  ulong *puVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined4 uStack_9a0;
  undefined1 local_99c [4];
  undefined *local_998;
  undefined1 *puStack_990;
  undefined4 local_988;
  undefined1 local_984 [255];
  undefined1 local_885;
  long local_880;
  undefined8 local_878;
  int local_870;
  int local_86c;
  int local_868;
  int local_864;
  int local_860;
  uint local_66c;
  uint local_668;
  uint local_664;
  uint local_660;
  undefined1 local_59d;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  
  lVar24 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 0x278) = param_3;
  plVar17 = (long *)PTR_DAT_04bb2698;
  if (*(char *)(lVar24 + 0xe50) != '\0') {
    local_885 = 0;
    local_9a8._0_4_ = *param_2;
    local_984[0] = 0;
    local_9b0 = PTR_DAT_04bd1550 + 0x10;
    puStack_990 = local_984;
    local_998 = PTR_DAT_04bb21f8 + 0x10;
    local_988 = 0x100;
    local_9a8._4_4_ = 10;
    uStack_9a0 = 0x14;
    uVar23 = *(uint *)(param_3 + 0x18);
    lVar24 = *(long *)(param_3 + 0x20);
    local_86c = (int)**(short **)PTR_DAT_04bd14c8;
    local_66c = (uint)**(short **)PTR_DAT_04bd14d0;
    iVar14 = local_86c;
    if (uVar23 <= (uint)(int)**(short **)PTR_DAT_04bd14c8) {
      iVar14 = 0;
    }
    uVar32 = (uint)**(short **)PTR_DAT_04bd14d0;
    if (uVar23 < local_66c || uVar23 == uVar32) {
      uVar32 = 0;
    }
    uVar9 = *(ushort *)(lVar24 + (long)iVar14 * 4 + 2);
    local_46c = (uint)uVar9;
    uVar10 = *(ushort *)(lVar24 + (long)(int)uVar32 * 4 + 2);
    local_26c = (uint)uVar10;
    local_868 = (int)**(short **)PTR_DAT_04bd14d8;
    local_668 = (uint)**(short **)PTR_DAT_04bd14e0;
    iVar14 = local_868;
    if (uVar23 <= (uint)(int)**(short **)PTR_DAT_04bd14d8) {
      iVar14 = 0;
    }
    uVar32 = (uint)**(short **)PTR_DAT_04bd14e0;
    if (uVar23 < local_668 || uVar23 == uVar32) {
      uVar32 = 0;
    }
    local_468 = (uint)*(ushort *)(lVar24 + (long)iVar14 * 4 + 2);
    local_268 = (uint)*(ushort *)(lVar24 + (long)(int)uVar32 * 4 + 2);
    local_864 = (int)**(short **)PTR_DAT_04bd18a8;
    iVar14 = local_864;
    if (uVar23 <= (uint)(int)**(short **)PTR_DAT_04bd18a8) {
      iVar14 = 0;
    }
    local_664 = (uint)**(short **)PTR_DAT_04bd18b0;
    uVar32 = (uint)**(short **)PTR_DAT_04bd18b0;
    if (uVar23 < local_664 || uVar23 == uVar32) {
      uVar32 = 0;
    }
    local_464 = (uint)*(ushort *)(lVar24 + (long)iVar14 * 4 + 2);
    lVar34 = *(long *)PTR_DAT_04bb2698;
    local_264 = (uint)*(ushort *)(lVar24 + (long)(int)uVar32 * 4 + 2);
    local_860 = (int)**(short **)PTR_DAT_04bd18b8;
    iVar14 = local_860;
    if (uVar23 <= (uint)(int)**(short **)PTR_DAT_04bd18b8) {
      iVar14 = 0;
    }
    local_660 = (uint)**(short **)PTR_DAT_04bd18c0;
    uVar32 = (uint)**(short **)PTR_DAT_04bd18c0;
    if (uVar23 < local_660 || uVar23 == uVar32) {
      uVar32 = 0;
    }
    local_460 = (uint)*(ushort *)(lVar24 + (long)iVar14 * 4 + 2);
    local_878 = CONCAT44(local_468 + uVar9 + local_464 + local_460,4);
    local_260 = (uint)*(ushort *)(lVar24 + (long)(int)uVar32 * 4 + 2);
    local_870 = local_268 + uVar10 + local_264 + local_260;
    local_880 = param_3;
    if (lVar34 == 0) {
      pvVar16 = malloc(0x28c8);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar34 + 8);
        if (lVar24 != 0) {
          plVar15 = (long *)(lVar24 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
      }
      pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x28c8,8);
    }
    FUN_03a20370();
    *(void **)(param_1 + 0x280) = pvVar16;
    FUN_03a21060(pvVar16,&local_9b0,param_4);
    lVar24 = *(long *)(param_1 + 0x280);
    if (0 < (int)*(uint *)(lVar24 + 0x308)) {
      uVar30 = 0;
      piVar25 = (int *)(lVar24 + 0x714);
      do {
        piVar6 = piVar25 + -0x100;
        if (0x7f < uVar30) {
          piVar6 = (int *)(lVar24 + 0x314);
        }
        if (*piVar6 == (int)**(short **)PTR_DAT_04bd18a8) {
          if ((uVar30 & 0xffffff80) != 0) {
            piVar25 = (int *)(lVar24 + 0x714);
          }
          goto LAB_03a61f30;
        }
        uVar30 = uVar30 + 1;
        piVar25 = piVar25 + 1;
      } while (*(uint *)(lVar24 + 0x308) != uVar30);
    }
    piVar25 = (int *)(lVar24 + 0x714);
LAB_03a61f30:
    if (0 < *piVar25) {
      lVar24 = *plVar17;
      if (lVar24 == 0) {
        puVar18 = malloc(0x68);
      }
      else {
        plVar17 = param_4;
        if (param_4 == (long *)0x0) {
          lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar24 + 8);
          if (lVar34 != 0) {
            plVar17 = (long *)(lVar34 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            puVar18 = (undefined8 *)0x0;
            goto LAB_03a61fa0;
          }
        }
        puVar18 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x68,8);
      }
LAB_03a61fa0:
      puVar18[10] = 0;
      *(undefined4 *)(puVar18 + 0xb) = 0;
      puVar18[0xc] = 0;
      puVar18[8] = 0;
      *(undefined4 *)(puVar18 + 9) = 0;
      *puVar18 = &PTR_LAB_04b70248;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      lVar24 = *(long *)(param_1 + 0x280);
      puVar1 = (uint *)(lVar24 + 0x314);
      *(undefined8 **)(param_1 + 0x2e0) = puVar18;
      if (0 < (int)*(uint *)(lVar24 + 0x308)) {
        uVar30 = 0;
        puVar27 = (uint *)(lVar24 + 0x714);
        do {
          puVar7 = puVar27 + -0x100;
          if (0x7f < uVar30) {
            puVar7 = puVar1;
          }
          if (*puVar7 == (int)**(short **)PTR_DAT_04bd18a8) {
            if ((uVar30 & 0xffffff80) != 0) {
              puVar27 = (uint *)(lVar24 + 0x714);
            }
            goto LAB_03a6203c;
          }
          uVar30 = uVar30 + 1;
          puVar27 = puVar27 + 1;
        } while (*(uint *)(lVar24 + 0x308) != uVar30);
      }
      puVar27 = (uint *)(lVar24 + 0x714);
LAB_03a6203c:
      uVar23 = *puVar27;
      uVar30 = (ulong)uVar23;
      if (0 < (int)uVar23) {
        lVar34 = (long)(int)uVar23;
        sVar28 = (ulong)uVar23 * 0x28 + 8;
        lVar35 = *(long *)PTR_DAT_04bb2698;
        if (lVar35 == 0) {
          puVar20 = malloc(sVar28);
joined_r0x03a620c8:
          if (puVar20 != (ulong *)0x0) {
            uVar33 = uVar30 * 0x28 - 0x28;
            puVar26 = puVar20 + 1;
            *puVar20 = uVar30;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33;
            puVar31 = puVar26;
            if ((SUB164(auVar11 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
              puVar20[1] = (ulong)&PTR_LAB_04b70268;
              puVar20[3] = 0;
              *(undefined4 *)(puVar20 + 2) = 0xffffffff;
              *(undefined4 *)(puVar20 + 4) = 0xffffffff;
              puVar31 = puVar20 + 6;
              puVar20[5] = 0;
            }
            if (0x27 < uVar33) {
              do {
                *puVar31 = (ulong)&PTR_LAB_04b70268;
                *(undefined4 *)(puVar31 + 1) = 0xffffffff;
                puVar31[2] = 0;
                *(undefined4 *)(puVar31 + 3) = 0xffffffff;
                *(undefined4 *)(puVar31 + 6) = 0xffffffff;
                puVar31[7] = 0;
                *(undefined4 *)(puVar31 + 8) = 0xffffffff;
                puVar31[9] = 0;
                puVar31[4] = 0;
                puVar31[5] = (ulong)&PTR_LAB_04b70268;
                puVar31 = puVar31 + 10;
              } while (puVar31 != puVar26 + uVar30 * 5);
            }
            *(uint *)(puVar18 + 0xb) = uVar23;
            puVar18[0xc] = puVar26;
          }
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 == 0) goto LAB_03a62210;
          if (param_4 != (long *)0x0) {
            plVar17 = param_4;
LAB_03a621d0:
            pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,lVar34 << 3,8);
            goto joined_r0x03a621e4;
          }
LAB_03a621a4:
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a621d0;
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 != 0) goto LAB_03a62234;
LAB_03a62558:
          pvVar16 = malloc(lVar34 << 3);
          if (pvVar16 != (void *)0x0) {
LAB_03a62278:
            puVar18[8] = pvVar16;
            *(undefined4 *)(puVar18 + 7) = 0;
            *(uint *)((long)puVar18 + 0x3c) = uVar23;
          }
        }
        else {
          plVar17 = param_4;
          if (param_4 != (long *)0x0) {
LAB_03a620a0:
            puVar20 = (ulong *)(**(code **)(*plVar17 + 0x30))(plVar17,sVar28,8);
            goto joined_r0x03a620c8;
          }
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a620a0;
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 != 0) goto LAB_03a621a4;
LAB_03a62210:
          pvVar16 = malloc(lVar34 << 3);
joined_r0x03a621e4:
          if (pvVar16 != (void *)0x0) {
            puVar18[6] = pvVar16;
            *(undefined4 *)(puVar18 + 5) = 0;
            *(uint *)((long)puVar18 + 0x2c) = uVar23;
          }
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 == 0) goto LAB_03a62558;
          if (param_4 != (long *)0x0) {
            plVar17 = param_4;
LAB_03a62260:
            pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,lVar34 << 3,8);
            if (pvVar16 == (void *)0x0) goto LAB_03a62280;
            goto LAB_03a62278;
          }
LAB_03a62234:
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a62260;
        }
LAB_03a62280:
        puVar4 = PTR_DAT_04bd1908;
        uVar32 = 0;
        puVar2 = PTR_DAT_04bd1530 + 0x10;
        do {
          lVar34 = puVar18[0xc];
          uVar5 = uVar32;
          if (*(uint *)(puVar18 + 0xb) <= uVar32) {
            uVar5 = 0;
          }
          *(uint *)(lVar34 + (ulong)uVar5 * 0x28 + 8) = uVar32;
          puVar27 = puVar1;
          if (0 < (int)*(uint *)(lVar24 + 0x308)) {
            uVar30 = 0;
            do {
              puVar7 = puVar27;
              if (0x7f < uVar30) {
                puVar7 = puVar1;
              }
              if (*puVar7 == (int)**(short **)PTR_DAT_04bd18a8) {
                if ((uVar30 & 0xffffff80) != 0) {
                  puVar27 = puVar1;
                }
                goto LAB_03a62328;
              }
              uVar30 = uVar30 + 1;
              puVar27 = puVar27 + 1;
            } while (*(uint *)(lVar24 + 0x308) != uVar30);
            puVar27 = puVar1;
          }
LAB_03a62328:
          lVar35 = *(long *)(lVar24 + 0x300);
          uVar8 = *puVar27;
          if (*(uint *)(lVar35 + 0x18) <= uVar8) {
            uVar8 = 0;
          }
          if (uVar32 < *(ushort *)(*(long *)(lVar35 + 0x20) + (long)(int)uVar8 * 4 + 2)) {
            plVar17 = *(long **)(*(long *)(lVar35 + 0x30) +
                                ((ulong)*(ushort *)(*(long *)(lVar35 + 0x20) + (long)(int)uVar8 * 4)
                                + (ulong)uVar32) * 8);
          }
          else {
            plVar17 = (long *)0x0;
          }
          if (((*puVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar4), iVar14 != 0)) {
            *(undefined **)PTR_DAT_04bd1900 = puVar2;
            __cxa_guard_release(puVar4);
          }
          if (plVar17 == (long *)0x0) {
            plVar17 = (long *)0x0;
          }
          else {
            uVar30 = (**(code **)(*plVar17 + 0x48))(plVar17,PTR_DAT_04bd1900);
            if ((uVar30 & 1) == 0) {
              plVar17 = (long *)0x0;
            }
          }
          lVar35 = lVar34 + (ulong)uVar5 * 0x28;
          plVar15 = (long *)(lVar35 + 0x10);
          *plVar15 = (long)plVar17;
          *(undefined8 *)(lVar35 + 0x20) = 0;
          if (*(int *)(puVar18 + 5) < *(int *)((long)puVar18 + 0x2c)) {
            *(ulong *)(puVar18[6] + (long)*(int *)(puVar18 + 5) * 8) = lVar34 + (ulong)uVar5 * 0x28;
            *(int *)(puVar18 + 5) = *(int *)(puVar18 + 5) + 1;
            plVar17 = (long *)*plVar15;
          }
          if (((char)plVar17[0xb] != '\0') &&
             (*(uint *)(plVar17[0x197] + 0xb90) = *(uint *)(plVar17[0x197] + 0xb90) | 1,
             (char)plVar17[0xb] != '\0')) {
            *(undefined1 *)(plVar17 + 0xb) = 0;
            *(uint *)(plVar17[7] + 0x260) = *(uint *)(plVar17[7] + 0x260) | 1;
          }
          lVar34 = *plVar15;
          if ((*(byte *)(lVar34 + 0xb2) & 1) != 0) {
            *(byte *)(lVar34 + 0xb2) = *(byte *)(lVar34 + 0xb2) & 0xfe;
            *(ushort *)(*(long *)(lVar34 + 0x38) + 0x8c) =
                 *(ushort *)(*(long *)(lVar34 + 0x38) + 0x8c) | 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar23);
      }
      plVar17 = (long *)PTR_DAT_04bb2698;
      lVar24 = *(long *)PTR_DAT_04bb2698;
      if (lVar24 == 0) {
        puVar21 = malloc(0x2808);
        if (puVar21 == (undefined8 *)0x0) goto LAB_03a624c8;
LAB_03a624e8:
        puVar22 = puVar21 + 6;
        *puVar21 = 0x80;
        lVar24 = 0x2800;
        do {
          puVar22[-5] = &PTR_LAB_04b70288;
          puVar22[-4] = 0;
          lVar24 = lVar24 + -0x50;
          *(undefined4 *)puVar22 = 0xffffffff;
          puVar22[-1] = 0;
          puVar22[3] = 0;
          *(undefined4 *)(puVar22 + 4) = 0xffff;
          puVar22[-3] = 0;
          puVar22[-2] = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22 = puVar22 + 10;
        } while (lVar24 != 0);
        puVar18[10] = puVar21 + 1;
        *(undefined4 *)(puVar18 + 9) = 0x80;
        lVar24 = *plVar17;
        if (lVar24 != 0) goto LAB_03a6254c;
LAB_03a625d8:
        pvVar16 = malloc(0x400);
joined_r0x03a625e0:
        if (pvVar16 != (void *)0x0) {
          puVar18[1] = 0x8000000000;
          puVar18[2] = pvVar16;
        }
        lVar24 = *plVar17;
        if (lVar24 == 0) goto LAB_03a62880;
        if (param_4 != (long *)0x0) {
          plVar15 = param_4;
LAB_03a62620:
          pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x400,8);
          if (pvVar16 == (void *)0x0) goto LAB_03a62640;
          goto LAB_03a62638;
        }
LAB_03a625f4:
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a62620;
      }
      else {
        plVar15 = param_4;
        if (param_4 != (long *)0x0) {
LAB_03a624ac:
          puVar21 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x2808,8);
          if (puVar21 != (undefined8 *)0x0) goto LAB_03a624e8;
LAB_03a624c8:
          lVar24 = *plVar17;
          if (lVar24 == 0) goto LAB_03a625d8;
LAB_03a6254c:
          plVar15 = param_4;
          if (param_4 == (long *)0x0) goto LAB_03a62574;
LAB_03a625a0:
          pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x400,8);
          goto joined_r0x03a625e0;
        }
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a624ac;
        lVar24 = *plVar17;
        if (lVar24 == 0) goto LAB_03a625d8;
LAB_03a62574:
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a625a0;
        lVar24 = *plVar17;
        if (lVar24 != 0) goto LAB_03a625f4;
LAB_03a62880:
        pvVar16 = malloc(0x400);
        if (pvVar16 != (void *)0x0) {
LAB_03a62638:
          puVar18[3] = 0x8000000000;
          puVar18[4] = pvVar16;
        }
      }
LAB_03a62640:
      uVar23 = 0;
      do {
        lVar24 = puVar18[10];
        uVar32 = uVar23;
        if (*(uint *)(puVar18 + 9) <= uVar23) {
          uVar32 = 0;
        }
        lVar34 = lVar24 + (ulong)uVar32 * 0x50;
        *(undefined8 *)(lVar34 + 0x40) = 0;
        *(undefined8 *)(lVar34 + 0x18) = 0;
        *(undefined8 *)(lVar34 + 0x20) = 0;
        *(undefined4 *)(lVar34 + 0x48) = 0xffff;
        if (*(int *)(puVar18 + 1) < *(int *)((long)puVar18 + 0xc)) {
          *(ulong *)(puVar18[2] + (long)*(int *)(puVar18 + 1) * 8) = lVar24 + (ulong)uVar32 * 0x50;
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        }
        puVar13 = PTR_DAT_04bd1918;
        puVar4 = PTR_DAT_04bd1910;
        puVar2 = PTR_DAT_04bd1898;
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x80);
      iVar14 = (int)**(short **)PTR_DAT_04bd1898;
      if (*(uint *)(*(long *)(param_1 + 0x278) + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bd1898) {
        iVar14 = 0;
      }
      uVar9 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x278) + 0x20) + (long)iVar14 * 4 + 2);
      if (uVar9 != 0) {
        lVar24 = 0;
        puVar3 = PTR_DAT_04bbd8c8 + 0x10;
        do {
          lVar34 = *(long *)(param_1 + 0x278);
          iVar14 = (int)**(short **)puVar2;
          if (*(uint *)(lVar34 + 0x18) <= (uint)(int)**(short **)puVar2) {
            iVar14 = 0;
          }
          if ((uint)lVar24 < (uint)*(ushort *)(*(long *)(lVar34 + 0x20) + (long)iVar14 * 4 + 2)) {
            plVar15 = *(long **)(*(long *)(lVar34 + 0x30) +
                                (lVar24 + (ulong)*(ushort *)
                                                  (*(long *)(lVar34 + 0x20) + (long)iVar14 * 4)) * 8
                                );
          }
          else {
            plVar15 = (long *)0x0;
          }
          if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
            *(undefined **)puVar4 = puVar3;
            __cxa_guard_release(puVar13);
          }
          uVar30 = (**(code **)(*plVar15 + 0x48))(plVar15,puVar4);
          lVar24 = lVar24 + 1;
          if ((uVar30 & 1) == 0) {
            plVar15 = (long *)0x0;
          }
          plVar15[0x5d] = *(long *)(param_1 + 0x280);
        } while ((uint)uVar9 != (uint)lVar24);
      }
    }
    lVar24 = *(long *)(param_1 + 0x280);
    if (0 < (int)*(uint *)(lVar24 + 0x308)) {
      uVar30 = 0;
      piVar25 = (int *)(lVar24 + 0x714);
      do {
        piVar6 = piVar25 + -0x100;
        if (0x7f < uVar30) {
          piVar6 = (int *)(lVar24 + 0x314);
        }
        if (*piVar6 == (int)**(short **)PTR_DAT_04bd18b8) {
          if ((uVar30 & 0xffffff80) != 0) {
            piVar25 = (int *)(lVar24 + 0x714);
          }
          iVar14 = *piVar25;
          goto joined_r0x03a62828;
        }
        uVar30 = uVar30 + 1;
        piVar25 = piVar25 + 1;
      } while (*(uint *)(lVar24 + 0x308) != uVar30);
    }
    iVar14 = *(int *)(lVar24 + 0x714);
joined_r0x03a62828:
    if (iVar14 != 0) {
      lVar24 = *plVar17;
      if (lVar24 == 0) {
        puVar18 = malloc(0x68);
      }
      else {
        plVar17 = param_4;
        if (param_4 == (long *)0x0) {
          lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar24 + 8);
          if (lVar34 != 0) {
            plVar17 = (long *)(lVar34 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            puVar18 = (undefined8 *)0x0;
            goto LAB_03a6289c;
          }
        }
        puVar18 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x68,8);
      }
LAB_03a6289c:
      puVar18[10] = 0;
      *(undefined4 *)(puVar18 + 0xb) = 0;
      puVar18[0xc] = 0;
      puVar18[8] = 0;
      *(undefined4 *)(puVar18 + 9) = 0;
      *puVar18 = &PTR_LAB_04b702b0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      lVar24 = *(long *)(param_1 + 0x280);
      puVar1 = (uint *)(lVar24 + 0x314);
      *(undefined8 **)(param_1 + 0x2e8) = puVar18;
      if (0 < (int)*(uint *)(lVar24 + 0x308)) {
        uVar30 = 0;
        puVar27 = (uint *)(lVar24 + 0x714);
        do {
          puVar7 = puVar27 + -0x100;
          if (0x7f < uVar30) {
            puVar7 = puVar1;
          }
          if (*puVar7 == (int)**(short **)PTR_DAT_04bd18b8) {
            if ((uVar30 & 0xffffff80) != 0) {
              puVar27 = (uint *)(lVar24 + 0x714);
            }
            goto LAB_03a6293c;
          }
          uVar30 = uVar30 + 1;
          puVar27 = puVar27 + 1;
        } while (*(uint *)(lVar24 + 0x308) != uVar30);
      }
      puVar27 = (uint *)(lVar24 + 0x714);
LAB_03a6293c:
      uVar23 = *puVar27;
      uVar30 = (ulong)uVar23;
      if (0 < (int)uVar23) {
        lVar34 = (long)(int)uVar23;
        sVar28 = (ulong)uVar23 * 0x28 + 8;
        lVar35 = *(long *)PTR_DAT_04bb2698;
        if (lVar35 == 0) {
          puVar20 = malloc(sVar28);
joined_r0x03a629c8:
          if (puVar20 != (ulong *)0x0) {
            uVar33 = uVar30 * 0x28 - 0x28;
            puVar26 = puVar20 + 1;
            *puVar20 = uVar30;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar33;
            puVar31 = puVar26;
            if ((SUB164(auVar12 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
              puVar20[1] = (ulong)&PTR_LAB_04b702d0;
              puVar20[3] = 0;
              *(undefined4 *)(puVar20 + 2) = 0xffffffff;
              *(undefined4 *)(puVar20 + 4) = 0xffffffff;
              puVar31 = puVar20 + 6;
              puVar20[5] = 0;
            }
            if (0x27 < uVar33) {
              do {
                *puVar31 = (ulong)&PTR_LAB_04b702d0;
                *(undefined4 *)(puVar31 + 1) = 0xffffffff;
                puVar31[2] = 0;
                *(undefined4 *)(puVar31 + 3) = 0xffffffff;
                *(undefined4 *)(puVar31 + 6) = 0xffffffff;
                puVar31[7] = 0;
                *(undefined4 *)(puVar31 + 8) = 0xffffffff;
                puVar31[9] = 0;
                puVar31[4] = 0;
                puVar31[5] = (ulong)&PTR_LAB_04b702d0;
                puVar31 = puVar31 + 10;
              } while (puVar31 != puVar26 + uVar30 * 5);
            }
            *(uint *)(puVar18 + 0xb) = uVar23;
            puVar18[0xc] = puVar26;
          }
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 == 0) goto LAB_03a62b10;
          if (param_4 != (long *)0x0) {
            plVar17 = param_4;
LAB_03a62ad0:
            pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,lVar34 << 3,8);
            goto joined_r0x03a62ae4;
          }
LAB_03a62aa4:
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a62ad0;
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 != 0) goto LAB_03a62b34;
LAB_03a62e58:
          pvVar16 = malloc(lVar34 << 3);
          if (pvVar16 != (void *)0x0) {
LAB_03a62b78:
            puVar18[8] = pvVar16;
            *(undefined4 *)(puVar18 + 7) = 0;
            *(uint *)((long)puVar18 + 0x3c) = uVar23;
          }
        }
        else {
          plVar17 = param_4;
          if (param_4 != (long *)0x0) {
LAB_03a629a0:
            puVar20 = (ulong *)(**(code **)(*plVar17 + 0x30))(plVar17,sVar28,8);
            goto joined_r0x03a629c8;
          }
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a629a0;
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 != 0) goto LAB_03a62aa4;
LAB_03a62b10:
          pvVar16 = malloc(lVar34 << 3);
joined_r0x03a62ae4:
          if (pvVar16 != (void *)0x0) {
            puVar18[6] = pvVar16;
            *(undefined4 *)(puVar18 + 5) = 0;
            *(uint *)((long)puVar18 + 0x2c) = uVar23;
          }
          lVar35 = *(long *)PTR_DAT_04bb2698;
          if (lVar35 == 0) goto LAB_03a62e58;
          if (param_4 != (long *)0x0) {
            plVar17 = param_4;
LAB_03a62b60:
            pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,lVar34 << 3,8);
            if (pvVar16 == (void *)0x0) goto LAB_03a62b80;
            goto LAB_03a62b78;
          }
LAB_03a62b34:
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar35 + 8);
          if (lVar19 != 0) {
            plVar17 = (long *)(lVar19 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 != (long *)0x0) goto LAB_03a62b60;
        }
LAB_03a62b80:
        puVar4 = PTR_DAT_04bd1928;
        uVar32 = 0;
        puVar2 = PTR_DAT_04bd1530 + 0x10;
        do {
          lVar34 = puVar18[0xc];
          uVar5 = uVar32;
          if (*(uint *)(puVar18 + 0xb) <= uVar32) {
            uVar5 = 0;
          }
          *(uint *)(lVar34 + (ulong)uVar5 * 0x28 + 8) = uVar32;
          puVar27 = puVar1;
          if (0 < (int)*(uint *)(lVar24 + 0x308)) {
            uVar30 = 0;
            do {
              puVar7 = puVar27;
              if (0x7f < uVar30) {
                puVar7 = puVar1;
              }
              if (*puVar7 == (int)**(short **)PTR_DAT_04bd18b8) {
                if ((uVar30 & 0xffffff80) != 0) {
                  puVar27 = puVar1;
                }
                goto LAB_03a62c28;
              }
              uVar30 = uVar30 + 1;
              puVar27 = puVar27 + 1;
            } while (*(uint *)(lVar24 + 0x308) != uVar30);
            puVar27 = puVar1;
          }
LAB_03a62c28:
          lVar35 = *(long *)(lVar24 + 0x300);
          uVar8 = *puVar27;
          if (*(uint *)(lVar35 + 0x18) <= uVar8) {
            uVar8 = 0;
          }
          if (uVar32 < *(ushort *)(*(long *)(lVar35 + 0x20) + (long)(int)uVar8 * 4 + 2)) {
            plVar17 = *(long **)(*(long *)(lVar35 + 0x30) +
                                ((ulong)*(ushort *)(*(long *)(lVar35 + 0x20) + (long)(int)uVar8 * 4)
                                + (ulong)uVar32) * 8);
          }
          else {
            plVar17 = (long *)0x0;
          }
          if (((*puVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar4), iVar14 != 0)) {
            *(undefined **)PTR_DAT_04bd1920 = puVar2;
            __cxa_guard_release(puVar4);
          }
          if (plVar17 == (long *)0x0) {
            plVar17 = (long *)0x0;
          }
          else {
            uVar30 = (**(code **)(*plVar17 + 0x48))(plVar17,PTR_DAT_04bd1920);
            if ((uVar30 & 1) == 0) {
              plVar17 = (long *)0x0;
            }
          }
          lVar35 = lVar34 + (ulong)uVar5 * 0x28;
          plVar15 = (long *)(lVar35 + 0x10);
          *plVar15 = (long)plVar17;
          *(undefined8 *)(lVar35 + 0x20) = 0;
          if (*(int *)(puVar18 + 5) < *(int *)((long)puVar18 + 0x2c)) {
            *(ulong *)(puVar18[6] + (long)*(int *)(puVar18 + 5) * 8) = lVar34 + (ulong)uVar5 * 0x28;
            *(int *)(puVar18 + 5) = *(int *)(puVar18 + 5) + 1;
            plVar17 = (long *)*plVar15;
          }
          if (((char)plVar17[0xb] != '\0') &&
             (*(uint *)(plVar17[0x197] + 0xb90) = *(uint *)(plVar17[0x197] + 0xb90) | 1,
             (char)plVar17[0xb] != '\0')) {
            *(undefined1 *)(plVar17 + 0xb) = 0;
            *(uint *)(plVar17[7] + 0x260) = *(uint *)(plVar17[7] + 0x260) | 1;
          }
          lVar34 = *plVar15;
          if ((*(byte *)(lVar34 + 0xb2) & 1) != 0) {
            *(byte *)(lVar34 + 0xb2) = *(byte *)(lVar34 + 0xb2) & 0xfe;
            *(ushort *)(*(long *)(lVar34 + 0x38) + 0x8c) =
                 *(ushort *)(*(long *)(lVar34 + 0x38) + 0x8c) | 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar23);
      }
      plVar17 = (long *)PTR_DAT_04bb2698;
      lVar24 = *(long *)PTR_DAT_04bb2698;
      if (lVar24 == 0) {
        puVar21 = malloc(0x2808);
        if (puVar21 == (undefined8 *)0x0) goto LAB_03a62dc8;
LAB_03a62de8:
        puVar22 = puVar21 + 6;
        *puVar21 = 0x80;
        lVar24 = 0x2800;
        do {
          puVar22[-5] = &PTR_LAB_04b702f0;
          puVar22[-4] = 0;
          lVar24 = lVar24 + -0x50;
          *(undefined4 *)puVar22 = 0xffffffff;
          puVar22[-1] = 0;
          puVar22[3] = 0;
          *(undefined4 *)(puVar22 + 4) = 0xffff;
          puVar22[-3] = 0;
          puVar22[-2] = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22 = puVar22 + 10;
        } while (lVar24 != 0);
        puVar18[10] = puVar21 + 1;
        *(undefined4 *)(puVar18 + 9) = 0x80;
        lVar24 = *plVar17;
        if (lVar24 != 0) goto LAB_03a62e4c;
LAB_03a62ed8:
        pvVar16 = malloc(0x400);
joined_r0x03a62ee0:
        if (pvVar16 != (void *)0x0) {
          puVar18[1] = 0x8000000000;
          puVar18[2] = pvVar16;
        }
        lVar24 = *plVar17;
        if (lVar24 == 0) goto LAB_03a63330;
        if (param_4 != (long *)0x0) {
          plVar15 = param_4;
LAB_03a62f20:
          pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x400,8);
          if (pvVar16 == (void *)0x0) goto LAB_03a62f40;
          goto LAB_03a62f38;
        }
LAB_03a62ef4:
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a62f20;
      }
      else {
        plVar15 = param_4;
        if (param_4 != (long *)0x0) {
LAB_03a62dac:
          puVar21 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x2808,8);
          if (puVar21 != (undefined8 *)0x0) goto LAB_03a62de8;
LAB_03a62dc8:
          lVar24 = *plVar17;
          if (lVar24 == 0) goto LAB_03a62ed8;
LAB_03a62e4c:
          plVar15 = param_4;
          if (param_4 == (long *)0x0) goto LAB_03a62e74;
LAB_03a62ea0:
          pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x400,8);
          goto joined_r0x03a62ee0;
        }
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a62dac;
        lVar24 = *plVar17;
        if (lVar24 == 0) goto LAB_03a62ed8;
LAB_03a62e74:
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_03a62ea0;
        lVar24 = *plVar17;
        if (lVar24 != 0) goto LAB_03a62ef4;
LAB_03a63330:
        pvVar16 = malloc(0x400);
        if (pvVar16 != (void *)0x0) {
LAB_03a62f38:
          puVar18[3] = 0x8000000000;
          puVar18[4] = pvVar16;
        }
      }
LAB_03a62f40:
      uVar23 = 0;
      do {
        lVar24 = puVar18[10];
        uVar32 = uVar23;
        if (*(uint *)(puVar18 + 9) <= uVar23) {
          uVar32 = 0;
        }
        lVar34 = lVar24 + (ulong)uVar32 * 0x50;
        *(undefined8 *)(lVar34 + 0x40) = 0;
        *(undefined8 *)(lVar34 + 0x18) = 0;
        *(undefined8 *)(lVar34 + 0x20) = 0;
        *(undefined4 *)(lVar34 + 0x48) = 0xffff;
        if (*(int *)(puVar18 + 1) < *(int *)((long)puVar18 + 0xc)) {
          *(ulong *)(puVar18[2] + (long)*(int *)(puVar18 + 1) * 8) = lVar24 + (ulong)uVar32 * 0x50;
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        }
        puVar13 = PTR_DAT_04bd1938;
        puVar4 = PTR_DAT_04bd1930;
        puVar2 = PTR_DAT_04bd18a0;
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x80);
      iVar14 = (int)**(short **)PTR_DAT_04bd18a0;
      if (*(uint *)(*(long *)(param_1 + 0x278) + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bd18a0) {
        iVar14 = 0;
      }
      uVar9 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x278) + 0x20) + (long)iVar14 * 4 + 2);
      if (uVar9 != 0) {
        lVar24 = 0;
        puVar3 = PTR_DAT_04bbd8c8 + 0x10;
        do {
          lVar34 = *(long *)(param_1 + 0x278);
          iVar14 = (int)**(short **)puVar2;
          if (*(uint *)(lVar34 + 0x18) <= (uint)(int)**(short **)puVar2) {
            iVar14 = 0;
          }
          if ((uint)lVar24 < (uint)*(ushort *)(*(long *)(lVar34 + 0x20) + (long)iVar14 * 4 + 2)) {
            plVar15 = *(long **)(*(long *)(lVar34 + 0x30) +
                                (lVar24 + (ulong)*(ushort *)
                                                  (*(long *)(lVar34 + 0x20) + (long)iVar14 * 4)) * 8
                                );
          }
          else {
            plVar15 = (long *)0x0;
          }
          if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
            *(undefined **)puVar4 = puVar3;
            __cxa_guard_release(puVar13);
          }
          uVar30 = (**(code **)(*plVar15 + 0x48))(plVar15,puVar4);
          lVar24 = lVar24 + 1;
          if ((uVar30 & 1) == 0) {
            plVar15 = (long *)0x0;
          }
          plVar15[0x5d] = *(long *)(param_1 + 0x280);
        } while ((uint)uVar9 != (uint)lVar24);
      }
    }
    lVar24 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar24 + 0xd90) != '\0') {
    lVar24 = *plVar17;
    if (lVar24 == 0) {
      plVar15 = malloc(0x6c0);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)0x0;
          goto LAB_03a6311c;
        }
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x6c0,8);
    }
LAB_03a6311c:
    *(undefined4 *)(plVar15 + 1) = 0;
    puVar2 = PTR_DAT_04bd1558;
    plVar15[6] = 0;
    plVar15[7] = 0x3e4ccccd41200000;
    plVar15[2] = 0;
    *(undefined4 *)(plVar15 + 3) = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    *(undefined4 *)((long)plVar15 + 0x84) = 0;
    *plVar15 = (long)(puVar2 + 0x10);
    *(undefined1 *)(plVar15 + 0x10) = 1;
    *(undefined1 *)(plVar15 + 0x11) = 1;
    *(undefined8 *)((long)plVar15 + 0x8c) = 0x600000005;
    *(undefined8 *)((long)plVar15 + 0x94) = 0x3f00000000000001;
    *(undefined4 *)((long)plVar15 + 0x9c) = 8;
    plVar15[8] = (long)&DAT_3f8000003f800000;
    plVar15[9] = (long)&DAT_3f8000003f800000;
    plVar15[10] = (long)&DAT_3f8000003f800000;
    plVar15[0xb] = (long)&DAT_3f8000003f800000;
    plVar15[0xc] = (long)&DAT_3f8000003f800000;
    plVar15[0xd] = (long)&DAT_3f8000003f800000;
    plVar15[0xe] = (long)&DAT_3f8000003f800000;
    plVar15[0xf] = 0x3f800000;
    FUN_03941294(plVar15 + 0x15);
    FUN_0390e190(plVar15 + 0x5c);
    plVar15[0x99] = 0x400000001;
    puVar2 = PTR_DAT_04bd1170;
    plVar15[0x9a] = 0;
    plVar15[0x9b] = 0;
    plVar15[0x9c] = 0;
    plVar15[0x9d] = 0;
    *(undefined4 *)(plVar15 + 0xa4) = 0;
    plVar15[0xa5] = 0;
    plVar15[0xac] = 0;
    *(undefined2 *)((long)plVar15 + 0x55a) = 0;
    plVar15[0xa7] = 0;
    plVar15[0xa8] = 0;
    plVar15[0xa9] = 0;
    plVar15[0xaa] = 0;
    plVar15[0x98] = (long)(puVar2 + 0x10);
    puVar2 = PTR_DAT_04bd1560 + 0x10;
    *(undefined1 *)(plVar15 + 0xab) = 0;
    plVar15[0xb3] = 0;
    *(undefined2 *)((long)plVar15 + 0x592) = 0;
    *(undefined1 *)(plVar15 + 0xb2) = 0;
    plVar15[0xb1] = 0;
    plVar15[0xb0] = 0;
    plVar15[0xaf] = 0;
    plVar15[0xa6] = (long)puVar2;
    puVar2 = PTR_DAT_04bbd548 + 0x10;
    plVar15[0xae] = 0;
    plVar15[0xad] = (long)puVar2;
    FUN_0390e944(plVar15 + 0xb4);
    *(undefined4 *)(plVar15 + 0x14) = 0;
    *(long **)(param_1 + 0x288) = plVar15;
    FUN_03a66640(plVar15,*param_2,4,param_4);
    lVar24 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar24 + 0xb50) != '\0') {
    lVar24 = *plVar17;
    if (lVar24 == 0) {
      pvVar16 = malloc(0x490);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar34 != 0) {
          plVar15 = (long *)(lVar34 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
      }
      pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x490,8);
    }
    FUN_03a69210();
    *(void **)(param_1 + 0x290) = pvVar16;
    FUN_03a697b0(pvVar16,*param_2,param_4);
    lVar24 = *(long *)(param_1 + 8);
    if (*(char *)(lVar24 + 0xb50) != '\0') {
      lVar24 = *plVar17;
      if (lVar24 == 0) {
        pvVar16 = malloc(0xc68);
      }
      else {
        plVar15 = param_4;
        if (param_4 == (long *)0x0) {
          lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar15 = (long *)(lVar24 + 8);
          if (lVar34 != 0) {
            plVar15 = (long *)(lVar34 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
        }
        pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0xc68,8);
      }
      FUN_03a6a4f4();
      *(void **)(param_1 + 0x298) = pvVar16;
      FUN_03a6af30(pvVar16,*param_2,0,param_4);
      lVar24 = *(long *)(param_1 + 8);
      if (*(char *)(lVar24 + 0xb50) != '\0') {
        if (*(char *)(lVar24 + 0x1580) != '\0') {
          lVar24 = *plVar17;
          if (lVar24 == 0) {
            pvVar16 = malloc(0x240);
          }
          else {
            plVar15 = param_4;
            if (param_4 == (long *)0x0) {
              lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar15 = (long *)(lVar24 + 8);
              if (lVar34 != 0) {
                plVar15 = (long *)(lVar34 + 0xa8);
              }
              plVar15 = (long *)*plVar15;
            }
            pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x240,8);
          }
          FUN_03a6c6ac();
          *(void **)(param_1 + 0x2a0) = pvVar16;
          FUN_03a6c930(pvVar16,*param_2,0x80,param_4);
          lVar24 = *(long *)(param_1 + 8);
          if (*(char *)(lVar24 + 0xb50) == '\0') goto LAB_03a636b8;
        }
        if (*(char *)(lVar24 + 0x14a0) != '\0') {
          lVar24 = *plVar17;
          if (lVar24 == 0) {
            pvVar16 = malloc(0x14c8);
          }
          else {
            plVar15 = param_4;
            if (param_4 == (long *)0x0) {
              lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar15 = (long *)(lVar24 + 8);
              if (lVar34 != 0) {
                plVar15 = (long *)(lVar34 + 0xa8);
              }
              plVar15 = (long *)*plVar15;
            }
            pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x14c8,8);
          }
          FUN_03a6e374();
          *(void **)(param_1 + 0x2a8) = pvVar16;
          FUN_03a6eb70(pvVar16,*param_2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x14c0),
                       *(undefined4 *)(*(long *)(param_1 + 8) + 0x14e0),param_4);
          lVar24 = *(long *)(param_1 + 8);
          uVar29 = 10;
          if (*(int *)(lVar24 + 0x1540) != 2) {
            uVar29 = 0x1d;
          }
          if (*(int *)(lVar24 + 0x1540) == 1) {
            uVar29 = 1;
          }
          FUN_03a6ef80(*(undefined8 *)(param_1 + 0x2a8),param_4,*(undefined4 *)(lVar24 + 0x1500),
                       *(undefined4 *)(lVar24 + 0x1520),uVar29);
          lVar24 = *plVar17;
          iVar14 = *(int *)(*(long *)(param_1 + 8) + 0x14e0);
          sVar28 = (long)iVar14 << 3;
          if (iVar14 < 0) {
            sVar28 = 0xffffffffffffffff;
          }
          if (lVar24 == 0) {
            pvVar16 = malloc(sVar28);
          }
          else {
            plVar15 = param_4;
            if (param_4 == (long *)0x0) {
              lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar15 = (long *)(lVar24 + 8);
              if (lVar34 != 0) {
                plVar15 = (long *)(lVar34 + 0xa8);
              }
              plVar15 = (long *)*plVar15;
              pvVar16 = (void *)0x0;
              if (plVar15 == (long *)0x0) goto LAB_03a6353c;
            }
            pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar28,8);
          }
LAB_03a6353c:
          lVar24 = *(long *)(param_1 + 8);
          *(void **)(param_1 + 0x2b0) = pvVar16;
          if (0 < *(int *)(lVar24 + 0x14e0)) {
            lVar34 = 0;
            puVar2 = PTR_DAT_04bd1828 + 0x10;
            puVar4 = PTR_DAT_04bd1838 + 0x10;
            uVar29 = *(undefined4 *)(PTR_DAT_04bb4bd0 + 8);
            lVar35 = *(long *)PTR_DAT_04bb4bd0;
            do {
              lVar24 = *plVar17;
              if (lVar24 == 0) {
                plVar15 = malloc(0x3c8);
              }
              else {
                plVar15 = param_4;
                if (param_4 == (long *)0x0) {
                  lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar15 = (long *)(lVar24 + 8);
                  if (lVar19 != 0) {
                    plVar15 = (long *)(lVar19 + 0xa8);
                  }
                  plVar15 = (long *)*plVar15;
                }
                plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x3c8,8);
              }
              *plVar15 = (long)puVar2;
              *(undefined2 *)((long)plVar15 + 0xc) = 0xffff;
              *(undefined1 **)((long)plVar15 + 0x344) = &DAT_3f8000003f800000;
              *(undefined1 **)((long)plVar15 + 0x34c) = &DAT_3f8000003f800000;
              *(undefined1 **)((long)plVar15 + 0x354) = &DAT_3f8000003f800000;
              *(undefined4 *)(plVar15 + 1) = 0;
              *(undefined4 *)(plVar15 + 2) = 0;
              plVar15[3] = 0;
              plVar15[0x62] = 0;
              plVar15[99] = 0;
              plVar15[100] = 0;
              plVar15[0x65] = 0;
              plVar15[0x66] = 0;
              plVar15[0x67] = 0;
              *(undefined4 *)(plVar15 + 0x68) = 0;
              plVar15[0x6c] = (long)puVar4;
              plVar15[0x70] = 0;
              *(undefined4 *)(plVar15 + 0x71) = 0;
              plVar15[0x72] = 0;
              plVar15[0x73] = (long)&DAT_3f8000003f800000;
              *(undefined4 *)(plVar15 + 0x75) = uVar29;
              plVar15[0x74] = lVar35;
              *(undefined4 *)((long)plVar15 + 0x3ac) = 0x3f800000;
              *(undefined4 *)(plVar15 + 0x77) = uVar29;
              plVar15[0x76] = lVar35;
              *(undefined8 *)((long)plVar15 + 0x3bc) = 0x3f800000;
              *(undefined4 *)((long)plVar15 + 0x3c4) = 0;
              *(long **)(*(long *)(param_1 + 0x2b0) + lVar34 * 8) = plVar15;
              local_9b0 = (undefined *)0x100000001;
              local_9a8._0_4_ = 0x1000;
              local_9a8._4_4_ = 0;
              FUN_039eba40(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + lVar34 * 8),&local_9b0,
                           param_4);
              lVar24 = *(long *)(param_1 + 8);
              lVar34 = lVar34 + 1;
            } while (lVar34 < *(int *)(lVar24 + 0x14e0));
          }
        }
      }
    }
  }
LAB_03a636b8:
  lVar34 = *plVar17;
  if (*(char *)(lVar24 + 0xb70) != '\0') {
    if (lVar34 == 0) {
      pvVar16 = malloc(0x490);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar34 + 8);
        if (lVar24 != 0) {
          plVar15 = (long *)(lVar24 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
      }
      pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x490,8);
    }
    FUN_03a70e70();
    *(void **)(param_1 + 0x2b8) = pvVar16;
    FUN_03a714c0(pvVar16,*param_2,param_4);
    lVar24 = *(long *)(param_1 + 8);
    lVar34 = *plVar17;
  }
  if (*(char *)(lVar24 + 0xcd0) != '\0') {
    local_9b0 = (undefined *)CONCAT44(2,*param_2);
    if (lVar34 == 0) {
      pvVar16 = malloc(0x568);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar34 + 8);
        if (lVar24 != 0) {
          plVar15 = (long *)(lVar24 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
      }
      pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x568,8);
    }
    FUN_03a72d50();
    *(void **)(param_1 + 0x2c0) = pvVar16;
    FUN_03a737b0(pvVar16,&local_9b0,param_4);
    lVar34 = *plVar17;
  }
  if (lVar34 == 0) {
    puVar18 = malloc(0xa8);
  }
  else {
    plVar15 = param_4;
    if (param_4 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar34 + 8);
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar24 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
        goto LAB_03a63820;
      }
    }
    puVar18 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0xa8,8);
  }
LAB_03a63820:
  *puVar18 = 0;
  *(undefined2 *)(puVar18 + 1) = 0;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  puVar18[4] = 0;
  FUN_038e18e4(puVar18 + 5);
  FUN_038e18e4(puVar18 + 0xd);
  *(undefined8 **)(param_1 + 0x2d0) = puVar18;
  FUN_03af0530(puVar18,0x40,0x100,*param_2,param_4);
  lVar24 = *plVar17;
  if (lVar24 == 0) {
    puVar18 = malloc(0x30);
  }
  else {
    plVar17 = param_4;
    if (param_4 == (long *)0x0) {
      lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar24 + 8);
      if (lVar34 != 0) {
        plVar17 = (long *)(lVar34 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
    }
    puVar18 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x30,8);
  }
  *puVar18 = 0;
  *(undefined2 *)(puVar18 + 1) = 0;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  puVar18[5] = 0;
  *(undefined8 **)(param_1 + 0x2d8) = puVar18;
  FUN_03b0bd70(puVar18,0x40,0x100,*param_2,param_4);
  if (param_5 != 0) {
    local_59d = 0;
    uStack_9a0 = 0x400;
    local_9a8 = local_99c;
    local_99c[0] = 0;
    local_9b0 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_9b0,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_04100f19);
  }
  return;
}

