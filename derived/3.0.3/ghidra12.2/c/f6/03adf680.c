
bool FUN_03adf680(long param_1,float *param_2,long param_3,ulong param_4,undefined8 param_5)

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
  long lVar24;
  int *piVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  float *pfVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar34 = *(long *)(param_1 + 0x10);
  uVar35 = *(undefined8 *)(param_1 + 0x38);
  lVar19 = *(long *)(lVar34 + 0x10);
  uVar9 = **(ushort **)(param_2 + 8);
  lVar33 = *(long *)(*(ushort **)(param_2 + 8) + (ulong)*(byte *)(param_1 + 0xaf) * 4 + 0xc);
  fVar4 = param_2[3];
  param_2[3] = 0.0;
  uVar31 = (uint)uVar9;
  uVar32 = uVar31;
  if (*(uint *)(lVar34 + 0x28) <= (uint)uVar9) {
    uVar32 = 0;
  }
  lVar24 = *(long *)(lVar34 + 0x30) + (ulong)uVar32 * 0x90;
  piVar25 = (int *)(lVar24 + 0x80);
  *piVar25 = 0;
  *(undefined8 *)(lVar24 + 0x88) =
       *(undefined8 *)(*(long *)PTR_DAT_04bd1630 + (long)(int)param_5 * 0x30 + 0x20);
  bVar6 = *(byte *)(param_1 + 0xb0);
  plVar16 = (long *)(param_1 + 0x80);
  uVar14 = (**(code **)(*plVar16 + 0x10))();
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 1;
  local_78 = 0xffffffff;
  uVar5 = *(uint *)(lVar34 + 0x1c);
  uVar32 = (uint)uVar9;
  local_90 = param_1;
  if (0 < (int)uVar5) {
    uVar29 = (uint)bVar6;
    if ((param_4 & 4) == 0) {
      uVar29 = 1;
    }
    uVar36 = 0;
    lVar20 = *(long *)(param_1 + 0x48);
    uVar10 = *(ushort *)(param_1 + 0xba);
    bVar6 = *(byte *)(lVar34 + 0x68);
    do {
      lVar30 = *(long *)(lVar19 + uVar36 * 8);
      if (((uVar14 & 1) != 0) && ((*(byte *)(lVar30 + 0x122) >> 2 & 1) != 0)) {
        local_88 = lVar30;
        (**(code **)*plVar16)(plVar16,local_98);
      }
      FUN_039be3d0(lVar30,bVar6 & 1 | (uVar10 >> 2 & 3) << 1,uVar35,lVar34 + 0x38,lVar34 + 0x6c,
                   param_3);
      pfVar1 = (float *)(*(long *)(lVar30 + 8) + (ulong)uVar9 * 0x20);
      *pfVar1 = 0.0;
      if (((*(byte *)(lVar30 + 0x122) & 1) != 0) &&
         (((uint)*(ushort *)(lVar30 + 0x11e) & 1 << (ulong)(uVar31 & 0x1f) & 0xffffU) != 0)) {
        fVar37 = *(float *)(lVar33 + 0x24) * *(float *)(lVar30 + 0x9c) +
                 *(float *)(lVar30 + 0x98) * *(float *)(lVar33 + 0x20) +
                 *(float *)(lVar30 + 0xa0) * *(float *)(lVar33 + 0x28) + *(float *)(lVar33 + 0x2c);
        pfVar1[6] = fVar37;
        if (0.0 <= fVar37) {
          fVar37 = 3.4028235e+38;
        }
        else {
          fVar37 = -(*(float *)(lVar33 + 0xf8) * *(float *)(lVar30 + 0xa4)) / fVar37;
        }
        pfVar28 = pfVar1 + 5;
        *pfVar28 = fVar37;
        uVar17 = FUN_039f94dc(lVar33,lVar30 + 0x98);
        if ((uVar17 & 1) == 0) {
          bVar7 = *(byte *)(param_2 + 2);
          fVar37 = (float)((uint)fVar4 & ((uint)param_2[4] ^ 0xffffffff));
        }
        else {
          fVar38 = pfVar1[6] + *(float *)(lVar30 + 0xa4);
          fVar37 = *param_2;
          if (*param_2 <= fVar38) {
            fVar37 = fVar38;
          }
          *param_2 = fVar37;
          fVar37 = param_2[1];
          if (param_2[1] <= *pfVar28) {
            fVar37 = *pfVar28;
          }
          param_2[1] = fVar37;
          bVar7 = *(byte *)(param_2 + 2);
          fVar37 = fVar4;
        }
        if ((bVar7 >> 5 & 1) != 0) {
          fVar38 = *pfVar28;
          uVar18 = *(byte *)(param_1 + 0xb1) ^ 0xffffffff;
          lVar23 = *(long *)(param_3 + 0x1600);
          uVar3 = uVar32;
          if (*(uint *)(param_3 + 0x1a70) < uVar31 || *(uint *)(param_3 + 0x1a70) == uVar32) {
            uVar3 = 0;
          }
          if (((uVar18 & 1) == 0) && (fVar38 < *(float *)(lVar23 + 0x18e0))) {
            uVar18 = uVar18 | 1;
          }
          if (((uVar18 >> 1 & 1) == 0) && (fVar38 < *(float *)(lVar23 + 0x1900))) {
            uVar18 = uVar18 | 2;
          }
          if (((uVar18 >> 2 & 1) == 0) && (fVar38 < *(float *)(lVar23 + 0x1920))) {
            uVar18 = uVar18 | 4;
          }
          if (((uVar18 >> 3 & 1) == 0) && (fVar38 < *(float *)(lVar23 + 0x1940))) {
            uVar18 = uVar18 | 8;
          }
          lVar23 = *(long *)(param_3 + 0x1a78) + (ulong)uVar3 * 0xfc8;
          pcVar21 = *(code **)(lVar23 + 0x1e0);
          plVar2 = (long *)(lVar23 + ((long)*(ulong *)(lVar23 + 0x1e8) >> 1));
          if ((*(ulong *)(lVar23 + 0x1e8) & 1) != 0) {
            pcVar21 = *(code **)(pcVar21 + *plVar2);
          }
          iVar15 = (*pcVar21)(plVar2,lVar30 + 0x98,param_5,uVar18);
          fVar37 = (float)((uint)fVar37 & 0xfffffe1f | iVar15 << 5);
        }
        if (fVar37 != 0.0) {
          if ((*(byte *)((long)pfVar1 + 0x11) & 1) == 0) {
            pfVar22 = *(float **)(pfVar1 + 2);
            if (pfVar22 == pfVar1 + 4) {
              *(byte *)pfVar22 = 0;
              uVar17 = (ulong)uVar29;
              do {
                uVar12 = uVar17 - 1;
                if ((long)uVar17 < 1) goto LAB_03adfa18;
                lVar23 = uVar17 * 4;
                uVar17 = uVar12;
              } while (*(float *)(lVar20 + (ulong)uVar31 * 0x58 + 0x10 + lVar23) <= *pfVar28);
              *(byte *)pfVar22 = (char)uVar12 + 1;
            }
            else {
              uVar3 = (uint)*(byte *)pfVar22;
              if ((int)(uVar29 - 1) <= (int)(uint)*(byte *)pfVar22) {
                uVar3 = uVar29 - 1;
              }
              *(byte *)(pfVar1 + 4) = (byte)uVar3;
            }
          }
LAB_03adfa18:
          *pfVar1 = fVar37;
          param_2[3] = (float)((uint)param_2[3] | (uint)fVar37);
          lVar23 = *(long *)(lVar24 + 0x88);
          if (lVar23 != 0) {
            iVar15 = *piVar25;
            uVar8 = *(undefined1 *)(pfVar1 + 4);
            *piVar25 = iVar15 + 1;
            puVar26 = (undefined8 *)(lVar23 + (long)iVar15 * 0x28);
            *(float *)(puVar26 + 3) = fVar37;
            uVar11 = *(undefined2 *)(lVar30 + 0x11c);
            *(undefined1 *)(puVar26 + 4) = uVar8;
            *(undefined2 *)((long)puVar26 + 0x1c) = uVar11;
            uVar27 = 0;
            if (*(long *)(lVar30 + 0xa8) != 0) {
              uVar27 = *(undefined8 *)(*(long *)(lVar30 + 0xa8) + 0x10);
            }
            *puVar26 = uVar27;
            lVar23 = lVar23 + (long)iVar15 * 0x28;
            *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar30 + 0x10);
            *(ushort *)(lVar23 + 0x1e) =
                 (*(byte *)(lVar30 + 0x123) & 3) +
                 *(short *)(lVar30 + 0x120) * (*(byte *)(lVar30 + 0x123) >> 2 & 3);
            *(long *)(lVar23 + 0x10) = lVar30 + 0x20;
          }
          if ((*(byte *)(lVar30 + 0x122) >> 3 & 1) != 0) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar5);
  }
  puVar13 = PTR_DAT_04bd1630;
  if (*(long *)(lVar24 + 0x88) != 0) {
    lVar33 = (long)(int)param_5 * 0x30;
    lVar19 = *(long *)PTR_DAT_04bd1630 + lVar33;
    *(long *)(lVar19 + 0x20) = *(long *)(lVar19 + 0x20) + (long)*piVar25 * 0x28;
    lVar24 = *(long *)puVar13;
    lVar33 = lVar24 + 0x18 + lVar33;
    *(ulong *)(lVar33 + 8) = *(long *)(lVar33 + 8) + 0x1fU & 0xffffffffffffffe0;
    lVar19 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar19 == 0) {
      iVar15 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar15 = (int)lVar19 + -1;
    }
    piVar25 = (int *)(lVar24 + 0x18 + (long)iVar15 * 0x30);
    uVar31 = piVar25[4] + (*piVar25 - piVar25[2]);
    if (uVar31 < (uint)piVar25[5]) {
      piVar25[5] = uVar31;
    }
  }
  fVar4 = param_2[3];
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    *(byte *)(param_2 + 2) = (byte)((uint)fVar4 >> 5) & 0xf | *(byte *)(param_2 + 2);
  }
  if (fVar4 != 0.0) {
    if (*(uint *)(lVar34 + 0x28) <= uVar32) {
      uVar32 = 0;
    }
    *(undefined8 *)(*(long *)(lVar34 + 0x30) + (ulong)uVar32 * 0x90) =
         *(undefined8 *)(lVar34 + 0x10);
  }
  return fVar4 != 0.0;
}

