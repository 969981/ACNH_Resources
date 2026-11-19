
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bd9bec(long param_1,undefined8 *param_2,long param_3,long param_4,undefined4 param_5,
                 undefined1 (*param_6) [12],char param_7)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [12];
  long lVar14;
  undefined1 (*pauVar15) [12];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
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
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar14 = *(long *)(*(long *)(param_4 + 0x30) + 0x18);
  uVar2 = *(ushort *)(param_1 + 0xb8);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 >> 1 & 1) != 0) goto LAB_03bd9ccc;
LAB_03bd9c4c:
    if ((uVar2 >> 2 & 1) != 0) goto LAB_03bd9d30;
LAB_03bd9c50:
    if ((uVar2 >> 3 & 1) != 0) goto LAB_03bd9d94;
LAB_03bd9c54:
    if ((uVar2 >> 4 & 1) != 0) goto LAB_03bd9df8;
LAB_03bd9c58:
    if ((uVar2 >> 5 & 1) != 0) goto LAB_03bd9e5c;
LAB_03bd9c5c:
    if ((uVar2 >> 6 & 1) != 0) goto LAB_03bd9ec0;
LAB_03bd9c60:
    fVar27 = *(float *)(param_1 + 0xd4);
  }
  else {
    uVar8 = FUN_03bdad4c(param_1,1);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 1 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 2;
      uVar28 = FUN_03bd54e0(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 0x54) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 1;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    if ((uVar2 >> 1 & 1) == 0) goto LAB_03bd9c4c;
LAB_03bd9ccc:
    uVar8 = FUN_03bdad4c(param_1,2);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 2 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 4;
      uVar28 = FUN_03bd56d4(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 0x58) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 2;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    if ((uVar2 >> 2 & 1) == 0) goto LAB_03bd9c50;
LAB_03bd9d30:
    uVar8 = FUN_03bdad4c(param_1,3);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 3 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 8;
      uVar28 = FUN_03bd58c0(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 0x5c) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 0x5c);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 4;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    if ((uVar2 >> 3 & 1) == 0) goto LAB_03bd9c54;
LAB_03bd9d94:
    uVar8 = FUN_03bdad4c(param_1,4);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 4 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x10;
      uVar28 = FUN_03bd5aac(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 0x60) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 0x60);
    }
    *(undefined4 *)(param_1 + 200) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 8;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    if ((uVar2 >> 4 & 1) == 0) goto LAB_03bd9c58;
LAB_03bd9df8:
    uVar8 = FUN_03bdad4c(param_1,5);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 5 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x20;
      uVar28 = FUN_03bd5c98(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 100) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0xcc) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x10;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    if ((uVar2 >> 5 & 1) == 0) goto LAB_03bd9c5c;
LAB_03bd9e5c:
    uVar8 = FUN_03bdad4c(param_1,6);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 6 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x40;
      uVar28 = FUN_03bd5e84(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                            param_3,param_5,param_4);
      *(undefined4 *)(param_1 + 0x68) = uVar28;
    }
    else {
      uVar28 = *(undefined4 *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar28;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x20;
    if ((*(ushort *)(param_1 + 0xb8) >> 6 & 1) == 0) goto LAB_03bd9c60;
LAB_03bd9ec0:
    uVar8 = FUN_03bdad4c(param_1,7);
    if (((uVar8 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x80;
      fVar27 = (float)FUN_03bd6074(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                   0x28,param_3,param_5,param_4);
      *(float *)(param_1 + 0x6c) = fVar27;
    }
    else {
      fVar27 = *(float *)(param_1 + 0x6c);
    }
    *(float *)(param_1 + 0xd4) = fVar27;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x40;
  }
  puVar11 = *(uint **)(param_4 + ((ulong)*(byte *)(param_4 + 0xd8) & 1) * 8 + 0x20);
  iVar7 = (int)*(short *)(param_3 + 4);
  if (*puVar11 <= (uint)(int)*(short *)(param_3 + 4)) {
    iVar7 = 0;
  }
  lVar9 = *(long *)(puVar11 + 2) + (long)iVar7 * 0x18;
  pauVar15 = *(undefined1 (**) [12])(lVar9 + 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    uVar21 = (undefined4)*(undefined8 *)(*pauVar15 + 8);
    uVar22 = (undefined4)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
    uVar28 = (undefined4)*(undefined8 *)*pauVar15;
    uVar16 = (undefined4)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
    uVar23 = (undefined4)*(undefined8 *)pauVar15[2];
    uVar24 = (undefined4)((ulong)*(undefined8 *)pauVar15[2] >> 0x20);
    uVar17 = (undefined4)*(undefined8 *)(pauVar15[1] + 4);
    uVar18 = (undefined4)((ulong)*(undefined8 *)(pauVar15[1] + 4) >> 0x20);
    uVar25 = (undefined4)*(undefined8 *)(pauVar15[3] + 4);
    uVar26 = (undefined4)((ulong)*(undefined8 *)(pauVar15[3] + 4) >> 0x20);
    uVar19 = (undefined4)*(undefined8 *)(pauVar15[2] + 8);
    uVar20 = (undefined4)((ulong)*(undefined8 *)(pauVar15[2] + 8) >> 0x20);
  }
  else {
    auVar4 = *(undefined1 (*) [12])(pauVar15[1] + 4);
    auVar3 = *(undefined1 (*) [12])(pauVar15[2] + 8);
    auVar5 = pauVar15[4];
    uVar28 = SUB124(*pauVar15,0);
    uVar17 = SUB124(*pauVar15,4);
    uVar21 = auVar3._0_4_;
    uVar23 = auVar3._4_4_;
    uVar19 = SUB124(*pauVar15,8);
    uVar25 = SUB124(*(undefined1 (*) [12])(pauVar15[2] + 8),8);
    uVar16 = auVar4._0_4_;
    uVar18 = auVar4._4_4_;
    uVar22 = auVar5._0_4_;
    uVar24 = auVar5._4_4_;
    uVar20 = SUB124(*(undefined1 (*) [12])(pauVar15[1] + 4),8);
    uVar26 = SUB124(pauVar15[4],8);
  }
  fVar44 = *(float *)(param_1 + 0xbc);
  fVar40 = *(float *)(param_1 + 0xc0);
  plVar1 = (long *)(lVar14 + 0x28);
  fVar41 = *(float *)(param_1 + 0xc4);
  fVar38 = *(float *)(param_1 + 200);
  fVar43 = *(float *)(param_1 + 0xcc);
  fVar42 = *(float *)(param_1 + 0xd0);
  uStack_c8 = CONCAT44(uVar22,uVar21);
  local_d0 = CONCAT44(uVar16,uVar28);
  uStack_b8 = CONCAT44(uVar24,uVar23);
  uStack_c0 = CONCAT44(uVar18,uVar17);
  uStack_a8 = CONCAT44(uVar26,uVar25);
  local_b0 = CONCAT44(uVar20,uVar19);
  if (param_6 != (undefined1 (*) [12])0x0) {
    if (param_7 == '\0') {
      uVar21 = (undefined4)*(undefined8 *)(*param_6 + 8);
      uVar22 = (undefined4)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
      uVar28 = (undefined4)*(undefined8 *)*param_6;
      uVar16 = (undefined4)((ulong)*(undefined8 *)*param_6 >> 0x20);
      uVar23 = (undefined4)*(undefined8 *)param_6[2];
      uVar24 = (undefined4)((ulong)*(undefined8 *)param_6[2] >> 0x20);
      uVar17 = (undefined4)*(undefined8 *)(param_6[1] + 4);
      uVar18 = (undefined4)((ulong)*(undefined8 *)(param_6[1] + 4) >> 0x20);
      uVar25 = (undefined4)*(undefined8 *)(param_6[3] + 4);
      uVar26 = (undefined4)((ulong)*(undefined8 *)(param_6[3] + 4) >> 0x20);
      uVar19 = (undefined4)*(undefined8 *)(param_6[2] + 8);
      uVar20 = (undefined4)((ulong)*(undefined8 *)(param_6[2] + 8) >> 0x20);
    }
    else {
      auVar4 = *(undefined1 (*) [12])(param_6[1] + 4);
      auVar3 = *(undefined1 (*) [12])(param_6[2] + 8);
      auVar5 = param_6[4];
      uVar28 = SUB124(*param_6,0);
      uVar17 = SUB124(*param_6,4);
      uVar21 = auVar3._0_4_;
      uVar23 = auVar3._4_4_;
      uVar19 = SUB124(*param_6,8);
      uVar25 = SUB124(*(undefined1 (*) [12])(param_6[2] + 8),8);
      uVar16 = auVar4._0_4_;
      uVar18 = auVar4._4_4_;
      uVar22 = auVar5._0_4_;
      uVar24 = auVar5._4_4_;
      uVar20 = SUB124(*(undefined1 (*) [12])(param_6[1] + 4),8);
      uVar26 = SUB124(param_6[4],8);
    }
    uStack_c8 = CONCAT44(uVar22,uVar21);
    local_d0 = CONCAT44(uVar16,uVar28);
    uStack_b8 = CONCAT44(uVar24,uVar23);
    uStack_c0 = CONCAT44(uVar18,uVar17);
    uStack_a8 = CONCAT44(uVar26,uVar25);
    local_b0 = CONCAT44(uVar20,uVar19);
  }
  pauVar13 = *(undefined1 (**) [12])(param_4 + 0x40);
  uVar6 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x28));
  if ((uVar6 >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x98) >> 4 & 1) == 0) {
      puVar12 = &local_d0;
      *(ulong *)(param_1 + 0xf0) = CONCAT44(uVar22,uVar21);
      *(ulong *)(param_1 + 0xe8) = CONCAT44(uVar16,uVar28);
      *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 0x10;
      *(ulong *)(param_1 + 0x100) = CONCAT44(uVar24,uVar23);
      *(ulong *)(param_1 + 0xf8) = CONCAT44(uVar18,uVar17);
      *(ulong *)(param_1 + 0x110) = CONCAT44(uVar26,uVar25);
      *(ulong *)(param_1 + 0x108) = CONCAT44(uVar20,uVar19);
    }
    else {
      puVar12 = (undefined8 *)(param_1 + 0xe8);
    }
  }
  else {
    puVar12 = &local_d0;
  }
  iVar7 = FUN_03bd443c(plVar1,param_3);
  if (iVar7 == 0) {
    uStack_d8 = puVar12[1];
    local_e0 = *puVar12;
    uStack_e8 = puVar12[3];
    local_f0 = puVar12[2];
    uStack_f8 = puVar12[5];
    local_100 = puVar12[4];
    if (pauVar15 == pauVar13) {
      pfVar10 = *(float **)(param_4 + 0x58);
    }
    else {
      pfVar10 = (float *)&DAT_0419b59c;
    }
  }
  else {
    pauVar15 = *(undefined1 (**) [12])(param_4 + 0x40);
    if (*(char *)(param_4 + 0x48) == '\0') {
      uVar21 = (undefined4)*(undefined8 *)(*pauVar15 + 8);
      uVar28 = (undefined4)*(undefined8 *)*pauVar15;
      uVar16 = (undefined4)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
      uVar22 = (undefined4)*(undefined8 *)pauVar15[2];
      uVar17 = (undefined4)*(undefined8 *)(pauVar15[1] + 4);
      uVar18 = (undefined4)((ulong)*(undefined8 *)(pauVar15[1] + 4) >> 0x20);
      uVar23 = (undefined4)*(undefined8 *)(pauVar15[3] + 4);
      uVar19 = (undefined4)*(undefined8 *)(pauVar15[2] + 8);
      uVar20 = (undefined4)((ulong)*(undefined8 *)(pauVar15[2] + 8) >> 0x20);
    }
    else {
      auVar4 = *(undefined1 (*) [12])(pauVar15[1] + 4);
      auVar3 = *(undefined1 (*) [12])(pauVar15[2] + 8);
      uVar28 = SUB124(*pauVar15,0);
      uVar17 = SUB124(*pauVar15,4);
      uVar21 = auVar3._0_4_;
      uVar22 = auVar3._4_4_;
      uVar19 = SUB124(*pauVar15,8);
      uVar23 = SUB124(*(undefined1 (*) [12])(pauVar15[2] + 8),8);
      uVar16 = auVar4._0_4_;
      uVar18 = auVar4._4_4_;
      uVar20 = SUB124(*(undefined1 (*) [12])(pauVar15[1] + 4),8);
    }
    pfVar10 = *(float **)(param_4 + 0x58);
    uStack_e8 = CONCAT44(*(undefined4 *)((long)puVar12 + 0x1c),uVar22);
    local_f0 = CONCAT44(uVar18,uVar17);
    uStack_d8 = CONCAT44(*(undefined4 *)((long)puVar12 + 0xc),uVar21);
    local_e0 = CONCAT44(uVar16,uVar28);
    uStack_f8 = CONCAT44(*(undefined4 *)((long)puVar12 + 0x2c),uVar23);
    local_100 = CONCAT44(uVar20,uVar19);
  }
  fVar45 = *pfVar10;
  fVar46 = pfVar10[1];
  fVar47 = pfVar10[2];
  uVar6 = FUN_03bd433c(plVar1,param_3);
  fVar48 = (float)local_e0;
  fVar37 = (float)((ulong)local_e0 >> 0x20);
  fVar35 = (float)local_100;
  fVar30 = (float)((ulong)local_100 >> 0x20);
  fVar39 = (float)local_f0;
  fVar29 = (float)((ulong)local_f0 >> 0x20);
  fVar36 = (float)uStack_e8;
  fVar33 = (float)uStack_f8;
  fVar31 = (float)uStack_d8;
  fVar32 = fVar38;
  if ((uVar6 & 0xfffffffe) == 2) {
    fVar38 = SQRT(fVar39 * fVar39 + fVar48 * fVar48 + fVar35 * fVar35);
    if (0.0 < fVar38) {
      fVar34 = 1.0 / fVar38;
      fVar48 = fVar48 * fVar34;
      fVar39 = fVar39 * fVar34;
      fVar35 = fVar35 * fVar34;
    }
    fVar45 = fVar45 * fVar38;
    fVar38 = SQRT(fVar29 * fVar29 + fVar37 * fVar37 + fVar30 * fVar30);
    fVar49 = 1.0 / fVar38;
    fVar46 = fVar46 * fVar38;
    fVar34 = SQRT(fVar36 * fVar36 + fVar31 * fVar31 + fVar33 * fVar33);
    if (0.0 < fVar38) {
      fVar37 = fVar37 * fVar49;
      fVar29 = fVar29 * fVar49;
      fVar30 = fVar30 * fVar49;
    }
    local_e0 = CONCAT44(fVar37,fVar48);
    local_f0 = CONCAT44(fVar29,fVar39);
    fVar38 = 1.0 / fVar34;
    local_100 = CONCAT44(fVar30,fVar35);
    fVar47 = fVar47 * fVar34;
    if (0.0 < fVar34) {
      fVar36 = fVar36 * fVar38;
      fVar31 = fVar31 * fVar38;
      fVar33 = fVar33 * fVar38;
    }
    uStack_d8 = CONCAT44((int)((ulong)uStack_d8 >> 0x20),fVar31);
    uStack_e8 = CONCAT44((int)((ulong)uStack_e8 >> 0x20),fVar36);
    uStack_f8 = CONCAT44((int)((ulong)uStack_f8 >> 0x20),fVar33);
  }
  else if (uVar6 - 5 < 2) {
    fVar37 = fVar41 * fVar37;
    fVar30 = fVar41 * fVar30;
    fVar41 = fVar41 * fVar29 + fVar40 * fVar39 + fVar38 * fVar36;
    fVar32 = fVar30 + fVar40 * fVar35 + fVar38 * fVar33;
    fVar40 = fVar37 + fVar40 * fVar48 + fVar38 * fVar31;
  }
  uVar28 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uVar16 = (undefined4)((ulong)uStack_e8 >> 0x20);
  uVar17 = (undefined4)((ulong)uStack_f8 >> 0x20);
  switch(uVar6) {
  case 1:
    fVar40 = fVar45 * fVar40;
    fVar41 = fVar46 * fVar41;
    fVar32 = fVar47 * fVar32;
    break;
  case 2:
    fVar45 = 1.0;
    fVar46 = 1.0;
    fVar47 = 1.0;
    break;
  case 3:
  case 5:
    fVar40 = fVar45 * fVar40;
    fVar41 = fVar46 * fVar41;
    uStack_e8 = CONCAT44(uVar16,(int)_UNK_04102888);
    local_f0 = _DAT_04102880;
    uStack_d8 = CONCAT44(uVar28,(int)_UNK_04102208);
    local_e0 = _DAT_04102200;
    fVar32 = fVar47 * fVar32;
    uStack_f8 = CONCAT44(uVar17,(int)_UNK_041023d8);
    local_100 = _DAT_041023d0;
    goto LAB_03bda328;
  case 4:
  case 6:
    fVar45 = 1.0;
    fVar46 = 1.0;
    fVar47 = 1.0;
    uStack_e8 = CONCAT44(uVar16,(int)_UNK_04102888);
    local_f0 = _DAT_04102880;
    uStack_d8 = CONCAT44(uVar28,(int)_UNK_04102208);
    local_e0 = _DAT_04102200;
    uStack_f8 = CONCAT44(uVar17,(int)_UNK_041023d8);
    local_100 = _DAT_041023d0;
    goto LAB_03bda328;
  }
LAB_03bda328:
  fVar47 = fVar44 * fVar47;
  fVar45 = fVar44 * fVar45;
  fVar44 = fVar44 * fVar46;
  fVar38 = sinf(fVar43);
  fVar29 = sinf(fVar42);
  fVar30 = sinf(fVar27);
  fVar43 = cosf(fVar43);
  fVar42 = cosf(fVar42);
  fVar27 = cosf(fVar27);
  fVar36 = fVar45 * fVar30 * fVar42;
  fVar35 = fVar45 * fVar42 * fVar27;
  fVar39 = -(fVar29 * fVar45);
  fVar37 = fVar44 * (fVar38 * fVar29 * fVar27 - fVar30 * fVar43);
  fVar33 = fVar44 * (fVar43 * fVar27 + fVar30 * fVar38 * fVar29);
  fVar44 = fVar44 * fVar38 * fVar42;
  fVar31 = fVar47 * (-(fVar38 * fVar27) + fVar29 * fVar30 * fVar43);
  fVar27 = fVar47 * (fVar38 * fVar30 + fVar29 * fVar43 * fVar27);
  fVar47 = fVar47 * fVar43 * fVar42;
  fVar29 = (float)local_f0;
  fVar46 = (float)local_100;
  fVar30 = (float)((ulong)local_f0 >> 0x20);
  fVar48 = (float)((ulong)local_100 >> 0x20);
  fVar38 = (float)local_e0;
  fVar42 = (float)((ulong)local_e0 >> 0x20);
  fVar43 = (float)uStack_d8;
  fVar45 = (float)uStack_e8;
  fVar34 = (float)uStack_f8;
  param_2[1] = CONCAT44((float)((ulong)uStack_d8 >> 0x20) +
                        fVar40 * fVar38 + fVar41 * fVar42 + fVar32 * fVar43,
                        fVar27 * fVar38 + fVar31 * fVar42 + fVar47 * fVar43 + 0.0);
  *param_2 = CONCAT44(fVar37 * fVar38 + fVar33 * fVar42 + fVar44 * fVar43 + 0.0,
                      fVar35 * fVar38 + fVar36 * fVar42 + fVar39 * fVar43 + 0.0);
  param_2[3] = CONCAT44((float)((ulong)uStack_e8 >> 0x20) +
                        fVar40 * fVar29 + fVar41 * fVar30 + fVar32 * fVar45,
                        fVar27 * fVar29 + fVar31 * fVar30 + fVar47 * fVar45 + 0.0);
  param_2[2] = CONCAT44(fVar37 * fVar29 + fVar33 * fVar30 + fVar44 * fVar45 + 0.0,
                        fVar35 * fVar29 + fVar36 * fVar30 + fVar39 * fVar45 + 0.0);
  param_2[5] = CONCAT44((float)((ulong)uStack_f8 >> 0x20) +
                        fVar40 * fVar46 + fVar41 * fVar48 + fVar32 * fVar34,
                        fVar27 * fVar46 + fVar31 * fVar48 + fVar47 * fVar34 + 0.0);
  param_2[4] = CONCAT44(fVar37 * fVar46 + fVar33 * fVar48 + fVar44 * fVar34 + 0.0,
                        fVar35 * fVar46 + fVar36 * fVar48 + fVar39 * fVar34 + 0.0);
  return;
}

