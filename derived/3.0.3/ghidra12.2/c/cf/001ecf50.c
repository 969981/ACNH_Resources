
/* WARNING: Removing unreachable block (ram,0x001ed090) */

undefined1  [16] FUN_001ecf50(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  plVar12 = param_1 + 1;
  plVar11 = (long *)*plVar12;
  if (plVar11 == (long *)0x0) {
    plVar13 = plVar12;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar8 = plVar11[5];
      if (lVar8 != 0) {
        plVar12 = plVar11;
        do {
          if (*(long *)(lVar8 + 0x10) == 0) {
            auVar17._8_8_ = 0;
            auVar17._0_8_ = plVar12;
            return auVar17;
          }
          plVar11 = (long *)*plVar12;
          plVar13 = plVar12;
          if (plVar11 == (long *)0x0) goto LAB_001ecfc0;
          lVar8 = plVar11[5];
          plVar12 = plVar11;
        } while (lVar8 != 0);
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
    uVar7 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
    do {
      while( true ) {
        plVar12 = plVar11;
        uVar10 = 0;
        if ((plVar12[5] != 0) && (uVar10 = *(ulong *)(plVar12[5] + 0x10), uVar7 < uVar10)) break;
        if (uVar7 <= uVar10) {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = plVar12;
          return auVar15;
        }
        plVar11 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_001ecfc0;
        }
      }
      plVar11 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_001ecfc0:
  auVar16._0_8_ = (undefined8 *)FUN_00187df4(0xe0);
  lVar8 = *param_4;
  auVar16._0_8_[4] = PTR_DAT_04bcbf30 + 0x10;
  auVar16._0_8_[5] = 0;
  lVar8 = *(long *)(lVar8 + 8);
  if (lVar8 != 0) {
    auVar16._0_8_[5] = lVar8;
    piVar1 = (int *)(lVar8 + 8);
    if (*piVar1 != 0) {
      iVar9 = *piVar1;
      if (iVar9 == *piVar1) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001ed0c8;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while( true );
    }
  }
LAB_001ed0c8:
  FUN_001e1500(auVar16._0_8_ + 7);
  puVar5 = PTR_DAT_04bcbf78;
  *auVar16._0_8_ = 0;
  auVar16._0_8_[1] = 0;
  auVar16._0_8_[2] = plVar12;
  *(undefined1 *)(auVar16._0_8_ + 0x1b) = 0;
  auVar16._0_8_[0x19] = puVar5 + 0x10;
  auVar16._0_8_[0x1a] = 0;
  *plVar13 = (long)auVar16._0_8_;
  puVar6 = auVar16._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar6 = (undefined8 *)*plVar13;
  }
  FUN_03876250(param_1[1],puVar6);
  param_1[2] = param_1[2] + 1;
  auVar16._8_8_ = 1;
  return auVar16;
}

