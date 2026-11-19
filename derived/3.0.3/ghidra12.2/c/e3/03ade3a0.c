
bool FUN_03ade3a0(long param_1,float *param_2,undefined8 param_3,ulong param_4,int param_5)

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
  float *pfVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  float *pfVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar25 = *(long *)(param_1 + 0x10);
  uVar30 = *(undefined8 *)(param_1 + 0x38);
  lVar15 = *(long *)(lVar25 + 0x10);
  uVar6 = **(ushort **)(param_2 + 8);
  lVar16 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar3 = param_2[3];
  param_2[3] = 0.0;
  uVar24 = (uint)uVar6;
  if (*(uint *)(lVar25 + 0x28) <= (uint)uVar6) {
    uVar24 = 0;
  }
  lVar21 = *(long *)(lVar25 + 0x30) + (ulong)uVar24 * 0x90;
  piVar22 = (int *)(lVar21 + 0x80);
  *piVar22 = 0;
  *(undefined8 *)(lVar21 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30 + 0x20);
  bVar4 = *(byte *)(param_1 + 0xb0);
  plVar13 = (long *)(param_1 + 0x80);
  uVar11 = (**(code **)(*plVar13 + 0x10))();
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 1;
  local_78 = 0xffffffff;
  uVar24 = *(uint *)(lVar25 + 0x1c);
  local_90 = param_1;
  if (0 < (int)uVar24) {
    uVar7 = *(ushort *)(param_1 + 0xba);
    uVar27 = (uint)bVar4;
    if ((param_4 & 4) == 0) {
      uVar27 = 1;
    }
    uVar28 = 0;
    lVar17 = *(long *)(param_1 + 0x48);
    bVar4 = *(byte *)(lVar25 + 0x68);
    do {
      lVar26 = *(long *)(lVar15 + uVar28 * 8);
      if (((uVar11 & 1) != 0) && ((*(byte *)(lVar26 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar26;
        (**(code **)*plVar13)(plVar13,local_98);
      }
      FUN_039be3d0(lVar26,bVar4 & 1 | (uVar7 >> 2 & 3) << 1,uVar30,lVar25 + 0x38,lVar25 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar26 + 8) + (ulong)uVar6 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar26 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar26 + 0x11e) & 1 << (ulong)(uVar6 & 0x1f) & 0xffffU) != 0)) {
        fVar31 = *(float *)(lVar16 + 0x24) * *(float *)(lVar26 + 0x9c) +
                 *(float *)(lVar26 + 0x98) * *(float *)(lVar16 + 0x20) +
                 *(float *)(lVar26 + 0xa0) * *(float *)(lVar16 + 0x28) + *(float *)(lVar16 + 0x2c);
        pfVar1[6] = fVar31;
        if (0.0 <= fVar31) {
          fVar31 = 3.4028235e+38;
        }
        else {
          fVar31 = -(*(float *)(lVar16 + 0xf8) * *(float *)(lVar26 + 0xa4)) / fVar31;
        }
        pfVar29 = pfVar1 + 5;
        *pfVar29 = fVar31;
        uVar14 = FUN_039f94dc(lVar16,lVar26 + 0x98);
        if ((uVar14 & 1) == 0) {
          fVar31 = (float)((uint)fVar3 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar32 = pfVar1[6] + *(float *)(lVar26 + 0xa4);
          fVar31 = *param_2;
          if (*param_2 <= fVar32) {
            fVar31 = fVar32;
          }
          *param_2 = fVar31;
          fVar31 = param_2[1];
          if (param_2[1] <= *pfVar29) {
            fVar31 = *pfVar29;
          }
          param_2[1] = fVar31;
          fVar31 = fVar3;
        }
        if (fVar31 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar19 = *(float **)(pfVar1 + 2);
            if (pfVar19 == pfVar1 + 4) {
              *(byte *)pfVar19 = 0;
              uVar14 = (ulong)uVar27;
              do {
                uVar9 = uVar14 - 1;
                if ((long)uVar14 < 1) goto LAB_03ade6b4;
                lVar20 = uVar14 * 4;
                uVar14 = uVar9;
              } while (*(float *)(lVar17 + (ulong)(uint)uVar6 * 0x58 + 0x10 + lVar20) <= *pfVar29);
              *(byte *)pfVar19 = (char)uVar9 + 1;
            }
            else {
              uVar2 = (uint)*(byte *)pfVar19;
              if ((int)(uVar27 - 1) <= (int)(uint)*(byte *)pfVar19) {
                uVar2 = uVar27 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar2;
            }
          }
LAB_03ade6b4:
          *pfVar1 = fVar31;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar31);
          lVar20 = *(long *)(lVar21 + 0x88);
          if (lVar20 != 0) {
            iVar12 = *piVar22;
            uVar5 = *(undefined1 *)(pfVar1 + 4);
            *piVar22 = iVar12 + 1;
            puVar23 = (undefined8 *)(lVar20 + (long)iVar12 * 0x28);
            *(float *)(puVar23 + 3) = fVar31;
            uVar8 = *(undefined2 *)(lVar26 + 0x11c);
            *(undefined1 *)(puVar23 + 4) = uVar5;
            *(undefined2 *)((long)puVar23 + 0x1c) = uVar8;
            uVar18 = 0;
            if (*(long *)(lVar26 + 0xa8) != 0) {
              uVar18 = *(undefined8 *)(*(long *)(lVar26 + 0xa8) + 0x10);
            }
            *puVar23 = uVar18;
            lVar20 = lVar20 + (long)iVar12 * 0x28;
            *(undefined8 *)(lVar20 + 8) = *(undefined8 *)(lVar26 + 0x10);
            *(ushort *)(lVar20 + 0x1e) =
                 (*(byte *)(lVar26 + 0x123) & 3) +
                 *(short *)(lVar26 + 0x120) * (*(byte *)(lVar26 + 0x123) >> 2 & 3);
            *(long *)(lVar20 + 0x10) = lVar26 + 0x20;
          }
          if ((*(byte *)(lVar26 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar24);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar21 + 0x88) != 0) {
    lVar15 = *(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30;
    *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + (long)*piVar22 * 0x28;
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
    piVar22 = (int *)(lVar16 + 0x18 + (long)iVar12 * 0x30);
    uVar24 = piVar22[4] + (*piVar22 - piVar22[2]);
    if (uVar24 < (uint)piVar22[5]) {
      piVar22[5] = uVar24;
    }
  }
  fVar3 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar3 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar3 != 0.0) {
    uVar24 = (uint)uVar6;
    if (*(uint *)(lVar25 + 0x28) <= (uint)uVar6) {
      uVar24 = 0;
    }
    *(undefined8 *)(*(long *)(lVar25 + 0x30) + (ulong)uVar24 * 0x90) =
         *(undefined8 *)(lVar25 + 0x10);
  }
  return fVar3 != 0.0;
}

