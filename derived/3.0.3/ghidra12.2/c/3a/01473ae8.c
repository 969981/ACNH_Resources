
bool FUN_01473ae8(long param_1,long param_2,undefined4 *param_3,undefined8 param_4,int *param_5,
                 undefined4 param_6)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar2 = *(int *)(param_1 + 0x2d0);
  if (iVar2 == 0) {
    local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_60 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_58 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_80 = *(undefined8 *)PTR_DAT_04bb2f80;
    uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
              (*(long **)(param_1 + 0xa90),&local_80,param_4,param_5,param_6);
    puVar8 = PTR_DAT_04bb43c0;
    uVar3 = param_3[9];
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x14) & 0xff0));
    iVar4 = *param_5;
    fVar11 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
    fVar13 = *pfVar1 + fVar11 * pfVar1[1];
    fVar21 = pfVar1[2] + fVar11 * pfVar1[3];
    fVar11 = -(pfVar1[1] * fVar11) - *pfVar1;
    fVar17 = fVar13 * 0.0;
    fVar23 = fVar21 * 0.0;
    fVar13 = fVar13 + 0.0;
    fVar25 = fVar17 * 0.0 + 1.0;
    fVar22 = (float)param_3[6];
    fVar24 = (float)param_3[7];
    fVar12 = (float)param_3[8];
    iVar5 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
    fVar14 = (float)local_80;
    fVar15 = (float)((ulong)local_80 >> 0x20);
    fVar18 = (float)local_60;
    fVar19 = (float)((ulong)local_60 >> 0x20);
    local_88 = 0;
    fVar16 = (float)uStack_78;
    fVar20 = (float)uStack_58;
    local_98 = PTR_DAT_04bc0510 + 0x10;
    local_90 = *param_3;
    uStack_8c = param_3[1];
    uVar6 = (ulong)uStack_78 >> 0x20;
    uVar7 = (ulong)uStack_58 >> 0x20;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar8 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_3);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8), lVar10 != 0)) {
          local_88 = lVar10;
        }
      }
    }
    FUN_01afa2dc(&local_98,uVar3 + iVar4 + 0x20000000 + iVar5 >> 0x1e);
    fVar14 = (float)uVar6 + fVar22 * fVar14 + fVar24 * fVar15 + fVar12 * fVar16 +
             (fVar17 * fVar14 + fVar25 * fVar15 + fVar23 * fVar16 + 0.0) * 0.0 +
             (fVar21 * fVar14 + fVar23 * fVar15 + fVar11 * fVar16 + 0.0) * 0.0 +
             (fVar13 * fVar14 + fVar17 * fVar15 + fVar21 * fVar16 + 0.0) * 0.0 + -0.1 + -2.5;
    fVar11 = (float)uVar7 + fVar22 * fVar18 + fVar24 * fVar19 + fVar12 * fVar20 +
             (fVar17 * fVar18 + fVar25 * fVar19 + fVar23 * fVar20 + 0.0) * 0.0 +
             (fVar21 * fVar18 + fVar23 * fVar19 + fVar11 * fVar20 + 0.0) * 0.0 +
             (fVar13 * fVar18 + fVar17 * fVar19 + fVar21 * fVar20 + 0.0) * 0.0 + -0.1 + -2.5;
    *(undefined4 *)(param_2 + 8) = local_90;
    *(undefined4 *)(param_2 + 0xc) = uStack_8c;
    *(uint *)(param_2 + 0x18) = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    *(uint *)(param_2 + 0x1c) = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  }
  return iVar2 == 0;
}

