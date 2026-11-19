
void FUN_03add010(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  float *pfVar1;
  long *plVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined2 uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
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
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  lVar18 = *(long *)(lVar35 + 0x10);
  uVar9 = **(ushort **)(param_2 + 8);
  lVar34 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar30 = (uint)uVar9;
  uVar31 = uVar30;
  if (*(uint *)(lVar35 + 0x28) <= (uint)uVar9) {
    uVar31 = 0;
  }
  lVar25 = *(long *)(lVar35 + 0x30) + (ulong)uVar31 * 0x90;
  piVar26 = (int *)(lVar25 + 0x80);
  *piVar26 = 0;
  *(undefined8 *)(lVar25 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  plVar16 = (long *)(param_1 + 0x80);
  uVar14 = (**(code **)(*plVar16 + 0x10))();
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 1;
  local_78 = 0xffffffff;
  uVar5 = *(uint *)(lVar35 + 0x1c);
  uVar31 = (uint)uVar9;
  local_90 = param_1;
  if (0 < (int)uVar5) {
    uVar36 = 0;
    bVar7 = *(byte *)(lVar35 + 0x68);
    lVar19 = *(long *)(param_1 + 0x48);
    uVar10 = *(ushort *)(param_1 + 0xba);
    uVar32 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar32 = 1;
    }
    do {
      lVar29 = *(long *)(lVar18 + uVar36 * 8);
      if (((uVar14 & 1) != 0) && ((*(byte *)(lVar29 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar29;
        (**(code **)*plVar16)(plVar16,local_98);
      }
      FUN_039be3d0(lVar29,bVar7 & 1 | (uVar10 >> 2 & 3) << 1,uVar22,lVar35 + 0x38,lVar35 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar29 + 8) + (ulong)uVar9 * 0x20);
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
          uVar17 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar23 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar31;
          if (*(uint *)(param_3 + 0x1a70) < uVar30 || *(uint *)(param_3 + 0x1a70) == uVar31) {
            uVar3 = 0;
          }
          if (((uVar17 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x18e0))) {
            uVar17 = uVar17 | 1;
          }
          if (((uVar17 >> 1 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1900))) {
            uVar17 = uVar17 | 2;
          }
          if (((uVar17 >> 2 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1920))) {
            uVar17 = uVar17 | 4;
          }
          if (((uVar17 >> 3 & 1) == 0) && (fVar37 < *(float *)(lVar23 + 0x1940))) {
            uVar17 = uVar17 | 8;
          }
          lVar23 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar20 = *(code **)(lVar23 + 0x1e0);
          plVar2 = (long *)(lVar23 + ((long)*(ulong *)(lVar23 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar23 + 0x1e8) & 1) != 0) {
            pcVar20 = *(code **)(pcVar20 + *plVar2);
          }
          iVar15 = (*pcVar20)(plVar2,lVar29 + 0x98,param_5,uVar17);
          fVar37 = (float)((uint)fVar4 & 0xfffffe1f | iVar15 << 5);
        }
        if (fVar37 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar24 = *(float **)(pfVar1 + 2);
            if (pfVar24 == pfVar1 + 4) {
              *(byte *)pfVar24 = 0;
              uVar27 = (ulong)uVar32;
              do {
                uVar12 = uVar27 - 1;
                if ((long)uVar27 < 1) goto LAB_03add384;
                lVar23 = uVar27 * 4;
                uVar27 = uVar12;
              } while (*(float *)(lVar19 + (ulong)uVar30 * 0x58 + 0x10 + lVar23) <= *pfVar33);
              *(byte *)pfVar24 = (char)uVar12 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar24;
              if ((int)(uVar32 - 1) <= (int)(uint)*(byte *)pfVar24) {
                uVar3 = uVar32 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03add384:
          *pfVar1 = fVar37;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar37);
          lVar23 = *(long *)(lVar25 + 0x88);
          if (lVar23 != 0) {
            iVar15 = *piVar26;
            uVar8 = *(undefined1 *)(pfVar1 + 4);
            *piVar26 = iVar15 + 1;
            puVar28 = (undefined8 *)(lVar23 + (long)iVar15 * 0x28);
            *(float *)(puVar28 + 3) = fVar37;
            uVar11 = *(undefined2 *)(lVar29 + 0x11c);
            *(undefined1 *)(puVar28 + 4) = uVar8;
            *(undefined2 *)((long)puVar28 + 0x1c) = uVar11;
            uVar21 = 0;
            if (*(long *)(lVar29 + 0xa8) != 0) {
              uVar21 = *(undefined8 *)(*(long *)(lVar29 + 0xa8) + 0x10);
            }
            *puVar28 = uVar21;
            lVar23 = lVar23 + (long)iVar15 * 0x28;
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
  puVar13 = PTR_DAT_04bd1630;
  if (*(long *)(lVar25 + 0x88) != 0) {
    lVar34 = (long)(int)param_5 * 0x30;
    lVar18 = *(long *)PTR_DAT_04bd1630 + lVar34;
    *(long *)(lVar18 + 0x20) = *(long *)(lVar18 + 0x20) + (long)*piVar26 * 0x28;
    lVar25 = *(long *)puVar13;
    lVar34 = lVar25 + 0x18 + lVar34;
    *(ulong *)(lVar34 + 8) = *(long *)(lVar34 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar18 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar18 == 0) {
      iVar15 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar15 = (int)lVar18 + -1;
    }
    piVar26 = (int *)(lVar25 + 0x18 + (long)iVar15 * 0x30);
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

