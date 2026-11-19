
void FUN_03add9a0(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  float *pfVar1;
  long *plVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  ulong uVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ushort *puVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar35 = *(long *)(param_1 + 0x10);
  uVar21 = *(undefined8 *)(param_1 + 0x38);
  lVar17 = *(long *)(lVar35 + 0x10);
  puVar22 = *(ushort **)(param_2 + 8);
  uVar8 = *puVar22;
  lVar34 = *(long *)(puVar22 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar30 = (uint)uVar8;
  uVar31 = uVar30;
  if (*(uint *)(lVar35 + 0x28) <= (uint)uVar8) {
    uVar31 = 0;
  }
  lVar25 = *(long *)(lVar35 + 0x30) + (ulong)uVar31 * 0x90;
  piVar26 = (int *)(lVar25 + 0x80);
  *piVar26 = 0;
  *(undefined8 *)(lVar25 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  plVar15 = (long *)(param_1 + 0x80);
  uVar13 = (**(code **)(*plVar15 + 0x10))();
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 1;
  local_78 = 0xffffffff;
  uVar5 = *(uint *)(lVar35 + 0x1c);
  uVar31 = (uint)uVar8;
  local_90 = param_1;
  if (0 < (int)uVar5) {
    uVar36 = 0;
    uVar32 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar32 = 1;
    }
    bVar6 = *(byte *)(lVar35 + 0x68);
    lVar18 = *(long *)(param_1 + 0x48);
    uVar9 = *(ushort *)(param_1 + 0xba);
    do {
      lVar29 = *(long *)(lVar17 + uVar36 * 8);
      if (((uVar13 & 1) != 0) && ((*(byte *)(lVar29 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar29;
        (**(code **)*plVar15)(plVar15,local_98);
      }
      FUN_039be3d0(lVar29,bVar6 & 1 | (uVar9 >> 2 & 3) << 1,uVar21,lVar35 + 0x38,lVar35 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar29 + 8) + (ulong)uVar8 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar29 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar29 + 0x11e) & 1 << (ulong)(uVar30 & 0x1f) & 0xffffU) != 0)) {
        fVar37 = *(float *)(lVar34 + 0x24) * *(float *)(lVar29 + 0x9c) +
                 *(float *)(lVar29 + 0x98) * *(float *)(lVar34 + 0x20) +
                 *(float *)(lVar29 + 0xa0) * *(float *)(lVar34 + 0x28) + *(float *)(lVar34 + 0x2c);
        pfVar1[6] = fVar37;
        if (0.0 <= fVar37) {
          fVar38 = 3.4028235e+38;
        }
        else {
          fVar38 = -(*(float *)(lVar34 + 0xf8) * *(float *)(lVar29 + 0xa4)) / fVar37;
        }
        pfVar33 = pfVar1 + 5;
        *pfVar33 = fVar38;
        if (fVar37 < *(float *)(puVar22 + 2)) {
          *(ushort *)(lVar29 + 0x2a) = *(ushort *)(lVar29 + 0x2a) | puVar22[1];
          param_2[5] = -0.0;
          fVar37 = pfVar1[6];
        }
        fVar37 = fVar37 + *(float *)(lVar29 + 0xa4);
        fVar38 = *param_2;
        if (*param_2 <= fVar37) {
          fVar38 = fVar37;
        }
        *param_2 = fVar38;
        fVar37 = param_2[1];
        if (param_2[1] <= *pfVar33) {
          fVar37 = *pfVar33;
        }
        param_2[1] = fVar37;
        fVar37 = fVar4;
        if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
          fVar37 = *pfVar33;
          uVar16 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar23 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar31;
          if (*(uint *)(param_3 + 0x1a70) < uVar30 || *(uint *)(param_3 + 0x1a70) == uVar31) {
            uVar3 = 0;
          }
          if (((uVar16 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x18e0))) {
            uVar16 = uVar16 | 1;
          }
          if (((uVar16 >> 1 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1900))) {
            uVar16 = uVar16 | 2;
          }
          if (((uVar16 >> 2 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1920))) {
            uVar16 = uVar16 | 4;
          }
          if (((uVar16 >> 3 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1940))) {
            uVar16 = uVar16 | 8;
          }
          lVar23 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar19 = *(code **)(lVar23 + 0x1e0);
          plVar2 = (long *)(lVar23 + ((long)*(ulong *)(lVar23 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar23 + 0x1e8) & 1) != 0) {
            pcVar19 = *(code **)(pcVar19 + *plVar2);
          }
          iVar14 = (*pcVar19)(plVar2,lVar29 + 0x98,param_5,uVar16);
          fVar37 = (float)((uint)fVar4 & 0xfffffe1f | iVar14 << 5);
        }
        if (fVar37 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar24 = *(float **)(pfVar1 + 2);
            if (pfVar24 == pfVar1 + 4) {
              *(byte *)pfVar24 = 0;
              uVar27 = (ulong)uVar32;
              do {
                uVar11 = uVar27 - 1;
                if ((long)uVar27 < 1) goto LAB_03addd44;
                lVar23 = uVar27 * 4;
                uVar27 = uVar11;
              } while (*(float *)(lVar18 + (ulong)uVar30 * 0x58 + 0x10 + lVar23) <= *pfVar33);
              *(byte *)pfVar24 = (char)uVar11 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar24;
              if ((int)(uVar32 - 1) <= (int)(uint)*(byte *)pfVar24) {
                uVar3 = uVar32 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03addd44:
          *pfVar1 = fVar37;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar37);
          lVar23 = *(long *)(lVar25 + 0x88);
          if (lVar23 != 0) {
            iVar14 = *piVar26;
            uVar7 = *(undefined1 *)(pfVar1 + 4);
            *piVar26 = iVar14 + 1;
            puVar28 = (undefined8 *)(lVar23 + (long)iVar14 * 0x28);
            *(float *)(puVar28 + 3) = fVar37;
            uVar10 = *(undefined2 *)(lVar29 + 0x11c);
            *(undefined1 *)(puVar28 + 4) = uVar7;
            *(undefined2 *)((long)puVar28 + 0x1c) = uVar10;
            uVar20 = 0;
            if (*(long *)(lVar29 + 0xa8) != 0) {
              uVar20 = *(undefined8 *)(*(long *)(lVar29 + 0xa8) + 0x10);
            }
            *puVar28 = uVar20;
            lVar23 = lVar23 + (long)iVar14 * 0x28;
            *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar29 + 0x10);
            *(ushort *)(lVar23 + 0x1e) =
                 (*(byte *)(lVar29 + 0x123) & 3) +
                 *(short *)(lVar29 + 0x120) * (*(byte *)(lVar29 + 0x123) >> 2 & 3);
            *(long *)(lVar23 + 0x10) = lVar29 + 0x20;
          }
          if ((*(byte *)(lVar29 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar5);
  }
  puVar12 = PTR_DAT_04bd1630;
  if (*(long *)(lVar25 + 0x88) != 0) {
    lVar34 = (long)(int)param_5 * 0x30;
    lVar17 = *(long *)PTR_DAT_04bd1630 + lVar34;
    *(long *)(lVar17 + 0x20) = *(long *)(lVar17 + 0x20) + (long)*piVar26 * 0x28;
    lVar25 = *(long *)puVar12;
    lVar34 = lVar25 + 0x18 + lVar34;
    *(ulong *)(lVar34 + 8) = *(long *)(lVar34 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar17 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar17 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar17 + -1;
    }
    piVar26 = (int *)(lVar25 + 0x18 + (long)iVar14 * 0x30);
    uVar30 = piVar26[4] + (*piVar26 - piVar26[2]);
    if (uVar30 < (uint)piVar26[5]) {
      piVar26[5] = uVar30;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (*(uint *)(lVar35 + 0x28) <= uVar31) {
    uVar31 = 0;
  }
  *(undefined8 *)(*(long *)(lVar35 + 0x30) + (ulong)uVar31 * 0x90) = *(undefined8 *)(lVar35 + 0x10);
  return;
}

