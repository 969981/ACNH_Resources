
bool FUN_03ae0610(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

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
  ushort *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  
  puVar17 = *(ushort **)(param_2 + 8);
  lVar24 = *(long *)(param_1 + 0x10);
  lVar26 = *(long *)(lVar24 + 0x10);
  uVar8 = *puVar17;
  lVar28 = *(long *)(puVar17 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar29 = (uint)uVar8;
  uVar30 = uVar29;
  if (*(uint *)(lVar24 + 0x28) <= (uint)uVar8) {
    uVar30 = 0;
  }
  lVar20 = *(long *)(lVar24 + 0x30) + (ulong)uVar30 * 0x90;
  piVar21 = (int *)(lVar20 + 0x80);
  *piVar21 = 0;
  *(undefined8 *)(lVar20 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar5 = *(uint *)(lVar24 + 0x1c);
  uVar30 = (uint)uVar8;
  if (0 < (int)uVar5) {
    uVar25 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar25 = 1;
    }
    uVar31 = 0;
    lVar18 = *(long *)(param_1 + 0x48);
    do {
      lVar27 = *(long *)(lVar26 + uVar31 * 8);
      pfVar1 = (float *)(*(long *)(lVar27 + 8) + (ulong)uVar8 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar27 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar27 + 0x11e) & 1 << (ulong)(uVar29 & 0x1f) & 0xffffU) != 0)) {
        fVar33 = *(float *)(lVar28 + 0x24) * *(float *)(lVar27 + 0x9c) +
                 *(float *)(lVar27 + 0x98) * *(float *)(lVar28 + 0x20) +
                 *(float *)(lVar27 + 0xa0) * *(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x2c);
        pfVar16 = pfVar1 + 6;
        *pfVar16 = fVar33;
        if (0.0 <= fVar33) {
          fVar33 = 3.4028235e+38;
        }
        else {
          fVar33 = -(*(float *)(lVar28 + 0xf8) * *(float *)(lVar27 + 0xa4)) / fVar33;
        }
        pfVar32 = pfVar1 + 5;
        *pfVar32 = fVar33;
        uVar13 = FUN_039f94dc(lVar28,lVar27 + 0x98);
        if ((uVar13 & 1) == 0) {
          fVar33 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar33 = *pfVar16;
          if (fVar33 < *(float *)(puVar17 + 2)) {
            *(ushort *)(lVar27 + 0x2a) = *(ushort *)(lVar27 + 0x2a) | puVar17[1];
            param_2[5] = -0.0;
            fVar33 = *pfVar16;
          }
          fVar33 = fVar33 + *(float *)(lVar27 + 0xa4);
          fVar34 = *param_2;
          if (*param_2 <= fVar33) {
            fVar34 = fVar33;
          }
          *param_2 = fVar34;
          fVar33 = param_2[1];
          if (param_2[1] <= *pfVar32) {
            fVar33 = *pfVar32;
          }
          param_2[1] = fVar33;
          fVar33 = fVar4;
        }
        if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
          fVar34 = *pfVar32;
          uVar14 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar19 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar30;
          if (*(uint *)(param_3 + 0x1a70) < uVar29 || *(uint *)(param_3 + 0x1a70) == uVar30) {
            uVar3 = 0;
          }
          if (((uVar14 & 1) == 0) && (fVar34 < *(float *)(lVar19 + 0x18e0))) {
            uVar14 = uVar14 | 1;
          }
          if (((uVar14 >> 1 & 1) == 0) && (fVar34 < *(float *)(lVar19 + 0x1900))) {
            uVar14 = uVar14 | 2;
          }
          if (((uVar14 >> 2 & 1) == 0) && (fVar34 < *(float *)(lVar19 + 0x1920))) {
            uVar14 = uVar14 | 4;
          }
          if (((uVar14 >> 3 & 1) == 0) && (fVar34 < *(float *)(lVar19 + 0x1940))) {
            uVar14 = uVar14 | 8;
          }
          lVar19 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar15 = *(code **)(lVar19 + 0x1e0);
          plVar2 = (long *)(lVar19 + ((long)*(ulong *)(lVar19 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar19 + 0x1e8) & 1) != 0) {
            pcVar15 = *(code **)(pcVar15 + *plVar2);
          }
          iVar12 = (*pcVar15)(plVar2,lVar27 + 0x98,param_5,uVar14);
          fVar33 = (float)((uint)fVar33 & 0xfffffe1f | iVar12 << 5);
        }
        if (fVar33 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar16 = *(float **)(pfVar1 + 2);
            if (pfVar16 == pfVar1 + 4) {
              *(byte *)pfVar16 = 0;
              uVar13 = (ulong)uVar25;
              do {
                uVar10 = uVar13 - 1;
                if ((long)uVar13 < 1) goto LAB_03ae0944;
                lVar19 = uVar13 * 4;
                uVar13 = uVar10;
              } while (*(float *)(lVar18 + (ulong)uVar29 * 0x58 + 0x10 + lVar19) <= *pfVar32);
              *(byte *)pfVar16 = (char)uVar10 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar16;
              if ((int)(uVar25 - 1) <= (int)(uint)*(byte *)pfVar16) {
                uVar3 = uVar25 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03ae0944:
          *pfVar1 = fVar33;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar33);
          lVar19 = *(long *)(lVar20 + 0x88);
          if (lVar19 != 0) {
            iVar12 = *piVar21;
            uVar7 = *(undefined1 *)(pfVar1 + 4);
            *piVar21 = iVar12 + 1;
            puVar22 = (undefined8 *)(lVar19 + (long)iVar12 * 0x28);
            *(float *)(puVar22 + 3) = fVar33;
            uVar9 = *(undefined2 *)(lVar27 + 0x11c);
            *(undefined1 *)(puVar22 + 4) = uVar7;
            *(undefined2 *)((long)puVar22 + 0x1c) = uVar9;
            uVar23 = 0;
            if (*(long *)(lVar27 + 0xa8) != 0) {
              uVar23 = *(undefined8 *)(*(long *)(lVar27 + 0xa8) + 0x10);
            }
            *puVar22 = uVar23;
            lVar19 = lVar19 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar19 + 8) = *(undefined8 *)(lVar27 + 0x10);
            *(ushort *)(lVar19 + 0x1e) =
                 (*(byte *)(lVar27 + 0x123) & 3) +
                 *(short *)(lVar27 + 0x120) * (*(byte *)(lVar27 + 0x123) >> 2 & 3);
            *(long *)(lVar19 + 0x10) = lVar27 + 0x20;
          }
          if ((*(byte *)(lVar27 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar5);
  }
  puVar11 = PTR_DAT_04bd1630;
  if (*(long *)(lVar20 + 0x88) != 0) {
    lVar28 = (long)(int)param_5 * 0x30;
    lVar26 = *(long *)PTR_DAT_04bd1630 + lVar28;
    *(long *)(lVar26 + 0x20) = *(long *)(lVar26 + 0x20) + (long)*piVar21 * 0x28;
    lVar20 = *(long *)puVar11;
    lVar28 = lVar20 + 0x18 + lVar28;
    *(ulong *)(lVar28 + 8) = *(long *)(lVar28 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar26 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar26 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar26 + -1;
    }
    piVar21 = (int *)(lVar20 + 0x18 + (long)iVar12 * 0x30);
    uVar29 = piVar21[4] + (*piVar21 - piVar21[2]);
    if (uVar29 < (uint)piVar21[5]) {
      piVar21[5] = uVar29;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar24 + 0x28) <= uVar30) {
      uVar30 = 0;
    }
    *(undefined8 *)(*(long *)(lVar24 + 0x30) + (ulong)uVar30 * 0x90) =
         *(undefined8 *)(lVar24 + 0x10);
  }
  return fVar4 != 0.0;
}

