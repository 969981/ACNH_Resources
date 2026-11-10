
void FUN_00383b50(undefined1 param_1 [16],float param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined2 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  float fVar17;
  undefined4 uVar18;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  FUN_0037d4c0();
  if (param_3[0x1b] == 0) {
    *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0x7f;
  }
  else {
    (**(code **)(*param_3 + 0xb8))(param_3,param_4);
    uVar7 = FUN_0037e870(param_3);
    if ((uVar7 & 1) == 0) {
      FUN_0037b240(param_3[0x1b],param_4);
      FUN_00376c48(param_3[0x1b],param_4);
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((uVar1 >> 0x12 & 1) != 0) {
        lVar8 = FUN_0037c748(param_3,6);
        lVar9 = FUN_0037c9ac(param_3,0x12);
        if (lVar9 != 0) {
          pbVar15 = *(byte **)(param_4 + 200);
          lVar12 = *(long *)(*(long *)(param_4 + 0xb8) + 0x68);
          uVar7 = lVar12 + 0x11fU & -lVar12;
          if ((*pbVar15 & 1) == 0) {
            lVar14 = *(long *)(pbVar15 + 0x40);
            *(ulong *)(pbVar15 + 0x40) = lVar14 + uVar7;
          }
          else {
            plVar16 = *(long **)(pbVar15 + 0x40);
            do {
              lVar14 = *plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *plVar16 = lVar14 + uVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(int *)(lVar9 + 8) = (int)lVar14;
          if ((*(byte *)(lVar8 + 4) >> 4 & 1) != 0) {
            pbVar15 = *(byte **)(param_4 + 200);
            uVar13 = lVar12 + 0x22fU & -lVar12;
            if ((*pbVar15 & 1) == 0) {
              lVar8 = *(long *)(pbVar15 + 0x40);
              *(ulong *)(pbVar15 + 0x40) = lVar8 + uVar13;
            }
            else {
              plVar16 = *(long **)(pbVar15 + 0x40);
              do {
                lVar8 = *plVar16;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar5) {
                  *plVar16 = lVar8 + uVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            *(int *)(lVar9 + 0xc) = (int)lVar8;
            pbVar15 = *(byte **)(param_4 + 200);
            if ((*pbVar15 & 1) == 0) {
              lVar8 = *(long *)(pbVar15 + 0x40);
              *(ulong *)(pbVar15 + 0x40) = lVar8 + uVar7;
            }
            else {
              plVar16 = *(long **)(pbVar15 + 0x40);
              do {
                lVar8 = *plVar16;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar5) {
                  *plVar16 = lVar8 + uVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            *(int *)(lVar9 + 0x10) = (int)lVar8;
          }
        }
      }
      lVar8 = FUN_003788bc(param_3[0x1b],param_4);
      if ((lVar8 != 0) && (lVar8 = FUN_003795ec(param_3[0x1b],param_4), lVar8 != 0)) {
        plVar16 = (long *)param_3[0x1b];
        if (*(byte *)(param_3 + 0x1e) < 4) {
          if ((((((((*(byte *)((long)plVar16 + 0x12) >> 1 & 1) == 0) && ((char)param_3[0x1c] == -1))
                 && (*(char *)((long)param_3 + 0xe1) == -1)) &&
                ((*(char *)((long)param_3 + 0xe2) == -1 && (*(char *)((long)param_3 + 0xe3) == -1)))
                ) && ((*(char *)((long)param_3 + 0xe4) == -1 &&
                      ((*(char *)((long)param_3 + 0xe5) == -1 &&
                       (*(char *)((long)param_3 + 0xe6) == -1)))))) &&
              (*(char *)((long)param_3 + 0xe7) == -1)) &&
             ((((((char)param_3[0x1d] == -1 && (*(char *)((long)param_3 + 0xe9) == -1)) &&
                (*(char *)((long)param_3 + 0xea) == -1)) &&
               (((*(char *)((long)param_3 + 0xeb) == -1 && (*(char *)((long)param_3 + 0xec) == -1))
                && ((*(char *)((long)param_3 + 0xed) == -1 &&
                    ((*(char *)((long)param_3 + 0xee) == -1 &&
                     (*(char *)((long)param_3 + 0xef) == -1)))))))) &&
              (*(char *)((long)param_3 + 0x5a) == -1)))) {
            uVar10 = FUN_0037e5d0(param_3);
            uVar6 = FUN_0037e5a8(param_3);
            (**(code **)(*plVar16 + 0x20))
                      (plVar16,param_4,0xff,1,1,param_3 + 0xe,param_3 + 10,uVar10,uVar6);
          }
          else {
            uVar2 = *(undefined1 *)((long)param_3 + 0x5a);
            uVar10 = FUN_0037e5d0(param_3);
            uVar6 = FUN_0037e5a8(param_3);
            (**(code **)(*plVar16 + 0x20))
                      (plVar16,param_4,uVar2,0,1,param_3 + 0xe,param_3 + 10,uVar10,uVar6);
            lVar8 = FUN_003788bc(param_3[0x1b],param_4);
            uVar18 = NEON_ucvtf((uint)*(byte *)(param_3 + 0x1c));
            *(undefined4 *)(lVar8 + 0x1d0) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe1));
            *(undefined4 *)(lVar8 + 0x1d4) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe2));
            *(undefined4 *)(lVar8 + 0x1d8) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe3));
            *(undefined4 *)(lVar8 + 0x1dc) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe4));
            *(undefined4 *)(lVar8 + 0x1e0) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe5));
            *(undefined4 *)(lVar8 + 0x1e4) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe6));
            *(undefined4 *)(lVar8 + 0x1e8) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe7));
            *(undefined4 *)(lVar8 + 0x1ec) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)(param_3 + 0x1d));
            *(undefined4 *)(lVar8 + 0x1f0) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xe9));
            *(undefined4 *)(lVar8 + 500) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xea));
            *(undefined4 *)(lVar8 + 0x1f8) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xeb));
            *(undefined4 *)(lVar8 + 0x1fc) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xec));
            *(undefined4 *)(lVar8 + 0x200) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xed));
            *(undefined4 *)(lVar8 + 0x204) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xee));
            *(undefined4 *)(lVar8 + 0x208) = uVar18;
            uVar18 = NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xef));
            *(undefined4 *)(lVar8 + 0x20c) = uVar18;
          }
          if ((*(byte *)(param_3 + 0xc) & 3) == 0) {
            uVar10 = FUN_003788bc(param_3[0x1b],param_4);
            local_58 = (float)FUN_0037d114(param_3);
            fStack_54 = param_2;
            FUN_00364a10(param_4,uVar10,&local_58,param_3 + 10,*(undefined1 *)((long)param_3 + 0xf1)
                         ,param_3[0x1f]);
            bVar3 = *(byte *)((long)param_3 + 0x62);
          }
          else {
            lVar8 = FUN_0037c748(param_3,0);
            if (lVar8 == 0) {
              lVar8 = FUN_0037c748(param_3,1);
            }
            local_58 = (float)FUN_0037d114(param_3);
            fStack_54 = param_2 - *(float *)((long)param_3 + 0x54) * *(float *)(lVar8 + 0x10);
            local_58 = local_58 + *(float *)(param_3 + 10) * *(float *)(lVar8 + 0xc);
            fStack_5c = *(float *)(lVar8 + 8) * *(float *)((long)param_3 + 0x54);
            local_60 = *(float *)(lVar8 + 4) * *(float *)(param_3 + 10);
            uVar10 = FUN_003788bc(param_3[0x1b],param_4);
            FUN_00364a10(param_4,uVar10,&local_58,&local_60,*(undefined1 *)((long)param_3 + 0xf1),
                         param_3[0x1f]);
            bVar3 = *(byte *)((long)param_3 + 0x62);
          }
        }
        else {
          uVar2 = *(undefined1 *)((long)param_3 + 0x5a);
          uVar10 = FUN_0037e5d0(param_3);
          uVar6 = FUN_0037e5a8(param_3);
          (**(code **)(*plVar16 + 0x20))
                    (plVar16,param_4,uVar2,2,1,param_3 + 0xe,param_3 + 10,uVar10,uVar6);
          FUN_00384100(param_3,param_4);
          lVar8 = FUN_003788bc(param_3[0x1b],param_4);
          *(float *)(lVar8 + 0x210) = *(float *)(param_3 + 10) * 0.5;
          fVar17 = *(float *)((long)param_3 + 0x54);
          *(undefined8 *)(lVar8 + 0x218) = 0;
          *(float *)(lVar8 + 0x214) = fVar17 * 0.5;
          FUN_00365220(param_4,lVar8 + 0x40);
          bVar3 = *(byte *)((long)param_3 + 0x62);
        }
        if ((bVar3 >> 1 & 1) != 0) {
          FUN_0037ea30(param_3,param_4);
        }
        if ((uVar1 >> 0x12 & 1) == 0) {
          pcVar11 = *(code **)(param_4 + 0x168);
        }
        else {
          FUN_00384280(param_3,param_4);
          pcVar11 = *(code **)(param_4 + 0x168);
        }
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(param_4,param_3,*(undefined8 *)(param_4 + 0x170));
        }
      }
    }
  }
  return;
}

