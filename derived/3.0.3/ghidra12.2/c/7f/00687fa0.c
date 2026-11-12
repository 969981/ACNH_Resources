
undefined8 FUN_00687fa0(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 local_130 [256];
  
  local_140 = local_130;
  local_138 = -0x7fffffe000000000;
  iVar5 = FUN_00688600(*(undefined8 *)(param_1 + 0x40),param_2,&local_140);
  uVar24 = DAT_0413f4d8;
  uVar21 = DAT_0413f4d0;
  uVar29 = DAT_0413f4c8;
  uVar7 = DAT_0413f4c0;
  uVar4 = local_138._4_4_;
  if (iVar5 < 0) {
    uVar7 = 0x80040200;
  }
  else {
    param_3[1] = DAT_0413f4c8;
    *param_3 = uVar7;
    param_3[3] = uVar24;
    param_3[2] = uVar21;
    uVar12 = DAT_0413f4f8;
    uVar9 = DAT_0413f4f0;
    uVar18 = DAT_0413f4e8;
    uVar15 = DAT_0413f4e0;
    param_3[5] = DAT_0413f4e8;
    param_3[4] = uVar15;
    param_3[7] = uVar12;
    param_3[6] = uVar9;
    if (0 < (int)local_138) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        iVar3 = *(int *)(*(long *)(local_140 + lVar1) + 0x50);
        iVar5 = param_4;
        if (iVar3 <= param_4) {
          iVar5 = iVar3 + -1;
        }
        puVar2 = (undefined8 *)(*(long *)(*(long *)(local_140 + lVar1) + 0x48) + (long)iVar5 * 0x40)
        ;
        fVar35 = (float)puVar2[2];
        fVar26 = (float)uVar7;
        fVar27 = (float)((ulong)uVar7 >> 0x20);
        fVar28 = (float)uVar29;
        fVar30 = (float)((ulong)uVar29 >> 0x20);
        fVar36 = (float)((ulong)puVar2[2] >> 0x20);
        fVar20 = (float)uVar21;
        fVar22 = (float)((ulong)uVar21 >> 0x20);
        fVar23 = (float)uVar24;
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar39 = (float)puVar2[4];
        fVar31 = (float)*puVar2;
        fVar43 = (float)puVar2[6];
        fVar32 = (float)((ulong)*puVar2 >> 0x20);
        fVar40 = (float)((ulong)puVar2[4] >> 0x20);
        fVar44 = (float)((ulong)puVar2[6] >> 0x20);
        fVar33 = (float)puVar2[1];
        fVar14 = (float)uVar15;
        fVar16 = (float)((ulong)uVar15 >> 0x20);
        fVar17 = (float)uVar18;
        fVar19 = (float)((ulong)uVar18 >> 0x20);
        fVar37 = (float)puVar2[3];
        fVar41 = (float)puVar2[5];
        fVar45 = (float)puVar2[7];
        fVar34 = (float)((ulong)puVar2[1] >> 0x20);
        fVar8 = (float)uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulong)uVar12 >> 0x20);
        fVar38 = (float)((ulong)puVar2[3] >> 0x20);
        fVar42 = (float)((ulong)puVar2[5] >> 0x20);
        fVar46 = (float)((ulong)puVar2[7] >> 0x20);
        uVar7 = CONCAT44(fVar27 * fVar31 + fVar22 * fVar32 + fVar16 * fVar33 + fVar10 * fVar34,
                         fVar26 * fVar31 + fVar20 * fVar32 + fVar14 * fVar33 + fVar8 * fVar34);
        uVar29 = CONCAT44(fVar30 * fVar31 + fVar25 * fVar32 + fVar19 * fVar33 + fVar13 * fVar34,
                          fVar28 * fVar31 + fVar23 * fVar32 + fVar17 * fVar33 + fVar11 * fVar34);
        uVar21 = CONCAT44(fVar27 * fVar35 + fVar22 * fVar36 + fVar16 * fVar37 + fVar10 * fVar38,
                          fVar26 * fVar35 + fVar20 * fVar36 + fVar14 * fVar37 + fVar8 * fVar38);
        uVar24 = CONCAT44(fVar30 * fVar35 + fVar25 * fVar36 + fVar19 * fVar37 + fVar13 * fVar38,
                          fVar28 * fVar35 + fVar23 * fVar36 + fVar17 * fVar37 + fVar11 * fVar38);
        uVar15 = CONCAT44(fVar27 * fVar39 + fVar22 * fVar40 + fVar16 * fVar41 + fVar10 * fVar42,
                          fVar26 * fVar39 + fVar20 * fVar40 + fVar14 * fVar41 + fVar8 * fVar42);
        uVar18 = CONCAT44(fVar30 * fVar39 + fVar25 * fVar40 + fVar19 * fVar41 + fVar13 * fVar42,
                          fVar28 * fVar39 + fVar23 * fVar40 + fVar17 * fVar41 + fVar11 * fVar42);
        uVar9 = CONCAT44(fVar27 * fVar43 + fVar22 * fVar44 + fVar16 * fVar45 + fVar10 * fVar46,
                         fVar26 * fVar43 + fVar20 * fVar44 + fVar14 * fVar45 + fVar8 * fVar46);
        uVar12 = CONCAT44(fVar30 * fVar43 + fVar25 * fVar44 + fVar19 * fVar45 + fVar13 * fVar46,
                          fVar28 * fVar43 + fVar23 * fVar44 + fVar17 * fVar45 + fVar11 * fVar46);
        param_3[1] = uVar29;
        *param_3 = uVar7;
        param_3[3] = uVar24;
        param_3[2] = uVar21;
        param_3[5] = uVar18;
        param_3[4] = uVar15;
        param_3[7] = uVar12;
        param_3[6] = uVar9;
      } while (lVar6 < (int)local_138);
    }
    uVar7 = 0;
  }
  if ((-1 < local_138) &&
     (local_138 = (ulong)local_138._4_4_ << 0x20, local_140 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_140,8,uVar4 & 0x3fffffff);
  }
  return uVar7;
}

