
/* WARNING: Removing unreachable block (ram,0x001c945c) */

undefined8 FUN_001c9300(long param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  short sVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar7 = PTR_DAT_04bcb900;
  plVar15 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar8;
    if (uVar4 != 0) {
      lVar11 = **(long **)(puVar7 + 0xa0);
      if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar15 = (long *)(*(long *)(lVar11 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar15 == 0) || (lVar11 = *(long *)(*plVar15 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  plVar15 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  puVar16 = (undefined8 *)(param_1 + 0x10);
  if ((undefined8 *)*puVar16 == (undefined8 *)0x0) {
LAB_001c940c:
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x60)) {
      piVar2 = (int *)(param_2 + 8);
      iVar12 = *piVar2;
      if (iVar12 != *piVar2) {
        ClearExclusiveLocal();
LAB_001c9470:
        do {
          iVar3 = *piVar2;
          if (iVar3 == iVar12) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_001c9494;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar3;
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001c9470;
LAB_001c9494:
      if ((*(ushort *)(param_2 + 0x60) & 0xf) == 2) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      }
      puVar17 = puVar16;
      if ((undefined8 *)*puVar16 != (undefined8 *)0x0) {
        sVar10 = *(short *)(param_1 + 0x30);
        puVar9 = (undefined8 *)*puVar16;
        do {
          while (puVar16 = puVar9, 0 < (short)(*(short *)(puVar16 + 5) - sVar10)) {
            puVar9 = (undefined8 *)*puVar16;
            puVar17 = puVar16;
            if ((undefined8 *)*puVar16 == (undefined8 *)0x0) goto LAB_001c9504;
          }
          puVar9 = puVar16;
          if ((short)(sVar10 - *(short *)(puVar16 + 5)) < 1) goto LAB_001c956c;
          puVar9 = (undefined8 *)puVar16[1];
        } while ((undefined8 *)puVar16[1] != (undefined8 *)0x0);
        puVar17 = puVar16 + 1;
      }
LAB_001c9504:
      puVar9 = (undefined8 *)FUN_00187df4(0x38);
      puVar7 = PTR_DAT_04bcc320;
      puVar9[6] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar16;
      *puVar17 = puVar9;
      puVar9[4] = puVar7 + 0x10;
      *(undefined2 *)(puVar9 + 5) = *(undefined2 *)(param_1 + 0x30);
      puVar16 = puVar9;
      if (**(long **)(param_1 + 8) != 0) {
        *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
        puVar16 = (undefined8 *)*puVar17;
      }
      FUN_03876250(*(undefined8 *)(param_1 + 0x10),puVar16);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      sVar10 = *(short *)(param_1 + 0x30);
LAB_001c956c:
      *(short *)(param_2 + 0x70) = sVar10;
      sVar10 = *(short *)(param_1 + 0x30);
      puVar9[6] = param_2;
      *(short *)(param_1 + 0x30) = sVar10 + 1;
      uVar14 = 1;
      goto LAB_001c9584;
    }
  }
  else {
    puVar17 = (undefined8 *)*puVar16;
    puVar9 = puVar16;
    do {
      while (puVar13 = puVar17, (short)(*(short *)(param_1 + 0x30) - *(short *)(puVar13 + 5)) < 1) {
        puVar17 = (undefined8 *)*puVar13;
        puVar9 = puVar13;
        if ((undefined8 *)*puVar13 == (undefined8 *)0x0) goto LAB_001c93f0;
      }
      puVar1 = puVar13 + 1;
      puVar17 = (undefined8 *)*puVar1;
      puVar13 = puVar9;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_001c93f0:
    if ((puVar13 == puVar16) || (0 < (short)(*(short *)(puVar13 + 5) - *(short *)(param_1 + 0x30))))
    goto LAB_001c940c;
  }
  uVar14 = 0;
LAB_001c9584:
  (**(code **)(*plVar15 + 0x20))(plVar15);
  return uVar14;
}

