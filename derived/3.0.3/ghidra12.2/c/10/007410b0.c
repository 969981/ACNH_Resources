
void FUN_007410b0(long param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar13 == 0) {
    uVar12 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar12 = (int)lVar13 - 1;
  }
  puVar2 = (uint *)(param_1 + 0x274);
  do {
    uVar19 = *puVar2;
    uVar20 = (ulong)uVar19;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar19 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  iVar5 = *(int *)(param_1 + 0x278);
  uVar6 = *(uint *)(param_1 + 0x288);
  if ((0 < iVar5) && (iVar1 = iVar5 + 2, (int)uVar19 < iVar1)) {
    if (uVar6 == 0) {
      do {
        if (((int)uVar20 < iVar5) &&
           (lVar13 = *(long *)(*(long *)(param_1 + 0x280) +
                              (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3)),
           (*(uint *)(lVar13 + 0x248) >> 1 & 1) == 0)) {
          if (*(long *)(lVar13 + 0xd0) != lVar13 + 200) {
            lVar16 = (long)*(int *)(lVar13 + 0xdc);
            puVar14 = (undefined8 *)(*(long *)(lVar13 + 0xd0) - lVar16);
            do {
              (**(code **)*puVar14)(puVar14);
              puVar14 = (undefined8 *)(*(long *)((long)puVar14 + lVar16 + 8) - lVar16);
            } while (puVar14 != (undefined8 *)((lVar13 + 200) - lVar16));
          }
        }
        do {
          uVar19 = *puVar2;
          uVar20 = (ulong)uVar19;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      } while ((int)uVar19 < iVar1);
    }
    else {
      piVar3 = (int *)(param_1 + 0x298);
      iVar18 = -1;
      do {
        uVar19 = (uint)uVar20;
        if ((int)uVar19 < iVar5) {
          if (uVar19 < *(uint *)(param_1 + 0x278)) {
            plVar15 = (long *)(*(long *)(param_1 + 0x280) + ((long)(uVar20 << 0x20) >> 0x1d));
            goto LAB_00741198;
          }
LAB_007411a0:
          lVar13 = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x278) <= iVar5 - 1U) goto LAB_007411a0;
          plVar15 = (long *)(*(long *)(param_1 + 0x280) + (ulong)(iVar5 - 1U) * 8);
LAB_00741198:
          lVar13 = *plVar15;
        }
        iVar7 = *(int *)(lVar13 + 0x24c);
        if (iVar7 != iVar18) {
          *(int *)(param_1 + (long)(int)uVar12 * 4 + 0x268) = iVar7;
          DataMemoryBarrier(2,3);
          do {
            while( true ) {
              piVar4 = piVar3 + (ulong)*(uint *)(param_1 + 0x290) * 0x12;
              if (1 < *(uint *)(param_1 + 0x290)) {
                piVar4 = piVar3;
              }
              do {
                iVar18 = *piVar4;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar9) {
                  *piVar4 = iVar18 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 < piVar4[0xe] + -1) {
                nn::os::WaitLightEvent((LightEventType *)(piVar4 + 10));
              }
              else {
                puVar14 = *(undefined8 **)(piVar4 + 0x10);
                if (puVar14 != (undefined8 *)0x0) {
                  (**(code **)*puVar14)(puVar14,piVar4);
                }
                nn::os::SignalLightEvent((LightEventType *)(piVar4 + 10));
              }
              if (uVar12 < 3) {
                lVar17 = *(long *)(&DAT_0414e6b0 + (long)(int)uVar12 * 8);
                lVar16 = *(long *)(&DAT_0414e6c8 + (long)(int)uVar12 * 8);
              }
              else {
                lVar16 = 0;
                lVar17 = 0;
              }
              bVar9 = *(int *)(param_1 + 0x268 + lVar16 * 4) < iVar7;
              bVar11 = *(int *)(param_1 + 0x268 + lVar17 * 4) < iVar7;
              piVar4 = piVar3 + (ulong)*(uint *)(param_1 + 0x290) * 0x12;
              if (1 < *(uint *)(param_1 + 0x290)) {
                piVar4 = piVar3;
              }
              do {
                iVar18 = *piVar4;
                cVar8 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar10) {
                  *piVar4 = iVar18 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 < piVar4[0xe] + -1) break;
              puVar14 = *(undefined8 **)(piVar4 + 0x10);
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(puVar14,piVar4);
              }
              nn::os::SignalLightEvent((LightEventType *)(piVar4 + 10));
              if (!bVar9 && !bVar11) goto LAB_007412dc;
            }
            nn::os::WaitLightEvent((LightEventType *)(piVar4 + 10));
          } while (bVar9 || bVar11);
LAB_007412dc:
          iVar18 = iVar7;
        }
        if ((int)uVar19 < iVar5) {
          FUN_006faa20(lVar13,uVar6);
        }
        do {
          uVar19 = *puVar2;
          uVar20 = (ulong)uVar19;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      } while ((int)uVar19 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x268) = 0x7fffffff;
  piVar3 = (int *)(param_1 + 0x348) + (ulong)uVar6 * 0x12;
  if (3 < uVar6) {
    piVar3 = (int *)(param_1 + 0x348);
  }
  do {
    iVar5 = *piVar3;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar9) {
      *piVar3 = iVar5 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar5 < piVar3[0xe] + -1) {
    nn::os::WaitLightEvent((LightEventType *)(piVar3 + 10));
    return;
  }
  puVar14 = *(undefined8 **)(piVar3 + 0x10);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,piVar3);
  }
  nn::os::SignalLightEvent((LightEventType *)(piVar3 + 10));
  return;
}

