
void FUN_03adc7d0(long param_1,float *param_2,undefined8 param_3,ulong param_4,int param_5)

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
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  float *pfVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined4 local_90 [2];
  long local_88;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar27 = *(long *)(param_1 + 0x10);
  puVar16 = *(ushort **)(param_2 + 8);
  lVar14 = *(long *)(lVar27 + 0x10);
  uVar28 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *puVar16;
  lVar26 = *(long *)(puVar16 + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar3 = param_2[3];
  param_2[3] = 0.0;
  uVar19 = (uint)uVar6;
  if (*(uint *)(lVar27 + 0x28) <= (uint)uVar6) {
    uVar19 = 0;
  }
  lVar20 = *(long *)(lVar27 + 0x30) + (ulong)uVar19 * 0x90;
  piVar21 = (int *)(lVar20 + 0x80);
  *piVar21 = 0;
  *(undefined8 *)(lVar20 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30 + 0x20);
  bVar4 = *(byte *)(param_1 + 0xb0);
  plVar12 = (long *)(param_1 + 0x80);
  uVar13 = (**(code **)(*plVar12 + 0x10))();
  local_80 = 0;
  uStack_78 = 0;
  local_90[0] = 1;
  local_70 = 0xffffffff;
  uVar19 = *(uint *)(lVar27 + 0x1c);
  local_88 = param_1;
  if (0 < (int)uVar19) {
    uVar30 = (uint)bVar4;
    if ((param_4 & 4) == 0) {
      uVar30 = 1;
    }
    lVar15 = *(long *)(param_1 + 0x48);
    uVar29 = 0;
    uVar7 = *(ushort *)(param_1 + 0xba);
    bVar4 = *(byte *)(lVar27 + 0x68);
    do {
      lVar31 = *(long *)(lVar14 + uVar29 * 8);
      if (((uVar13 & 1) != 0) && ((*(byte *)(lVar31 + 0x122) >> 2 & 1) != 0)) {
        local_80 = lVar31;
        (**(code **)*plVar12)(plVar12,local_90);
      }
      FUN_039be3d0(lVar31,bVar4 & 1 | (uVar7 >> 2 & 3) << 1,uVar28,lVar27 + 0x38,lVar27 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar31 + 8) + (ulong)uVar6 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar31 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar31 + 0x11e) & 1 << (ulong)(uVar6 & 0x1f) & 0xffffU) != 0)) {
        fVar32 = *(float *)(lVar26 + 0x24) * *(float *)(lVar31 + 0x9c) +
                 *(float *)(lVar31 + 0x98) * *(float *)(lVar26 + 0x20) +
                 *(float *)(lVar31 + 0xa0) * *(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x2c);
        pfVar1[6] = fVar32;
        if (0.0 <= fVar32) {
          fVar33 = 3.4028235e+38;
        }
        else {
          fVar33 = -(*(float *)(lVar26 + 0xf8) * *(float *)(lVar31 + 0xa4)) / fVar32;
        }
        pfVar17 = pfVar1 + 5;
        *pfVar17 = fVar33;
        if (fVar32 < *(float *)(puVar16 + 2)) {
          *(ushort *)(lVar31 + 0x2a) = *(ushort *)(lVar31 + 0x2a) | puVar16[1];
          param_2[5] = -0.0;
          fVar32 = pfVar1[6];
        }
        fVar32 = fVar32 + *(float *)(lVar31 + 0xa4);
        fVar33 = *param_2;
        if (*param_2 <= fVar32) {
          fVar33 = fVar32;
        }
        *param_2 = fVar33;
        fVar32 = param_2[1];
        if (param_2[1] <= *pfVar17) {
          fVar32 = *pfVar17;
        }
        param_2[1] = fVar32;
        if (fVar3 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar22 = *(float **)(pfVar1 + 2);
            if (pfVar22 == pfVar1 + 4) {
              *(undefined1 *)pfVar22 = 0;
              uVar24 = (ulong)uVar30;
              do {
                uVar9 = uVar24 - 1;
                if ((long)uVar24 < 1) goto LAB_03adcaa4;
                lVar18 = uVar24 * 4;
                uVar24 = uVar9;
              } while (*(float *)(lVar15 + (ulong)uVar6 * 0x58 + 0x10 + lVar18) <= *pfVar17);
              *(char *)pfVar22 = (char)uVar9 + '\x01';
            }
            else {
              uVar2 = (uint)*(byte *)pfVar22;
              if ((int)(uVar30 - 1) <= (int)(uint)*(byte *)pfVar22) {
                uVar2 = uVar30 - 1;
              }
              *(char *)(pfVar1 + 4) = (char)uVar2;
            }
          }
LAB_03adcaa4:
          *pfVar1 = fVar3;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar3);
          lVar18 = *(long *)(lVar20 + 0x88);
          if (lVar18 != 0) {
            uVar5 = *(undefined1 *)(pfVar1 + 4);
            iVar11 = *piVar21;
            *piVar21 = iVar11 + 1;
            puVar23 = (undefined8 *)(lVar18 + (long)iVar11 * 0x28);
            *(float *)(puVar23 + 3) = fVar3;
            uVar8 = *(undefined2 *)(lVar31 + 0x11c);
            *(undefined1 *)(puVar23 + 4) = uVar5;
            *(undefined2 *)((long)puVar23 + 0x1c) = uVar8;
            uVar25 = 0;
            if (*(long *)(lVar31 + 0xa8) != 0) {
              uVar25 = *(undefined8 *)(*(long *)(lVar31 + 0xa8) + 0x10);
            }
            *puVar23 = uVar25;
            lVar18 = lVar18 + (long)iVar11 * 0x28;
            *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(lVar31 + 0x10);
            *(ushort *)(lVar18 + 0x1e) =
                 (*(byte *)(lVar31 + 0x123) & 3) +
                 *(short *)(lVar31 + 0x120) * (*(byte *)(lVar31 + 0x123) >> 2 & 3);
            *(long *)(lVar18 + 0x10) = lVar31 + 0x20;
          }
          if ((*(byte *)(lVar31 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar19);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar20 + 0x88) != 0) {
    lVar14 = *(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30;
    *(long *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + (long)*piVar21 * 0x28;
    lVar26 = *(long *)puVar10;
    lVar14 = lVar26 + 0x18 + (long)param_5 * 0x30;
    *(ulong *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar14 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar14 == 0) {
      iVar11 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar11 = (int)lVar14 + -1;
    }
    piVar21 = (int *)(lVar26 + 0x18 + (long)iVar11 * 0x30);
    uVar19 = piVar21[4] + (*piVar21 - piVar21[2]);
    if (uVar19 < (uint)piVar21[5]) {
      piVar21[5] = uVar19;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  uVar19 = (uint)uVar6;
  if (*(uint *)(lVar27 + 0x28) <= uVar19) {
    uVar19 = 0;
  }
  *(undefined8 *)(*(long *)(lVar27 + 0x30) + (ulong)uVar19 * 0x90) = *(undefined8 *)(lVar27 + 0x10);
  return;
}

