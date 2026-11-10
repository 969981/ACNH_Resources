
void FUN_001cc7a0(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  
  puVar9 = PTR_DAT_04bcb908;
  puVar8 = PTR_DAT_04bcb900;
  plVar22 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar11;
    if (uVar4 != 0) {
      lVar14 = **(long **)(puVar8 + 0xa0);
      if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar14 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar22 = (long *)(*(long *)(lVar14 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar22 == 0) || (lVar14 = *(long *)(*plVar22 + 0x10), lVar14 == 0)) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  plVar22 = (long *)(lVar14 + 0x78);
  (**(code **)(*plVar22 + 0x10))(plVar22);
  plVar27 = (long *)(param_1 + 0x10);
  if ((long *)*plVar27 == (long *)0x0) goto LAB_001cca88;
  plVar23 = (long *)*plVar27;
  plVar16 = plVar27;
  do {
    while (plVar25 = plVar23, (short)(*(short *)(param_2 + 8) - (short)plVar25[5]) < 1) {
      plVar23 = (long *)*plVar25;
      plVar16 = plVar25;
      if ((long *)*plVar25 == (long *)0x0) goto LAB_001cc8a0;
    }
    plVar17 = plVar25 + 1;
    plVar23 = (long *)*plVar17;
    plVar25 = plVar16;
  } while ((long *)*plVar17 != (long *)0x0);
LAB_001cc8a0:
  if ((plVar25 == plVar27) || (0 < (short)((short)plVar25[5] - *(short *)(param_2 + 8))))
  goto LAB_001cca88;
  plVar23 = (long *)plVar25[6];
  uVar4 = *(uint *)(plVar23 + 0x46);
  if (uVar4 != 0) {
    plVar17 = param_3 + 1;
    plVar16 = (long *)*plVar17;
    if (plVar16 != (long *)0x0) {
      plVar24 = plVar17;
      do {
        plVar26 = plVar16;
        if (*(uint *)((long)plVar16 + 0x1c) < uVar4) {
          plVar26 = plVar24;
          plVar16 = plVar16 + 1;
        }
        plVar16 = (long *)*plVar16;
        plVar24 = plVar26;
      } while (plVar16 != (long *)0x0);
      if (((plVar26 != plVar17) && (*(uint *)((long)plVar26 + 0x1c) <= uVar4)) &&
         (iVar7 = (int)plVar26[4] + -1, *(int *)(plVar26 + 4) = iVar7, iVar7 == 0)) {
        plVar16 = (long *)(puVar8 + 0x18);
        if (*puVar9 != '\0') {
          puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar5 = *puVar11;
          if (uVar5 != 0) {
            lVar14 = **(long **)(puVar8 + 0xa0);
            if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar14 >> 3) <= (ulong)uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar16 = (long *)(*(long *)(lVar14 + (ulong)uVar5 * 8) + 0x10);
          }
        }
        lVar14 = *(long *)(*plVar16 + 0x10);
        puVar11 = *(uint **)(lVar14 + 0x498);
        if (puVar11 == *(uint **)(lVar14 + 0x4a0)) {
          puVar12 = *(uint **)(lVar14 + 0x490);
          uVar19 = (long)puVar11 - (long)puVar12;
          uVar1 = ((long)uVar19 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_001a3240((undefined8 *)(lVar14 + 0x490));
          }
          uVar2 = (long)uVar19 >> 1;
          if ((ulong)((long)uVar19 >> 1) <= uVar1) {
            uVar2 = uVar1;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar2 = 0x3fffffffffffffff;
          }
          if (uVar2 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = FUN_00187df4(uVar2 << 2);
            puVar11 = *(uint **)(lVar14 + 0x498);
            puVar12 = *(uint **)(lVar14 + 0x490);
          }
          puVar20 = (uint *)(lVar13 + ((long)uVar19 >> 2) * 4);
          puVar21 = puVar20 + 1;
          *puVar20 = uVar4;
          while (puVar11 != puVar12) {
            puVar11 = puVar11 + -1;
            puVar20 = puVar20 + -1;
            *puVar20 = *puVar11;
          }
          *(uint **)(lVar14 + 0x490) = puVar20;
          *(uint **)(lVar14 + 0x498) = puVar21;
          *(ulong *)(lVar14 + 0x4a0) = lVar13 + uVar2 * 4;
          if (puVar12 != (uint *)0x0) {
            FUN_00187e4c();
          }
        }
        else {
          *puVar11 = uVar4;
          *(uint **)(lVar14 + 0x498) = puVar11 + 1;
        }
        plVar16 = (long *)*plVar17;
        if (plVar16 != (long *)0x0) {
          plVar24 = plVar16;
          plVar26 = plVar17;
          do {
            plVar3 = plVar24;
            if (*(uint *)((long)plVar24 + 0x1c) < uVar4) {
              plVar3 = plVar26;
              plVar24 = plVar24 + 1;
            }
            plVar24 = (long *)*plVar24;
            plVar26 = plVar3;
          } while (plVar24 != (long *)0x0);
          if ((plVar3 != plVar17) && (*(uint *)((long)plVar3 + 0x1c) <= uVar4)) {
            plVar17 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              plVar17 = plVar3;
              do {
                plVar24 = (long *)plVar17[2];
                bVar10 = (long *)*plVar24 != plVar17;
                plVar17 = plVar24;
              } while (bVar10);
            }
            else {
              do {
                plVar24 = plVar17;
                plVar17 = (long *)*plVar24;
              } while ((long *)*plVar24 != (long *)0x0);
            }
            if ((long *)*param_3 == plVar3) {
              *param_3 = plVar24;
            }
            param_3[2] = param_3[2] + -1;
            FUN_00192390(plVar16,plVar3);
            FUN_00187e4c(plVar3);
          }
        }
      }
    }
  }
  *(undefined1 *)((long)plVar23 + 0x211) = 1;
  plVar16 = (long *)plVar25[1];
  if (plVar16 == (long *)0x0) {
    plVar17 = plVar25;
    do {
      plVar24 = (long *)plVar17[2];
      bVar10 = (long *)*plVar24 != plVar17;
      plVar17 = plVar24;
    } while (bVar10);
  }
  else {
    plVar17 = plVar16;
    do {
      plVar24 = plVar17;
      plVar17 = (long *)*plVar24;
    } while ((long *)*plVar24 != (long *)0x0);
  }
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar25;
    do {
      plVar17 = (long *)plVar16[2];
      bVar10 = (long *)*plVar17 != plVar16;
      plVar16 = plVar17;
    } while (bVar10);
  }
  else {
    do {
      plVar17 = plVar16;
      plVar16 = (long *)*plVar17;
    } while ((long *)*plVar17 != (long *)0x0);
  }
  if (*(long **)(param_1 + 8) == plVar25) {
    *(long **)(param_1 + 8) = plVar17;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  FUN_00192390(*(undefined8 *)(param_1 + 0x10),plVar25);
  FUN_00187e4c(plVar25);
  if (*(short *)(param_2 + 8) == *(short *)(param_1 + 0x50)) {
    plVar16 = (long *)(param_1 + 0x30);
    if (plVar24 != plVar27) {
      plVar16 = plVar24 + 5;
    }
    *(short *)(param_1 + 0x50) = (short)*plVar16;
    if ((*(ushort *)(plVar23 + 0xc) & 0xf) == 2) goto LAB_001cca34;
LAB_001cc9fc:
    iVar7 = (int)plVar23[1];
    iVar18 = (int)plVar23[1];
    iVar15 = iVar7 + -1;
    if (iVar18 != iVar7) goto LAB_001cca58;
LAB_001cca14:
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar23 + 1,0x10);
    if (bVar10) {
      *(int *)(plVar23 + 1) = iVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_001cca5c;
    bVar10 = true;
  }
  else {
    if ((*(ushort *)(plVar23 + 0xc) & 0xf) != 2) goto LAB_001cc9fc;
LAB_001cca34:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    iVar7 = (int)plVar23[1];
    iVar18 = (int)plVar23[1];
    iVar15 = iVar7 + -1;
    if (iVar18 == iVar7) goto LAB_001cca14;
LAB_001cca58:
    ClearExclusiveLocal();
LAB_001cca5c:
    bVar10 = false;
  }
  plVar27 = plVar23 + 1;
  if (!bVar10) {
    do {
      lVar14 = *plVar27;
      iVar15 = iVar18 + -1;
      if ((int)lVar14 == iVar18) {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar10) {
          *(int *)plVar27 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = (int)lVar14;
    } while( true );
  }
  if ((iVar15 == 0) && (*(char *)((long)plVar23 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar23 + 0xc) = 1;
    (**(code **)(*plVar23 + 8))(plVar23);
  }
LAB_001cca88:
                    /* WARNING: Could not recover jumptable at 0x001ccab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar22 + 0x20))(plVar22);
  return;
}

