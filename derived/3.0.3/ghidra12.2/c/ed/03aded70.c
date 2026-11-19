
bool FUN_03aded70(long param_1,float *param_2,undefined8 param_3,ulong param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ushort *puVar20;
  float *pfVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  float *pfVar31;
  float fVar32;
  float fVar33;
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar28 = *(long *)(param_1 + 0x10);
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  lVar15 = *(long *)(lVar28 + 0x10);
  puVar20 = *(ushort **)(param_2 + 8);
  uVar6 = *puVar20;
  lVar16 = *(long *)(puVar20 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar3 = param_2[3];
  param_2[3] = 0.0;
  uVar27 = (uint)uVar6;
  if (*(uint *)(lVar28 + 0x28) <= (uint)uVar6) {
    uVar27 = 0;
  }
  lVar23 = *(long *)(lVar28 + 0x30) + (ulong)uVar27 * 0x90;
  piVar24 = (int *)(lVar23 + 0x80);
  *piVar24 = 0;
  *(undefined8 *)(lVar23 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30 + 0x20);
  bVar4 = *(byte *)(param_1 + 0xb0);
  plVar13 = (long *)(param_1 + 0x80);
  uVar11 = (**(code **)(*plVar13 + 0x10))();
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 1;
  local_78 = 0xffffffff;
  uVar27 = *(uint *)(lVar28 + 0x1c);
  local_90 = param_1;
  if (0 < (int)uVar27) {
    uVar30 = 0;
    lVar17 = *(long *)(param_1 + 0x48);
    uVar29 = (uint)bVar4;
    if ((param_4 & 4) == 0) {
      uVar29 = 1;
    }
    uVar7 = *(ushort *)(param_1 + 0xba);
    bVar4 = *(byte *)(lVar28 + 0x68);
    do {
      lVar26 = *(long *)(lVar15 + uVar30 * 8);
      if (((uVar11 & 1) != 0) && ((*(byte *)(lVar26 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar26;
        (**(code **)*plVar13)(plVar13,local_98);
      }
      FUN_039be3d0(lVar26,bVar4 & 1 | (uVar7 >> 2 & 3) << 1,uVar19,lVar28 + 0x38,lVar28 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar26 + 8) + (ulong)uVar6 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar26 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar26 + 0x11e) & 1 << (ulong)(uVar6 & 0x1f) & 0xffffU) != 0)) {
        fVar32 = *(float *)(lVar16 + 0x24) * *(float *)(lVar26 + 0x9c) +
                 *(float *)(lVar26 + 0x98) * *(float *)(lVar16 + 0x20) +
                 *(float *)(lVar26 + 0xa0) * *(float *)(lVar16 + 0x28) + *(float *)(lVar16 + 0x2c);
        pfVar21 = pfVar1 + 6;
        *pfVar21 = fVar32;
        if (0.0 <= fVar32) {
          fVar32 = 3.4028235e+38;
        }
        else {
          fVar32 = -(*(float *)(lVar16 + 0xf8) * *(float *)(lVar26 + 0xa4)) / fVar32;
        }
        pfVar31 = pfVar1 + 5;
        *pfVar31 = fVar32;
        uVar14 = FUN_039f94dc(lVar16,lVar26 + 0x98);
        if ((uVar14 & 1) == 0) {
          fVar32 = (float)((uint)fVar3 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar32 = *pfVar21;
          if (fVar32 < *(float *)(puVar20 + 2)) {
            *(ushort *)(lVar26 + 0x2a) = *(ushort *)(lVar26 + 0x2a) | puVar20[1];
            param_2[5] = -0.0;
            fVar32 = *pfVar21;
          }
          fVar32 = fVar32 + *(float *)(lVar26 + 0xa4);
          fVar33 = *param_2;
          if (*param_2 <= fVar32) {
            fVar33 = fVar32;
          }
          *param_2 = fVar33;
          fVar32 = param_2[1];
          if (param_2[1] <= *pfVar31) {
            fVar32 = *pfVar31;
          }
          param_2[1] = fVar32;
          fVar32 = fVar3;
        }
        if (fVar32 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar21 = *(float **)(pfVar1 + 2);
            if (pfVar21 == pfVar1 + 4) {
              *(byte *)pfVar21 = 0;
              uVar14 = (ulong)uVar29;
              do {
                uVar9 = uVar14 - 1;
                if ((long)uVar14 < 1) goto LAB_03adf0a4;
                lVar22 = uVar14 * 4;
                uVar14 = uVar9;
              } while (*(float *)(lVar17 + (ulong)(uint)uVar6 * 0x58 + 0x10 + lVar22) <= *pfVar31);
              *(byte *)pfVar21 = (char)uVar9 + 1;
            }
            else {
              uVar2 = (uint)*(byte *)pfVar21;
              if ((int)(uVar29 - 1) <= (int)(uint)*(byte *)pfVar21) {
                uVar2 = uVar29 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar2;
            }
          }
LAB_03adf0a4:
          *pfVar1 = fVar32;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar32);
          lVar22 = *(long *)(lVar23 + 0x88);
          if (lVar22 != 0) {
            iVar12 = *piVar24;
            uVar5 = *(undefined1 *)(pfVar1 + 4);
            *piVar24 = iVar12 + 1;
            puVar25 = (undefined8 *)(lVar22 + (long)iVar12 * 0x28);
            *(float *)(puVar25 + 3) = fVar32;
            uVar8 = *(undefined2 *)(lVar26 + 0x11c);
            *(undefined1 *)(puVar25 + 4) = uVar5;
            *(undefined2 *)((long)puVar25 + 0x1c) = uVar8;
            uVar18 = 0;
            if (*(long *)(lVar26 + 0xa8) != 0) {
              uVar18 = *(undefined8 *)(*(long *)(lVar26 + 0xa8) + 0x10);
            }
            *puVar25 = uVar18;
            lVar22 = lVar22 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar22 + 8) = *(undefined8 *)(lVar26 + 0x10);
            *(ushort *)(lVar22 + 0x1e) =
                 (*(byte *)(lVar26 + 0x123) & 3) +
                 *(short *)(lVar26 + 0x120) * (*(byte *)(lVar26 + 0x123) >> 2 & 3);
            *(long *)(lVar22 + 0x10) = lVar26 + 0x20;
          }
          if ((*(byte *)(lVar26 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar27);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar23 + 0x88) != 0) {
    lVar15 = *(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30;
    *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + (long)*piVar24 * 0x28;
    lVar16 = *(long *)puVar10;
    lVar15 = lVar16 + 0x18 + (long)param_5 * 0x30;
    *(ulong *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar15 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar15 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar15 + -1;
    }
    piVar24 = (int *)(lVar16 + 0x18 + (long)iVar12 * 0x30);
    uVar27 = piVar24[4] + (*piVar24 - piVar24[2]);
    if (uVar27 < (uint)piVar24[5]) {
      piVar24[5] = uVar27;
    }
  }
  fVar3 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar3 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar3 != 0.0) {
    uVar27 = (uint)uVar6;
    if (*(uint *)(lVar28 + 0x28) <= (uint)uVar6) {
      uVar27 = 0;
    }
    *(undefined8 *)(*(long *)(lVar28 + 0x30) + (ulong)uVar27 * 0x90) =
         *(undefined8 *)(lVar28 + 0x10);
  }
  return fVar3 != 0.0;
}

