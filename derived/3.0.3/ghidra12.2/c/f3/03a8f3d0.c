
undefined8 FUN_03a8f3d0(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  bVar3 = *(byte *)(param_1 + 0xc);
  if ((ulong)bVar3 == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    uVar14 = ~(-1 << (ulong)(bVar3 & 0x1f));
  }
  else {
    lVar10 = *(long *)(param_2 + 0x10);
    if (lVar10 == 0) {
      if ((char)bVar3 < '\x01') {
        return 0;
      }
      pfVar13 = *(float **)(param_2 + 0x38);
      uVar8 = 0;
      uVar14 = 0;
      pfVar11 = (float *)(*(long *)(param_1 + 0xe0) + 0x140);
      fVar18 = *pfVar13;
      fVar19 = pfVar13[1];
      fVar21 = pfVar13[2];
      fVar20 = pfVar13[3];
      do {
        fVar22 = pfVar11[-0x2f] * fVar19 + fVar18 * pfVar11[-0x30] + fVar21 * pfVar11[-0x2e] +
                 pfVar11[-0x2d];
        if ((-fVar22 < *pfVar11 - fVar20) || (pfVar11[1] < -fVar22 - fVar20)) {
LAB_03a8f6e0:
          uVar12 = 0;
        }
        else {
          fVar23 = pfVar11[-0x35] +
                   fVar19 * pfVar11[-0x37] + fVar18 * pfVar11[-0x38] + fVar21 * pfVar11[-0x36];
          fVar24 = pfVar11[-0x31] +
                   fVar19 * pfVar11[-0x33] + fVar18 * pfVar11[-0x34] + fVar21 * pfVar11[-0x32];
          if ((fVar20 <= (fVar24 * pfVar11[10] + pfVar11[9] * fVar23 + pfVar11[0xb] * fVar22) -
                         pfVar11[0x15]) ||
             ((fVar20 <= (fVar24 * pfVar11[0xd] + pfVar11[0xc] * fVar23 + pfVar11[0xe] * fVar22) -
                         pfVar11[0x16] ||
              (fVar20 <= (fVar24 * pfVar11[0x10] + pfVar11[0xf] * fVar23 + pfVar11[0x11] * fVar22) -
                         pfVar11[0x17])))) goto LAB_03a8f6e0;
          uVar12 = 1 << (ulong)((uint)uVar8 & 0x1f);
          if (fVar20 <= (fVar24 * pfVar11[0x13] + pfVar11[0x12] * fVar23 + pfVar11[0x14] * fVar22) -
                        pfVar11[0x18]) {
            uVar12 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        uVar14 = uVar12 | uVar14;
        pfVar11 = pfVar11 + 0x104;
      } while (bVar3 != uVar8);
    }
    else {
      if ((char)bVar3 < '\x01') {
        return 0;
      }
      lVar15 = 0;
      uVar14 = 0;
      lVar16 = 0x60;
      do {
        uVar8 = FUN_015f0b58(*(long *)(param_1 + 0xe0) + lVar16,lVar10 + 0x6c,lVar10 + 0x78);
        uVar12 = 1 << (ulong)((uint)lVar15 & 0x1f);
        lVar15 = lVar15 + 1;
        if ((uVar8 & 1) == 0) {
          uVar12 = 0;
        }
        lVar16 = lVar16 + 0x410;
        uVar14 = uVar12 | uVar14;
      } while (lVar15 < *(char *)(param_1 + 0xc));
    }
  }
  if (uVar14 == 0) {
    return 0;
  }
  uVar4 = *(ushort *)(param_2 + 0xb6);
  if ((ulong)uVar4 != 0) {
    uVar8 = 0;
    puVar1 = (uint *)(param_1 + 0x18);
    uVar6 = *(byte *)(param_2 + 0xb0) - 1;
    uVar12 = (uint)*(byte *)(param_1 + 10);
    if (uVar6 <= *(byte *)(param_1 + 10)) {
      uVar12 = uVar6;
    }
    do {
      plVar9 = *(long **)(*(long *)(param_2 + 8) + uVar8 * 8);
      if ((*(byte *)(*(long *)(param_2 + 0x50) + (ulong)*(ushort *)((long)plVar9 + 0x16) * 0xc) &
          0xc) != 0) {
        do {
          uVar6 = *puVar1;
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((int)uVar6 < (int)*(uint *)(param_1 + 0x38)) {
          bVar3 = *(byte *)(plVar9 + 3);
          lVar10 = (long)(int)uVar6;
          lVar15 = plVar9[2];
          if (*(uint *)(param_1 + 0x38) <= uVar6) {
            lVar10 = 0;
          }
          plVar17 = (long *)(*(long *)(param_1 + 0x40) + lVar10 * 0x18);
          *plVar17 = (long)plVar9;
          *(uint *)(plVar17 + 1) = uVar14;
          *(undefined2 *)((long)plVar17 + 0x16) = 0xffff;
          *(char *)((long)plVar17 + 0x14) = (char)plVar9[3];
          cVar7 = (**(code **)(*plVar9 + 0x18))();
          *(int *)((long)plVar17 + 0xc) = (int)lVar15;
          *(undefined4 *)(plVar17 + 2) = 0;
          *(byte *)((long)plVar17 + 0x15) = (byte)(uVar12 << 4) | cVar7 << 2;
          lVar10 = param_1 + 0x48 + (ulong)((bVar3 & 6) != 0) * 0x40;
          puVar2 = (uint *)(lVar10 + 0x3c);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(long **)(*(long *)(lVar10 + 0x30) +
                    (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3)) = plVar17;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar4);
  }
  return 1;
}

