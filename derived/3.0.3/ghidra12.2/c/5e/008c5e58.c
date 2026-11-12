
void FUN_008c5e58(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  MutexType *pMVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  float fVar10;
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  
  pfVar1 = (float *)(param_1 + 0x30970);
  FUN_008c6430();
  fVar13 = *pfVar1;
  fVar10 = *(float *)(param_1 + 0x3097c);
  if (fVar10 < fVar13) goto LAB_008c63ec;
  if (*(float *)(param_1 + 0x30980) < *(float *)(param_1 + 0x30974)) goto LAB_008c63ec;
  if (*(float *)(param_1 + 0x30984) < *(float *)(param_1 + 0x30978)) goto LAB_008c63ec;
  pfVar2 = (float *)(param_1 + 0x30854);
  fVar10 = (fVar13 + fVar10) * 0.5;
  fVar13 = (*(float *)(param_1 + 0x30974) + *(float *)(param_1 + 0x30980)) * 0.5;
  fVar20 = (*(float *)(param_1 + 0x30978) + *(float *)(param_1 + 0x30984)) * 0.5;
  if (0 < *(int *)(param_1 + 0x38014)) {
    fVar14 = (*(float *)(param_1 + 0x30988) + *(float *)(param_1 + 0x30994)) * 0.5 - fVar10;
    fVar16 = (*(float *)(param_1 + 0x3098c) + *(float *)(param_1 + 0x30998)) * 0.5 - fVar13;
    fVar11 = (*(float *)(param_1 + 0x30990) + *(float *)(param_1 + 0x3099c)) * 0.5 - fVar20;
    if (SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar11 * fVar11) <= 3.0) {
      *(int *)(param_1 + 0x38014) = *(int *)(param_1 + 0x38014) + -1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30950);
      iVar6 = *(int *)(param_1 + 0x30954);
      FUN_008c4aa0(param_1,*(undefined4 *)(param_1 + 0x307e8),0x1e);
      *(undefined4 *)(param_1 + 0x38014) = 0;
      if (iVar5 != iVar6) {
        *(undefined1 *)(param_1 + 0x37fba) = 0;
      }
    }
  }
  puVar8 = PTR_DAT_04bb2d00;
  pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0));
  fVar11 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  fVar16 = *pfVar4 + fVar11 * pfVar4[1];
  uVar7 = *(uint *)(param_1 + 0x307e8);
  fVar14 = pfVar4[2] + fVar11 * pfVar4[3];
  fVar18 = fVar16 * 0.0;
  fVar17 = fVar16 + 0.0;
  fVar15 = fVar13 * (fVar18 * 0.0 + 1.0) + fVar10 * fVar18;
  fVar21 = fVar15 + fVar20 * fVar14 * 0.0;
  fVar19 = fVar13 * fVar18;
  fVar11 = fVar10 * fVar17;
  if (uVar7 == 0x62) {
    ppuVar9 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
LAB_008c6040:
    local_98 = (undefined8 *)*ppuVar9;
  }
  else {
    if (uVar7 < 99) {
      ppuVar9 = &PTR_s_cNormal_04922de8 + uVar7;
      goto LAB_008c6040;
    }
    local_98 = &DAT_0407ebb1;
  }
  local_b8 = *(undefined8 *)pfVar1;
  uStack_b0 = *(undefined8 *)(param_1 + 0x30978);
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = *(undefined8 *)(param_1 + 0x30980);
  fVar12 = (float)FUN_008c68e0(param_1,param_1 + 0x30890,&local_b8,&local_a0,0,1,
                               *(int *)(param_1 + 0x30950) == *(int *)(param_1 + 0x30954));
  local_a0._4_4_ = fVar21 + *(float *)(param_1 + 0x30924);
  local_a0._0_4_ =
       ((fVar13 * fVar14 * 0.0 + fVar10 * fVar14) - fVar20 * fVar16) + *(float *)(param_1 + 0x30920)
  ;
  local_98 = (undefined8 *)
             CONCAT44(local_98._4_4_,
                      fVar19 + fVar11 + fVar20 * fVar14 + *(float *)(param_1 + 0x30928));
  (*(code *)**(undefined8 **)(param_1 + 0x37f18))((undefined8 *)(param_1 + 0x37f18),&local_a0);
  if (1.0 <= fVar12) {
    *(undefined1 *)(param_1 + 0x37fba) = 0;
    *(float *)(param_1 + 0x2ac) = local_a0._4_4_;
    fVar10 = (float)local_a0;
    fVar13 = local_a0._4_4_;
    fVar20 = local_98._0_4_;
  }
  else {
    if (((((*(char *)(param_1 + 0x37fba) != '\0') && (*pfVar1 <= *(float *)(param_1 + 0x3097c))) &&
         (*(float *)(param_1 + 0x30974) <= *(float *)(param_1 + 0x30980))) &&
        ((*(float *)(param_1 + 0x30978) <= *(float *)(param_1 + 0x30984) &&
         (*(float *)(param_1 + 0x30988) <= *(float *)(param_1 + 0x30994))))) &&
       ((*(float *)(param_1 + 0x3098c) <= *(float *)(param_1 + 0x30998) &&
        (*(float *)(param_1 + 0x30990) <= *(float *)(param_1 + 0x3099c))))) {
      *pfVar2 = (*pfVar1 - *(float *)(param_1 + 0x30988)) + *pfVar2;
      *(float *)(param_1 + 0x30858) =
           (*(float *)(param_1 + 0x30974) - *(float *)(param_1 + 0x3098c)) +
           *(float *)(param_1 + 0x30858);
      *(float *)(param_1 + 0x3085c) =
           (*(float *)(param_1 + 0x30978) - *(float *)(param_1 + 0x30990)) +
           *(float *)(param_1 + 0x3085c);
    }
    pfVar4 = (float *)(puVar8 + ((ulong)(*(uint *)(param_1 + 0x30914) >> 0x14) & 0xff0));
    fVar10 = (float)(*(uint *)(param_1 + 0x30914) & 0xffffff) * 5.9604645e-08;
    fVar20 = pfVar4[2] + fVar10 * pfVar4[3];
    fVar10 = *pfVar4 + fVar10 * pfVar4[1];
    fVar11 = local_98._0_4_ - *(float *)(param_1 + 0x3085c);
    fVar14 = (float)local_a0 - *pfVar2;
    fVar13 = (fVar20 * fVar14 + 0.0) - fVar10 * fVar11;
    fVar20 = fVar20 * fVar13;
    fVar16 = -(fVar10 * fVar13);
    fVar13 = *(float *)(param_1 + 0x30858) +
             fVar17 * (local_a0._4_4_ - *(float *)(param_1 + 0x30858));
    *(float *)(param_1 + 0x2ac) = fVar13;
    fVar10 = *pfVar2 + fVar15 * fVar20 + fVar18 * (fVar14 - fVar20);
    fVar20 = *(float *)(param_1 + 0x3085c) + fVar15 * fVar16 + fVar18 * (fVar11 - fVar16);
  }
  *(float *)(param_1 + 0x2a8) = fVar10;
  *(float *)(param_1 + 0x2b0) = fVar20;
  iVar5 = *(int *)(param_1 + 0x30954);
  *(float *)(param_1 + 0x2b4) = (float)local_a0;
  *(float *)(param_1 + 0x2b8) = local_a0._4_4_;
  *(float *)(param_1 + 700) = local_98._0_4_;
  if (iVar5 < 1) {
    fVar11 = 1.0;
    *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
    iVar6 = *(int *)(param_1 + 0x410);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x410);
    fVar11 = (float)*(int *)(param_1 + 0x30950) / (float)iVar5;
    *(float *)(param_1 + 0x2d8) = fVar11;
  }
  if (((iVar6 != 0x1d) && (fVar11 = 0.0, *(int *)(param_1 + 0x418) == 0x1d)) &&
     (*(char *)(param_1 + 0x37fad) != '\0')) {
    fVar11 = 1.0;
    if (0 < iVar5) {
      fVar11 = (float)*(int *)(param_1 + 0x30950) / (float)iVar5;
    }
    fVar11 = 1.0 - fVar11;
  }
  *(float *)(param_1 + 0x2dc) = fVar11;
  fVar16 = (float)(*(uint *)(param_1 + 0x30890) & 0xffffff);
  fVar14 = (float)(*(uint *)(param_1 + 0x30894) & 0xffffff);
  pfVar2 = (float *)(puVar8 + ((ulong)(*(uint *)(param_1 + 0x30890) >> 0x14) & 0xff0));
  fVar11 = pfVar2[2];
  fVar15 = pfVar2[3];
  pfVar4 = (float *)(puVar8 + ((ulong)(*(uint *)(param_1 + 0x30894) >> 0x14) & 0xff0));
  fVar19 = *pfVar2;
  fVar21 = pfVar2[1];
  fVar17 = *pfVar4;
  fVar18 = pfVar4[1];
  fVar12 = pfVar4[2];
  fVar22 = pfVar4[3];
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x30898);
  fVar15 = *(float *)(param_1 + 0x3089c) * (fVar11 + fVar15 * fVar16 * 5.9604645e-08);
  fVar11 = 1.0;
  if (1.0 <= *(float *)(param_1 + 0x308ac)) {
    fVar11 = *(float *)(param_1 + 0x308ac);
  }
  *(float *)(param_1 + 0x309a0) = fVar10 + -40.0;
  *(float *)(param_1 + 0x309a4) = fVar13 + -40.0;
  *(float *)(param_1 + 0x2cc) = *(float *)(param_1 + 0x308b0) * 0.017453292;
  *(float *)(param_1 + 0x2d0) = fVar11;
  *(float *)(param_1 + 0x294) =
       *(float *)(param_1 + 0x3089c) * (fVar19 + fVar21 * fVar16 * 5.9604645e-08) + fVar13;
  *(float *)(param_1 + 0x290) = fVar15 * (fVar17 + fVar18 * fVar14 * 5.9604645e-08) + fVar10;
  *(float *)(param_1 + 0x309a8) = fVar20 + -5.0 + -38.0;
  *(float *)(param_1 + 0x309ac) = fVar10 + 40.0;
  *(float *)(param_1 + 0x298) = fVar15 * (fVar12 + fVar22 * fVar14 * 5.9604645e-08) + fVar20;
  *(float *)(param_1 + 0x309b0) = fVar13 + 40.0;
  *(float *)(param_1 + 0x309b4) = fVar20 + -5.0 + 38.0;
  pMVar3 = (MutexType *)(PTR_DAT_04bb59f8 + 0x20);
  nn::os::LockMutex(pMVar3);
  nn::os::UnlockMutex(pMVar3);
  fVar13 = *pfVar1;
  *(undefined1 *)(param_1 + 0x37fb0) = 1;
  fVar10 = *(float *)(param_1 + 0x3097c);
LAB_008c63ec:
  *(undefined4 *)(param_1 + 0x30990) = *(undefined4 *)(param_1 + 0x30978);
  *(float *)(param_1 + 0x30994) = fVar10;
  *(float *)(param_1 + 0x30988) = fVar13;
  *(undefined4 *)(param_1 + 0x3098c) = *(undefined4 *)(param_1 + 0x30974);
  *(undefined4 *)(param_1 + 0x30998) = *(undefined4 *)(param_1 + 0x30980);
  *(undefined4 *)(param_1 + 0x3099c) = *(undefined4 *)(param_1 + 0x30984);
  return;
}

