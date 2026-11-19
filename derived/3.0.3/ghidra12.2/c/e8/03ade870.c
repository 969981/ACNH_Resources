
bool FUN_03ade870(long param_1,float *param_2,uint param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  
  lVar20 = *(long *)(param_1 + 0x10);
  uVar7 = **(ushort **)(param_2 + 8);
  lVar26 = *(long *)(lVar20 + 0x10);
  lVar21 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar23 = (uint)uVar7;
  uVar2 = uVar23;
  if (*(uint *)(lVar20 + 0x28) <= (uint)uVar7) {
    uVar2 = 0;
  }
  lVar17 = *(long *)(lVar20 + 0x30) + (ulong)uVar2 * 0x90;
  piVar18 = (int *)(lVar17 + 0x80);
  *piVar18 = 0;
  *(undefined8 *)(lVar17 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30 + 0x20);
  bVar5 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar2 = *(uint *)(lVar20 + 0x1c);
  if (0 < (int)uVar2) {
    lVar13 = *(long *)(param_1 + 0x48);
    uVar24 = (uint)bVar5;
    if ((param_3 & 4) == 0) {
      uVar24 = 1;
    }
    uVar22 = 0;
    do {
      lVar27 = *(long *)(lVar26 + uVar22 * 8);
      pfVar1 = (float *)(*(long *)(lVar27 + 8) + (ulong)uVar7 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar27 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar27 + 0x11e) & 1 << (ulong)(uVar23 & 0x1f) & 0xffffU) != 0)) {
        fVar28 = *(float *)(lVar21 + 0x24) * *(float *)(lVar27 + 0x9c) +
                 *(float *)(lVar27 + 0x98) * *(float *)(lVar21 + 0x20) +
                 *(float *)(lVar27 + 0xa0) * *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x2c);
        pfVar1[6] = fVar28;
        if (0.0 <= fVar28) {
          fVar28 = 3.4028235e+38;
        }
        else {
          fVar28 = -(*(float *)(lVar21 + 0xf8) * *(float *)(lVar27 + 0xa4)) / fVar28;
        }
        pfVar25 = pfVar1 + 5;
        *pfVar25 = fVar28;
        uVar12 = FUN_039f94dc(lVar21,lVar27 + 0x98);
        if ((uVar12 & 1) == 0) {
          fVar28 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar29 = pfVar1[6] + *(float *)(lVar27 + 0xa4);
          fVar28 = *param_2;
          if (*param_2 <= fVar29) {
            fVar28 = fVar29;
          }
          *param_2 = fVar28;
          fVar28 = param_2[1];
          if (param_2[1] <= *pfVar25) {
            fVar28 = *pfVar25;
          }
          param_2[1] = fVar28;
          fVar28 = fVar4;
        }
        if (fVar28 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar15 = *(float **)(pfVar1 + 2);
            if (pfVar15 == pfVar1 + 4) {
              *(byte *)pfVar15 = 0;
              uVar12 = (ulong)uVar24;
              do {
                uVar9 = uVar12 - 1;
                if ((long)uVar12 < 1) goto LAB_03adeaa8;
                lVar16 = uVar12 * 4;
                uVar12 = uVar9;
              } while (*(float *)(lVar13 + (ulong)(uint)uVar7 * 0x58 + 0x10 + lVar16) <= *pfVar25);
              *(byte *)pfVar15 = (char)uVar9 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar15;
              if ((int)(uVar24 - 1) <= (int)(uint)*(byte *)pfVar15) {
                uVar3 = uVar24 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03adeaa8:
          *pfVar1 = fVar28;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar28);
          lVar16 = *(long *)(lVar17 + 0x88);
          if (lVar16 != 0) {
            iVar11 = *piVar18;
            uVar6 = *(undefined1 *)(pfVar1 + 4);
            *piVar18 = iVar11 + 1;
            puVar19 = (undefined8 *)(lVar16 + (long)iVar11 * 0x28);
            *(float *)(puVar19 + 3) = fVar28;
            uVar8 = *(undefined2 *)(lVar27 + 0x11c);
            *(undefined1 *)(puVar19 + 4) = uVar6;
            *(undefined2 *)((long)puVar19 + 0x1c) = uVar8;
            uVar14 = 0;
            if (*(long *)(lVar27 + 0xa8) != 0) {
              uVar14 = *(undefined8 *)(*(long *)(lVar27 + 0xa8) + 0x10);
            }
            *puVar19 = uVar14;
            lVar16 = lVar16 + (long)iVar11 * 0x28;
            *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar27 + 0x10);
            *(ushort *)(lVar16 + 0x1e) =
                 (*(byte *)(lVar27 + 0x123) & 3) +
                 *(short *)(lVar27 + 0x120) * (*(byte *)(lVar27 + 0x123) >> 2 & 3);
            *(long *)(lVar16 + 0x10) = lVar27 + 0x20;
          }
          if ((*(byte *)(lVar27 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar2);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar17 + 0x88) != 0) {
    lVar21 = *(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30;
    *(long *)(lVar21 + 0x20) = *(long *)(lVar21 + 0x20) + (long)*piVar18 * 0x28;
    lVar26 = *(long *)puVar10;
    lVar21 = lVar26 + 0x18 + (long)param_4 * 0x30;
    *(ulong *)(lVar21 + 8) = *(long *)(lVar21 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar21 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar21 == 0) {
      iVar11 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar11 = (int)lVar21 + -1;
    }
    piVar18 = (int *)(lVar26 + 0x18 + (long)iVar11 * 0x30);
    uVar2 = piVar18[4] + (*piVar18 - piVar18[2]);
    if (uVar2 < (uint)piVar18[5]) {
      piVar18[5] = uVar2;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar20 + 0x28) < (uint)uVar7 || *(uint *)(lVar20 + 0x28) == uVar23) {
      uVar23 = 0;
    }
    *(undefined8 *)(*(long *)(lVar20 + 0x30) + (ulong)uVar23 * 0x90) =
         *(undefined8 *)(lVar20 + 0x10);
  }
  return fVar4 != 0.0;
}

