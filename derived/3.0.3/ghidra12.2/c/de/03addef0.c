
void FUN_03addef0(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

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
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  ushort *puVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  float *pfVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  
  puVar17 = *(ushort **)(param_2 + 8);
  lVar25 = *(long *)(param_1 + 0x10);
  lVar31 = *(long *)(lVar25 + 0x10);
  uVar8 = *puVar17;
  lVar22 = *(long *)(puVar17 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar27 = (uint)uVar8;
  uVar28 = uVar27;
  if (*(uint *)(lVar25 + 0x28) <= (uint)uVar8) {
    uVar28 = 0;
  }
  lVar29 = *(long *)(lVar25 + 0x30) + (ulong)uVar28 * 0x90;
  piVar30 = (int *)(lVar29 + 0x80);
  *piVar30 = 0;
  *(undefined8 *)(lVar29 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))();
  uVar5 = *(uint *)(lVar25 + 0x1c);
  uVar28 = (uint)uVar8;
  if (0 < (int)uVar5) {
    uVar26 = 0;
    lVar14 = *(long *)(param_1 + 0x48);
    uVar23 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar23 = 1;
    }
    do {
      lVar32 = *(long *)(lVar31 + uVar26 * 8);
      pfVar1 = (float *)(*(long *)(lVar32 + 8) + (ulong)uVar8 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar32 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar32 + 0x11e) & 1 << (ulong)(uVar27 & 0x1f) & 0xffffU) != 0)) {
        fVar33 = *(float *)(lVar22 + 0x24) * *(float *)(lVar32 + 0x9c) +
                 *(float *)(lVar32 + 0x98) * *(float *)(lVar22 + 0x20) +
                 *(float *)(lVar32 + 0xa0) * *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x2c);
        pfVar1[6] = fVar33;
        if (0.0 <= fVar33) {
          fVar34 = 3.4028235e+38;
        }
        else {
          fVar34 = -(*(float *)(lVar22 + 0xf8) * *(float *)(lVar32 + 0xa4)) / fVar33;
        }
        pfVar24 = pfVar1 + 5;
        *pfVar24 = fVar34;
        if (fVar33 < *(float *)(puVar17 + 2)) {
          *(ushort *)(lVar32 + 0x2a) = *(ushort *)(lVar32 + 0x2a) | puVar17[1];
          param_2[5] = -0.0;
          fVar33 = pfVar1[6];
        }
        fVar33 = fVar33 + *(float *)(lVar32 + 0xa4);
        fVar34 = *param_2;
        if (*param_2 <= fVar33) {
          fVar34 = fVar33;
        }
        *param_2 = fVar34;
        fVar33 = param_2[1];
        if (param_2[1] <= *pfVar24) {
          fVar33 = *pfVar24;
        }
        param_2[1] = fVar33;
        fVar33 = fVar4;
        if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
          fVar33 = *pfVar24;
          uVar13 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar18 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar28;
          if (*(uint *)(param_3 + 0x1a70) < uVar27 || *(uint *)(param_3 + 0x1a70) == uVar28) {
            uVar3 = 0;
          }
          if (((uVar13 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x18e0))) {
            uVar13 = uVar13 | 1;
          }
          if (((uVar13 >> 1 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1900))) {
            uVar13 = uVar13 | 2;
          }
          if (((uVar13 >> 2 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1920))) {
            uVar13 = uVar13 | 4;
          }
          if (((uVar13 >> 3 & 1) == 0) && (fVar33 < *(float *)(lVar18 + 0x1940))) {
            uVar13 = uVar13 | 8;
          }
          lVar18 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar15 = *(code **)(lVar18 + 0x1e0);
          plVar2 = (long *)(lVar18 + ((long)*(ulong *)(lVar18 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar18 + 0x1e8) & 1) != 0) {
            pcVar15 = *(code **)(pcVar15 + *plVar2);
          }
          iVar12 = (*pcVar15)(plVar2,lVar32 + 0x98,param_5,uVar13);
          fVar33 = (float)((uint)fVar4 & 0xfffffe1f | iVar12 << 5);
        }
        if (fVar33 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar19 = *(float **)(pfVar1 + 2);
            if (pfVar19 == pfVar1 + 4) {
              *(byte *)pfVar19 = 0;
              uVar20 = (ulong)uVar23;
              do {
                uVar10 = uVar20 - 1;
                if ((long)uVar20 < 1) goto LAB_03ade200;
                lVar18 = uVar20 * 4;
                uVar20 = uVar10;
              } while (*(float *)(lVar14 + (ulong)uVar27 * 0x58 + 0x10 + lVar18) <= *pfVar24);
              *(byte *)pfVar19 = (char)uVar10 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar19;
              if ((int)(uVar23 - 1) <= (int)(uint)*(byte *)pfVar19) {
                uVar3 = uVar23 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03ade200:
          *pfVar1 = fVar33;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar33);
          lVar18 = *(long *)(lVar29 + 0x88);
          if (lVar18 != 0) {
            iVar12 = *piVar30;
            uVar7 = *(undefined1 *)(pfVar1 + 4);
            *piVar30 = iVar12 + 1;
            puVar21 = (undefined8 *)(lVar18 + (long)iVar12 * 0x28);
            *(float *)(puVar21 + 3) = fVar33;
            uVar9 = *(undefined2 *)(lVar32 + 0x11c);
            *(undefined1 *)(puVar21 + 4) = uVar7;
            *(undefined2 *)((long)puVar21 + 0x1c) = uVar9;
            uVar16 = 0;
            if (*(long *)(lVar32 + 0xa8) != 0) {
              uVar16 = *(undefined8 *)(*(long *)(lVar32 + 0xa8) + 0x10);
            }
            *puVar21 = uVar16;
            lVar18 = lVar18 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(lVar32 + 0x10);
            *(ushort *)(lVar18 + 0x1e) =
                 (*(byte *)(lVar32 + 0x123) & 3) +
                 *(short *)(lVar32 + 0x120) * (*(byte *)(lVar32 + 0x123) >> 2 & 3);
            *(long *)(lVar18 + 0x10) = lVar32 + 0x20;
          }
          if ((*(byte *)(lVar32 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar5);
  }
  puVar11 = PTR_DAT_04bd1630;
  if (*(long *)(lVar29 + 0x88) != 0) {
    lVar31 = (long)(int)param_5 * 0x30;
    lVar22 = *(long *)PTR_DAT_04bd1630 + lVar31;
    *(long *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + (long)*piVar30 * 0x28;
    lVar29 = *(long *)puVar11;
    lVar31 = lVar29 + 0x18 + lVar31;
    *(ulong *)(lVar31 + 8) = *(long *)(lVar31 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar22 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar22 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar22 + -1;
    }
    piVar30 = (int *)(lVar29 + 0x18 + (long)iVar12 * 0x30);
    uVar27 = piVar30[4] + (*piVar30 - piVar30[2]);
    if (uVar27 < (uint)piVar30[5]) {
      piVar30[5] = uVar27;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (*(uint *)(lVar25 + 0x28) <= uVar28) {
    uVar28 = 0;
  }
  *(undefined8 *)(*(long *)(lVar25 + 0x30) + (ulong)uVar28 * 0x90) = *(undefined8 *)(lVar25 + 0x10);
  return;
}

