
void FUN_03adc000(long param_1,float *param_2,undefined8 param_3,ulong param_4,int param_5)

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
  float *pfVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  float *pfVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined4 local_90 [2];
  long local_88;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar26 = *(long *)(param_1 + 0x10);
  uVar27 = *(undefined8 *)(param_1 + 0x38);
  lVar14 = *(long *)(lVar26 + 0x10);
  uVar6 = **(ushort **)(param_2 + 8);
  lVar25 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar3 = param_2[3];
  param_2[3] = 0.0;
  uVar18 = (uint)uVar6;
  if (*(uint *)(lVar26 + 0x28) <= (uint)uVar6) {
    uVar18 = 0;
  }
  lVar19 = *(long *)(lVar26 + 0x30) + (ulong)uVar18 * 0x90;
  piVar20 = (int *)(lVar19 + 0x80);
  *piVar20 = 0;
  *(undefined8 *)(lVar19 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30 + 0x20);
  bVar4 = *(byte *)(param_1 + 0xb0);
  plVar12 = (long *)(param_1 + 0x80);
  uVar13 = (**(code **)(*plVar12 + 0x10))();
  local_80 = 0;
  uStack_78 = 0;
  local_90[0] = 1;
  local_70 = 0xffffffff;
  uVar18 = *(uint *)(lVar26 + 0x1c);
  local_88 = param_1;
  if (0 < (int)uVar18) {
    uVar7 = *(ushort *)(param_1 + 0xba);
    uVar29 = (uint)bVar4;
    if ((param_4 & 4) == 0) {
      uVar29 = 1;
    }
    uVar28 = 0;
    lVar15 = *(long *)(param_1 + 0x48);
    bVar4 = *(byte *)(lVar26 + 0x68);
    do {
      lVar30 = *(long *)(lVar14 + uVar28 * 8);
      if (((uVar13 & 1) != 0) && ((*(byte *)(lVar30 + 0x122) >> 2 & 1) != 0)) {
        local_80 = lVar30;
        (**(code **)*plVar12)(plVar12,local_90);
      }
      FUN_039be3d0(lVar30,bVar4 & 1 | (uVar7 >> 2 & 3) << 1,uVar27,lVar26 + 0x38,lVar26 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar30 + 8) + (ulong)uVar6 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar30 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar30 + 0x11e) & 1 << (ulong)(uVar6 & 0x1f) & 0xffffU) != 0)) {
        fVar31 = *(float *)(lVar25 + 0x24) * *(float *)(lVar30 + 0x9c) +
                 *(float *)(lVar30 + 0x98) * *(float *)(lVar25 + 0x20) +
                 *(float *)(lVar30 + 0xa0) * *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x2c);
        pfVar1[6] = fVar31;
        if (0.0 <= fVar31) {
          fVar32 = 3.4028235e+38;
        }
        else {
          fVar32 = -(*(float *)(lVar25 + 0xf8) * *(float *)(lVar30 + 0xa4)) / fVar31;
        }
        pfVar21 = pfVar1 + 5;
        *pfVar21 = fVar32;
        fVar31 = fVar31 + *(float *)(lVar30 + 0xa4);
        fVar32 = *param_2;
        if (*param_2 <= fVar31) {
          fVar32 = fVar31;
        }
        *param_2 = fVar32;
        fVar31 = param_2[1];
        if (param_2[1] <= *pfVar21) {
          fVar31 = *pfVar21;
        }
        param_2[1] = fVar31;
        if (fVar3 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar16 = *(float **)(pfVar1 + 2);
            if (pfVar16 == pfVar1 + 4) {
              *(undefined1 *)pfVar16 = 0;
              uVar23 = (ulong)uVar29;
              do {
                uVar9 = uVar23 - 1;
                if ((long)uVar23 < 1) goto LAB_03adc2a4;
                lVar17 = uVar23 * 4;
                uVar23 = uVar9;
              } while (*(float *)(lVar15 + (ulong)uVar6 * 0x58 + 0x10 + lVar17) <= *pfVar21);
              *(char *)pfVar16 = (char)uVar9 + '\x01';
            }
            else {
              uVar2 = (uint)*(byte *)pfVar16;
              if ((int)(uVar29 - 1) <= (int)(uint)*(byte *)pfVar16) {
                uVar2 = uVar29 - 1;
              }
              *(char *)(pfVar1 + 4) = (char)uVar2;
            }
          }
LAB_03adc2a4:
          *pfVar1 = fVar3;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar3);
          lVar17 = *(long *)(lVar19 + 0x88);
          if (lVar17 != 0) {
            uVar5 = *(undefined1 *)(pfVar1 + 4);
            iVar11 = *piVar20;
            *piVar20 = iVar11 + 1;
            puVar22 = (undefined8 *)(lVar17 + (long)iVar11 * 0x28);
            *(float *)(puVar22 + 3) = fVar3;
            uVar8 = *(undefined2 *)(lVar30 + 0x11c);
            *(undefined1 *)(puVar22 + 4) = uVar5;
            *(undefined2 *)((long)puVar22 + 0x1c) = uVar8;
            uVar24 = 0;
            if (*(long *)(lVar30 + 0xa8) != 0) {
              uVar24 = *(undefined8 *)(*(long *)(lVar30 + 0xa8) + 0x10);
            }
            *puVar22 = uVar24;
            lVar17 = lVar17 + (long)iVar11 * 0x28;
            *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar30 + 0x10);
            *(ushort *)(lVar17 + 0x1e) =
                 (*(byte *)(lVar30 + 0x123) & 3) +
                 *(short *)(lVar30 + 0x120) * (*(byte *)(lVar30 + 0x123) >> 2 & 3);
            *(long *)(lVar17 + 0x10) = lVar30 + 0x20;
          }
          if ((*(byte *)(lVar30 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar18);
  }
  puVar10 = PTR_DAT_04bd1630;
  if (*(long *)(lVar19 + 0x88) != 0) {
    lVar14 = *(long *)PTR_DAT_04bd1630 + (long)param_5 * 0x30;
    *(long *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + (long)*piVar20 * 0x28;
    lVar25 = *(long *)puVar10;
    lVar14 = lVar25 + 0x18 + (long)param_5 * 0x30;
    *(ulong *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar14 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar14 == 0) {
      iVar11 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar11 = (int)lVar14 + -1;
    }
    piVar20 = (int *)(lVar25 + 0x18 + (long)iVar11 * 0x30);
    uVar18 = piVar20[4] + (*piVar20 - piVar20[2]);
    if (uVar18 < (uint)piVar20[5]) {
      piVar20[5] = uVar18;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)param_2[3] >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  uVar18 = (uint)uVar6;
  if (*(uint *)(lVar26 + 0x28) <= uVar18) {
    uVar18 = 0;
  }
  *(undefined8 *)(*(long *)(lVar26 + 0x30) + (ulong)uVar18 * 0x90) = *(undefined8 *)(lVar26 + 0x10);
  return;
}

