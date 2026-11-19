
bool FUN_03ae0080(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

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
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  float *pfVar22;
  long lVar23;
  ushort *puVar24;
  long lVar25;
  int *piVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  float *pfVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar35 = *(long *)(param_1 + 0x10);
  puVar24 = *(ushort **)(param_2 + 8);
  uVar36 = *(undefined8 *)(param_1 + 0x38);
  lVar19 = *(long *)(lVar35 + 0x10);
  uVar9 = *puVar24;
  lVar34 = *(long *)(puVar24 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar32 = (uint)uVar9;
  uVar33 = uVar32;
  if (*(uint *)(lVar35 + 0x28) <= (uint)uVar9) {
    uVar33 = 0;
  }
  lVar25 = *(long *)(lVar35 + 0x30) + (ulong)uVar33 * 0x90;
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
  uVar33 = (uint)uVar9;
  local_90 = param_1;
  if (0 < (int)uVar5) {
    uVar30 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar30 = 1;
    }
    uVar37 = 0;
    bVar6 = *(byte *)(lVar35 + 0x68);
    lVar20 = *(long *)(param_1 + 0x48);
    uVar10 = *(ushort *)(param_1 + 0xba);
    do {
      lVar31 = *(long *)(lVar19 + uVar37 * 8);
      if (((uVar14 & 1) != 0) && ((*(byte *)(lVar31 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar31;
        (**(code **)*plVar16)(plVar16,local_98);
      }
      FUN_039be3d0(lVar31,bVar6 & 1 | (uVar10 >> 2 & 3) << 1,uVar36,lVar35 + 0x38,lVar35 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar31 + 8) + (ulong)uVar9 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar31 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar31 + 0x11e) & 1 << (ulong)(uVar32 & 0x1f) & 0xffffU) != 0)) {
        fVar38 = *(float *)(lVar34 + 0x24) * *(float *)(lVar31 + 0x9c) +
                 *(float *)(lVar31 + 0x98) * *(float *)(lVar34 + 0x20) +
                 *(float *)(lVar31 + 0xa0) * *(float *)(lVar34 + 0x28) + *(float *)(lVar34 + 0x2c);
        pfVar22 = pfVar1 + 6;
        *pfVar22 = fVar38;
        if (0.0 <= fVar38) {
          fVar38 = 3.4028235e+38;
        }
        else {
          fVar38 = -(*(float *)(lVar34 + 0xf8) * *(float *)(lVar31 + 0xa4)) / fVar38;
        }
        pfVar29 = pfVar1 + 5;
        *pfVar29 = fVar38;
        uVar17 = FUN_039f94dc(lVar34,lVar31 + 0x98);
        if ((uVar17 & 1) == 0) {
          bVar7 = *(byte *)(param_2 + 2);
          fVar38 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar38 = *pfVar22;
          if (fVar38 < *(float *)(puVar24 + 2)) {
            *(ushort *)(lVar31 + 0x2a) = *(ushort *)(lVar31 + 0x2a) | puVar24[1];
            param_2[5] = -0.0;
            fVar38 = *pfVar22;
          }
          fVar38 = fVar38 + *(float *)(lVar31 + 0xa4);
          fVar39 = *param_2;
          if (*param_2 <= fVar38) {
            fVar39 = fVar38;
          }
          *param_2 = fVar39;
          fVar38 = param_2[1];
          if (param_2[1] <= *pfVar29) {
            fVar38 = *pfVar29;
          }
          param_2[1] = fVar38;
          bVar7 = *(byte *)(param_2 + 2);
          fVar38 = fVar4;
        }
        if ((bVar7 >> 5 & 1) != 0) {
          fVar39 = *pfVar29;
          uVar18 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar23 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar33;
          if (*(uint *)(param_3 + 0x1a70) < uVar32 || *(uint *)(param_3 + 0x1a70) == uVar33) {
            uVar3 = 0;
          }
          if (((uVar18 & 1) == 0) && (fVar39 < *(float *)(lVar23 + 0x18e0))) {
            uVar18 = uVar18 | 1;
          }
          if (((uVar18 >> 1 & 1) == 0) && (fVar39 < *(float *)(lVar23 + 0x1900))) {
            uVar18 = uVar18 | 2;
          }
          if (((uVar18 >> 2 & 1) == 0) && (fVar39 < *(float *)(lVar23 + 0x1920))) {
            uVar18 = uVar18 | 4;
          }
          if (((uVar18 >> 3 & 1) == 0) && (fVar39 < *(float *)(lVar23 + 0x1940))) {
            uVar18 = uVar18 | 8;
          }
          lVar23 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar21 = *(code **)(lVar23 + 0x1e0);
          plVar2 = (long *)(lVar23 + ((long)*(ulong *)(lVar23 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar23 + 0x1e8) & 1) != 0) {
            pcVar21 = *(code **)(pcVar21 + *plVar2);
          }
          iVar15 = (*pcVar21)(plVar2,lVar31 + 0x98,param_5,uVar18);
          fVar38 = (float)((uint)fVar38 & 0xfffffe1f | iVar15 << 5);
        }
        if (fVar38 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar22 = *(float **)(pfVar1 + 2);
            if (pfVar22 == pfVar1 + 4) {
              *(byte *)pfVar22 = 0;
              uVar17 = (ulong)uVar30;
              do {
                uVar12 = uVar17 - 1;
                if ((long)uVar17 < 1) goto LAB_03ae0454;
                lVar23 = uVar17 * 4;
                uVar17 = uVar12;
              } while (*(float *)(lVar20 + (ulong)uVar32 * 0x58 + 0x10 + lVar23) <= *pfVar29);
              *(byte *)pfVar22 = (char)uVar12 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar22;
              if ((int)(uVar30 - 1) <= (int)(uint)*(byte *)pfVar22) {
                uVar3 = uVar30 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03ae0454:
          *pfVar1 = fVar38;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar38);
          lVar23 = *(long *)(lVar25 + 0x88);
          if (lVar23 != 0) {
            iVar15 = *piVar26;
            uVar8 = *(undefined1 *)(pfVar1 + 4);
            *piVar26 = iVar15 + 1;
            puVar27 = (undefined8 *)(lVar23 + (long)iVar15 * 0x28);
            *(float *)(puVar27 + 3) = fVar38;
            uVar11 = *(undefined2 *)(lVar31 + 0x11c);
            *(undefined1 *)(puVar27 + 4) = uVar8;
            *(undefined2 *)((long)puVar27 + 0x1c) = uVar11;
            uVar28 = 0;
            if (*(long *)(lVar31 + 0xa8) != 0) {
              uVar28 = *(undefined8 *)(*(long *)(lVar31 + 0xa8) + 0x10);
            }
            *puVar27 = uVar28;
            lVar23 = lVar23 + (long)iVar15 * 0x28;
            *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar31 + 0x10);
            *(ushort *)(lVar23 + 0x1e) =
                 (*(byte *)(lVar31 + 0x123) & 3) +
                 *(short *)(lVar31 + 0x120) * (*(byte *)(lVar31 + 0x123) >> 2 & 3);
            *(long *)(lVar23 + 0x10) = lVar31 + 0x20;
          }
          if ((*(byte *)(lVar31 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 != uVar5);
  }
  puVar13 = PTR_DAT_04bd1630;
  if (*(long *)(lVar25 + 0x88) != 0) {
    lVar34 = (long)(int)param_5 * 0x30;
    lVar19 = *(long *)PTR_DAT_04bd1630 + lVar34;
    *(long *)(lVar19 + 0x20) = *(long *)(lVar19 + 0x20) + (long)*piVar26 * 0x28;
    lVar25 = *(long *)puVar13;
    lVar34 = lVar25 + 0x18 + lVar34;
    *(ulong *)(lVar34 + 8) = *(long *)(lVar34 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar19 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar19 == 0) {
      iVar15 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar15 = (int)lVar19 + -1;
    }
    piVar26 = (int *)(lVar25 + 0x18 + (long)iVar15 * 0x30);
    uVar32 = piVar26[4] + (*piVar26 - piVar26[2]);
    if (uVar32 < (uint)piVar26[5]) {
      piVar26[5] = uVar32;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar35 + 0x28) <= uVar33) {
      uVar33 = 0;
    }
    *(undefined8 *)(*(long *)(lVar35 + 0x30) + (ulong)uVar33 * 0x90) =
         *(undefined8 *)(lVar35 + 0x10);
  }
  return fVar4 != 0.0;
}

