
/* WARNING: Removing unreachable block (ram,0x001e7684) */

void FUN_001e75c0(long *param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar9 = *param_1;
  if ((ulong)(param_1[2] - lVar9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_001ecc0c(param_1);
                    /* WARNING: Does not return */
      pcVar7 = (code *)UndefinedInstructionException(0,0x1e7734);
      (*pcVar7)();
    }
    lVar10 = param_1[1];
    lVar8 = FUN_00187df4(param_2 * 0x10);
    lVar2 = lVar8 + param_2 * 0x10;
    puVar15 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)(lVar8 + (lVar10 - lVar9));
    if (puVar14 == puVar15) {
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar3;
      param_1[2] = lVar2;
    }
    else {
      puVar11 = puVar3;
      do {
        puVar12 = puVar11 + -2;
        *puVar12 = &PTR_LAB_0483cdf8;
        puVar11[-1] = 0;
        lVar9 = puVar14[-1];
        if (lVar9 != 0) {
          puVar11[-1] = lVar9;
          piVar1 = (int *)(lVar9 + 8);
          if (*piVar1 != 0) {
            iVar13 = *piVar1;
            if (iVar13 != *piVar1) {
              ClearExclusiveLocal();
LAB_001e76a0:
              do {
                iVar4 = *piVar1;
                if (iVar4 == iVar13) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar13 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_001e7624;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar13 = iVar4;
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_001e76a0;
          }
        }
LAB_001e7624:
        puVar14 = puVar14 + -2;
        puVar11 = puVar12;
      } while (puVar14 != puVar15);
      puVar14 = (undefined8 *)*param_1;
      puVar15 = (undefined8 *)param_1[1];
      param_1[2] = lVar2;
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar3;
      while (puVar15 != puVar14) {
        puVar15 = puVar15 + -2;
        (**(code **)*puVar15)(puVar15);
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar14);
      return;
    }
  }
  return;
}

