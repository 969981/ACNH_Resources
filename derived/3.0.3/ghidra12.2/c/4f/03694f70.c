
void FUN_03694f70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  byte *pbVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  puVar6 = PTR_DAT_04bb34e8;
  puVar5 = PTR_DAT_04bb27c0;
  uVar14 = *(uint *)(param_1 + 0x2730);
  uVar15 = (ulong)uVar14;
  if ((((int)uVar14 < 0) || (uVar3 = *(uint *)(param_1 + 0x278), (int)uVar3 <= (int)uVar14)) ||
     (*(char *)(param_1 + 0x272c) == '\0')) {
    *(char *)(param_1 + 0x272c) = '\0';
    *(undefined4 *)(param_1 + 0x2730) = 0xffffffff;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x2734);
    uVar18 = 0;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb2e38 + 0x10;
    plVar17 = (long *)PTR_DAT_04bb3350;
    pbVar19 = PTR_DAT_04bb3748;
    do {
      if ((long)uVar18 < (long)(int)*(uint *)(param_1 + 0x278)) {
        if (uVar18 < *(uint *)(param_1 + 0x278)) {
          lVar13 = *(long *)(*(long *)(param_1 + 0x280) + uVar18 * 8);
          lVar12 = *(long *)puVar5;
        }
        else {
          lVar13 = 0;
          lVar12 = *(long *)puVar5;
        }
        if (lVar12 != 0) {
          uVar14 = *(uint *)(lVar13 + 0x40);
          if (((uVar14 == 0) ||
              (plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                   ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
             (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar14))))
          {
            plVar16 = (long *)0x0;
          }
          if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*plVar17 + 0x68));
            lVar13 = *(long *)puVar5;
            iVar7 = (**(code **)(*plVar10 + 0x60))();
            if (iVar7 < 0x11) {
              uVar14 = 1;
            }
            else {
              if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_036951c8;
              uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_036951c8:
            uVar14 = 0;
          }
          if (plVar16 != (long *)0x0) {
            if (((*pbVar19 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar19), iVar7 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = puVar1;
              __cxa_guard_release(pbVar19);
            }
            uVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3740);
            if (((uVar14 & uVar8) == 1) && (lVar13 = plVar16[0xd], lVar13 != 0)) {
              if ((uVar18 == uVar15) || ((1 << (ulong)((uint)uVar18 & 0x1f) & (uint)bVar4) != 0)) {
                if ((long *)plVar16[0x16] != plVar16 + 0x15) {
                  lVar13 = (long)*(int *)((long)plVar16 + 0xbc);
                  plVar17 = (long *)(plVar16[0x16] - lVar13);
                  do {
                    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
                      *(undefined **)PTR_DAT_04bb34e0 = puVar2;
                      __cxa_guard_release(puVar6);
                    }
                    if ((plVar17 != (long *)0x0) &&
                       (uVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb34e0),
                       (uVar11 & 1) != 0)) {
                      plVar17[0x6d] = 0x1040000000;
                      break;
                    }
                    plVar17 = (long *)(*(long *)((long)plVar17 + lVar13 + 8) - lVar13);
                  } while (plVar17 != (long *)((long)(plVar16 + 0x15) - lVar13));
                }
                plVar16[0x83] = 0;
                *(undefined8 *)((long)plVar16 + 0x41d) = 0;
                *(undefined1 *)((long)plVar16 + 0x425) = 1;
                pbVar19 = PTR_DAT_04bb3748;
                plVar17 = (long *)PTR_DAT_04bb3350;
                lVar13 = plVar16[0xc];
                if (lVar13 != 0) {
                  *(undefined4 *)(lVar13 + 0x12d0) = 0;
                  *(undefined1 *)(lVar13 + 0x142d) = 0;
                  **(undefined1 **)(lVar13 + 0x12e0) = 0;
                  *(undefined4 *)(lVar13 + 0x1428) = 0;
                  *(undefined8 *)(lVar13 + 0x1334) = 0;
                  *(undefined8 *)(lVar13 + 0x133c) = 0;
                  *(undefined4 *)(lVar13 + 0x1344) = 0;
                  *(undefined4 *)(lVar13 + 0x1330) = 0xffffffff;
                }
              }
              else {
                fVar22 = *(float *)(lVar13 + 0x278);
                fVar20 = -10.0;
                if (uVar18 <= uVar15) {
                  fVar20 = 0.0;
                }
                fVar23 = *(float *)(lVar13 + 0x27c);
                fVar24 = 10.0;
                if (uVar15 <= uVar18) {
                  fVar24 = fVar20;
                }
                uVar21 = *(undefined4 *)(lVar13 + 0x280);
                if ((long *)plVar16[0x16] != plVar16 + 0x15) {
                  lVar13 = (long)*(int *)((long)plVar16 + 0xbc);
                  plVar17 = (long *)(plVar16[0x16] - lVar13);
                  do {
                    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
                      *(undefined **)PTR_DAT_04bb34e0 = PTR_DAT_04bb2e38 + 0x10;
                      __cxa_guard_release(puVar6);
                    }
                    if ((plVar17 != (long *)0x0) &&
                       (uVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb34e0),
                       (uVar11 & 1) != 0)) {
                      plVar17[0x6d] = 0x1040000000;
                      break;
                    }
                    plVar17 = (long *)(*(long *)((long)plVar17 + lVar13 + 8) - lVar13);
                  } while (plVar17 != (long *)((long)(plVar16 + 0x15) - lVar13));
                }
                *(undefined4 *)(plVar16 + 0x87) = uVar21;
                *(float *)(plVar16 + 0x86) = fVar24 + fVar22;
                *(float *)((long)plVar16 + 0x434) = fVar23 + 10.0;
                puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar8 = puVar9[3];
                uVar14 = *puVar9 ^ *puVar9 << 0xb;
                *puVar9 = puVar9[1];
                puVar9[1] = puVar9[2];
                uVar14 = uVar14 >> 8 ^ uVar8 >> 0x13 ^ uVar14 ^ uVar8;
                puVar9[2] = uVar8;
                puVar9[3] = uVar14;
                plVar16[0x83] = 0;
                *(undefined2 *)((long)plVar16 + 0x424) = 0x100;
                *(int *)(plVar16 + 0x84) = (int)((ulong)uVar14 * 0xf >> 0x20) + 0x1e;
                plVar17 = (long *)PTR_DAT_04bb3350;
                pbVar19 = PTR_DAT_04bb3748;
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
  }
  return;
}

