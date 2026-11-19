
void FUN_0382b448(long param_1,char *param_2)

{
  code *pcVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  byte local_130;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  char cStack_d7;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined8 local_d0;
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  long local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  int local_9c;
  int iStack_98;
  long local_90;
  
  cVar10 = *param_2;
  cVar11 = *(char *)(param_1 + 8);
  *(char *)(param_1 + 8) = cVar10;
  bVar21 = cVar11 == '\0';
  bVar22 = cVar10 != '\0';
  bVar23 = param_2[2] != '\0';
  bVar24 = *param_2 != '\0';
  if (bVar23 && bVar24) {
    cVar10 = '\x01';
  }
  *(char *)(param_1 + 8) = cVar10;
  cVar11 = *(char *)(param_1 + 9);
  cVar10 = param_2[1];
  *(char *)(param_1 + 9) = cVar10;
  bVar25 = cVar10 != '\0';
  cVar12 = param_2[2];
  cVar13 = param_2[1];
  if (cVar12 != '\0' && cVar13 != '\0') {
    cVar10 = '\x01';
  }
  *(char *)(param_1 + 9) = cVar10;
  lVar3 = CONCAT44(local_e8._4_4_,(uint)local_e8);
  if (*param_2 == '\0') goto LAB_0382baec;
  bVar16 = bVar23 && bVar24 || bVar21 && bVar22;
  if (DAT_05ade040 != 0) {
    FUN_03824cf0();
  }
  lVar3 = DAT_055f6860;
  pcVar1 = FUN_0011e5e0 + DAT_055f6860;
  if (*(long *)(*(long *)(DAT_055f6860 + 0xb4510) + 0x50) == 0) {
    fVar34 = 0.0;
    uVar35 = 0;
    fVar36 = 0.0;
  }
  else {
    fVar36 = *(float *)(DAT_055f6860 + 0xb44bc);
    uVar35 = *(undefined4 *)(DAT_055f6860 + 0xb44c0);
    fVar34 = *(float *)(DAT_055f6860 + 0xb44c4);
  }
  uVar14 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
  uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
  uVar15 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
  uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
  if (bVar23 && bVar24 || bVar21 && bVar22) {
    iVar31 = 0;
    local_f8 = 0;
    bVar21 = false;
  }
  else {
    iVar31 = uVar14 - *(int *)(param_1 + 0x200);
    local_f8 = uVar15 - *(int *)(param_1 + 0x204);
    bVar21 = 0x9c4 < (uint)(iVar31 * iVar31 + local_f8 * local_f8);
  }
  *(uint *)(param_1 + 0x200) = uVar14;
  bVar22 = cVar12 != '\0' && cVar13 != '\0' || cVar11 == '\0' && bVar25;
  *(uint *)(param_1 + 0x204) = uVar15;
  uVar7 = *(uint *)(FUN_0011e5e0 + lVar3 + 4);
  if (uVar7 == 0xffffffff) {
LAB_0382b610:
    uVar7 = *(uint *)pcVar1;
    if (uVar7 == 0xffffffff) {
      local_130 = 0;
      bVar23 = *(long *)(lVar3 + 0x11e610) == 0;
    }
    else {
      lVar30 = *(long *)(lVar3 + 0x11e610);
      if (*(uint *)(lVar3 + 0x11e608) <= uVar7) {
        uVar7 = 0;
      }
      if (lVar30 != 0) goto LAB_0382b634;
      local_130 = 0;
      bVar23 = true;
    }
  }
  else {
    lVar30 = *(long *)(lVar3 + 0x11e610);
    if (*(uint *)(lVar3 + 0x11e608) <= uVar7) {
      uVar7 = 0;
    }
    if (lVar30 == 0) goto LAB_0382b610;
LAB_0382b634:
    puVar2 = (uint *)(lVar30 + (long)(int)uVar7 * 0x80 + 8);
    bVar23 = puVar2 == (uint *)(lVar30 + 8);
    uVar8 = *puVar2;
    local_f0 = (undefined **)CONCAT44(local_f0._4_4_,uVar8);
    uVar7 = uVar8 - 0x20;
    if ((int)uVar8 < 0x20) {
      uVar7 = uVar8;
    }
    uVar28 = 0x60040;
    if ((int)uVar8 < 0x20) {
      uVar28 = 6;
    }
    local_130 = (byte)(uVar28 >> (ulong)(uVar7 & 0x1f)) & 1;
  }
  fVar33 = ((float)DAT_05aded38._4_4_ * 5.0 + (float)DAT_05aded48._4_4_ * 5.0 + 5.0) * 0.5;
  fVar32 = ((float)(int)DAT_05aded38 * 5.0 + (float)(int)DAT_05aded48 * 5.0 + 5.0) * 0.5;
  iVar27 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  iVar29 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  lVar3 = param_1 + 0x20;
  uStack_dc = 0;
  uStack_d8 = 0;
  cStack_d7 = 0;
  uStack_d6 = 0;
  puVar4 = PTR_DAT_04bcb260 + 0x10;
  local_d0 = lVar3 + (ulong)*(uint *)(param_1 + 0x18) * 0x20;
  if (1 < *(uint *)(param_1 + 0x18)) {
    local_d0 = lVar3;
  }
  if (!bVar23) {
    iVar27 = 0x70;
    iVar29 = 0x60;
  }
  local_f0 = (undefined **)puVar4;
  local_e8._4_4_ = iVar27;
  uStack_e0 = iVar29;
  local_e8._0_1_ = bVar16;
  FUN_02a048f0(param_1 + 0xa0,&local_f0);
  local_f0 = (undefined **)CONCAT71(CONCAT61(local_f0._2_6_,bVar23),param_2[1]);
  FUN_0381fcc0(param_1 + 0x1598,&local_f0);
  bVar17 = bVar16 | bVar21;
  local_d0 = lVar3 + (ulong)*(uint *)(param_1 + 0x18) * 0x20;
  if (1 < *(uint *)(param_1 + 0x18)) {
    local_d0 = lVar3;
  }
  iVar5 = 0;
  if (!bVar21) {
    iVar5 = local_f8;
  }
  iVar6 = 0;
  if (!bVar21) {
    iVar6 = iVar31;
  }
  uStack_d8 = (undefined1)iVar5;
  uVar19 = uStack_d8;
  cStack_d7 = (char)((uint)iVar5 >> 8);
  cVar10 = cStack_d7;
  uStack_d6 = (undefined2)((uint)iVar5 >> 0x10);
  uVar20 = uStack_d6;
  local_f0 = (undefined **)puVar4;
  local_e8._4_4_ = uVar14;
  uStack_e0 = uVar15;
  uStack_dc = iVar6;
  local_e8._0_1_ = bVar17;
  FUN_02a048f0(DAT_05ade040,&local_f0);
  local_f0 = (undefined **)CONCAT71(local_f0._1_7_,bVar22);
  FUN_03827030(param_1 + 0x1578,&local_f0);
  uStack_dc = 0;
  uStack_d8 = 0;
  cStack_d7 = 0;
  uStack_d6 = 0;
  lVar3 = lVar3 + (ulong)(*(int *)(param_1 + 0x18) == 0) * 0x20;
  local_f0 = (undefined **)puVar4;
  local_e8._4_4_ = iVar27;
  uStack_e0 = iVar29;
  local_d0 = lVar3;
  local_e8._0_1_ = bVar16;
  FUN_02a048f0(param_1 + 0x2c8,&local_f0);
  FUN_02a048f0(param_1 + 0x558,&local_f0);
  iVar29 = local_f8;
  uStack_dc = iVar31;
  if (bVar21) {
    uStack_dc = 0;
    iVar29 = 0;
    local_e8._0_1_ = 1;
  }
  uStack_d8 = (undefined1)iVar29;
  cStack_d7 = (char)((uint)iVar29 >> 8);
  uStack_d6 = (undefined2)((uint)iVar29 >> 0x10);
  local_e8._4_4_ = uVar14;
  uStack_e0 = uVar15;
  FUN_02a048f0(param_1 + 0x3a0,&local_f0);
  FUN_02a048f0(param_1 + 0x680,&local_f0);
  if (param_2[1] == '\0') {
    bVar26 = 0;
  }
  else {
    bVar26 = FUN_03783420();
  }
  lVar30 = *(long *)(*(long *)(param_1 + 0x240) + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1580);
  if ((*(byte *)(*(long *)(param_1 + 0x240) + 8) & 10) != 2) {
    lVar30 = 0;
  }
  *(byte *)(lVar30 + 0x1d4) = bVar26 & 1;
  *(undefined4 *)(lVar30 + 0x1d0) = uVar9;
  local_f0 = (undefined **)(PTR_DAT_04bcb260 + 0x10);
  local_e8._0_1_ = bVar22;
  if (*(int *)(param_1 + 0x1580) == 0x6622bd46) {
    uStack_dc = 0;
    local_e8._4_4_ =
         (int)((float)(int)*(float *)(param_1 + 0x1584) / 5.0) -
         (uint)(*(float *)(param_1 + 0x1584) < 0.0);
    uStack_e0 = (int)((float)(int)*(float *)(param_1 + 0x1588) / 5.0) -
                (uint)(*(float *)(param_1 + 0x1588) < 0.0);
    iVar29 = 0;
  }
  else if (bVar21) {
    local_e8._0_1_ = true;
    uStack_dc = 0;
    local_e8._4_4_ = uVar14;
    uStack_e0 = uVar15;
    iVar29 = 0;
  }
  else {
    local_e8._4_4_ = uVar14;
    uStack_e0 = uVar15;
    uStack_dc = iVar31;
    iVar29 = local_f8;
  }
  uStack_d8 = (undefined1)iVar29;
  cStack_d7 = (char)((uint)iVar29 >> 8);
  uStack_d6 = (undefined2)((uint)iVar29 >> 0x10);
  local_d0 = lVar3;
  FUN_02a048f0(param_1 + 0x478,&local_f0);
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,bVar17);
  local_a8 = (undefined8 *)CONCAT44(uVar14,(undefined4)local_a8);
  local_b0 = &PTR_LAB_04b5cb00;
  uStack_a0 = uVar15;
  local_9c = iVar6;
  iStack_98 = iVar5;
  local_90 = lVar3;
  if (param_2[1] != '\0') {
    local_f0 = &PTR_LAB_04b5cb00;
    local_e8._0_1_ = bVar22 | bVar21;
    local_e8._4_4_ = uVar14;
    uStack_e0 = uVar15;
    uStack_dc = iVar6;
    uStack_d8 = uVar19;
    cStack_d7 = cVar10;
    uStack_d6 = uVar20;
    local_d0 = lVar3;
    FUN_02a048f0(param_1 + 0x148,&local_f0);
  }
  FUN_02a048f0(*(undefined8 *)PTR_DAT_04bcb2b0,&local_b0);
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  local_e8._4_4_ = (uint)((ulong)puVar4 >> 0x20);
  uVar9 = local_e8._4_4_;
  uStack_d8 = SUB81(puVar4,0);
  uVar19 = uStack_d8;
  cStack_d7 = (char)((ulong)puVar4 >> 8);
  cVar10 = cStack_d7;
  uStack_d6 = (undefined2)((ulong)puVar4 >> 0x10);
  uVar20 = uStack_d6;
  local_d0 = 0;
  if (!bVar21) {
    local_d0 = CONCAT44(local_f8,iVar31);
  }
  uStack_e0 = uVar14;
  uStack_dc = uVar15;
  uStack_d4 = local_e8._4_4_;
  local_c8 = fVar36;
  uStack_c4 = uVar35;
  local_c0 = fVar34;
  local_b8 = lVar3;
  local_f0._0_1_ = bVar17;
  local_e8 = puVar4;
  FUN_0382095c(param_1 + 0x7d8,&local_f0);
  local_d0 = 0;
  if (!bVar21) {
    local_d0 = CONCAT44(local_f8,iVar31);
  }
  local_f0 = (undefined **)CONCAT71(local_f0._1_7_,bVar17);
  uVar18 = local_f0;
  local_f0._0_2_ = (undefined2)uVar18;
  local_f0 = (undefined **)
             (CONCAT53(local_f0._3_5_,CONCAT12(bVar26,(undefined2)local_f0)) & 0xffffffffff01ffff);
  local_f0._0_2_ = CONCAT11(local_130,(byte)local_f0);
  uStack_e0 = uVar14;
  uStack_dc = uVar15;
  uStack_d8 = uVar19;
  cStack_d7 = cVar10;
  uStack_d6 = uVar20;
  uStack_d4 = uVar9;
  local_c8 = fVar36;
  uStack_c4 = uVar35;
  local_c0 = fVar34;
  local_b8 = lVar3;
  local_e8 = puVar4;
  FUN_038269e4(param_1 + 0xea8,&local_f0);
  *(undefined4 *)(lVar3 + 8) = 0;
  local_f0 = (undefined **)CONCAT71(local_f0._1_7_,bVar22);
  local_e8 = (undefined *)(param_1 + 0x478);
  FUN_03827420(param_1 + 0x1578,&local_f0);
  uVar14 = *(int *)(param_1 + 0x18) + 1U & 1;
  uVar15 = -uVar14;
  if (-2 < *(int *)(param_1 + 0x18)) {
    uVar15 = uVar14;
  }
  *(uint *)(param_1 + 0x18) = uVar15;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  lVar3 = (long)local_e8;
LAB_0382baec:
  local_e8._4_4_ = (uint)((ulong)lVar3 >> 0x20);
  local_e8._0_4_ = (uint)lVar3;
  cStack_d7 = param_2[1];
  local_d0 = param_1 + 0x3a0;
  local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 1;
  local_f0 = &PTR_LAB_04b5cfc0;
  local_b0 = (undefined **)0x0;
  local_a8 = &local_f0;
  FUN_03838950(param_1 + 0x208,&local_b0);
  local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
  uStack_d8 = 1;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f0 = &PTR_LAB_04b5cff0;
  cStack_d7 = param_2[1] != '\0' && *(int *)(param_1 + 0x1580) == 0;
  local_b0 = (undefined **)0x0;
  local_a8 = &local_f0;
  FUN_03838950(param_1 + 0x238,&local_b0);
  cStack_d7 = param_2[1];
  local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
  uStack_d8 = 1;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f0 = &PTR_LAB_04b5d020;
  local_b0 = (undefined **)0x0;
  local_a8 = &local_f0;
  FUN_03838950(param_1 + 0x268,&local_b0);
  cStack_d7 = param_2[1];
  local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
  uStack_d8 = 1;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f0 = &PTR_LAB_04b5d050;
  local_b0 = (undefined **)0x0;
  local_a8 = &local_f0;
  FUN_03838950(param_1 + 0x298,&local_b0);
  cStack_d7 = param_2[1];
  local_d0 = param_1 + 0x680;
  local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
  uStack_d8 = 1;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f0 = &PTR_LAB_04b5d080;
  local_b0 = (undefined **)0x0;
  local_a8 = &local_f0;
  FUN_03838950(param_1 + 0x7a8,&local_b0);
  return;
}

