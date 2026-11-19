
void FUN_03add530(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  float *pfVar1;
  long *plVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined2 uVar9;
  ulong uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  
  lVar23 = *(long *)(param_1 + 0x10);
  uVar8 = **(ushort **)(param_2 + 8);
  lVar30 = *(long *)(lVar23 + 0x10);
  lVar31 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar26 = (uint)uVar8;
  uVar27 = uVar26;
  if (*(uint *)(lVar23 + 0x28) <= (uint)uVar8) {
    uVar27 = 0;
  }
  lVar28 = *(long *)(lVar23 + 0x30) + (ulong)uVar27 * 0x90;
  piVar29 = (int *)(lVar28 + 0x80);
  *piVar29 = 0;
  *(undefined8 *)(lVar28 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar5 = *(uint *)(lVar23 + 0x1c);
  uVar27 = (uint)uVar8;
  if (0 < (int)uVar5) {
    uVar21 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar21 = 1;
    }
    uVar25 = 0;
    lVar16 = *(long *)(param_1 + 0x48);
    do {
      lVar24 = *(long *)(lVar30 + uVar25 * 8);
      pfVar1 = (float *)(*(long *)(lVar24 + 8) + (ulong)uVar8 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar24 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar24 + 0x11e) & 1 << (ulong)(uVar26 & 0x1f) & 0xffffU) != 0)) {
        fVar32 = *(float *)(lVar31 + 0x24) * *(float *)(lVar24 + 0x9c) +
                 *(float *)(lVar24 + 0x98) * *(float *)(lVar31 + 0x20) +
                 *(float *)(lVar24 + 0xa0) * *(float *)(lVar31 + 0x28) + *(float *)(lVar31 + 0x2c);
        pfVar1[6] = fVar32;
        if (0.0 <= fVar32) {
          fVar33 = 3.4028235e+38;
        }
        else {
          fVar33 = -(*(float *)(lVar31 + 0xf8) * *(float *)(lVar24 + 0xa4)) / fVar32;
        }
        pfVar22 = pfVar1 + 5;
        *pfVar22 = fVar33;
        fVar32 = fVar32 + *(float *)(lVar24 + 0xa4);
        fVar33 = *param_2;
        if (*param_2 <= fVar32) {
          fVar33 = fVar32;
        }
        *param_2 = fVar33;
        fVar32 = param_2[1];
        if (param_2[1] <= *pfVar22) {
          fVar32 = *pfVar22;
        }
        param_2[1] = fVar32;
        fVar32 = fVar4;
        if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
          fVar32 = *pfVar22;
          uVar13 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar17 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar27;
          if (*(uint *)(param_3 + 0x1a70) < uVar26 || *(uint *)(param_3 + 0x1a70) == uVar27) {
            uVar3 = 0;
          }
          if (((uVar13 & 1) == 0) && (fVar32 < *(float *)(lVar17 + 0x18e0))) {
            uVar13 = uVar13 | 1;
          }
          if (((uVar13 >> 1 & 1) == 0) && (fVar32 < *(float *)(lVar17 + 0x1900))) {
            uVar13 = uVar13 | 2;
          }
          if (((uVar13 >> 2 & 1) == 0) && (fVar32 < *(float *)(lVar17 + 0x1920))) {
            uVar13 = uVar13 | 4;
          }
          if (((uVar13 >> 3 & 1) == 0) && (fVar32 < *(float *)(lVar17 + 0x1940))) {
            uVar13 = uVar13 | 8;
          }
          lVar17 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar14 = *(code **)(lVar17 + 0x1e0);
          plVar2 = (long *)(lVar17 + ((long)*(ulong *)(lVar17 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar17 + 0x1e8) & 1) != 0) {
            pcVar14 = *(code **)(pcVar14 + *plVar2);
          }
          iVar12 = (*pcVar14)(plVar2,lVar24 + 0x98,param_5,uVar13);
          fVar32 = (float)((uint)fVar4 & 0xfffffe1f | iVar12 << 5);
        }
        if (fVar32 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar18 = *(float **)(pfVar1 + 2);
            if (pfVar18 == pfVar1 + 4) {
              *(byte *)pfVar18 = 0;
              uVar19 = (ulong)uVar21;
              do {
                uVar10 = uVar19 - 1;
                if ((long)uVar19 < 1) goto LAB_03add800;
                lVar17 = uVar19 * 4;
                uVar19 = uVar10;
              } while (*(float *)(lVar16 + (ulong)uVar26 * 0x58 + 0x10 + lVar17) <= *pfVar22);
              *(byte *)pfVar18 = (char)uVar10 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar18;
              if ((int)(uVar21 - 1) <= (int)(uint)*(byte *)pfVar18) {
                uVar3 = uVar21 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03add800:
          *pfVar1 = fVar32;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar32);
          lVar17 = *(long *)(lVar28 + 0x88);
          if (lVar17 != 0) {
            iVar12 = *piVar29;
            uVar7 = *(undefined1 *)(pfVar1 + 4);
            *piVar29 = iVar12 + 1;
            puVar20 = (undefined8 *)(lVar17 + (long)iVar12 * 0x28);
            *(float *)(puVar20 + 3) = fVar32;
            uVar9 = *(undefined2 *)(lVar24 + 0x11c);
            *(undefined1 *)(puVar20 + 4) = uVar7;
            *(undefined2 *)((long)puVar20 + 0x1c) = uVar9;
            uVar15 = 0;
            if (*(long *)(lVar24 + 0xa8) != 0) {
              uVar15 = *(undefined8 *)(*(long *)(lVar24 + 0xa8) + 0x10);
            }
            *puVar20 = uVar15;
            lVar17 = lVar17 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar24 + 0x10);
            *(ushort *)(lVar17 + 0x1e) =
                 (*(byte *)(lVar24 + 0x123) & 3) +
                 *(short *)(lVar24 + 0x120) * (*(byte *)(lVar24 + 0x123) >> 2 & 3);
            *(long *)(lVar17 + 0x10) = lVar24 + 0x20;
          }
          if ((*(byte *)(lVar24 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar5);
  }
  puVar11 = PTR_DAT_04bd1630;
  if (*(long *)(lVar28 + 0x88) != 0) {
    lVar31 = (long)(int)param_5 * 0x30;
    lVar30 = *(long *)PTR_DAT_04bd1630 + lVar31;
    *(long *)(lVar30 + 0x20) = *(long *)(lVar30 + 0x20) + (long)*piVar29 * 0x28;
    lVar28 = *(long *)puVar11;
    lVar31 = lVar28 + 0x18 + lVar31;
    *(ulong *)(lVar31 + 8) = *(long *)(lVar31 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar30 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar30 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar30 + -1;
    }
    piVar29 = (int *)(lVar28 + 0x18 + (long)iVar12 * 0x30);
    uVar26 = piVar29[4] + (*piVar29 - piVar29[2]);
    if (uVar26 < (uint)piVar29[5]) {
      piVar29[5] = uVar26;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (*(uint *)(lVar23 + 0x28) <= uVar27) {
    uVar27 = 0;
  }
  *(undefined8 *)(*(long *)(lVar23 + 0x30) + (ulong)uVar27 * 0x90) = *(undefined8 *)(lVar23 + 0x10);
  return;
}

