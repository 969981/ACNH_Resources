
bool FUN_03adf260(long param_1,float *param_2,uint param_3,int param_4)

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
  undefined8 uVar13;
  ushort *puVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  
  puVar14 = *(ushort **)(param_2 + 8);
  lVar23 = *(long *)(param_1 + 0x10);
  lVar27 = *(long *)(lVar23 + 0x10);
  uVar7 = *puVar14;
  lVar22 = *(long *)(puVar14 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar25 = (uint)uVar7;
  uVar2 = uVar25;
  if (*(uint *)(lVar23 + 0x28) <= (uint)uVar7) {
    uVar2 = 0;
  }
  lVar18 = *(long *)(lVar23 + 0x30) + (ulong)uVar2 * 0x90;
  piVar19 = (int *)(lVar18 + 0x80);
  *piVar19 = 0;
  *(undefined8 *)(lVar18 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30 + 0x20);
  bVar5 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar2 = *(uint *)(lVar23 + 0x1c);
  if (0 < (int)uVar2) {
    lVar15 = *(long *)(param_1 + 0x48);
    uVar21 = (uint)bVar5;
    if ((param_3 & 4) == 0) {
      uVar21 = 1;
    }
    uVar24 = 0;
    do {
      lVar28 = *(long *)(lVar27 + uVar24 * 8);
      pfVar1 = (float *)(*(long *)(lVar28 + 8) + (ulong)uVar7 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar28 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar28 + 0x11e) & 1 << (ulong)(uVar7 & 0x1f) & 0xffffU) != 0)) {
        fVar29 = *(float *)(lVar22 + 0x24) * *(float *)(lVar28 + 0x9c) +
                 *(float *)(lVar28 + 0x98) * *(float *)(lVar22 + 0x20) +
                 *(float *)(lVar28 + 0xa0) * *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x2c);
        pfVar16 = pfVar1 + 6;
        *pfVar16 = fVar29;
        if (0.0 <= fVar29) {
          fVar29 = 3.4028235e+38;
        }
        else {
          fVar29 = -(*(float *)(lVar22 + 0xf8) * *(float *)(lVar28 + 0xa4)) / fVar29;
        }
        pfVar26 = pfVar1 + 5;
        *pfVar26 = fVar29;
        uVar12 = FUN_039f94dc(lVar22,lVar28 + 0x98);
        if ((uVar12 & 1) == 0) {
          fVar29 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar29 = *pfVar16;
          if (fVar29 < *(float *)(puVar14 + 2)) {
            *(ushort *)(lVar28 + 0x2a) = *(ushort *)(lVar28 + 0x2a) | puVar14[1];
            param_2[5] = -0.0;
            fVar29 = *pfVar16;
          }
          fVar29 = fVar29 + *(float *)(lVar28 + 0xa4);
          fVar30 = *param_2;
          if (*param_2 <= fVar29) {
            fVar30 = fVar29;
          }
          *param_2 = fVar30;
          fVar29 = param_2[1];
          if (param_2[1] <= *pfVar26) {
            fVar29 = *pfVar26;
          }
          param_2[1] = fVar29;
          fVar29 = fVar4;
        }
        if (fVar29 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar16 = *(float **)(pfVar1 + 2);
            if (pfVar16 == pfVar1 + 4) {
              *(byte *)pfVar16 = 0;
              uVar12 = (ulong)uVar21;
              do {
                uVar9 = uVar12 - 1;
                if ((long)uVar12 < 1) goto LAB_03adf4d4;
                lVar17 = uVar12 * 4;
                uVar12 = uVar9;
              } while (*(float *)(lVar15 + (ulong)uVar25 * 0x58 + 0x10 + lVar17) <= *pfVar26);
              *(byte *)pfVar16 = (char)uVar9 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar16;
              if ((int)(uVar21 - 1) <= (int)(uint)*(byte *)pfVar16) {
                uVar3 = uVar21 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03adf4d4:
          *pfVar1 = fVar29;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar29);
          lVar17 = *(long *)(lVar18 + 0x88);
          if (lVar17 != 0) {
            iVar11 = *piVar19;
            uVar6 = *(undefined1 *)(pfVar1 + 4);
            *piVar19 = iVar11 + 1;
            puVar20 = (undefined8 *)(lVar17 + (long)iVar11 * 0x28);
            *(float *)(puVar20 + 3) = fVar29;
            uVar8 = *(undefined2 *)(lVar28 + 0x11c);
            *(undefined1 *)(puVar20 + 4) = uVar6;
            *(undefined2 *)((long)puVar20 + 0x1c) = uVar8;
            uVar13 = 0;
            if (*(long *)(lVar28 + 0xa8) != 0) {
              uVar13 = *(undefined8 *)(*(long *)(lVar28 + 0xa8) + 0x10);
            }
            *puVar20 = uVar13;
            lVar17 = lVar17 + (long)iVar11 * 0x28;
            *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar28 + 0x10);
            *(ushort *)(lVar17 + 0x1e) =
                 (*(byte *)(lVar28 + 0x123) & 3) +
                 *(short *)(lVar28 + 0x120) * (*(byte *)(lVar28 + 0x123) >> 2 & 3);
            *(long *)(lVar17 + 0x10) = lVar28 + 0x20;
          }
          if ((*(byte *)(lVar28 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar2);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar18 + 0x88) != 0) {
    lVar22 = *(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30;
    *(long *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + (long)*piVar19 * 0x28;
    lVar27 = *(long *)puVar10;
    lVar22 = lVar27 + 0x18 + (long)param_4 * 0x30;
    *(ulong *)(lVar22 + 8) = *(long *)(lVar22 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar22 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar22 == 0) {
      iVar11 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar11 = (int)lVar22 + -1;
    }
    piVar19 = (int *)(lVar27 + 0x18 + (long)iVar11 * 0x30);
    uVar2 = piVar19[4] + (*piVar19 - piVar19[2]);
    if (uVar2 < (uint)piVar19[5]) {
      piVar19[5] = uVar2;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar23 + 0x28) < (uint)uVar7 || *(uint *)(lVar23 + 0x28) == uVar25) {
      uVar25 = 0;
    }
    *(undefined8 *)(*(long *)(lVar23 + 0x30) + (ulong)uVar25 * 0x90) =
         *(undefined8 *)(lVar23 + 0x10);
  }
  return fVar4 != 0.0;
}

