
/* WARNING: Removing unreachable block (ram,0x03a0bb58) */
/* WARNING: Removing unreachable block (ram,0x03a0b9ac) */
/* WARNING: Removing unreachable block (ram,0x03a0ba00) */
/* WARNING: Removing unreachable block (ram,0x03a0bb84) */
/* WARNING: Removing unreachable block (ram,0x03a0bba0) */
/* WARNING: Removing unreachable block (ram,0x03a0bbc0) */
/* WARNING: Removing unreachable block (ram,0x03a0bbd0) */
/* WARNING: Removing unreachable block (ram,0x03a0bc04) */
/* WARNING: Removing unreachable block (ram,0x03a0bb90) */

void FUN_03a0b730(long param_1,long param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  long *plVar13;
  undefined8 *puVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  
  bVar12 = (param_3 & 1) != 0;
  if ((param_3 >> 1 & 1) != 0) {
    bVar12 = bVar12 | 2;
  }
  if ((param_3 >> 2 & 1) != 0) {
    bVar12 = bVar12 | 4;
  }
  if (param_2 != 0) {
    param_6 = param_6 * 3;
    iVar10 = 0;
    if (param_6 != 0) {
      iVar10 = (int)(param_6 + (param_5 - 1)) / param_6;
    }
    if ((int)(uint)*(ushort *)(param_1 + 0xec) < iVar10) {
      uVar19 = (uint)*(ushort *)(param_1 + 0xec);
      param_6 = 0;
      if (uVar19 != 0) {
        param_6 = (int)((param_5 - 1) + uVar19) / (int)uVar19;
      }
    }
    if (param_5 != 0) {
      uVar19 = 0;
      do {
        uVar24 = *(uint *)(param_1 + 0xd0);
        uVar4 = uVar19 + param_6;
        uVar5 = uVar4;
        if ((int)param_5 <= (int)uVar4) {
          uVar5 = param_5;
        }
        if (*(uint *)(param_1 + 0xd8) <= uVar24) {
          uVar24 = 0;
        }
        lVar23 = *(long *)(param_1 + 0xe0) + (long)(int)uVar24 * 0x30;
        *(int *)(lVar23 + 0x20) = param_4;
        *(undefined4 *)(lVar23 + 0x24) = 0;
        *(uint *)(lVar23 + 0x28) = uVar19;
        *(uint *)(lVar23 + 0x2c) = uVar5;
        uVar6 = *(uint *)(param_1 + 0xd0);
        uVar11 = *(uint *)(param_1 + 0xd8);
        lVar23 = *(long *)(param_1 + 0xe0);
        uVar24 = uVar6 + 1;
        *(uint *)(param_1 + 0xd0) = uVar24;
        *(undefined4 *)(param_1 + 0x7c) = 3;
        uVar7 = *(uint *)(param_1 + 200);
        if (uVar7 < *(uint *)(param_1 + 0xb8)) {
          if (uVar11 <= uVar6) {
            uVar6 = 0;
          }
          *(uint *)(param_1 + 200) = uVar7 + 1;
          *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar7 * 8) =
               lVar23 + (long)(int)uVar6 * 0x30;
          uVar24 = *(uint *)(param_1 + 0xd0);
          uVar11 = *(uint *)(param_1 + 0xd8);
          lVar23 = *(long *)(param_1 + 0xe0);
        }
        if (uVar11 <= uVar24) {
          uVar24 = 0;
        }
        lVar23 = lVar23 + (long)(int)uVar24 * 0x30;
        *(int *)(lVar23 + 0x20) = param_4;
        *(undefined4 *)(lVar23 + 0x24) = 1;
        *(uint *)(lVar23 + 0x28) = uVar19;
        *(uint *)(lVar23 + 0x2c) = uVar5;
        uVar6 = *(uint *)(param_1 + 0xd0);
        uVar11 = *(uint *)(param_1 + 0xd8);
        lVar23 = *(long *)(param_1 + 0xe0);
        uVar24 = uVar6 + 1;
        *(uint *)(param_1 + 0xd0) = uVar24;
        *(undefined4 *)(param_1 + 0x7c) = 3;
        uVar7 = *(uint *)(param_1 + 200);
        if (uVar7 < *(uint *)(param_1 + 0xb8)) {
          if (uVar11 <= uVar6) {
            uVar6 = 0;
          }
          *(uint *)(param_1 + 200) = uVar7 + 1;
          *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar7 * 8) =
               lVar23 + (long)(int)uVar6 * 0x30;
          uVar24 = *(uint *)(param_1 + 0xd0);
          uVar11 = *(uint *)(param_1 + 0xd8);
          lVar23 = *(long *)(param_1 + 0xe0);
        }
        if (uVar11 <= uVar24) {
          uVar24 = 0;
        }
        lVar23 = lVar23 + (long)(int)uVar24 * 0x30;
        *(int *)(lVar23 + 0x20) = param_4;
        *(undefined4 *)(lVar23 + 0x24) = 2;
        *(uint *)(lVar23 + 0x28) = uVar19;
        *(uint *)(lVar23 + 0x2c) = uVar5;
        uVar19 = *(uint *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0xd0) = uVar19 + 1;
        *(undefined4 *)(param_1 + 0x7c) = 3;
        uVar24 = *(uint *)(param_1 + 200);
        if (uVar24 < *(uint *)(param_1 + 0xb8)) {
          if (*(uint *)(param_1 + 0xd8) <= uVar19) {
            uVar19 = 0;
          }
          *(uint *)(param_1 + 200) = uVar24 + 1;
          *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar24 * 8) =
               *(long *)(param_1 + 0xe0) + (long)(int)uVar19 * 0x30;
        }
        uVar19 = uVar5;
      } while ((int)uVar4 < (int)param_5);
    }
    FUN_03a0cd90(param_2,"ModelJobQueue::update",param_1 + 8,bVar12,0,0);
    return;
  }
  if (param_4 == 1) {
    lVar23 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar23 == 0) {
      iVar10 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar10 = (int)lVar23 + -1;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x138);
    if (*(uint *)(param_1 + 0x130) < param_5) {
      param_5 = *(uint *)(param_1 + 0x130);
    }
    if (param_5 != 0) {
      puVar2 = puVar14 + (int)param_5;
      do {
        puVar25 = (undefined8 *)*puVar14;
        puVar26 = puVar25;
        do {
          *(byte *)((long)puVar25 + 0x1e) = *(byte *)((long)puVar25 + 0x1e) & 0xfb;
          FUN_03adafd0(*puVar26,*(undefined4 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x128),
                       *(undefined2 *)(param_1 + 0x144),*(undefined8 *)(param_1 + 0x118),puVar26 + 4
                       ,iVar10);
          puVar26 = (undefined8 *)puVar26[2];
        } while (puVar26 != (undefined8 *)0x0);
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar2);
    }
  }
  else if (param_4 == 0) {
    plVar13 = *(long **)(param_1 + 0x110);
    if (*(uint *)(param_1 + 0x108) < param_5) {
      param_5 = *(uint *)(param_1 + 0x108);
    }
    if (param_5 != 0) {
      puVar3 = (uint *)(param_1 + 0x130);
      plVar1 = plVar13 + (int)param_5;
      do {
        lVar23 = *plVar13;
        bVar12 = *(byte *)(lVar23 + 0x281);
        if (((bVar12 & 1) == 0) && ((*(byte *)(lVar23 + 0x280) >> 4 & 1) == 0)) {
          bVar15 = bVar12 & 0xfd;
          *(byte *)(lVar23 + 0x281) = bVar15;
          if ((bVar12 >> 2 & 1) != 0) {
            FUN_039aa240(lVar23);
            bVar15 = *(byte *)(lVar23 + 0x281) & 0xfb;
          }
          *(byte *)(lVar23 + 0x281) = bVar15 | 0x28;
          uVar19 = *(uint *)(lVar23 + 0x30);
          if (0 < (int)uVar19) {
            uVar16 = 0;
            do {
              lVar20 = *(long *)(*(long *)(lVar23 + 0x38) + uVar16 * 8);
              if ((*(byte *)(lVar20 + 0x1e) >> 3 & 1) == 0) {
                lVar18 = 0;
                lVar22 = 0;
                do {
                  if ((*(byte *)(lVar20 + 0x1e) >> 5 & 1) == 0) {
                    lVar17 = lVar18;
                    lVar21 = lVar22;
                  }
                  else {
                    lVar17 = lVar20;
                    lVar21 = lVar20;
                    if (lVar22 != 0) {
                      *(long *)(lVar22 + 0x10) = lVar20;
                      lVar17 = lVar18;
                    }
                  }
                  lVar20 = *(long *)(lVar20 + 8);
                  lVar18 = lVar17;
                  lVar22 = lVar21;
                } while (lVar20 != 0);
                if (lVar21 != 0) {
                  *(undefined8 *)(lVar21 + 0x10) = 0;
                  do {
                    uVar4 = *puVar3;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar9) {
                      *puVar3 = uVar4 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  *(long *)(*(long *)(param_1 + 0x138) +
                           (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3)) =
                       lVar17;
                  *(byte *)(lVar17 + 0x1e) = *(byte *)(lVar17 + 0x1e) | 4;
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar19);
          }
        }
        else {
          *(byte *)(lVar23 + 0x281) = bVar12 & 0xf9;
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
    }
  }
  return;
}

