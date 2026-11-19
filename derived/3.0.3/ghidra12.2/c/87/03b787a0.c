
void FUN_03b787a0(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
                 float *param_6)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  double local_660;
  float *local_648;
  undefined8 local_640;
  undefined1 *local_638;
  undefined4 local_630;
  undefined1 local_62c [15];
  undefined1 local_61d;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined1 local_5f4 [127];
  undefined1 local_575;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  long *local_550;
  undefined8 local_548;
  undefined1 *local_540;
  undefined1 *local_538;
  undefined1 *local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined8 *local_510;
  int local_508;
  undefined1 local_504;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined *local_4e8;
  undefined8 *local_4e0;
  float *local_4d8;
  long local_4d0;
  undefined8 local_4c8;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  undefined8 local_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float local_49c;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  
  FUN_038e4d90(&DAT_05ae7800);
  fVar14 = *(float *)(param_3 + 0x24);
  fVar16 = *(float *)(param_3 + 0x28);
  pfVar4 = (float *)(param_3 + 8);
  fVar20 = *pfVar4;
  fVar18 = *(float *)(param_3 + 0xc);
  fVar19 = *(float *)(param_3 + 0x10);
  fVar10 = *(float *)(param_3 + 0x14);
  fVar11 = *(float *)(param_3 + 0x18);
  local_600 = (undefined1 *)((ulong)local_600._4_4_ << 0x20);
  fVar7 = (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  fVar6 = (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar21 = *(float *)(param_3 + 0x1c);
  fVar22 = *(float *)(param_3 + 0x20);
  fVar15 = *(float *)(param_3 + 0x34);
  fVar12 = *(float *)(param_3 + 0x2c);
  fVar17 = *(float *)(param_3 + 0x30);
  local_608 = (undefined *)CONCAT44(fVar7 / fVar7,fVar6 / fVar6);
  (**(code **)(*param_4 + 0x68))(param_4,&local_4b0,&local_608);
  FUN_038e4474(param_3,&local_570,&local_4b0);
  fVar13 = param_6[8];
  fVar12 = local_570._4_4_ - ((-(fVar21 * fVar14) - fVar10 * fVar18) - fVar15 * fVar12);
  fVar11 = (float)local_570 - ((-(fVar11 * fVar14) - fVar10 * fVar20) - fVar15 * fVar16);
  fVar14 = (float)local_568 - ((-(fVar22 * fVar14) - fVar10 * fVar19) - fVar15 * fVar17);
  fVar6 = param_6[6];
  fVar7 = param_6[7];
  local_4bc = *(float *)(param_3 + 0x14) +
              fVar7 * *(float *)(param_3 + 0xc) + fVar6 * *pfVar4 +
              fVar13 * *(float *)(param_3 + 0x10);
  local_4b8 = *(float *)(param_3 + 0x24) +
              fVar7 * *(float *)(param_3 + 0x1c) + fVar6 * *(float *)(param_3 + 0x18) +
              fVar13 * *(float *)(param_3 + 0x20);
  local_4b4 = *(float *)(param_3 + 0x34) +
              fVar7 * *(float *)(param_3 + 0x2c) + fVar6 * *(float *)(param_3 + 0x28) +
              fVar13 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4b0,&local_4bc);
  fVar13 = (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar6 = (float)local_4b0 * fVar13;
  fVar10 = (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  local_4b0._4_4_ = local_4b0._4_4_ * fVar10;
  fVar7 = local_4b0._4_4_;
  if ((*(ushort *)(param_6 + 0x51) >> 5 & 1) != 0) {
    fVar7 = (fVar13 - param_6[0x4d]) + -60.0;
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
    bVar1 = 10.0 - fVar13 <= fVar6;
    fVar6 = 10.0 - fVar13;
    if (bVar1) {
      fVar6 = fVar7;
    }
    fVar13 = (fVar10 - param_6[0x4c]) + -40.0;
    if (local_4b0._4_4_ <= fVar13) {
      fVar13 = local_4b0._4_4_;
    }
    fVar7 = 20.0 - fVar10;
    if (20.0 - fVar10 <= local_4b0._4_4_) {
      fVar7 = fVar13;
    }
  }
  fVar11 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14) * 1.01;
  local_4e8 = PTR_DAT_04bd0d30 + 0x10;
  local_4d8 = pfVar4;
  local_4c8 = param_2;
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) != '\0') goto LAB_03b78a04;
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
LAB_03b78a04:
    (**(code **)(*param_4 + 0x60))
              (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,
               *(undefined4 *)((long)param_4 + 0x8c));
    *(undefined1 *)((long)param_4 + 9) = 0;
  }
  local_4d0 = (long)param_4 + 0x4c;
  local_4e0 = (undefined8 *)PTR_DAT_04bb2f80;
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x10))(*(long **)PTR_DAT_04bd0c50,param_2,pfVar4);
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_568 = (ulong)local_568._4_4_ << 0x20;
  fVar10 = *(float *)(PTR_DAT_04bb4bc8 + 8);
  fStack_4a4 = (float)*(undefined8 *)PTR_DAT_04bb4bc8;
  fVar14 = fStack_4a4;
  fStack_4a0 = (float)((ulong)*(undefined8 *)PTR_DAT_04bb4bc8 >> 0x20);
  fVar15 = fStack_4a0;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c] * 0.0) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d] * 0.0) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  local_638._0_4_ = fStack_4a8;
  fVar12 = (float)local_4b0;
  local_568 = local_568 & 0xffffffff00000000;
  fVar13 = local_4b0._4_4_;
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar13,fVar11 * fStack_4a4 + fVar12);
  local_638._0_4_ = fVar11 * local_49c + local_638._0_4_;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c]) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d] * 0.0) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  pfVar4 = param_6 + 0x11;
  fStack_4a8 = fVar11 * local_49c + fStack_4a8;
  local_4b0 = (undefined1 *)
              CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,fVar11 * fStack_4a4 + (float)local_4b0)
  ;
  FUN_038c5944(&local_4e8,&local_640,&local_4b0,pfVar4,pfVar4);
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_568 = local_568 & 0xffffffff00000000;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c] * 0.0) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d] * 0.0) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  local_638._0_4_ = fStack_4a8;
  fVar12 = (float)local_4b0;
  local_568 = local_568 & 0xffffffff00000000;
  fVar13 = local_4b0._4_4_;
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar13,fVar11 * fStack_4a4 + fVar12);
  local_638._0_4_ = fVar11 * local_49c + local_638._0_4_;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c] * 0.0) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  fStack_4a8 = fVar11 * local_49c + fStack_4a8;
  local_4b0 = (undefined1 *)
              CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,fVar11 * fStack_4a4 + (float)local_4b0)
  ;
  FUN_038c5944(&local_4e8,&local_640,&local_4b0,pfVar4,pfVar4);
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_568 = local_568 & 0xffffffff00000000;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c]) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  local_638._0_4_ = fStack_4a8;
  fVar12 = (float)local_4b0;
  local_568 = local_568 & 0xffffffff00000000;
  fVar13 = local_4b0._4_4_;
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar13,fVar11 * fStack_4a4 + fVar12);
  local_638._0_4_ = fVar11 * local_49c + local_638._0_4_;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c]) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d] * 0.0) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  fStack_4a8 = fVar11 * local_49c + fStack_4a8;
  local_4b0 = (undefined1 *)
              CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,fVar11 * fStack_4a4 + (float)local_4b0)
  ;
  FUN_038c5944(&local_4e8,&local_640,&local_4b0,pfVar4,pfVar4);
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_568 = local_568 & 0xffffffff00000000;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c]) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  local_638._0_4_ = fStack_4a8;
  fVar12 = (float)local_4b0;
  local_568 = local_568 & 0xffffffff00000000;
  fVar13 = local_4b0._4_4_;
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar13,fVar11 * fStack_4a4 + fVar12);
  local_638._0_4_ = fVar11 * local_49c + local_638._0_4_;
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c] * 0.0) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  fStack_4a8 = fVar11 * local_49c + fStack_4a8;
  local_4b0 = (undefined1 *)
              CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,fVar11 * fStack_4a4 + (float)local_4b0)
  ;
  FUN_038c5944(&local_4e8,&local_640,&local_4b0,pfVar4,pfVar4);
  fVar12 = param_6[0x1e];
  uStack_4f0 = *(undefined8 *)(param_6 + 0x17);
  local_4f8 = *(undefined8 *)(param_6 + 0x15);
  if (fVar12 < 0.0) {
    fVar12 = SQRT((param_6[4] - param_6[1]) * (param_6[4] - param_6[1]) +
                  (param_6[3] - *param_6) * (param_6[3] - *param_6) +
                  (param_6[5] - param_6[2]) * (param_6[5] - param_6[2]));
  }
  fVar12 = fVar12 / *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x20);
  local_4b0 = (undefined1 *)0x0;
  fStack_4a8 = 0.0;
  local_568 = local_568 & 0xffffffff00000000;
  fVar18 = fVar12 / param_6[0x22];
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c] * 0.0) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + fVar18 * param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  fVar17 = fStack_4a8;
  fVar13 = (float)local_4b0;
  fVar16 = local_4b0._4_4_;
  local_4b0 = (undefined1 *)0x0;
  local_568 = local_568 & 0xffffffff00000000;
  fStack_4a8 = 0.0;
  local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar16,fVar11 * fStack_4a4 + fVar13);
  local_638 = (undefined1 *)CONCAT44(local_638._4_4_,fVar11 * local_49c + fVar17);
  local_570 = (undefined *)
              CONCAT44((fVar7 + param_6[0x4c]) /
                       ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                       (fVar6 + fVar18 * param_6[0x4d]) /
                       ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
  fStack_4a4 = fVar14;
  fStack_4a0 = fVar15;
  local_49c = fVar10;
  (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
  FUN_038e450c(param_3,&local_4b0,&local_608);
  fStack_4a8 = fVar11 * local_49c + fStack_4a8;
  local_4b0 = (undefined1 *)
              CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,fVar11 * fStack_4a4 + (float)local_4b0)
  ;
  FUN_038c5944(&local_4e8,&local_640,&local_4b0,&local_4f8,&local_4f8);
  fVar16 = (float)(**(code **)(*param_1 + 0x28))(0,param_1);
  fVar13 = param_6[0x25];
  if (-1 < (int)fVar13) {
    local_648 = param_6 + 0xd;
    iVar3 = -1;
    fVar17 = 0.0;
    do {
      iVar3 = iVar3 + 1;
      local_608 = *(undefined **)(param_6 + 9);
      local_600 = *(undefined1 **)(param_6 + 0xb);
      fVar20 = (param_6[0x22] * (float)iVar3) / (float)(int)fVar13;
      fVar19 = (float)(**(code **)(*param_1 + 0x28))(fVar20,param_1);
      fVar13 = param_6[0x4f];
      if (((0.0 < fVar13) && (0.0 < fVar13)) &&
         ((fVar21 = 0.0, fVar13 <= fVar20 ||
          (((fVar21 = param_6[0x50], 0.0 < fVar21 && (fVar13 - fVar21 < fVar20)) &&
           (fVar21 = 1.0 - (fVar20 - (fVar13 - fVar21)) / fVar21, fVar21 = fVar21 * fVar21,
           fVar21 < 1.0)))))) {
        fVar19 = fVar19 * fVar21;
        local_608 = *(undefined **)local_648;
        local_600 = *(undefined1 **)(param_6 + 0xf);
      }
      fStack_4a8 = 0.0;
      local_4b0 = (undefined1 *)0x0;
      fVar21 = param_6[0x22];
      local_638 = (undefined1 *)((ulong)local_638 & 0xffffffff00000000);
      local_640 = (undefined *)
                  CONCAT44((fVar7 + fVar16 * param_6[0x4c]) /
                           ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                           (fVar6 + (fVar17 / fVar21) * param_6[0x4d]) /
                           ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
      fStack_4a4 = fVar14;
      fStack_4a0 = fVar15;
      local_49c = fVar10;
      (**(code **)(*param_4 + 0x68))(param_4,&local_570,&local_640);
      FUN_038e450c(param_3,&local_4b0,&local_570);
      fVar17 = fStack_4a8;
      fVar13 = (float)local_4b0;
      local_638 = (undefined1 *)((ulong)local_638 & 0xffffffff00000000);
      fVar16 = local_4b0._4_4_;
      local_4b0 = (undefined1 *)0x0;
      fStack_4a8 = 0.0;
      local_618 = CONCAT44(fVar11 * fStack_4a0 + fVar16,fVar11 * fStack_4a4 + fVar13);
      local_610 = CONCAT44(local_610._4_4_,fVar11 * local_49c + fVar17);
      local_640 = (undefined *)
                  CONCAT44((fVar7 + fVar19 * param_6[0x4c]) /
                           ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                           (fVar6 + (fVar20 / fVar21) * param_6[0x4d]) /
                           ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
      fStack_4a4 = fVar14;
      fStack_4a0 = fVar15;
      local_49c = fVar10;
      (**(code **)(*param_4 + 0x68))(param_4,&local_570,&local_640);
      FUN_038e450c(param_3,&local_4b0,&local_570);
      fStack_4a8 = fVar11 * local_49c + fStack_4a8;
      local_4b0 = (undefined1 *)
                  CONCAT44(fVar11 * fStack_4a0 + local_4b0._4_4_,
                           fVar11 * fStack_4a4 + (float)local_4b0);
      FUN_038c5944(&local_4e8,&local_618,&local_4b0,&local_608,&local_608);
      fVar13 = param_6[0x25];
      fVar16 = fVar19;
      fVar17 = fVar20;
    } while (iVar3 < (int)fVar13);
  }
  fVar16 = param_6[0x1f];
  fVar13 = param_6[0x20];
  if ((fVar16 < 1.0) || (fVar13 < 1.0)) {
    fVar20 = fVar12 * fVar16;
    fVar17 = (float)(**(code **)(*param_1 + 0x28))(param_1);
    local_4b0 = (undefined1 *)0x0;
    fStack_4a8 = 0.0;
    local_568 = local_568 & 0xffffffff00000000;
    local_648._0_4_ = fVar18 * fVar16;
    fVar16 = fVar13 * fVar17;
    local_570 = (undefined *)
                CONCAT44((fVar7 + fVar16 * param_6[0x4c]) /
                         ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                         (fVar6 + local_648._0_4_ * param_6[0x4d]) /
                         ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
    fStack_4a4 = fVar14;
    fStack_4a0 = fVar15;
    local_49c = fVar10;
    (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
    FUN_038e450c(param_3,&local_4b0,&local_608);
    puVar5 = (undefined8 *)PTR_DAT_04bd0c50;
    local_608 = &DAT_3f8000003f800000;
    local_600 = (undefined1 *)0x3f80000000000000;
    local_4b0._0_4_ = fVar11 * fStack_4a4 + (float)local_4b0;
    local_4b0._4_4_ = fVar11 * fStack_4a0 + local_4b0._4_4_;
    fVar21 = fVar11 * local_49c + fStack_4a8;
    fVar13 = (float)*local_4e0;
    fVar17 = (float)((ulong)*local_4e0 >> 0x20);
    fVar19 = (float)local_4e0[1];
    fStack_4a8 = fVar13 * 0.0 + fVar17 * 0.0 + fVar19 * 0.015 + 0.0;
    fStack_4a4 = (float)((ulong)local_4e0[1] >> 0x20) +
                 (float)local_4b0 * fVar13 + local_4b0._4_4_ * fVar17 + fVar21 * fVar19;
    fVar22 = (float)local_4e0[2];
    fVar8 = (float)((ulong)local_4e0[2] >> 0x20);
    fVar9 = (float)local_4e0[3];
    fStack_4a0 = fVar22 * 0.015 + fVar8 * 0.0 + fVar9 * 0.0 + 0.0;
    local_49c = fVar22 * 0.0 + fVar8 * 0.015 + fVar9 * 0.0 + 0.0;
    uStack_498 = CONCAT44((float)((ulong)local_4e0[3] >> 0x20) +
                          (float)local_4b0 * fVar22 + local_4b0._4_4_ * fVar8 + fVar21 * fVar9,
                          fVar22 * 0.0 + fVar8 * 0.0 + fVar9 * 0.015 + 0.0);
    fVar22 = (float)local_4e0[4];
    fVar8 = (float)((ulong)local_4e0[4] >> 0x20);
    fVar9 = (float)local_4e0[5];
    local_490 = CONCAT44(fVar22 * 0.0 + fVar8 * 0.015 + fVar9 * 0.0 + 0.0,
                         fVar22 * 0.015 + fVar8 * 0.0 + fVar9 * 0.0 + 0.0);
    uStack_488 = CONCAT44((float)((ulong)local_4e0[5] >> 0x20) +
                          (float)local_4b0 * fVar22 + local_4b0._4_4_ * fVar8 + fVar21 * fVar9,
                          fVar22 * 0.0 + fVar8 * 0.0 + fVar9 * 0.015 + 0.0);
    local_4b0 = (undefined1 *)
                CONCAT44(fVar13 * 0.0 + fVar17 * 0.015 + fVar19 * 0.0 + 0.0,
                         fVar13 * 0.015 + fVar17 * 0.0 + fVar19 * 0.0 + 0.0);
    (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x50))
              (*(long **)PTR_DAT_04bd0c50,local_4c8,&local_4b0,&local_608,&local_608);
    fVar13 = (float)(**(code **)(*param_1 + 0x28))(fVar12,param_1);
    local_4b0 = (undefined1 *)0x0;
    fStack_4a8 = 0.0;
    local_568 = local_568 & 0xffffffff00000000;
    local_570 = (undefined *)
                CONCAT44((fVar7 + fVar13 * param_6[0x4c]) /
                         ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                         (fVar6 + fVar18 * param_6[0x4d]) /
                         ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
    fStack_4a4 = fVar14;
    fStack_4a0 = fVar15;
    local_49c = fVar10;
    (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
    FUN_038e450c(param_3,&local_4b0,&local_608);
    fVar19 = fStack_4a8;
    fVar13 = (float)local_4b0;
    fVar17 = local_4b0._4_4_;
    local_4b0 = (undefined1 *)0x0;
    local_568 = local_568 & 0xffffffff00000000;
    fStack_4a8 = 0.0;
    local_640 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar17,fVar11 * fStack_4a4 + fVar13);
    local_638 = (undefined1 *)CONCAT44(local_638._4_4_,fVar11 * local_49c + fVar19);
    local_570 = (undefined *)
                CONCAT44((fVar7 + fVar16 * param_6[0x4c]) /
                         ((*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5),
                         (fVar6 + local_648._0_4_ * param_6[0x4d]) /
                         ((*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5));
    fStack_4a4 = fVar14;
    fStack_4a0 = fVar15;
    local_49c = fVar10;
    (**(code **)(*param_4 + 0x68))(param_4,&local_608,&local_570);
    FUN_038e450c(param_3,&local_4b0,&local_608);
    fVar14 = fStack_4a8;
    fVar10 = (float)local_4b0;
    fVar15 = fVar11 * fStack_4a4;
    fVar13 = local_4b0._4_4_;
    local_4b0 = &DAT_3f8000003f800000;
    fStack_4a8 = 0.0;
    fStack_4a4 = 1.0;
    local_608 = (undefined *)CONCAT44(fVar11 * fStack_4a0 + fVar13,fVar15 + fVar10);
    local_600 = (undefined1 *)CONCAT44(local_600._4_4_,fVar11 * local_49c + fVar14);
    FUN_038c5944(&local_4e8,&local_640,&local_608,&local_4b0,&local_4b0);
    local_660 = (double)fVar20;
  }
  else {
    puVar5 = (undefined8 *)PTR_DAT_04bd0c50;
  }
  (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,local_4c8);
  local_518 = 0x7f800000;
  local_560 = 0;
  uStack_558 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_510 = (undefined8 *)0x0;
  local_570 = PTR_DAT_04bd0f00 + 0x10;
  local_508 = 0;
  local_540 = &DAT_3f8000003f800000;
  local_538 = &DAT_3f8000003f800000;
  local_550 = *(long **)PTR_DAT_04bd0c58;
  if (*(long **)PTR_DAT_04bd0ef8 != (long *)0x0) {
    local_550 = *(long **)PTR_DAT_04bd0ef8;
  }
  local_530 = &DAT_3f8000003f800000;
  local_548 = 0;
  local_504 = 1;
  local_568 = param_5;
  local_500 = param_2;
  FUN_038e4d90(&DAT_05ae7800,param_2);
  (**(code **)(*local_550 + 0x38))(local_550,local_500);
  local_504 = 0;
  pfVar4 = param_6 + 0x19;
  local_538 = *(undefined1 **)pfVar4;
  local_575 = 0;
  local_530 = *(undefined1 **)(param_6 + 0x1b);
  local_5f4[0] = 0;
  local_600 = local_5f4;
  local_540 = (undefined1 *)0x3f99999a3f99999a;
  local_5f8 = 0x80;
  local_608 = PTR_DAT_04bb2d88 + 0x10;
  fVar11 = fVar6 + fVar18 * param_6[0x4d];
  fVar10 = fVar7 + param_6[0x4c] + 20.0;
  FUN_038d1270((double)fVar12,&local_608,"%.2f m");
  local_618 = *(undefined8 *)pfVar4;
  local_610 = *(undefined8 *)(param_6 + 0x1b);
  local_538 = (undefined1 *)0x0;
  local_530 = (undefined1 *)0x3f80000000000000;
  local_548 = CONCAT44(fVar10 + -2.0,fVar11 + 2.0);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  local_548 = CONCAT44(fVar10,fVar11);
  local_538 = (undefined1 *)local_618;
  local_530 = (undefined1 *)local_610;
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  fVar11 = param_6[0x20];
  if ((1.0 <= param_6[0x1f]) && (1.0 <= fVar11)) {
    fVar11 = (float)(**(code **)(*param_1 + 0x28))(fVar12,param_1);
    fVar13 = fVar11 * param_6[0x4c];
    fVar12 = 20.0 - param_6[0x4c] * fVar11;
    fVar10 = fVar6 + fVar18 * param_6[0x4d];
    if (20.0 <= fVar13) {
      fVar12 = -0.0;
    }
    fVar12 = fVar7 + fVar13 + fVar12;
    if ((*(ushort *)(param_6 + 0x51) >> 8 & 1) == 0) {
      pcVar2 = "%.2f";
    }
    else {
      if (fVar11 <= 0.0) {
        fVar11 = -90.4;
      }
      else {
        fVar11 = log10f(fVar11);
        fVar11 = fVar11 * 20.0;
      }
      pcVar2 = "%.2f dB";
    }
    FUN_038d1270((double)fVar11,&local_608,pcVar2);
    local_538 = (undefined1 *)0x0;
    local_530 = (undefined1 *)0x3f80000000000000;
    local_548 = CONCAT44(fVar12 + -2.0,fVar10 + 2.0);
    (**(code **)(local_608 + 0x18))(&local_608);
    puVar5 = &local_4b0;
    iVar3 = 0x200;
    if (local_510 != (undefined8 *)0x0) {
      puVar5 = local_510;
      iVar3 = local_508;
    }
    FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
    FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
    local_538 = *(undefined1 **)pfVar4;
    local_530 = *(undefined1 **)(param_6 + 0x1b);
    goto LAB_03b79c84;
  }
  local_630 = 0x10;
  local_61d = 0;
  local_62c[0] = 0;
  local_638 = local_62c;
  local_640 = PTR_DAT_04bb2ab0 + 0x10;
  fVar13 = fVar16 * param_6[0x4c];
  fVar10 = fVar6 + local_648._0_4_ * param_6[0x4d];
  fVar12 = 20.0 - param_6[0x4c] * fVar16;
  if (20.0 <= fVar13) {
    fVar12 = -0.0;
  }
  fVar12 = fVar7 + fVar13 + fVar12;
  if (1.0 <= param_6[0x1f]) {
    local_660 = (double)fVar11;
    pcVar2 = "x%.2f";
LAB_03b79b3c:
    FUN_038d1270(local_660,&local_640,pcVar2);
  }
  else {
    if (1.0 <= fVar11) {
      pcVar2 = "%.2fm";
      goto LAB_03b79b3c;
    }
    FUN_038d1270(local_660,(double)fVar11,&local_640,"%.2fm, x%.2f");
  }
  (**(code **)(local_640 + 0x18))(&local_640);
  FUN_038d1270((double)fVar16,&local_608,"%.2f(%s)",local_638);
  local_538 = (undefined1 *)0x0;
  local_530 = (undefined1 *)0x3f80000000000000;
  local_548 = CONCAT44(fVar12 + -2.0,fVar10 + 2.0);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  local_538 = *(undefined1 **)pfVar4;
  local_530 = *(undefined1 **)(param_6 + 0x1b);
LAB_03b79c84:
  local_548 = CONCAT44(fVar12,fVar10);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  fVar11 = fVar6 + param_6[0x4d] + 5.0;
  FUN_038d1270((double)param_6[0x22],&local_608,"%.2f m");
  local_538 = (undefined1 *)0x0;
  local_530 = (undefined1 *)0x3f80000000000000;
  local_548 = CONCAT44(fVar7 + 0.0 + -2.0,fVar11 + 2.0);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  local_538 = *(undefined1 **)pfVar4;
  local_530 = *(undefined1 **)(param_6 + 0x1b);
  local_548 = CONCAT44(fVar7 + 0.0,fVar11);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  fVar7 = fVar7 + param_6[0x4c] + 40.0;
  (**(code **)(*(long *)(param_6 + 0x26) + 0x18))(param_6 + 0x26);
  FUN_038d1270(&local_608,&DAT_0409e973,*(undefined8 *)(param_6 + 0x28));
  local_538 = (undefined1 *)0x0;
  local_530 = (undefined1 *)0x3f80000000000000;
  local_548 = CONCAT44(fVar7 + -2.0,fVar6 + 0.0 + 2.0);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  local_538 = *(undefined1 **)pfVar4;
  local_530 = *(undefined1 **)(param_6 + 0x1b);
  local_548 = CONCAT44(fVar7,fVar6 + 0.0);
  (**(code **)(local_608 + 0x18))(&local_608);
  puVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_510 != (undefined8 *)0x0) {
    puVar5 = local_510;
    iVar3 = local_508;
  }
  FUN_038d4cb0(puVar5,iVar3,local_600,iVar3 + -1);
  FUN_038e7464(&local_570,puVar5,0xffffffff,1,0);
  local_504 = 1;
  (**(code **)(*local_550 + 0x40))(local_550,local_500);
  return;
}

