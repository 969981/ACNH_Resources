
void FUN_03b62150(long param_1,float *param_2,float *param_3,float *param_4,undefined2 param_5,
                 undefined4 *param_6)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined8 local_38;
  
  lVar15 = *(long *)(param_1 + 0x10);
  fVar16 = *param_3;
  bVar11 = true;
  if ((*(float *)(param_1 + 8) != fVar16 || lVar15 != 0) &&
     (bVar11 = false, !NAN(*param_2) && !NAN(fVar16))) {
    bVar11 = *param_2 == fVar16;
  }
  if (bVar11) {
    if (*(long *)(param_4 + 4) != 0) {
      plVar12 = *(long **)(param_1 + 0x10);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x10))();
        *(long *)(param_1 + 0x10) = 0;
      }
      local_38 = *(undefined8 *)PTR_DAT_04bd1e70;
      FUN_03b519f0(&local_38,*(undefined8 *)(param_4 + 4));
    }
  }
  else {
    plVar12 = *(long **)(param_1 + 0x10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x10))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar8 = PTR_DAT_04bd1e70;
    if (lVar15 == 0) {
      fVar16 = *param_2;
    }
    else {
      fVar16 = *(float *)(param_1 + 0xc);
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x198);
    if ((lVar15 != 0) && (*(char *)(lVar15 + 8) != '\0')) {
      *(int *)(lVar15 + 0xc) = *(int *)(lVar15 + 0xc) + 1;
      puVar1 = (uint *)(lVar15 + 0x40);
      do {
        while( true ) {
          uVar5 = *puVar1;
          if (uVar5 == 0xffff) goto LAB_03b62314;
          if (*puVar1 == uVar5) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = (uint)*(ushort *)(*(long *)(lVar15 + 0x38) + (ulong)uVar5 * 2);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar5 & 0xffff) != 0xffff) {
        piVar2 = (int *)(lVar15 + 0x18);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          puVar10 = PTR_DAT_04bd2030;
          puVar9 = PTR_DAT_04bd1f28;
        } while (cVar7 != '\0');
        if (*(long *)(lVar15 + 0x20) != 0) {
          fVar17 = *param_4;
          plVar12 = (long *)(*(long *)(lVar15 + 0x20) + (ulong)(uVar5 & 0xffff) * 0x50);
          fVar6 = param_4[1];
          *(undefined1 *)((long)plVar12 + 0x1c) = 0;
          *(float *)(plVar12 + 4) = fVar16;
          *(float *)(plVar12 + 2) = fVar6;
          *(undefined4 *)((long)plVar12 + 0x14) = 0;
          *plVar12 = (long)(puVar9 + 0x10);
          plVar12[1] = (long)(puVar10 + 0x10);
          *(float *)(plVar12 + 3) = 1.0 / fVar17;
          *(float *)((long)plVar12 + 0x24) = *param_3 - fVar16;
          lVar15 = *(long *)(*(long *)puVar8 + 0x188);
          piVar2 = (int *)(lVar15 + 0x40);
          if (*piVar2 != 0) {
            puVar1 = (uint *)(lVar15 + 0x38);
            do {
              while( true ) {
                uVar5 = *puVar1;
                if (*puVar1 == uVar5) break;
                ClearExclusiveLocal();
              }
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar11) {
                *puVar1 = (uint)*(ushort *)(*(long *)(lVar15 + 0x30) + (ulong)uVar5 * 2);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            piVar3 = (int *)(lVar15 + 0x10);
            do {
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = *piVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            puVar4 = (undefined8 *)(*(long *)(lVar15 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
            do {
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = *piVar2 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(undefined2 *)(puVar4 + 1) = param_5;
            *puVar4 = &PTR_LAB_04b77980;
            *(int *)((long)puVar4 + 0xc) =
                 (int)((ulong)((long)plVar12 - *(long *)(*(long *)(*(long *)puVar8 + 0x198) + 0x20))
                      >> 4) * -0x33333333;
            *(undefined4 *)(puVar4 + 2) = *param_6;
            *(long **)(param_1 + 0x10) = plVar12;
            lVar15 = *(long *)(*(long *)puVar8 + 0x188);
            uVar13 = 2;
            if (param_4[2] != 1.4013e-45) {
              uVar13 = 3;
            }
            piVar2 = (int *)(lVar15 + 0x40);
            if (*piVar2 == 0) {
              plVar12 = (long *)0x0;
            }
            else {
              puVar1 = (uint *)(lVar15 + 0x38);
              do {
                while( true ) {
                  uVar5 = *puVar1;
                  if (*puVar1 == uVar5) break;
                  ClearExclusiveLocal();
                }
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar11) {
                  *puVar1 = (uint)*(ushort *)(*(long *)(lVar15 + 0x30) + (ulong)uVar5 * 2);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              piVar3 = (int *)(lVar15 + 0x10);
              do {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar11) {
                  *piVar3 = *piVar3 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              plVar12 = (long *)(*(long *)(lVar15 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
              do {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar11) {
                  *piVar2 = *piVar2 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              *plVar12 = (long)(PTR_DAT_04bd2008 + 0x10);
              lVar15 = *(long *)(param_4 + 4);
              *plVar12 = (long)(PTR_DAT_04bd1f78 + 0x10);
              if (lVar15 == 0) {
                uVar14 = 0xffffffff;
              }
              else {
                uVar14 = (undefined4)
                         ((ulong)(lVar15 - *(long *)(*(long *)(*(long *)puVar8 + 0x188) + 0x18)) >>
                         6);
              }
              *(undefined4 *)(plVar12 + 1) = uVar14;
              *(int *)((long)plVar12 + 0xc) =
                   (int)((ulong)((long)puVar4 - *(long *)(*(long *)(*(long *)puVar8 + 0x188) + 0x18)
                                ) >> 6);
              *(undefined4 *)(plVar12 + 2) = uVar13;
            }
            local_38 = *(undefined8 *)puVar8;
            FUN_03b519f0(&local_38,plVar12);
            *(float *)(param_1 + 8) = *param_3;
            return;
          }
        }
      }
    }
LAB_03b62314:
    fVar16 = *param_3;
    if (fVar16 != *(float *)(param_1 + 8)) {
      lVar15 = *(long *)(*(long *)puVar8 + 0x188);
      piVar2 = (int *)(lVar15 + 0x40);
      if (*piVar2 == 0) {
        plVar12 = (long *)0x0;
      }
      else {
        puVar1 = (uint *)(lVar15 + 0x38);
        do {
          while( true ) {
            uVar5 = *puVar1;
            if (*puVar1 == uVar5) break;
            ClearExclusiveLocal();
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = (uint)*(ushort *)(*(long *)(lVar15 + 0x30) + (ulong)uVar5 * 2);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        piVar3 = (int *)(lVar15 + 0x10);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar12 = (long *)(*(long *)(lVar15 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        *plVar12 = (long)(PTR_DAT_04bd2008 + 0x10);
        fVar16 = *param_3;
        *plVar12 = (long)&PTR_LAB_04b779c0;
        *(undefined2 *)((long)plVar12 + 0xc) = param_5;
        *(float *)(plVar12 + 1) = fVar16;
        *(undefined4 *)(plVar12 + 2) = *param_6;
      }
      local_38 = *(undefined8 *)puVar8;
      FUN_03b519f0(&local_38,plVar12);
      fVar16 = *param_3;
    }
    *(float *)(param_1 + 8) = fVar16;
    plVar12 = *(long **)(param_1 + 0x10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x10))();
      *(long *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

