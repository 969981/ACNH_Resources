
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039414d0(float param_1,long param_2,undefined8 *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,float *param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_104;
  undefined4 local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_ec;
  undefined1 *local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  float local_b4;
  
  fVar17 = (float)*param_3;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar20 = (float)param_3[1];
  fVar21 = (float)param_3[2];
  fVar24 = (float)((ulong)param_3[2] >> 0x20);
  fVar26 = (float)param_3[4];
  fVar19 = (float)((ulong)param_3[4] >> 0x20);
  fVar25 = (float)param_3[3];
  fVar53 = (float)param_3[5];
  if (*(int *)(*(long *)PTR_DAT_04bbdd18 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04bbdd18 + 0x10);
  }
  fVar42 = param_1 * fVar17 + fVar18 * 0.0 + fVar20 * 0.0 + 0.0;
  fVar43 = fVar17 * 0.0 + param_1 * fVar18 + fVar20 * 0.0 + 0.0;
  fVar44 = fVar17 * 0.0 + fVar18 * 0.0 + param_1 * fVar20 + 0.0;
  fVar45 = (float)((ulong)param_3[1] >> 0x20) + fVar17 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0;
  fVar17 = param_1 * fVar21 + fVar24 * 0.0 + fVar25 * 0.0 + 0.0;
  fVar20 = fVar21 * 0.0 + param_1 * fVar24 + fVar25 * 0.0 + 0.0;
  fVar23 = fVar21 * 0.0 + fVar24 * 0.0 + param_1 * fVar25 + 0.0;
  fVar25 = (float)((ulong)param_3[3] >> 0x20) + fVar21 * 0.0 + fVar24 * 0.0 + fVar25 * 0.0;
  fVar18 = param_1 * fVar26 + fVar19 * 0.0 + fVar53 * 0.0 + 0.0;
  fVar21 = fVar26 * 0.0 + param_1 * fVar19 + fVar53 * 0.0 + 0.0;
  fVar24 = fVar26 * 0.0 + fVar19 * 0.0 + param_1 * fVar53 + 0.0;
  fVar26 = (float)((ulong)param_3[5] >> 0x20) + fVar26 * 0.0 + fVar19 * 0.0 + fVar53 * 0.0;
  lVar10 = *(long *)PTR_DAT_04bbd7e8;
  lVar16 = *(long *)PTR_DAT_04bbd7e0;
  local_104 = 0xbf800000bf800000;
  local_fc = 0xbf800000;
  if ((param_7 & 1) == 0) {
    local_118 = CONCAT44(param_8[1] * 0.5,*param_8 * 0.5);
    local_110 = CONCAT44(param_8[3],param_8[2] * 0.5);
  }
  else {
    local_118 = *(undefined8 *)param_8;
    local_110 = *(undefined8 *)(param_8 + 2);
  }
  FUN_03907810(uVar6,param_2);
  fVar31 = (float)_UNK_04102208;
  fVar34 = (float)((ulong)_UNK_04102208 >> 0x20);
  fVar19 = (float)_DAT_04102200;
  fVar54 = (float)((ulong)_DAT_04102200 >> 0x20);
  fVar33 = (float)_UNK_04102888;
  fVar36 = (float)((ulong)_UNK_04102888 >> 0x20);
  fVar53 = (float)_DAT_04102880;
  fVar22 = (float)((ulong)_DAT_04102880 >> 0x20);
  fVar29 = (float)_UNK_04102a68;
  fVar30 = (float)((ulong)_UNK_04102a68 >> 0x20);
  fVar27 = (float)_DAT_04102a60;
  fVar28 = (float)((ulong)_DAT_04102a60 >> 0x20);
  fVar55 = fVar19 * fVar42 + fVar53 * fVar43 + fVar27 * fVar44 + 0.0;
  fVar56 = fVar54 * fVar42 + fVar22 * fVar43 + fVar28 * fVar44 + 0.0;
  fVar57 = fVar31 * fVar42 + fVar33 * fVar43 + fVar29 * fVar44 + 0.0;
  fVar58 = fVar45 + fVar34 * fVar42 + fVar36 * fVar43 + fVar30 * fVar44;
  fVar46 = fVar19 * fVar17 + fVar53 * fVar20 + fVar27 * fVar23 + 0.0;
  fVar48 = fVar54 * fVar17 + fVar22 * fVar20 + fVar28 * fVar23 + 0.0;
  fVar50 = fVar31 * fVar17 + fVar33 * fVar20 + fVar29 * fVar23 + 0.0;
  fVar52 = fVar25 + fVar34 * fVar17 + fVar36 * fVar20 + fVar30 * fVar23;
  fVar38 = fVar19 * fVar18 + fVar53 * fVar21 + fVar27 * fVar24 + 0.0;
  fVar39 = fVar54 * fVar18 + fVar22 * fVar21 + fVar28 * fVar24 + 0.0;
  fVar40 = fVar31 * fVar18 + fVar33 * fVar21 + fVar29 * fVar24 + 0.0;
  fVar41 = fVar26 + fVar34 * fVar18 + fVar36 * fVar21 + fVar30 * fVar24;
  uVar32 = CONCAT44(fVar54 * fVar46,fVar19 * fVar46);
  uVar35 = CONCAT44(fVar34 * fVar46,fVar31 * fVar46);
  uVar37 = CONCAT44(fVar54 * fVar38,fVar19 * fVar38);
  uVar9 = CONCAT44(fVar34 * fVar38,fVar31 * fVar38);
  fVar33 = (float)_UNK_041024b8;
  fVar36 = (float)((ulong)_UNK_041024b8 >> 0x20);
  fVar53 = (float)_DAT_041024b0;
  fVar22 = (float)((ulong)_DAT_041024b0 >> 0x20);
  fVar29 = (float)_UNK_04101eb8;
  fVar30 = (float)((ulong)_UNK_04101eb8 >> 0x20);
  fVar27 = (float)_DAT_04101eb0;
  fVar28 = (float)((ulong)_DAT_04101eb0 >> 0x20);
  uVar8 = CONCAT44(fVar34 * fVar55,fVar31 * fVar55);
  uVar6 = CONCAT44(fVar54 * fVar55,fVar19 * fVar55);
  uStack_148 = CONCAT44(fVar58 + fVar34 * fVar55 + fVar36 * fVar56 + fVar30 * fVar57,
                        fVar31 * fVar55 + fVar33 * fVar56 + fVar29 * fVar57 + 0.0);
  local_150 = CONCAT44(fVar54 * fVar55 + fVar22 * fVar56 + fVar28 * fVar57 + 0.0,
                       fVar19 * fVar55 + fVar53 * fVar56 + fVar27 * fVar57 + 0.0);
  uStack_138 = CONCAT44(fVar52 + fVar34 * fVar46 + fVar36 * fVar48 + fVar30 * fVar50,
                        fVar31 * fVar46 + fVar33 * fVar48 + fVar29 * fVar50 + 0.0);
  uStack_140 = CONCAT44(fVar54 * fVar46 + fVar22 * fVar48 + fVar28 * fVar50 + 0.0,
                        fVar19 * fVar46 + fVar53 * fVar48 + fVar27 * fVar50 + 0.0);
  uStack_128 = CONCAT44(fVar41 + fVar34 * fVar38 + fVar36 * fVar39 + fVar30 * fVar40,
                        fVar31 * fVar38 + fVar33 * fVar39 + fVar29 * fVar40 + 0.0);
  local_130 = CONCAT44(fVar54 * fVar38 + fVar22 * fVar39 + fVar28 * fVar40 + 0.0,
                       fVar19 * fVar38 + fVar53 * fVar39 + fVar27 * fVar40 + 0.0);
  FUN_03942970(param_2,&local_150,param_5,param_6,&local_118,param_8,&local_104,param_9,uVar37,uVar9
               ,uVar32,uVar35,uVar6,uVar8);
  uVar14 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar14,0x10,lVar16 + 0x304);
  (**(code **)PTR_DAT_04bcf1b0)(uVar14,0x10,lVar16 + 0x348);
  puVar5 = PTR_DAT_04bcf1e8;
  puVar3 = PTR_DAT_04bbd560;
  iVar1 = *(int *)(lVar16 + 0x2f0);
  if (iVar1 != 0) {
    lVar12 = *(long *)(lVar16 + 0x2f8);
    uVar15 = 0;
    uVar11 = 0;
    do {
      lVar13 = *(long *)(lVar12 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (lVar13 != 0) {
        uVar7 = (**(code **)puVar3)(lVar13 + 8);
        (**(code **)puVar5)(uVar14,uVar15 & 0xffffffff,uVar7,*(undefined4 *)(lVar13 + 0x118));
      }
      uVar15 = uVar11 + 1;
      uVar11 = uVar15 & 0xffffffff;
    } while (iVar1 != (int)uVar15);
  }
  puVar4 = PTR_DAT_04bbd568;
  lVar12 = 0x740;
  if ((param_7 & 1) == 0) {
    lVar12 = 0x6e0;
  }
  lVar12 = lVar10 + lVar12;
  iVar1 = *(int *)(lVar12 + 0x28);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar12 + 0xc);
    uVar7 = *(undefined8 *)(param_2 + 0xb8);
    uVar14 = (**(code **)puVar3)(lVar12 + 0x30);
    (**(code **)puVar4)(uVar7,uVar2,*(undefined4 *)(lVar12 + 8),iVar1,uVar14);
  }
  fVar54 = (float)_UNK_041020c8;
  fVar22 = (float)((ulong)_UNK_041020c8 >> 0x20);
  fVar19 = (float)_DAT_041020c0;
  fVar53 = (float)((ulong)_DAT_041020c0 >> 0x20);
  fVar34 = (float)_UNK_04101f68;
  fVar36 = (float)((ulong)_UNK_04101f68 >> 0x20);
  fVar31 = (float)_DAT_04101f60;
  fVar33 = (float)((ulong)_DAT_04101f60 >> 0x20);
  uStack_148 = CONCAT44(fVar58 + (float)((ulong)uVar8 >> 0x20) + fVar22 * fVar56 + fVar36 * fVar57,
                        (float)uVar8 + fVar54 * fVar56 + fVar34 * fVar57 + 0.0);
  local_150 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar53 * fVar56 + fVar33 * fVar57 + 0.0,
                       (float)uVar6 + fVar19 * fVar56 + fVar31 * fVar57 + 0.0);
  uStack_138 = CONCAT44(fVar52 + (float)((ulong)uVar35 >> 0x20) + fVar22 * fVar48 + fVar36 * fVar50,
                        (float)uVar35 + fVar54 * fVar48 + fVar34 * fVar50 + 0.0);
  uStack_140 = CONCAT44((float)((ulong)uVar32 >> 0x20) + fVar53 * fVar48 + fVar33 * fVar50 + 0.0,
                        (float)uVar32 + fVar19 * fVar48 + fVar31 * fVar50 + 0.0);
  uStack_128 = CONCAT44(fVar41 + (float)((ulong)uVar9 >> 0x20) + fVar22 * fVar39 + fVar36 * fVar40,
                        (float)uVar9 + fVar54 * fVar39 + fVar34 * fVar40 + 0.0);
  local_130 = CONCAT44((float)((ulong)uVar37 >> 0x20) + fVar53 * fVar39 + fVar33 * fVar40 + 0.0,
                       (float)uVar37 + fVar19 * fVar39 + fVar31 * fVar40 + 0.0);
  FUN_03942970(param_2,&local_150,param_5,param_6,&local_118,param_8,&local_104);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar6,0x10,lVar16 + 0x4e4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar6,0x10,lVar16 + 0x528);
  iVar1 = *(int *)(lVar16 + 0x4d0);
  if (iVar1 != 0) {
    lVar12 = *(long *)(lVar16 + 0x4d8);
    uVar15 = 0;
    uVar11 = 0;
    do {
      lVar13 = *(long *)(lVar12 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (lVar13 != 0) {
        uVar8 = (**(code **)puVar3)(lVar13 + 8);
        (**(code **)puVar5)(uVar6,uVar15 & 0xffffffff,uVar8,*(undefined4 *)(lVar13 + 0x118));
      }
      uVar15 = uVar11 + 1;
      uVar11 = uVar15 & 0xffffffff;
    } while (iVar1 != (int)uVar15);
  }
  lVar12 = 0x2bd0;
  if ((param_7 & 1) == 0) {
    lVar12 = 0x2ab0;
  }
  lVar12 = lVar10 + lVar12;
  iVar1 = *(int *)(lVar12 + 0x88);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar12 + 0x6c);
    uVar8 = *(undefined8 *)(param_2 + 0xb8);
    uVar6 = (**(code **)puVar3)(lVar12 + 0x90);
    (**(code **)PTR_DAT_04bbd568)(uVar8,uVar2,*(undefined4 *)(lVar12 + 0x68),iVar1,uVar6);
  }
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar6,0x10,lVar16 + 0x6c4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar6,0x10,lVar16 + 0x708);
  iVar1 = *(int *)(lVar16 + 0x6b0);
  if (iVar1 != 0) {
    lVar16 = *(long *)(lVar16 + 0x6b8);
    uVar15 = 0;
    uVar11 = 0;
    do {
      lVar12 = *(long *)(lVar16 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (lVar12 != 0) {
        uVar8 = (**(code **)puVar3)(lVar12 + 8);
        (**(code **)puVar5)(uVar6,uVar15 & 0xffffffff,uVar8,*(undefined4 *)(lVar12 + 0x118));
      }
      uVar15 = uVar11 + 1;
      uVar11 = uVar15 & 0xffffffff;
    } while (iVar1 != (int)uVar15);
  }
  fVar54 = (float)_UNK_041020b8;
  fVar22 = (float)((ulong)_UNK_041020b8 >> 0x20);
  fVar19 = (float)_DAT_041020b0;
  fVar53 = (float)((ulong)_DAT_041020b0 >> 0x20);
  fVar34 = (float)_UNK_04102368;
  fVar36 = (float)((ulong)_UNK_04102368 >> 0x20);
  fVar31 = (float)_DAT_04102360;
  fVar33 = (float)((ulong)_DAT_04102360 >> 0x20);
  fVar47 = fVar19 * fVar55 + fVar31 * fVar56;
  fVar49 = fVar53 * fVar55 + fVar33 * fVar56;
  uVar14 = CONCAT44(fVar49,fVar47);
  fVar51 = fVar54 * fVar55 + fVar34 * fVar56;
  fVar55 = fVar22 * fVar55 + fVar36 * fVar56;
  uVar32 = CONCAT44(fVar55,fVar51);
  fVar27 = fVar19 * fVar46 + fVar31 * fVar48;
  fVar28 = fVar53 * fVar46 + fVar33 * fVar48;
  fVar29 = fVar54 * fVar46 + fVar34 * fVar48;
  fVar30 = fVar22 * fVar46 + fVar36 * fVar48;
  fVar31 = fVar19 * fVar38 + fVar31 * fVar39;
  fVar33 = fVar53 * fVar38 + fVar33 * fVar39;
  uVar6 = CONCAT44(fVar33,fVar31);
  fVar34 = fVar54 * fVar38 + fVar34 * fVar39;
  fVar36 = fVar22 * fVar38 + fVar36 * fVar39;
  uVar8 = CONCAT44(fVar36,fVar34);
  fVar54 = (float)_UNK_04102118;
  fVar22 = (float)((ulong)_UNK_04102118 >> 0x20);
  fVar19 = (float)_DAT_04102110;
  fVar53 = (float)((ulong)_DAT_04102110 >> 0x20);
  lVar16 = 0x2200;
  if ((param_7 & 1) == 0) {
    lVar16 = 0x20e0;
  }
  lVar10 = lVar10 + lVar16;
  uVar37 = CONCAT44(fVar30,fVar29);
  uVar35 = CONCAT44(fVar28,fVar27);
  uStack_128 = CONCAT44(fVar41 + fVar36 + fVar22 * fVar40,fVar34 + fVar54 * fVar40 + 0.0);
  local_130 = CONCAT44(fVar33 + fVar53 * fVar40 + 0.0,fVar31 + fVar19 * fVar40 + 0.0);
  uStack_148 = CONCAT44(fVar58 + fVar55 + fVar22 * fVar57,fVar51 + fVar54 * fVar57 + 0.0);
  local_150 = CONCAT44(fVar49 + fVar53 * fVar57 + 0.0,fVar47 + fVar19 * fVar57 + 0.0);
  uStack_138 = CONCAT44(fVar52 + fVar30 + fVar22 * fVar50,fVar29 + fVar54 * fVar50 + 0.0);
  uStack_140 = CONCAT44(fVar28 + fVar53 * fVar50 + 0.0,fVar27 + fVar19 * fVar50 + 0.0);
  FUN_03942970(param_2,&local_150,param_5,param_6,&local_118,param_8,&local_104,param_9,uVar14,
               uVar32,uVar6,uVar8,uVar35,uVar37);
  iVar1 = *(int *)(lVar10 + 0x88);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar10 + 0x6c);
    uVar7 = *(undefined8 *)(param_2 + 0xb8);
    uVar9 = (**(code **)puVar3)(lVar10 + 0x90);
    (**(code **)PTR_DAT_04bbd568)(uVar7,uVar2,*(undefined4 *)(lVar10 + 0x68),iVar1,uVar9);
  }
  fVar54 = (float)_UNK_04102668;
  fVar22 = (float)((ulong)_UNK_04102668 >> 0x20);
  fVar19 = (float)_DAT_04102660;
  fVar53 = (float)((ulong)_DAT_04102660 >> 0x20);
  fVar31 = (float)uVar14 + fVar19 * fVar57 + 0.0;
  uStack_148 = CONCAT44(fVar58 + (float)((ulong)uVar32 >> 0x20) + fVar22 * fVar57,
                        (float)uVar32 + fVar54 * fVar57 + 0.0);
  local_150 = CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar53 * fVar57 + 0.0,fVar31);
  uStack_138 = CONCAT44(fVar52 + (float)((ulong)uVar37 >> 0x20) + fVar22 * fVar50,
                        (float)uVar37 + fVar54 * fVar50 + 0.0);
  uStack_140 = CONCAT44((float)((ulong)uVar35 >> 0x20) + fVar53 * fVar50 + 0.0,
                        (float)uVar35 + fVar19 * fVar50 + 0.0);
  fVar19 = (float)uVar6 + fVar19 * fVar40 + 0.0;
  uStack_128 = CONCAT44(fVar41 + (float)((ulong)uVar8 >> 0x20) + fVar22 * fVar40,
                        (float)uVar8 + fVar54 * fVar40 + 0.0);
  local_130 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar53 * fVar40 + 0.0,fVar19);
  FUN_03942970(fVar19,fVar31,fVar38,param_2,&local_150,param_5,param_6,&local_118,param_8,&local_104
              );
  iVar1 = *(int *)(lVar10 + 0x88);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar10 + 0x6c);
    uVar8 = *(undefined8 *)(param_2 + 0xb8);
    uVar6 = (**(code **)puVar3)(lVar10 + 0x90);
    (**(code **)PTR_DAT_04bbd568)(uVar8,uVar2,*(undefined4 *)(lVar10 + 0x68),iVar1,uVar6);
  }
  fVar53 = param_4[2];
  fVar54 = *param_4;
  fVar19 = param_4[1];
  uVar6 = *(undefined8 *)param_4;
  FUN_039424e0(fVar18,param_2,param_5,param_6);
  local_f8 = fVar42 + fVar54;
  local_f0 = fVar18 + fVar53;
  local_cc = 0x3f800000;
  uStack_c4 = 0x3f80000000000000;
  fStack_f4 = fVar17 + fVar19;
  local_dc = 0x3f80000000000000;
  local_d4 = 0x3f80000000000000;
  local_ec = 0;
  local_e4 = &DAT_3f8000003f800000;
  local_bc = uVar6;
  local_b4 = fVar53;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_cc);
  fStack_f4 = fVar20 + fVar19;
  local_f8 = fVar43 + fVar54;
  local_f0 = fVar21 + fVar53;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_dc);
  fStack_f4 = fVar23 + fVar19;
  local_f0 = fVar24 + fVar53;
  local_f8 = fVar44 + fVar54;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_ec);
  local_dc = 0x3f80000000000000;
  local_cc = 0x3f800000;
  uStack_c4 = 0x3f80000000000000;
  local_d4 = 0x3f80000000000000;
  local_ec = 0;
  local_e4 = &DAT_3f8000003f800000;
  local_bc = CONCAT44(fVar25,fVar45);
  local_f8 = fVar45 + fVar42;
  fStack_f4 = fVar25 + fVar17;
  local_f0 = fVar26 + fVar18;
  local_b4 = fVar26;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_cc);
  local_f0 = fVar26 + fVar21;
  local_f8 = fVar45 + fVar43;
  fStack_f4 = fVar25 + fVar20;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_dc);
  fStack_f4 = fVar25 + fVar23;
  local_f0 = fVar26 + fVar24;
  local_f8 = fVar45 + fVar44;
  FUN_039427b0(0x3f800000,param_2,&local_bc,&local_f8,&local_ec);
  return;
}

