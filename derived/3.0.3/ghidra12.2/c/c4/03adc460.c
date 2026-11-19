
void FUN_03adc460(long param_1,float *param_2,ulong param_3,int param_4)

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
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  
  lVar22 = *(long *)(param_1 + 0x10);
  fVar4 = param_2[3];
  uVar7 = **(ushort **)(param_2 + 8);
  lVar25 = *(long *)(lVar22 + 0x10);
  lVar24 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  param_2[3] = 0.0;
  uVar23 = (uint)uVar7;
  uVar2 = uVar23;
  if (*(uint *)(lVar22 + 0x28) <= (uint)uVar7) {
    uVar2 = 0;
  }
  lVar26 = *(long *)(lVar22 + 0x30) + (ulong)uVar2 * 0x90;
  piVar27 = (int *)(lVar26 + 0x80);
  *piVar27 = 0;
  *(undefined8 *)(lVar26 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30 + 0x20);
  bVar5 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar2 = *(uint *)(lVar22 + 0x1c);
  if (0 < (int)uVar2) {
    lVar19 = *(long *)(param_1 + 0x48);
    uVar21 = (uint)bVar5;
    if ((param_3 & 4) == 0) {
      uVar21 = 1;
    }
    uVar18 = 0;
    do {
      lVar20 = *(long *)(lVar25 + uVar18 * 8);
      pfVar1 = (float *)(*(long *)(lVar20 + 8) + (ulong)uVar7 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar20 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar20 + 0x11e) & 1 << (ulong)(uVar7 & 0x1f) & 0xffffU) != 0)) {
        fVar28 = *(float *)(lVar24 + 0x24) * *(float *)(lVar20 + 0x9c) +
                 *(float *)(lVar20 + 0x98) * *(float *)(lVar24 + 0x20) +
                 *(float *)(lVar20 + 0xa0) * *(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x2c);
        pfVar1[6] = fVar28;
        if (0.0 <= fVar28) {
          fVar29 = 3.4028235e+38;
        }
        else {
          fVar29 = -(*(float *)(lVar24 + 0xf8) * *(float *)(lVar20 + 0xa4)) / fVar28;
        }
        pfVar14 = pfVar1 + 5;
        *pfVar14 = fVar29;
        fVar28 = fVar28 + *(float *)(lVar20 + 0xa4);
        fVar29 = *param_2;
        if (*param_2 <= fVar28) {
          fVar29 = fVar28;
        }
        *param_2 = fVar29;
        fVar28 = param_2[1];
        if (param_2[1] <= *pfVar14) {
          fVar28 = *pfVar14;
        }
        param_2[1] = fVar28;
        if (fVar4 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar12 = *(float **)(pfVar1 + 2);
            if (pfVar12 == pfVar1 + 4) {
              *(undefined1 *)pfVar12 = 0;
              uVar16 = (ulong)uVar21;
              do {
                uVar9 = uVar16 - 1;
                if ((long)uVar16 < 1) goto LAB_03adc640;
                lVar13 = uVar16 * 4;
                uVar16 = uVar9;
              } while (*(float *)(lVar19 + (ulong)uVar23 * 0x58 + 0x10 + lVar13) <= *pfVar14);
              *(char *)pfVar12 = (char)uVar9 + '\x01';
            }
            else {
              uVar3 = (uint)*(byte *)pfVar12;
              if ((int)(uVar21 - 1) <= (int)(uint)*(byte *)pfVar12) {
                uVar3 = uVar21 - 1;
              }
              *(char *)(pfVar1 + 4) = (char)uVar3;
            }
          }
LAB_03adc640:
          *pfVar1 = fVar4;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar4);
          lVar13 = *(long *)(lVar26 + 0x88);
          if (lVar13 != 0) {
            uVar6 = *(undefined1 *)(pfVar1 + 4);
            iVar11 = *piVar27;
            *piVar27 = iVar11 + 1;
            puVar15 = (undefined8 *)(lVar13 + (long)iVar11 * 0x28);
            *(float *)(puVar15 + 3) = fVar4;
            uVar8 = *(undefined2 *)(lVar20 + 0x11c);
            *(undefined1 *)(puVar15 + 4) = uVar6;
            *(undefined2 *)((long)puVar15 + 0x1c) = uVar8;
            uVar17 = 0;
            if (*(long *)(lVar20 + 0xa8) != 0) {
              uVar17 = *(undefined8 *)(*(long *)(lVar20 + 0xa8) + 0x10);
            }
            *puVar15 = uVar17;
            lVar13 = lVar13 + (long)iVar11 * 0x28;
            *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(lVar20 + 0x10);
            *(ushort *)(lVar13 + 0x1e) =
                 (*(byte *)(lVar20 + 0x123) & 3) +
                 *(short *)(lVar20 + 0x120) * (*(byte *)(lVar20 + 0x123) >> 2 & 3);
            *(long *)(lVar13 + 0x10) = lVar20 + 0x20;
          }
          if ((*(byte *)(lVar20 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar2);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar26 + 0x88) != 0) {
    lVar24 = *(long *)PTR_DAT_04bd1630 + (long)param_4 * 0x30;
    *(long *)(lVar24 + 0x20) = *(long *)(lVar24 + 0x20) + (long)*piVar27 * 0x28;
    lVar25 = *(long *)puVar10;
    lVar24 = lVar25 + 0x18 + (long)param_4 * 0x30;
    *(ulong *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar24 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar24 == 0) {
      iVar11 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar11 = (int)lVar24 + -1;
    }
    piVar27 = (int *)(lVar25 + 0x18 + (long)iVar11 * 0x30);
    uVar2 = piVar27[4] + (*piVar27 - piVar27[2]);
    if (uVar2 < (uint)piVar27[5]) {
      piVar27[5] = uVar2;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (*(uint *)(lVar22 + 0x28) < (uint)uVar7 || *(uint *)(lVar22 + 0x28) == uVar23) {
    uVar23 = 0;
  }
  *(undefined8 *)(*(long *)(lVar22 + 0x30) + (ulong)uVar23 * 0x90) = *(undefined8 *)(lVar22 + 0x10);
  return;
}

