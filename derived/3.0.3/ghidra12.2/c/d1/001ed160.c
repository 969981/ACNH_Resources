
/* WARNING: Removing unreachable block (ram,0x001ed2b0) */

void FUN_001ed160(long *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar16 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar16 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_001ecc0c(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00190440("vector");
  }
  uVar9 = param_1[2] - *param_1;
  uVar13 = (long)uVar9 >> 3;
  if (uVar13 <= uVar1) {
    uVar13 = uVar1;
  }
  if (0x7fffffffffffffef < uVar9) {
    uVar13 = 0xfffffffffffffff;
  }
  if (uVar13 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_00187df4(uVar13 << 4);
  }
  puVar7 = PTR_DAT_04bcbf30;
  plVar3 = (long *)(lVar8 + lVar16 * 0x10);
  *plVar3 = (long)(PTR_DAT_04bcbf30 + 0x10);
  plVar3[1] = 0;
  lVar16 = *(long *)(param_2 + 8);
  if (lVar16 != 0) {
    plVar3[1] = lVar16;
    piVar2 = (int *)(lVar16 + 8);
    if (*piVar2 != 0) {
      iVar12 = *piVar2;
      if (iVar12 == *piVar2) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_001ed22c;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar4 = *piVar2;
        if (iVar4 == iVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar4;
      } while( true );
    }
  }
LAB_001ed22c:
  puVar15 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)param_1[1];
  lVar8 = lVar8 + uVar13 * 0x10;
  if (puVar14 == puVar15) {
    *param_1 = (long)plVar3;
    param_1[1] = (long)(plVar3 + 2);
    param_1[2] = lVar8;
  }
  else {
    plVar10 = plVar3;
    do {
      plVar11 = plVar10 + -2;
      *plVar11 = (long)(puVar7 + 0x10);
      plVar10[-1] = 0;
      lVar16 = puVar14[-1];
      if (lVar16 != 0) {
        plVar10[-1] = lVar16;
        piVar2 = (int *)(lVar16 + 8);
        if (*piVar2 != 0) {
          iVar12 = *piVar2;
          if (iVar12 != *piVar2) {
            ClearExclusiveLocal();
LAB_001ed2c4:
            do {
              iVar4 = *piVar2;
              if (iVar4 == iVar12) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar12 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_001ed250;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar4;
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_001ed2c4;
        }
      }
LAB_001ed250:
      puVar14 = puVar14 + -2;
      plVar10 = plVar11;
    } while (puVar14 != puVar15);
    puVar14 = (undefined8 *)*param_1;
    puVar15 = (undefined8 *)param_1[1];
    param_1[2] = lVar8;
    *param_1 = (long)plVar11;
    param_1[1] = (long)(plVar3 + 2);
    while (puVar15 != puVar14) {
      puVar15 = puVar15 + -2;
      (**(code **)*puVar15)(puVar15);
    }
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar14);
  return;
}

