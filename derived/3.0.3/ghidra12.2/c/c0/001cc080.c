
void FUN_001cc080(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  char *pcVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  char local_78;
  long local_70;
  ulong local_68;
  
  FUN_001972b0(auStack_80,*(undefined8 *)(param_2 + 0x138));
  uVar11 = *(ulong *)(local_70 + 0x18);
  if (local_68 < uVar11) {
    puVar2 = PTR_DAT_04bcc320 + 0x10;
    lVar14 = local_70;
    pcVar21 = PTR_DAT_04bcb908;
    puVar23 = PTR_DAT_04bcc320;
    do {
      lVar3 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 0x28);
      uVar10 = local_68 + 1;
      bVar6 = *(byte *)(lVar3 + local_68);
      if (uVar11 == uVar10) {
LAB_001cc540:
        local_68 = uVar10;
        local_78 = '\x01';
        break;
      }
      uVar22 = (ulong)*(byte *)(lVar3 + uVar10);
      uVar10 = local_68 + 2;
      if (uVar11 - uVar10 < 2) goto LAB_001cc540;
      sVar7 = *(short *)(lVar3 + uVar10);
      local_68 = local_68 + 4;
      if (local_78 != '\0') break;
      uVar10 = local_68;
      if (uVar11 - local_68 < uVar22 * 2) goto LAB_001cc540;
      if ((uint)*(ushort *)(param_1 + 0x180) < (uint)bVar6) {
        uVar10 = local_68 + uVar22 * 2;
        if (uVar10 <= uVar11) {
          local_68 = uVar10;
        }
      }
      else {
        lVar14 = *(long *)(*(long *)(param_1 + 0xe0) + (ulong)(uint)bVar6 * 8);
        plVar17 = (long *)(PTR_DAT_04bcb900 + 0x28);
        if (*pcVar21 != '\0') {
          puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar5 = *puVar9;
          if (uVar5 != 0) {
            lVar3 = **(long **)(PTR_DAT_04bcb900 + 0xa0);
            if ((ulong)((*(long **)(PTR_DAT_04bcb900 + 0xa0))[1] - lVar3 >> 3) <= (ulong)uVar5)
            goto LAB_001cc578;
            plVar17 = (long *)(*(long *)(lVar3 + (ulong)uVar5 * 8) + 0x20);
          }
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(*plVar17 + 0x10) + 0x10) + 0x78) + 0x10))();
        plVar17 = *(long **)(lVar14 + 8);
        if ((long *)(*(long *)(*(long *)(param_1 + 0xe0) + (ulong)bVar6 * 8) + 0x10) == plVar17) {
          plVar16 = (long *)0x0;
          local_98 = (long *)0x0;
          local_90 = (long *)0x0;
          local_88 = (long *)0x0;
        }
        else {
          lVar14 = plVar17[6];
          local_88 = (long *)0x0;
          local_98 = (long *)0x0;
          local_90 = (long *)0x0;
          plVar16 = (long *)0x0;
          if (lVar14 != 0) {
            plVar19 = (long *)0x0;
            plVar13 = (long *)0x0;
            plVar15 = (long *)0x0;
            while (plVar16 = plVar15,
                  *(short *)(lVar14 + 0x70) == sVar7 ||
                  0 < (short)(sVar7 - *(short *)(lVar14 + 0x70))) {
              if (plVar15 == plVar13) {
                uVar10 = (long)plVar15 - (long)plVar19;
                uVar11 = ((long)uVar10 >> 4) + 1;
                if (uVar11 >> 0x3c != 0) {
                  FUN_001df2d0(&local_98);
                  goto LAB_001cc578;
                }
                uVar4 = (long)uVar10 >> 3;
                if ((ulong)((long)uVar10 >> 3) <= uVar11) {
                  uVar4 = uVar11;
                }
                if (0x7fffffffffffffef < uVar10) {
                  uVar4 = 0xfffffffffffffff;
                }
                lVar14 = FUN_00187df4(uVar4 * 0x10);
                plVar18 = local_98;
                plVar19 = (long *)(lVar14 + ((long)uVar10 >> 4) * 0x10);
                plVar13 = (long *)(lVar14 + uVar4 * 0x10);
                *plVar19 = (long)(puVar23 + 0x10);
                plVar16 = plVar19 + 2;
                *(short *)(plVar19 + 1) = (short)plVar17[5];
                plVar12 = plVar19;
                local_88 = plVar13;
                local_90 = plVar16;
                if (plVar15 != local_98) {
                  plVar12 = plVar15;
                  plVar20 = plVar19;
                  do {
                    plVar19 = plVar20 + -2;
                    *plVar19 = (long)(puVar23 + 0x10);
                    plVar1 = plVar12 + -1;
                    plVar12 = plVar12 + -2;
                    *(short *)(plVar20 + -1) = (short)*plVar1;
                    plVar20 = plVar19;
                  } while (plVar12 != local_98);
                  local_98 = plVar19;
                  do {
                    plVar15 = plVar15 + -2;
                    (**(code **)*plVar15)(plVar15);
                    plVar12 = local_98;
                    pcVar21 = PTR_DAT_04bcb908;
                  } while (plVar15 != plVar18);
                }
                local_98 = plVar12;
                if (plVar18 != (long *)0x0) {
                  FUN_00187e4c(plVar18);
                }
                plVar15 = (long *)plVar17[1];
                plVar18 = plVar17;
                puVar23 = PTR_DAT_04bcc320;
                if ((long *)plVar17[1] != (long *)0x0) goto LAB_001cc380;
LAB_001cc390:
                do {
                  plVar17 = (long *)plVar18[2];
                  bVar8 = (long *)*plVar17 != plVar18;
                  plVar18 = plVar17;
                } while (bVar8);
              }
              else {
                *plVar15 = (long)(puVar23 + 0x10);
                *(short *)(plVar15 + 1) = (short)plVar17[5];
                plVar16 = plVar15 + 2;
                plVar15 = (long *)plVar17[1];
                plVar18 = plVar17;
                local_90 = plVar16;
                if ((long *)plVar17[1] == (long *)0x0) goto LAB_001cc390;
LAB_001cc380:
                do {
                  plVar17 = plVar15;
                  plVar15 = (long *)*plVar17;
                } while ((long *)*plVar17 != (long *)0x0);
              }
              if (((long *)(*(long *)(*(long *)(param_1 + 0xe0) + (ulong)bVar6 * 8) + 0x10) ==
                   plVar17) || (lVar14 = plVar17[6], plVar15 = plVar16, lVar14 == 0)) break;
            }
          }
        }
        plVar17 = (long *)(PTR_DAT_04bcb900 + 0x28);
        if (*pcVar21 != '\0') {
          puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar5 = *puVar9;
          if (uVar5 != 0) {
            lVar14 = **(long **)(PTR_DAT_04bcb900 + 0xa0);
            if ((ulong)((*(long **)(PTR_DAT_04bcb900 + 0xa0))[1] - lVar14 >> 3) <= (ulong)uVar5) {
LAB_001cc578:
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar17 = (long *)(*(long *)(lVar14 + (ulong)uVar5 * 8) + 0x20);
          }
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(*plVar17 + 0x10) + 0x10) + 0x78) + 0x20))();
        plVar17 = local_98;
        lVar14 = (long)plVar16 - (long)local_98;
        if (lVar14 != 0) {
          uVar11 = 0;
          uVar10 = 1;
          do {
            local_b0 = *(undefined **)(param_2 + 0x1d0);
            FUN_001cbcc0(param_1,&local_b0,plVar17 + uVar11 * 2,bVar6);
            bVar8 = uVar10 < (ulong)(lVar14 >> 4);
            uVar11 = uVar10;
            uVar10 = (ulong)((int)uVar10 + 1);
          } while (bVar8);
        }
        if (uVar22 != 0) {
          do {
            if (*(long *)(local_70 + 0x18) - local_68 < 2) {
              local_78 = '\x01';
              break;
            }
            local_a8 = *(undefined2 *)
                        (*(long *)(local_70 + 0x10) + *(long *)(local_70 + 0x28) + local_68);
            local_68 = local_68 + 2;
            local_a0 = *(undefined8 *)(param_2 + 0x1d0);
            local_b0 = puVar2;
            FUN_001cbcc0(param_1,&local_a0,&local_b0,bVar6);
            uVar5 = (int)uVar22 - 1;
            uVar22 = (ulong)uVar5;
          } while (uVar5 != 0);
        }
        if (plVar17 != (long *)0x0) {
          while (plVar16 != plVar17) {
            plVar16 = plVar16 + -2;
            (**(code **)*plVar16)(plVar16);
          }
          FUN_00187e4c(plVar17);
        }
        lVar14 = local_70;
      }
      uVar11 = *(ulong *)(lVar14 + 0x18);
    } while (local_68 < uVar11);
  }
  FUN_00197350(auStack_80);
  return;
}

