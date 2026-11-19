
void FUN_03b56980(long param_1,float *param_2,float *param_3,float *param_4,undefined2 *param_5,
                 undefined2 *param_6)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  undefined2 uVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 local_38;
  
  uVar7 = *param_5;
  lVar16 = *(long *)(param_1 + 0x10);
  fVar17 = *param_3;
  bVar11 = true;
  if ((*(float *)(param_1 + 8) != fVar17 || lVar16 != 0) &&
     (bVar11 = false, !NAN(*param_2) && !NAN(fVar17))) {
    bVar11 = *param_2 == fVar17;
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
    puVar9 = PTR_DAT_04bd1e70;
    if (lVar16 == 0) {
      fVar17 = *param_2;
    }
    else {
      fVar17 = *(float *)(param_1 + 0xc);
    }
    lVar16 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x198);
    if ((lVar16 != 0) && (*(char *)(lVar16 + 8) != '\0')) {
      *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
      puVar1 = (uint *)(lVar16 + 0x40);
      do {
        while( true ) {
          uVar5 = *puVar1;
          if (uVar5 == 0xffff) goto LAB_03b56b40;
          if (*puVar1 == uVar5) break;
          ClearExclusiveLocal();
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = (uint)*(ushort *)(*(long *)(lVar16 + 0x38) + (ulong)uVar5 * 2);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar5 & 0xffff) != 0xffff) {
        piVar2 = (int *)(lVar16 + 0x18);
        do {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          puVar10 = PTR_DAT_04bd2030;
        } while (cVar8 != '\0');
        if (*(long *)(lVar16 + 0x20) != 0) {
          fVar18 = *param_4;
          puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x20) + (ulong)(uVar5 & 0xffff) * 0x50);
          fVar6 = param_4[1];
          *(undefined1 *)((long)puVar14 + 0x1c) = 0;
          *(float *)(puVar14 + 4) = fVar17;
          *(float *)(puVar14 + 2) = fVar6;
          *(undefined4 *)((long)puVar14 + 0x14) = 0;
          *(float *)(puVar14 + 3) = 1.0 / fVar18;
          *puVar14 = &PTR_LAB_04b76b30;
          puVar14[1] = puVar10 + 0x10;
          *(float *)((long)puVar14 + 0x24) = *param_3 - fVar17;
          lVar16 = *(long *)(*(long *)puVar9 + 0x188);
          piVar2 = (int *)(lVar16 + 0x40);
          if (*piVar2 != 0) {
            puVar1 = (uint *)(lVar16 + 0x38);
            do {
              while( true ) {
                uVar5 = *puVar1;
                if (*puVar1 == uVar5) break;
                ClearExclusiveLocal();
              }
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar11) {
                *puVar1 = (uint)*(ushort *)(*(long *)(lVar16 + 0x30) + (ulong)uVar5 * 2);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            piVar3 = (int *)(lVar16 + 0x10);
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = *piVar3 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            puVar4 = (undefined8 *)(*(long *)(lVar16 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = *piVar2 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            *(undefined2 *)(puVar4 + 1) = uVar7;
            *puVar4 = &PTR_LAB_04b76a98;
            *(int *)((long)puVar4 + 0xc) =
                 (int)((ulong)((long)puVar14 - *(long *)(*(long *)(*(long *)puVar9 + 0x198) + 0x20))
                      >> 4) * -0x33333333;
            *(undefined2 *)(puVar4 + 2) = *param_6;
            *(undefined8 **)(param_1 + 0x10) = puVar14;
            lVar16 = *(long *)(*(long *)puVar9 + 0x188);
            uVar13 = 2;
            if (param_4[2] != 1.4013e-45) {
              uVar13 = 3;
            }
            piVar2 = (int *)(lVar16 + 0x40);
            if (*piVar2 == 0) {
              plVar12 = (long *)0x0;
            }
            else {
              puVar1 = (uint *)(lVar16 + 0x38);
              do {
                while( true ) {
                  uVar5 = *puVar1;
                  if (*puVar1 == uVar5) break;
                  ClearExclusiveLocal();
                }
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar11) {
                  *puVar1 = (uint)*(ushort *)(*(long *)(lVar16 + 0x30) + (ulong)uVar5 * 2);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              piVar3 = (int *)(lVar16 + 0x10);
              do {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar11) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              plVar12 = (long *)(*(long *)(lVar16 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
              do {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar11) {
                  *piVar2 = *piVar2 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              *plVar12 = (long)(PTR_DAT_04bd2008 + 0x10);
              lVar16 = *(long *)(param_4 + 4);
              *plVar12 = (long)(PTR_DAT_04bd1f78 + 0x10);
              if (lVar16 == 0) {
                uVar15 = 0xffffffff;
              }
              else {
                uVar15 = (undefined4)
                         ((ulong)(lVar16 - *(long *)(*(long *)(*(long *)puVar9 + 0x188) + 0x18)) >>
                         6);
              }
              *(undefined4 *)(plVar12 + 1) = uVar15;
              *(int *)((long)plVar12 + 0xc) =
                   (int)((ulong)((long)puVar4 - *(long *)(*(long *)(*(long *)puVar9 + 0x188) + 0x18)
                                ) >> 6);
              *(undefined4 *)(plVar12 + 2) = uVar13;
            }
            local_38 = *(undefined8 *)puVar9;
            FUN_03b519f0(&local_38,plVar12);
            *(float *)(param_1 + 8) = *param_3;
            return;
          }
        }
      }
    }
LAB_03b56b40:
    fVar17 = *param_3;
    if (fVar17 != *(float *)(param_1 + 8)) {
      lVar16 = *(long *)(*(long *)puVar9 + 0x188);
      piVar2 = (int *)(lVar16 + 0x40);
      if (*piVar2 == 0) {
        plVar12 = (long *)0x0;
      }
      else {
        puVar1 = (uint *)(lVar16 + 0x38);
        do {
          while( true ) {
            uVar5 = *puVar1;
            if (*puVar1 == uVar5) break;
            ClearExclusiveLocal();
          }
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = (uint)*(ushort *)(*(long *)(lVar16 + 0x30) + (ulong)uVar5 * 2);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        piVar3 = (int *)(lVar16 + 0x10);
        do {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar12 = (long *)(*(long *)(lVar16 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
        do {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *plVar12 = (long)(PTR_DAT_04bd2008 + 0x10);
        fVar17 = *param_3;
        *plVar12 = (long)&PTR_LAB_04b76ad8;
        *(undefined2 *)((long)plVar12 + 0xc) = uVar7;
        *(float *)(plVar12 + 1) = fVar17;
        *(undefined2 *)((long)plVar12 + 0xe) = *param_6;
      }
      local_38 = *(undefined8 *)puVar9;
      FUN_03b519f0(&local_38,plVar12);
      fVar17 = *param_3;
    }
    *(float *)(param_1 + 8) = fVar17;
    plVar12 = *(long **)(param_1 + 0x10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x10))();
      *(long *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

