
bool FUN_03adfbd0(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

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
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  float fVar32;
  float fVar33;
  
  lVar23 = *(long *)(param_1 + 0x10);
  uVar8 = **(ushort **)(param_2 + 8);
  lVar25 = *(long *)(lVar23 + 0x10);
  lVar27 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar29 = (uint)uVar8;
  uVar30 = uVar29;
  if (*(uint *)(lVar23 + 0x28) <= (uint)uVar8) {
    uVar30 = 0;
  }
  lVar19 = *(long *)(lVar23 + 0x30) + (ulong)uVar30 * 0x90;
  piVar20 = (int *)(lVar19 + 0x80);
  *piVar20 = 0;
  *(undefined8 *)(lVar19 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar5 = *(uint *)(lVar23 + 0x1c);
  uVar30 = (uint)uVar8;
  if (0 < (int)uVar5) {
    uVar24 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar24 = 1;
    }
    uVar28 = 0;
    lVar17 = *(long *)(param_1 + 0x48);
    do {
      lVar26 = *(long *)(lVar25 + uVar28 * 8);
      pfVar1 = (float *)(*(long *)(lVar26 + 8) + (ulong)uVar8 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar26 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar26 + 0x11e) & 1 << (ulong)(uVar29 & 0x1f) & 0xffffU) != 0)) {
        fVar32 = *(float *)(lVar27 + 0x24) * *(float *)(lVar26 + 0x9c) +
                 *(float *)(lVar26 + 0x98) * *(float *)(lVar27 + 0x20) +
                 *(float *)(lVar26 + 0xa0) * *(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x2c);
        pfVar1[6] = fVar32;
        if (0.0 <= fVar32) {
          fVar32 = 3.4028235e+38;
        }
        else {
          fVar32 = -(*(float *)(lVar27 + 0xf8) * *(float *)(lVar26 + 0xa4)) / fVar32;
        }
        pfVar31 = pfVar1 + 5;
        *pfVar31 = fVar32;
        uVar13 = FUN_039f94dc(lVar27,lVar26 + 0x98);
        if ((uVar13 & 1) == 0) {
          fVar32 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar33 = pfVar1[6] + *(float *)(lVar26 + 0xa4);
          fVar32 = *param_2;
          if (*param_2 <= fVar33) {
            fVar32 = fVar33;
          }
          *param_2 = fVar32;
          fVar32 = param_2[1];
          if (param_2[1] <= *pfVar31) {
            fVar32 = *pfVar31;
          }
          param_2[1] = fVar32;
          fVar32 = fVar4;
        }
        if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
          fVar33 = *pfVar31;
          uVar14 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar18 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar30;
          if (*(uint *)(param_3 + 0x1a70) < uVar29 || *(uint *)(param_3 + 0x1a70) == uVar30) {
            uVar3 = 0;
          }
          if (((uVar14 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x18e0))) {
            uVar14 = uVar14 | 1;
          }
          if (((uVar14 >> 1 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1900))) {
            uVar14 = uVar14 | 2;
          }
          if (((uVar14 >> 2 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1920))) {
            uVar14 = uVar14 | 4;
          }
          if (((uVar14 >> 3 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1940))) {
            uVar14 = uVar14 | 8;
          }
          lVar18 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar15 = *(code **)(lVar18 + 0x1e0);
          plVar2 = (long *)(lVar18 + ((long)*(ulong *)(lVar18 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar18 + 0x1e8) & 1) != 0) {
            pcVar15 = *(code **)(pcVar15 + *plVar2);
          }
          iVar12 = (*pcVar15)(plVar2,lVar26 + 0x98,param_5,uVar14);
          fVar32 = (float)((uint)fVar32 & 0xfffffe1f | iVar12 << 5);
        }
        if (fVar32 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar16 = *(float **)(pfVar1 + 2);
            if (pfVar16 == pfVar1 + 4) {
              *(byte *)pfVar16 = 0;
              uVar13 = (ulong)uVar24;
              do {
                uVar10 = uVar13 - 1;
                if ((long)uVar13 < 1) goto LAB_03adfed4;
                lVar18 = uVar13 * 4;
                uVar13 = uVar10;
              } while (*(float *)(lVar17 + (ulong)uVar29 * 0x58 + 0x10 + lVar18) <= *pfVar31);
              *(byte *)pfVar16 = (char)uVar10 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar16;
              if ((int)(uVar24 - 1) <= (int)(uint)*(byte *)pfVar16) {
                uVar3 = uVar24 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03adfed4:
          *pfVar1 = fVar32;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar32);
          lVar18 = *(long *)(lVar19 + 0x88);
          if (lVar18 != 0) {
            iVar12 = *piVar20;
            uVar7 = *(undefined1 *)(pfVar1 + 4);
            *piVar20 = iVar12 + 1;
            puVar21 = (undefined8 *)(lVar18 + (long)iVar12 * 0x28);
            *(float *)(puVar21 + 3) = fVar32;
            uVar9 = *(undefined2 *)(lVar26 + 0x11c);
            *(undefined1 *)(puVar21 + 4) = uVar7;
            *(undefined2 *)((long)puVar21 + 0x1c) = uVar9;
            uVar22 = 0;
            if (*(long *)(lVar26 + 0xa8) != 0) {
              uVar22 = *(undefined8 *)(*(long *)(lVar26 + 0xa8) + 0x10);
            }
            *puVar21 = uVar22;
            lVar18 = lVar18 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(lVar26 + 0x10);
            *(ushort *)(lVar18 + 0x1e) =
                 (*(byte *)(lVar26 + 0x123) & 3) +
                 *(short *)(lVar26 + 0x120) * (*(byte *)(lVar26 + 0x123) >> 2 & 3);
            *(long *)(lVar18 + 0x10) = lVar26 + 0x20;
          }
          if ((*(byte *)(lVar26 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar5);
  }
  puVar11 = PTR_DAT_04bd1630;
  if (*(long *)(lVar19 + 0x88) != 0) {
    lVar27 = (long)(int)param_5 * 0x30;
    lVar25 = *(long *)PTR_DAT_04bd1630 + lVar27;
    *(long *)(lVar25 + 0x20) = *(long *)(lVar25 + 0x20) + (long)*piVar20 * 0x28;
    lVar19 = *(long *)puVar11;
    lVar27 = lVar19 + 0x18 + lVar27;
    *(ulong *)(lVar27 + 8) = *(long *)(lVar27 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar25 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar25 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar25 + -1;
    }
    piVar20 = (int *)(lVar19 + 0x18 + (long)iVar12 * 0x30);
    uVar29 = piVar20[4] + (*piVar20 - piVar20[2]);
    if (uVar29 < (uint)piVar20[5]) {
      piVar20[5] = uVar29;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar23 + 0x28) <= uVar30) {
      uVar30 = 0;
    }
    *(undefined8 *)(*(long *)(lVar23 + 0x30) + (ulong)uVar30 * 0x90) =
         *(undefined8 *)(lVar23 + 0x10);
  }
  return fVar4 != 0.0;
}

