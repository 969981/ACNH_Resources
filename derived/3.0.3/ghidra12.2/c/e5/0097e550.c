
void FUN_0097e550(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  byte bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  long local_8c;
  undefined4 local_84;
  undefined8 local_80;
  float local_78;
  
  if ((param_2 != (long *)0x0) &&
     (((param_2[0x1a] == 0 || ((*(byte *)(param_2[0x1a] + 0x178) & 1) != 0)) &&
      ((*(byte *)(param_2 + 3) & 1) == 0)))) {
    if (*(long *)(param_1 + 0x10) != param_1 + 8) {
      lVar11 = (long)*(int *)(param_1 + 0x1c);
      plVar1 = param_2 + 0x12;
      plVar2 = param_2 + 0x16;
      plVar9 = (long *)(*(long *)(param_1 + 0x10) - lVar11);
      do {
        if ((*(byte *)(plVar9 + 3) & 1) == 0) {
          if (plVar9[0x1a] == 0) {
            bVar8 = 1;
          }
          else {
            bVar8 = *(byte *)(plVar9[0x1a] + 0x178) & 1;
          }
          if (((plVar9 != param_2) && (bVar8 != 0)) &&
             ((((*(uint *)(param_2 + 0xd) | 2) & *(uint *)((long)plVar9 + 100)) != 0 &&
              (((*(uint *)(plVar9 + 0xd) | 2) & *(uint *)((long)param_2 + 100)) != 0)))) {
            local_78 = 0.0;
            local_80 = 0;
            uVar6 = (**(code **)(*param_2 + 0x30))(param_2,plVar9,&local_8c,&local_80);
            if ((((((uVar6 & 1) != 0) &&
                  (((*(byte *)(param_2 + 3) >> 3 & 1) == 0 ||
                   ((*(byte *)(plVar9 + 3) >> 4 & 1) == 0)))) &&
                 ((((int)param_2[0xc] == 0 || ((int)param_2[0xc] != (int)plVar9[0xb])) &&
                  ((uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1), (uVar6 & 1) == 0 ||
                   (uVar6 = (**(code **)param_2[0x12])(plVar1,param_2,plVar9), (uVar6 & 1) != 0)))))
                 ) && (((*(byte *)(plVar9 + 3) >> 3 & 1) == 0 ||
                       ((*(byte *)(param_2 + 3) >> 4 & 1) == 0)))) &&
               (((int)plVar9[0xc] == 0 || ((int)plVar9[0xc] != (int)param_2[0xb])))) {
              plVar10 = plVar9 + 0x12;
              uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
              if (((uVar6 & 1) == 0) ||
                 (uVar6 = (**(code **)plVar9[0x12])(plVar10,plVar9,param_2), (uVar6 & 1) != 0)) {
                uVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
                if ((uVar6 & 1) == 0) {
                  uVar4 = *(uint *)(param_2 + 8);
                }
                else {
                  uVar4 = (**(code **)param_2[0x16])(plVar2,param_2,plVar9);
                }
                plVar10 = plVar9 + 0x16;
                uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
                if ((uVar6 & 1) == 0) {
                  uVar5 = *(uint *)(plVar9 + 8);
                }
                else {
                  uVar5 = (**(code **)plVar9[0x16])(plVar10,plVar9,param_2);
                }
                if ((uVar4 != 0) && (uVar4 != 0x201)) {
                  if (uVar5 == 0x201) {
                    uVar4 = 0;
                    *(undefined1 *)((long)param_2 + 0xe4) = 1;
                  }
                  fVar13 = (float)uVar5 + (float)uVar4;
                  if ((fVar13 < -1.1920929e-07) || (1.1920929e-07 < fVar13)) {
                    fVar13 = (float)uVar5 / fVar13;
                    local_80 = CONCAT44(fVar13 * local_80._4_4_,fVar13 * (float)local_80);
                    local_78 = fVar13 * local_78;
                    FUN_00989aa8(param_2,&local_80);
                  }
                }
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                *(int *)((long)param_2 + 0x5c) = (int)plVar9[0xb];
                uVar4 = *(uint *)((long)plVar9 + 100);
                *(undefined4 *)(param_2 + 0x1c) = local_84;
                *(uint *)((long)param_2 + 0x6c) = *(uint *)((long)param_2 + 0x6c) | uVar4;
                param_2[0x1b] = local_8c;
                puVar7 = (undefined4 *)(**(code **)(*plVar9 + 0x50))(plVar9);
                *(undefined4 *)(param_2 + 0x1d) = *puVar7;
                uVar3 = *(undefined4 *)((long)param_2 + 0x6c);
                *(undefined4 *)((long)param_2 + 0xec) = puVar7[1];
                uVar12 = puVar7[2];
                *(undefined4 *)((long)param_2 + 0x6c) = 0;
                *(undefined4 *)(param_2 + 0x1e) = uVar12;
                *(undefined4 *)((long)param_2 + 0x6c) = *(undefined4 *)((long)plVar9 + 100);
                uVar6 = (**(code **)(param_2[0xe] + 0x10))(param_2 + 0xe);
                if ((uVar6 & 1) != 0) {
                  (**(code **)param_2[0xe])(param_2 + 0xe,param_2);
                }
                *(undefined4 *)((long)param_2 + 0x6c) = uVar3;
              }
            }
          }
        }
        plVar9 = (long *)(*(long *)((long)plVar9 + lVar11 + 8) - lVar11);
      } while (plVar9 != (long *)((param_1 + 8) - lVar11));
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(float *)((long)param_2 + 0x1c) = *(float *)(param_2 + 5) + *(float *)((long)param_2 + 0x34);
    *(float *)((long)param_2 + 0x24) = *(float *)(param_2 + 6) + *(float *)((long)param_2 + 0x3c);
  }
  return;
}

