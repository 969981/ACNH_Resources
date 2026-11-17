
void FUN_0303a970(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  int iVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *plVar26;
  uint *puVar27;
  ulong uVar28;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  plVar1 = (long *)(param_1 + 0x1a648);
  plVar26 = *(long **)(param_1 + 0x1a650);
  while (plVar26 != plVar1) {
    plVar5 = (long *)plVar26[1];
    plVar22 = plVar5;
    if (*plVar26 != 0) {
      *(long **)(*plVar26 + 8) = plVar5;
      plVar22 = (long *)plVar26[1];
    }
    if (plVar22 != (long *)0x0) {
      *plVar22 = *plVar26;
    }
    *plVar26 = 0;
    plVar26[1] = 0;
    *(int *)(param_1 + 0x1a658) = *(int *)(param_1 + 0x1a658) + -1;
    plVar26[-3] = *(long *)(param_1 + 0x1a660);
    *(long **)(param_1 + 0x1a660) = plVar26 + -3;
    plVar26 = plVar5;
  }
  uVar28 = *(ulong *)(param_1 + 0x48);
  if (uVar28 != 0) {
    for (; puVar14 = PTR_DAT_04bb3720, puVar13 = PTR_DAT_04bb3170, puVar12 = PTR_DAT_04bb2200,
        lVar18 = *(long *)(uVar28 + 8), lVar18 != 0; uVar28 = *(ulong *)(uVar28 + 8)) {
      *(ulong *)(lVar18 + 0x18) = *(ulong *)(lVar18 + 0x18) & 1 | uVar28;
    }
    do {
      puVar27 = (uint *)(uVar28 + 0x38);
      uVar16 = *puVar27;
      if (uVar16 - 4 < 2) {
LAB_0303aba4:
        plVar26 = *(long **)(uVar28 + 0x48);
        if (plVar26 != (long *)0x0) {
LAB_0303abac:
          plVar5 = &DAT_04178a58;
          if ((char)plVar26[0xd7] != '\0') {
            plVar5 = plVar26;
          }
          if (*plVar5 == *(long *)(uVar28 + 0x40)) goto LAB_0303abe4;
        }
      }
      else if (uVar16 != 0) {
        if (uVar16 == 1) goto LAB_0303aba4;
        if (((uVar16 & 0xfffffffe) == 8) &&
           (plVar26 = *(long **)(uVar28 + 0x48), plVar26 != (long *)0x0)) goto LAB_0303abac;
LAB_0303abe4:
        FUN_01d6cda0(puVar27);
      }
      psVar2 = (short *)(uVar28 + 0x78);
      FUN_01596728(psVar2);
      iVar19 = *(int *)(uVar28 + 200);
      if (iVar19 == 5) {
        plVar26 = (long *)(uVar28 + 0xa8);
        uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
        if ((((uVar25 & 1) == 0) ||
            (uVar16 = (*(code *)**(undefined8 **)(uVar28 + 0xa8))
                                (plVar26,uVar28 + 0x68,uVar28 + 0x70), ((uVar16 ^ 1) & 1) != 0)) &&
           (uVar10 = *(ushort *)(uVar28 + 0x88), (uVar10 >> 3 & 1) == 0)) {
          local_78 = local_78 & 0xffffffff00000000;
          if (*(int *)(uVar28 + 200) == 0) {
            cVar8 = *(char *)(uVar28 + 0xa0);
          }
          else {
            *(undefined4 *)(uVar28 + 200) = 0;
            cVar8 = *(char *)(uVar28 + 0xa0);
          }
          if (cVar8 == '\0') {
            if (*(short *)(uVar28 + 0x68) != *(short *)puVar13) {
              puVar27 = *(uint **)puVar14;
              FUN_007ef010(&local_78);
              if (((uint)(local_78 & 0x7f) < *puVar27) &&
                 (puVar21 = *(undefined8 **)(*(long *)(puVar27 + 2) + (local_78 & 0x7f) * 8),
                 puVar21 != (undefined8 *)0x0)) {
                *puVar21 = 0;
              }
            }
            uVar11 = *(undefined2 *)puVar13;
            *(undefined8 *)(uVar28 + 0x70) = 0;
            *(undefined8 *)(uVar28 + 0x38) = 0xffffffff00000000;
            *(undefined8 *)(uVar28 + 0x58) = 0;
            *(undefined1 *)(uVar28 + 0x60) = 0;
            *(undefined4 *)(uVar28 + 0x6c) = 0;
            *(undefined2 *)(uVar28 + 0x68) = uVar11;
            uVar10 = *(ushort *)(uVar28 + 0x88);
            *(undefined8 *)(uVar28 + 0x48) = 0;
            *(undefined8 *)(uVar28 + 0x50) = 0;
          }
          if ((((uVar10 >> 1 & 1) != 0) &&
              (lVar18 = *(long *)(*(long *)puVar12 + 0x100), lVar18 != 0)) &&
             (FUN_01596980(psVar2), (*(ushort *)(uVar28 + 0x88) >> 3 & 1) == 0)) {
            FUN_015a30c0(lVar18,psVar2);
          }
        }
        goto LAB_0303ae14;
      }
      if (iVar19 == 2) {
        if ((*(ushort *)(uVar28 + 0x88) >> 6 & 1) != 0) {
          uVar17 = 4;
LAB_0303ad10:
          local_78 = CONCAT44(local_78._4_4_,uVar17);
          goto LAB_0303ae00;
        }
        if ((*(ushort *)(uVar28 + 0x88) >> 2 & 1) == 0) {
          if (*psVar2 != *(short *)puVar13) {
LAB_0303ad04:
            if (*(long *)(uVar28 + 0x90) != 0) {
              uVar17 = 3;
              goto LAB_0303ad10;
            }
          }
        }
        else if (*(long *)(uVar28 + 0x80) != 0) goto LAB_0303ad04;
LAB_0303ae14:
        iVar19 = *(int *)(uVar28 + 200);
      }
      else if (iVar19 == 1) {
        uVar16 = *puVar27;
        if (uVar16 - 4 < 2) {
LAB_0303ac30:
          plVar26 = *(long **)(uVar28 + 0x48);
          if (plVar26 != (long *)0x0) {
LAB_0303ac38:
            plVar5 = &DAT_04178a58;
            if ((char)plVar26[0xd7] != '\0') {
              plVar5 = plVar26;
            }
            if (*plVar5 == *(long *)(uVar28 + 0x40)) goto LAB_0303add0;
          }
        }
        else if (uVar16 != 0) {
          if (uVar16 == 1) goto LAB_0303ac30;
          if (((uVar16 & 0xfffffffe) == 8) &&
             (plVar26 = *(long **)(uVar28 + 0x48), plVar26 != (long *)0x0)) goto LAB_0303ac38;
LAB_0303add0:
          bVar9 = *(byte *)(uVar28 + 0x60);
          if (((bVar9 >> 2 & 1) == 0) &&
             ((((bVar9 & 1) == 0 && (*(long *)(uVar28 + 0x50) == 0)) ||
              (((bVar9 >> 1 & 1) == 0 && (*(long *)(uVar28 + 0x58) == 0)))))) goto LAB_0303ae14;
        }
        uVar17 = FUN_03039d40(puVar27,puVar27);
        local_78 = CONCAT44(local_78._4_4_,uVar17);
LAB_0303ae00:
        if (*(int *)(uVar28 + 200) != (int)local_78) {
          *(int *)(uVar28 + 200) = (int)local_78;
        }
        goto LAB_0303ae14;
      }
      if ((iVar19 == 0) && (*(int *)(param_1 + 0x1a658) < *(int *)(param_1 + 0x1a670))) {
        puVar21 = *(undefined8 **)(param_1 + 0x1a660);
        if (puVar21 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x1a660) = *puVar21;
        }
        uVar4 = *(undefined8 *)(uVar28 + 0x20);
        uVar6 = *(undefined8 *)(uVar28 + 0x28);
        uVar24 = *(undefined8 *)(uVar28 + 0x30);
        puVar21[4] = 0;
        plVar26 = puVar21 + 3;
        *plVar26 = 0;
        puVar21[1] = uVar6;
        puVar21[2] = uVar24;
        *puVar21 = uVar4;
        lVar18 = *plVar1;
        *plVar1 = (long)plVar26;
        puVar21[4] = plVar1;
        *plVar26 = lVar18;
        if (lVar18 != 0) {
          *(long **)(lVar18 + 8) = plVar26;
        }
        *(int *)(param_1 + 0x1a658) = *(int *)(param_1 + 0x1a658) + 1;
      }
      lVar18 = *(long *)(uVar28 + 0x10);
      if (lVar18 == 0) {
        uVar25 = uVar28;
        do {
          uVar28 = *(ulong *)(uVar25 + 0x18) & 0xfffffffffffffffe;
          if (uVar28 == 0) goto LAB_0303a9b0;
          bVar15 = *(ulong *)(uVar28 + 8) != uVar25;
          uVar25 = uVar28;
        } while (bVar15);
      }
      else {
        *(ulong *)(lVar18 + 0x18) = *(ulong *)(lVar18 + 0x18) & 1 | uVar28;
        uVar28 = *(ulong *)(uVar28 + 0x10);
        lVar18 = *(long *)(uVar28 + 8);
        while (lVar18 != 0) {
          *(ulong *)(lVar18 + 0x18) = *(ulong *)(lVar18 + 0x18) & 1 | uVar28;
          uVar28 = *(ulong *)(uVar28 + 8);
          lVar18 = *(long *)(uVar28 + 8);
        }
      }
    } while( true );
  }
LAB_0303a9b0:
  plVar26 = *(long **)(param_1 + 0x1a650);
  if (plVar26 != plVar1) {
    puVar20 = (ulong *)(plVar26 + -3);
    do {
      lVar18 = *(long *)(param_1 + 0x48);
      if (lVar18 != 0) {
        iVar19 = (int)puVar20[2];
        iVar3 = *(int *)((long)puVar20 + 0x14);
        lVar23 = lVar18;
        if ((char)*puVar20 == '\0') {
          uVar28 = puVar20[1];
LAB_0303aa60:
          if (*(char *)(lVar23 + 0x20) != '\0') {
LAB_0303aa54:
            lVar23 = *(long *)(lVar23 + 8);
joined_r0x0303aa5c:
            if (lVar23 == 0) goto LAB_0303aa20;
            goto LAB_0303aa60;
          }
          uVar25 = *(ulong *)(lVar23 + 0x28);
          if (uVar28 == uVar25) {
            iVar7 = *(int *)(lVar23 + 0x30);
            if (iVar19 == iVar7) {
              if (iVar3 < *(int *)(lVar23 + 0x34)) goto LAB_0303aa54;
              if (iVar3 <= *(int *)(lVar23 + 0x34)) goto LAB_0303ab1c;
            }
            else {
              if (iVar19 < iVar7) goto LAB_0303aa54;
              if (iVar19 <= iVar7) goto LAB_0303ab1c;
            }
LAB_0303aab4:
            lVar23 = *(long *)(lVar23 + 0x10);
            goto joined_r0x0303aa5c;
          }
          if (uVar28 < uVar25) goto LAB_0303aa54;
          if (uVar25 < uVar28) goto LAB_0303aab4;
LAB_0303ab1c:
          local_78 = *puVar20;
          local_70 = puVar20[1];
          uStack_68 = puVar20[2];
          lVar18 = FUN_0303bfc0(lVar18,&local_78);
          *(long *)(param_1 + 0x48) = lVar18;
          if (lVar18 != 0) {
            *(undefined8 *)(lVar18 + 0x18) = 1;
          }
        }
        else {
          do {
            while (*(char *)(lVar23 + 0x20) != '\0') {
              iVar7 = *(int *)(lVar23 + 0x30);
              if (iVar19 == iVar7) {
                if (*(int *)(lVar23 + 0x34) <= iVar3) {
                  if (*(int *)(lVar23 + 0x34) < iVar3) break;
                  goto LAB_0303ab1c;
                }
              }
              else if (iVar7 <= iVar19) {
                if (iVar7 < iVar19) break;
                goto LAB_0303ab1c;
              }
              lVar23 = *(long *)(lVar23 + 8);
              if (lVar23 == 0) goto LAB_0303aa20;
            }
            lVar23 = *(long *)(lVar23 + 0x10);
          } while (lVar23 != 0);
        }
      }
LAB_0303aa20:
      plVar26 = (long *)plVar26[1];
      puVar20 = (ulong *)(plVar26 + -3);
    } while (puVar20 != (ulong *)(param_1 + 0x1a630));
  }
  return;
}

