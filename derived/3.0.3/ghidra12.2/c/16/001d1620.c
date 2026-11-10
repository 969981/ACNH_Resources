
void FUN_001d1620(long param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  int iVar17;
  ulong *puVar18;
  ulong *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 local_78;
  undefined8 local_70;
  ulong *puStack_68;
  
  plVar20 = (long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x48) = *plVar20;
  if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
    plVar4 = *(long **)(param_1 + 0x20);
    do {
      uVar23 = plVar4[5];
      uVar7 = *param_2;
      lVar13 = *(long *)(uVar23 + 0x1f0);
      if (((uVar7 <= *(ulong *)(lVar13 + 0x10)) &&
          (*(ulong *)(lVar13 + 0x18) == 0 || uVar7 <= *(ulong *)(lVar13 + 0x18))) &&
         ((*(char *)(*(long *)(lVar13 + 0x28) + 0x50) == '\0' ||
          (uVar7 <= *(ulong *)(*(long *)(lVar13 + 0x28) + 0x58))))) break;
      plVar8 = (long *)plVar4[1];
      plVar14 = plVar4;
      plVar15 = plVar8;
      if (plVar8 == (long *)0x0) {
        do {
          plVar22 = (long *)plVar14[2];
          bVar3 = (long *)*plVar22 != plVar14;
          plVar14 = plVar22;
        } while (bVar3);
      }
      else {
        do {
          plVar22 = plVar15;
          plVar15 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
      }
      plVar14 = plVar4;
      if (plVar8 == (long *)0x0) {
        do {
          plVar15 = (long *)plVar14[2];
          bVar3 = (long *)*plVar15 != plVar14;
          plVar14 = plVar15;
        } while (bVar3);
      }
      else {
        do {
          plVar15 = plVar8;
          plVar8 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x20) == plVar4) {
        *(long **)(param_1 + 0x20) = plVar15;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      FUN_00192390(*(undefined8 *)(param_1 + 0x28),plVar4);
      FUN_00187e4c(plVar4);
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 != (long *)0x0) {
        plVar8 = plVar4;
        plVar14 = (long *)(param_1 + 0x10);
        do {
          plVar15 = plVar8;
          if ((ulong)plVar8[4] < uVar23) {
            plVar15 = plVar14;
            plVar8 = plVar8 + 1;
          }
          plVar8 = (long *)*plVar8;
          plVar14 = plVar15;
        } while (plVar8 != (long *)0x0);
        if ((plVar15 != (long *)(param_1 + 0x10)) && ((ulong)plVar15[4] <= uVar23)) {
          plVar8 = (long *)plVar15[1];
          if ((long *)plVar15[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar14[2];
              bVar3 = (long *)*plVar9 != plVar14;
              plVar14 = plVar9;
            } while (bVar3);
          }
          else {
            do {
              plVar9 = plVar8;
              plVar8 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
          if (*(long **)(param_1 + 8) == plVar15) {
            *(long **)(param_1 + 8) = plVar9;
          }
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
          FUN_00192390(plVar4,plVar15);
          FUN_00187e4c(plVar15);
        }
      }
      puVar16 = *(ulong **)(param_1 + 0x48);
      if (puVar16 == *(ulong **)(param_1 + 0x50)) {
        uVar10 = (long)puVar16 - *plVar20;
        lVar13 = (long)uVar10 >> 3;
        uVar7 = lVar13 + 1;
        if (uVar7 >> 0x3d != 0) {
          auVar24 = FUN_001df2c0(plVar20);
          uVar6 = auVar24._0_8_;
          local_70 = 0x1d19a0;
          puVar21 = (undefined8 *)PTR_DAT_04bcbcb0;
          if (auVar24._8_8_ != (undefined8 *)0x0) {
            puVar21 = auVar24._8_8_;
          }
          local_78 = *puVar21;
          puStack_68 = param_2;
          FUN_001d1200(uVar6,&local_78);
          FUN_001d14d0(uVar6,&local_78);
          FUN_001cda60(uVar6,&local_78,0);
          return;
        }
        uVar1 = (long)uVar10 >> 2;
        if ((ulong)((long)uVar10 >> 2) <= uVar7) {
          uVar1 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
          puVar16 = (ulong *)(lVar13 * 8);
          puVar18 = puVar16 + 1;
          *puVar16 = uVar23;
          puVar19 = *(ulong **)(param_1 + 0x40);
          puVar11 = *(ulong **)(param_1 + 0x48);
          if (puVar11 != puVar19) goto LAB_001d1880;
        }
        else {
          lVar5 = FUN_00187df4(uVar1 << 3);
          puVar16 = (ulong *)(lVar5 + lVar13 * 8);
          puVar18 = puVar16 + 1;
          *puVar16 = uVar23;
          puVar19 = *(ulong **)(param_1 + 0x40);
          puVar11 = *(ulong **)(param_1 + 0x48);
          if (puVar11 != puVar19) {
LAB_001d1880:
            do {
              puVar11 = puVar11 + -1;
              puVar16 = puVar16 + -1;
              *puVar16 = *puVar11;
            } while (puVar11 != puVar19);
            puVar11 = (ulong *)*plVar20;
          }
        }
        *(ulong **)(param_1 + 0x40) = puVar16;
        *(ulong **)(param_1 + 0x48) = puVar18;
        *(ulong *)(param_1 + 0x50) = lVar5 + uVar1 * 8;
        if (puVar11 != (ulong *)0x0) {
          FUN_00187e4c(puVar11);
        }
      }
      else {
        *puVar16 = uVar23;
        *(ulong **)(param_1 + 0x48) = puVar16 + 1;
      }
      plVar4 = plVar22;
    } while (plVar22 != (long *)(param_1 + 0x28));
    puVar21 = *(undefined8 **)(param_1 + 0x40);
    if (puVar21 != *(undefined8 **)(param_1 + 0x48)) {
      do {
        plVar4 = (long *)*puVar21;
        FUN_001cccac(plVar4[0x3f],plVar4,param_2);
        plVar20 = plVar4 + 1;
        iVar17 = (int)*plVar20;
        iVar12 = (int)*plVar20 + -1;
        if (iVar17 != (int)*plVar20) {
          ClearExclusiveLocal();
LAB_001d1954:
          do {
            lVar13 = *plVar20;
            iVar12 = iVar17 + -1;
            if ((int)lVar13 == iVar17) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar3) {
                *(int *)plVar20 = iVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_001d1920;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar17 = (int)lVar13;
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_001d1954;
LAB_001d1920:
        if ((iVar12 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar4 + 0xc) = 1;
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        puVar21 = puVar21 + 1;
      } while (puVar21 != *(undefined8 **)(param_1 + 0x48));
    }
  }
  return;
}

