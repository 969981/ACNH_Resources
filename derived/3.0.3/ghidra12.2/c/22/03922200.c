
void FUN_03922200(long param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    param_2 = 0;
  }
  uVar4 = *(ushort *)(*(long *)(param_1 + 0x20) + (long)(int)param_2 * 4 + 2);
  uVar16 = (uint)uVar4;
  if (uVar4 != 0) {
    uVar21 = *(uint *)(param_1 + 0x28);
    uVar5 = *(ushort *)(*(long *)(param_1 + 0x20) + (long)(int)param_2 * 4);
    uVar10 = (uint)uVar5;
    uVar19 = (uVar4 + uVar10) - 1;
    if (((uVar4 != 1 && (uVar21 >= uVar10 && uVar21 != uVar5)) && uVar19 <= uVar21) &&
        ((uVar4 == 1 || (uVar21 < uVar10 || uVar21 == uVar5)) || uVar21 != uVar19)) {
      uVar17 = (ulong)(uVar4 >> 1);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar5 * 8);
      uVar18 = uVar17;
      do {
        uVar21 = (int)uVar17 * 2;
        plVar14 = (long *)puVar1[uVar18 - 1 & 0xffffffff];
        if ((int)uVar16 < (int)uVar21) {
LAB_03922280:
          uVar19 = (uint)uVar18;
        }
        else {
          uVar15 = uVar18 & 0xffffffff;
          do {
            uVar19 = (uint)uVar15;
            uVar10 = uVar21;
            if (((int)uVar21 < (int)uVar16) &&
               ((long *)puVar1[(long)(int)uVar21 + -1] != (long *)0x0)) {
              if (puVar1[(int)uVar21] == 0) {
                uVar10 = uVar21 | 1;
              }
              else {
                plVar8 = (long *)(**(code **)(*(long *)puVar1[(long)(int)uVar21 + -1] + 0x80))();
                plVar9 = (long *)(**(code **)(*(long *)puVar1[(int)uVar21] + 0x80))();
                (**(code **)(*plVar8 + 0x18))(plVar8);
                (**(code **)(*plVar8 + 0x18))(plVar8);
                pbVar20 = (byte *)plVar8[1];
                (**(code **)(*plVar9 + 0x18))(plVar9);
                if (pbVar20 != (byte *)plVar9[1]) {
                  pbVar20 = (byte *)plVar9[1];
                  pbVar12 = (byte *)plVar8[1];
                  lVar13 = 0x7ffff;
                  do {
                    bVar3 = *pbVar12;
                    if (bVar3 != *pbVar20) {
                      uVar10 = bVar3 < *pbVar20 | uVar21;
                      break;
                    }
                    if (bVar3 == 0) break;
                    bVar2 = lVar13 != 0;
                    pbVar20 = pbVar20 + 1;
                    pbVar12 = pbVar12 + 1;
                    lVar13 = lVar13 + -1;
                  } while (bVar2);
                }
              }
            }
            if (plVar14 == (long *)0x0) goto LAB_03922280;
            iVar6 = uVar10 - 1;
            uVar11 = 0;
            if (puVar1[iVar6] != 0) {
              plVar8 = (long *)(**(code **)(*plVar14 + 0x80))(plVar14);
              plVar9 = (long *)(**(code **)(*(long *)puVar1[iVar6] + 0x80))();
              (**(code **)(*plVar8 + 0x18))(plVar8);
              (**(code **)(*plVar8 + 0x18))(plVar8);
              pbVar20 = (byte *)plVar8[1];
              (**(code **)(*plVar9 + 0x18))(plVar9);
              if (pbVar20 == (byte *)plVar9[1]) break;
              pbVar20 = (byte *)plVar9[1];
              pbVar12 = (byte *)plVar8[1];
              lVar13 = 0x7ffff;
              while( true ) {
                bVar3 = *pbVar12;
                if (bVar3 != *pbVar20) break;
                if (bVar3 == 0) goto LAB_03922284;
                bVar2 = lVar13 == 0;
                pbVar20 = pbVar20 + 1;
                pbVar12 = pbVar12 + 1;
                lVar13 = lVar13 + -1;
                if (bVar2) goto LAB_03922284;
              }
              if (*pbVar20 <= bVar3) break;
              uVar11 = puVar1[iVar6];
            }
            uVar21 = uVar10 * 2;
            uVar15 = (ulong)uVar10;
            puVar1[(int)(uVar19 - 1)] = uVar11;
            uVar19 = uVar10;
          } while ((int)uVar21 <= (int)uVar16);
        }
LAB_03922284:
        uVar17 = (ulong)((int)uVar17 - 1);
        puVar1[(int)(uVar19 - 1)] = plVar14;
        bVar2 = 1 < (long)uVar18;
        uVar18 = uVar18 - 1;
      } while (bVar2);
      uVar21 = uVar16 - 1;
      plVar14 = (long *)puVar1[uVar21];
      puVar1[uVar21] = *puVar1;
      if (2 < uVar16) {
        do {
          uVar19 = 2;
          uVar10 = 1;
          do {
            uVar7 = uVar19;
            if (((int)uVar19 < (int)uVar21) &&
               ((long *)puVar1[(long)(int)uVar19 + -1] != (long *)0x0)) {
              if (puVar1[(int)uVar19] == 0) {
                uVar7 = uVar19 | 1;
              }
              else {
                plVar8 = (long *)(**(code **)(*(long *)puVar1[(long)(int)uVar19 + -1] + 0x80))();
                plVar9 = (long *)(**(code **)(*(long *)puVar1[(int)uVar19] + 0x80))();
                (**(code **)(*plVar8 + 0x18))(plVar8);
                (**(code **)(*plVar8 + 0x18))(plVar8);
                pbVar20 = (byte *)plVar8[1];
                (**(code **)(*plVar9 + 0x18))(plVar9);
                if (pbVar20 != (byte *)plVar9[1]) {
                  pbVar20 = (byte *)plVar9[1];
                  pbVar12 = (byte *)plVar8[1];
                  lVar13 = 0x7ffff;
                  do {
                    bVar3 = *pbVar12;
                    if (bVar3 != *pbVar20) {
                      uVar7 = bVar3 < *pbVar20 | uVar19;
                      break;
                    }
                    if (bVar3 == 0) break;
                    bVar2 = lVar13 != 0;
                    pbVar20 = pbVar20 + 1;
                    pbVar12 = pbVar12 + 1;
                    lVar13 = lVar13 + -1;
                  } while (bVar2);
                }
              }
            }
            if (plVar14 == (long *)0x0) {
              uVar10 = 1;
              break;
            }
            iVar6 = uVar7 - 1;
            uVar11 = 0;
            if (puVar1[iVar6] != 0) {
              plVar8 = (long *)(**(code **)(*plVar14 + 0x80))(plVar14);
              plVar9 = (long *)(**(code **)(*(long *)puVar1[iVar6] + 0x80))();
              (**(code **)(*plVar8 + 0x18))(plVar8);
              (**(code **)(*plVar8 + 0x18))(plVar8);
              pbVar20 = (byte *)plVar8[1];
              (**(code **)(*plVar9 + 0x18))(plVar9);
              if (pbVar20 == (byte *)plVar9[1]) break;
              pbVar20 = (byte *)plVar9[1];
              pbVar12 = (byte *)plVar8[1];
              lVar13 = 0x7ffff;
              while( true ) {
                bVar3 = *pbVar12;
                if (bVar3 != *pbVar20) break;
                if (bVar3 == 0) goto LAB_03922564;
                bVar2 = lVar13 == 0;
                pbVar20 = pbVar20 + 1;
                pbVar12 = pbVar12 + 1;
                lVar13 = lVar13 + -1;
                if (bVar2) goto LAB_03922564;
              }
              if (*pbVar20 <= bVar3) {
LAB_03922564:
                break;
              }
              uVar11 = puVar1[iVar6];
            }
            uVar19 = uVar7 * 2;
            puVar1[(int)(uVar10 - 1)] = uVar11;
            uVar10 = uVar7;
          } while ((int)uVar19 < (int)uVar16);
          uVar19 = uVar21 - 1;
          puVar1[(int)(uVar10 - 1)] = plVar14;
          plVar14 = (long *)puVar1[uVar19];
          puVar1[uVar19] = *puVar1;
          bVar2 = 2 < (int)uVar21;
          uVar16 = uVar21;
          uVar21 = uVar19;
        } while (bVar2);
      }
      *puVar1 = plVar14;
    }
  }
  return;
}

