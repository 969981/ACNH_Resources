
void FUN_03bbb370(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
                 float *param_6)

{
  long lVar1;
  float *pfVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
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
  undefined8 local_698;
  undefined1 *puStack_690;
  undefined4 local_688;
  undefined1 local_684 [127];
  undefined1 local_605;
  float local_5fc;
  float fStack_5f8;
  float local_5f4;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  long *local_5d0;
  undefined8 local_5c8;
  undefined1 *local_5c0;
  undefined1 *local_5b8;
  undefined1 *local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  float *local_590;
  int local_588;
  undefined1 local_584;
  undefined8 local_580;
  undefined *local_578;
  undefined8 *local_570;
  long local_568;
  long local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined2 local_51c [50];
  undefined1 local_4b7;
  float local_4a8;
  float fStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  
  FUN_038e4cec(local_51c);
  local_4b7 = 2;
  local_51c[0] = 0x101;
  FUN_038e4d90(local_51c,param_2);
  local_530 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  local_528 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_540 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_538 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_550 = *(undefined8 *)PTR_DAT_04bb2f80;
  local_548 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x20);
  if ((*(byte *)(param_6 + 0x51) >> 3 & 1) == 0) {
    fVar12 = param_6[0x22];
    fVar11 = param_6[0x1d] * 0.017453292 * 0.5;
    fVar6 = cosf(fVar11);
    fVar11 = sinf(fVar11);
    fVar7 = fVar11 * 0.0;
    fVar9 = fVar11 * (fVar11 + fVar11);
    fVar14 = (fVar6 + fVar6) * fVar11;
    fVar8 = (fVar11 + fVar11) * fVar7;
    fVar10 = fVar7 * (fVar7 + fVar7);
    fVar6 = (fVar6 + fVar6) * fVar7;
    fVar11 = fVar11 * (fVar7 + fVar7);
    local_538 = CONCAT44(param_6[1],fVar13 * (fVar8 - fVar6));
    local_550 = CONCAT44(fVar13 * (fVar11 - fVar6),fVar13 * ((1.0 - fVar9) - fVar10));
    local_530 = CONCAT44(fVar13 * (fVar6 + fVar8),fVar13 * (fVar10 - fVar14));
    local_548 = CONCAT44(*param_6,fVar13 * (fVar14 + fVar10));
    local_540 = CONCAT44(fVar13 * ((1.0 - fVar10) - fVar10),fVar13 * (fVar6 + fVar11));
    local_528 = CONCAT44(param_6[2],fVar13 * ((1.0 - fVar10) - fVar9));
  }
  else {
    fVar7 = param_6[3] - *param_6;
    fVar6 = param_6[5] - param_6[2];
    fVar11 = param_6[4] - param_6[1];
    fVar12 = SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar6 * fVar6);
    if (0.0 < fVar12) {
      fVar8 = 1.0 / fVar12;
      fVar7 = fVar7 * fVar8;
      fVar11 = fVar11 * fVar8;
      fVar6 = fVar6 * fVar8;
    }
    fVar8 = fVar11 * 0.0 - fVar7;
    fVar10 = fVar6 + fVar11 * -0.0;
    fVar9 = fVar6 * -0.0 + fVar7 * 0.0;
    fVar14 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
    if (0.0 < fVar14) {
      fVar14 = 1.0 / fVar14;
      fVar10 = fVar10 * fVar14;
      fVar9 = fVar9 * fVar14;
      fVar8 = fVar8 * fVar14;
    }
    fVar16 = -(fVar6 * fVar9) + fVar8 * fVar11;
    fVar15 = fVar8 * -fVar7 + fVar10 * fVar6;
    fVar14 = -(fVar11 * fVar10) + fVar9 * fVar7;
    fVar17 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14);
    if (0.0 < fVar17) {
      fVar17 = 1.0 / fVar17;
      fVar16 = fVar16 * fVar17;
      fVar15 = fVar15 * fVar17;
      fVar14 = fVar14 * fVar17;
    }
    fVar12 = fVar12 / fVar13;
    local_550 = CONCAT44(fVar13 * fVar16,fVar13 * fVar7);
    local_540 = CONCAT44(fVar13 * fVar15,fVar13 * fVar11);
    local_530 = CONCAT44(fVar13 * fVar14,fVar13 * fVar6);
    local_548 = CONCAT44(*param_6,fVar13 * fVar10);
    local_538 = CONCAT44(param_6[1],fVar13 * fVar9);
    local_528 = CONCAT44(param_6[2],fVar13 * fVar8);
  }
  lVar1 = param_3 + 8;
  local_578 = PTR_DAT_04bd0d30 + 0x10;
  local_568 = lVar1;
  local_558 = param_2;
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) == '\0') goto LAB_03bbb6a0;
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
  }
  (**(code **)(*param_4 + 0x60))
            (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,*(undefined4 *)((long)param_4 + 0x8c))
  ;
  *(undefined1 *)((long)param_4 + 9) = 0;
LAB_03bbb6a0:
  local_560 = (long)param_4 + 0x4c;
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x10))(*(long **)PTR_DAT_04bd0c50,param_2,lVar1);
  puVar3 = PTR_DAT_04bb2150;
  local_570 = &local_550;
  if ((*(ushort *)(param_6 + 0x51) >> 1 & 1) == 0) {
    fStack_4a4 = param_6[0x21];
    local_4a8 = 0.0;
    uStack_4a0 = 0;
    pfVar2 = param_6 + 0x11;
    FUN_038c5944(&local_578,PTR_DAT_04bb2150,&local_4a8,pfVar2,pfVar2);
    fStack_4a4 = 0.0;
    uStack_4a0 = 0;
    local_4a8 = fVar12;
    FUN_038c5944(&local_578,puVar3,&local_4a8,pfVar2,pfVar2);
    local_698._4_4_ = param_6[0x21];
    local_4a8 = 0.0;
    uStack_4a0 = 0;
    puStack_690._0_4_ = 0.0;
    local_698._0_4_ = fVar12;
    fStack_4a4 = local_698._4_4_;
    FUN_038c5944(&local_578,&local_4a8,&local_698,pfVar2,pfVar2);
    local_698._4_4_ = param_6[0x21];
    fStack_4a4 = 0.0;
    uStack_4a0 = 0;
    puStack_690._0_4_ = 0.0;
    local_698._0_4_ = fVar12;
    local_4a8 = fVar12;
    FUN_038c5944(&local_578,&local_4a8,&local_698,pfVar2,pfVar2);
  }
  else {
    fVar13 = param_6[0x24];
    if (-1 < (int)fVar13) {
      iVar4 = -1;
      do {
        iVar4 = iVar4 + 1;
        local_4a8 = 0.0;
        uStack_4a0 = 0;
        puStack_690._0_4_ = 0.0;
        local_698._4_4_ = (param_6[0x21] * (float)iVar4) / (float)(int)fVar13;
        local_698._0_4_ = fVar12;
        fStack_4a4 = local_698._4_4_;
        FUN_038c5944(&local_578,&local_4a8,&local_698,param_6 + 0x11,param_6 + 0x11);
        fVar13 = param_6[0x24];
      } while (iVar4 < (int)fVar13);
    }
    if (0.0 < param_6[0x23]) {
      iVar4 = (int)(fVar12 / param_6[0x23]);
      if (999 < iVar4) {
        iVar4 = 1000;
      }
      if (-1 < iVar4) {
        iVar5 = 0;
        do {
          fStack_4a4 = 0.0;
          uStack_4a0 = 0;
          puStack_690._0_4_ = 0.0;
          local_698._0_4_ = param_6[0x23] * (float)iVar5;
          local_698._4_4_ = param_6[0x21];
          local_4a8 = (float)local_698;
          FUN_038c5944(&local_578,&local_4a8,&local_698,param_6 + 0x11,param_6 + 0x11);
          iVar5 = iVar5 + 1;
        } while (iVar4 + 1 != iVar5);
      }
    }
  }
  local_698._0_4_ = 0.0;
  puStack_690._0_4_ = 0.0;
  local_4a8 = 0.0;
  fStack_4a4 = 0.6;
  uStack_4a0 = 0;
  uStack_49c = 0x3f800000;
  local_5e8 = (ulong)local_5e8._4_4_ << 0x20;
  local_698._4_4_ = param_6[0x21] * *(float *)((long)param_1 + 100);
  local_5f0 = (undefined *)CONCAT44(local_698._4_4_,fVar12);
  FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
  local_698._0_4_ = 0.0;
  puStack_690._0_4_ = 0.0;
  local_5e8 = local_5e8 & 0xffffffff00000000;
  local_698._4_4_ = param_6[0x21] * *(float *)(param_1 + 0xd);
  local_5f0 = (undefined *)CONCAT44(local_698._4_4_,fVar12);
  FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
  local_698._0_4_ = *(float *)((long)param_1 + 0x6c);
  local_698._4_4_ = 0.0;
  puStack_690._0_4_ = 0.0;
  local_5e8 = local_5e8 & 0xffffffff00000000;
  local_4a8 = 0.8;
  fStack_4a4 = 0.5;
  uStack_4a0 = 0x3e99999a;
  uStack_49c = 0x3f800000;
  local_5f0 = (undefined *)CONCAT44(param_6[0x21],(float)local_698);
  FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
  fVar13 = (float)(**(code **)(*param_1 + 0x30))(param_1);
  if (fVar13 <= 0.0) {
    fVar13 = param_6[0x4f];
    fVar6 = fVar13 - param_6[0x50];
  }
  else {
    fVar13 = (float)(**(code **)(*param_1 + 0x30))(param_1);
    fVar13 = fVar13 + param_6[0x50];
    fVar6 = (float)(**(code **)(*param_1 + 0x30))(param_1);
  }
  if (fVar13 != 0.0) {
    local_698._4_4_ = param_6[0x21];
    pfVar2 = param_6 + 0xd;
    fStack_4a4 = 0.0;
    uStack_4a0 = 0;
    puStack_690._0_4_ = 0.0;
    local_698._0_4_ = fVar13;
    local_4a8 = fVar13;
    FUN_038c5944(&local_578,&local_4a8,&local_698,pfVar2,pfVar2);
    local_698._4_4_ = param_6[0x21];
    fStack_4a4 = 0.0;
    uStack_4a0 = 0;
    puStack_690._0_4_ = 0.0;
    local_698._0_4_ = fVar6;
    local_4a8 = fVar6;
    FUN_038c5944(&local_578,&local_4a8,&local_698,pfVar2,pfVar2);
  }
  fVar11 = (float)(**(code **)(*param_1 + 0x28))(0,param_1);
  fVar6 = param_6[0x25];
  if (-1 < (int)fVar6) {
    iVar4 = -1;
    fVar11 = fVar11 * param_6[0x21];
    fVar7 = 0.0;
    do {
      iVar4 = iVar4 + 1;
      local_4a8 = (float)*(undefined8 *)(param_6 + 9);
      fStack_4a4 = (float)((ulong)*(undefined8 *)(param_6 + 9) >> 0x20);
      uStack_4a0 = (undefined4)*(undefined8 *)(param_6 + 0xb);
      uStack_49c = (undefined4)((ulong)*(undefined8 *)(param_6 + 0xb) >> 0x20);
      fVar9 = (fVar12 * (float)iVar4) / (float)(int)fVar6;
      fVar8 = (float)(**(code **)(*param_1 + 0x28))(fVar9,param_1);
      fVar8 = fVar8 * param_6[0x21];
      if (((0.0 < fVar13) && (0.0 < fVar13)) &&
         ((fVar6 = 0.0, fVar13 <= fVar9 ||
          (((fVar6 = param_6[0x50], 0.0 < fVar6 && (fVar13 - fVar6 < fVar9)) &&
           (fVar6 = 1.0 - (fVar9 - (fVar13 - fVar6)) / fVar6, fVar6 = fVar6 * fVar6, fVar6 < 1.0))))
         )) {
        fVar8 = fVar8 * fVar6;
        local_4a8 = (float)*(undefined8 *)(param_6 + 0xd);
        fStack_4a4 = (float)((ulong)*(undefined8 *)(param_6 + 0xd) >> 0x20);
        uStack_4a0 = (undefined4)*(undefined8 *)(param_6 + 0xf);
        uStack_49c = (undefined4)((ulong)*(undefined8 *)(param_6 + 0xf) >> 0x20);
      }
      puStack_690._0_4_ = 0.0;
      local_5f0 = (undefined *)CONCAT44(fVar8,fVar9);
      local_5e8 = local_5e8 & 0xffffffff00000000;
      local_698._0_4_ = fVar7;
      local_698._4_4_ = fVar11;
      FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
      fVar6 = param_6[0x25];
      fVar11 = fVar8;
      fVar7 = fVar9;
    } while (iVar4 < (int)fVar6);
  }
  fVar13 = (float)(**(code **)(*param_1 + 0x28))(param_6[0x1e],param_1);
  fVar12 = param_6[0x1e];
  fVar6 = param_6[0x21];
  fStack_4a4 = 0.0;
  uStack_4a0 = 0;
  puStack_690._0_4_ = 0.0;
  local_698._0_4_ = fVar12;
  local_698._4_4_ = fVar6;
  local_4a8 = fVar12;
  FUN_038c5944(&local_578,&local_4a8,&local_698,param_6 + 0x15,param_6 + 0x15);
  if ((*(ushort *)(param_6 + 0x51) >> 2 & 1) != 0) {
    iVar4 = 1;
    fVar11 = param_6[0x1e];
    fVar7 = 0.0;
    do {
      fVar9 = ((float)iVar4 + (float)iVar4) * 3.1415927 * 0.03125;
      fVar8 = cosf(fVar9);
      fVar9 = sinf(fVar9);
      local_698._4_4_ = 0.0;
      fVar8 = fVar8 * param_6[0x1e];
      fVar9 = fVar9 * param_6[0x1e];
      local_4a8 = 1.0;
      fStack_4a4 = 0.0;
      uStack_4a0 = 0;
      uStack_49c = 0x3f800000;
      local_5f0 = (undefined *)(ulong)(uint)fVar8;
      local_698._0_4_ = fVar11;
      puStack_690._0_4_ = fVar7;
      local_5e8._0_4_ = fVar9;
      FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
      puStack_690._0_4_ = 0.0;
      local_5f0 = (undefined *)CONCAT44(fVar9,fVar8);
      local_5e8 = (ulong)local_5e8._4_4_ << 0x20;
      local_4a8 = 0.0;
      fStack_4a4 = 1.0;
      uStack_4a0 = 0;
      uStack_49c = 0x3f800000;
      local_698._0_4_ = fVar11;
      local_698._4_4_ = fVar7;
      FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
      local_698._0_4_ = 0.0;
      local_5f0 = (undefined *)((ulong)(uint)fVar8 << 0x20);
      local_5e8 = CONCAT44(local_5e8._4_4_,fVar9);
      local_4a8 = 0.0;
      fStack_4a4 = 0.0;
      uStack_4a0 = 0x3f800000;
      uStack_49c = 0x3f800000;
      local_698._4_4_ = fVar11;
      puStack_690._0_4_ = fVar7;
      FUN_038c5944(&local_578,&local_698,&local_5f0,&local_4a8,&local_4a8);
      iVar4 = iVar4 + 1;
      fVar11 = fVar8;
      fVar7 = fVar9;
    } while (iVar4 != 0x21);
  }
  fVar6 = fVar13 * fVar6;
  local_5e0 = 0;
  uStack_5d8 = 0;
  local_5a0 = 0;
  local_598 = 0x7f800000;
  local_590 = (float *)0x0;
  local_5c0 = &DAT_3f8000003f800000;
  local_5b8 = &DAT_3f8000003f800000;
  local_5f0 = PTR_DAT_04bd0f00 + 0x10;
  local_5b0 = &DAT_3f8000003f800000;
  uStack_5a8 = 0;
  local_5d0 = *(long **)PTR_DAT_04bd0c58;
  if (*(long **)PTR_DAT_04bd0ef8 != (long *)0x0) {
    local_5d0 = *(long **)PTR_DAT_04bd0ef8;
  }
  local_588 = 0;
  local_5c8 = 0;
  local_584 = 1;
  local_5e8 = param_5;
  local_580 = param_2;
  FUN_038e4d90(&DAT_05ae7800);
  (**(code **)(*local_5d0 + 0x38))(local_5d0,local_580);
  local_688 = 0x80;
  local_584 = 0;
  local_605 = 0;
  local_684[0] = 0;
  puStack_690 = local_684;
  local_5b8 = *(undefined1 **)(param_6 + 0x19);
  local_5b0 = *(undefined1 **)(param_6 + 0x1b);
  local_5c0 = (undefined1 *)0x3f99999a3f99999a;
  fVar11 = local_548._4_4_ +
           local_550._4_4_ * 0.0 + fVar12 * (float)local_550 + (float)local_548 * 0.0;
  fVar7 = local_538._4_4_ +
          local_540._4_4_ * 0.0 + fVar12 * (float)local_540 + (float)local_538 * 0.0;
  fVar8 = local_528._4_4_ +
          local_530._4_4_ * 0.0 + fVar12 * (float)local_530 + (float)local_528 * 0.0;
  local_698 = PTR_DAT_04bb2d88 + 0x10;
  fStack_5f8 = *(float *)(param_3 + 0x24) +
               fVar7 * *(float *)(param_3 + 0x1c) + fVar11 * *(float *)(param_3 + 0x18) +
               fVar8 * *(float *)(param_3 + 0x20);
  local_5fc = *(float *)(param_3 + 0x14) +
              fVar7 * *(float *)(param_3 + 0xc) + fVar11 * *(float *)(param_3 + 8) +
              fVar8 * *(float *)(param_3 + 0x10);
  local_5f4 = *(float *)(param_3 + 0x34) +
              fVar7 * *(float *)(param_3 + 0x2c) + fVar11 * *(float *)(param_3 + 0x28) +
              fVar8 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4a8,&local_5fc);
  fVar11 = local_4a8 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar7 = fStack_4a4 * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  FUN_038d1270((double)fVar12,&local_698,"\n%.2f m");
  local_5b8 = (undefined1 *)0x0;
  local_5b0 = (undefined1 *)0x3f80000000000000;
  local_5c8 = CONCAT44(fVar7 + -2.0,fVar11 + 2.0);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  local_5b8 = *(undefined1 **)(param_6 + 0x19);
  local_5c8 = CONCAT44(fVar7,fVar11);
  local_5b0 = *(undefined1 **)(param_6 + 0x1b);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  fVar11 = *(float *)((long)param_1 + 0x6c);
  fVar8 = local_548._4_4_ +
          local_550._4_4_ * 0.0 + fVar11 * (float)local_550 + (float)local_548 * 0.0;
  fVar7 = local_528._4_4_ +
          local_530._4_4_ * 0.0 + fVar11 * (float)local_530 + (float)local_528 * 0.0;
  fVar11 = local_538._4_4_ +
           local_540._4_4_ * 0.0 + fVar11 * (float)local_540 + (float)local_538 * 0.0;
  local_5fc = *(float *)(param_3 + 0x14) +
              fVar11 * *(float *)(param_3 + 0xc) + fVar8 * *(float *)(param_3 + 8) +
              fVar7 * *(float *)(param_3 + 0x10);
  fStack_5f8 = *(float *)(param_3 + 0x24) +
               fVar11 * *(float *)(param_3 + 0x1c) + fVar8 * *(float *)(param_3 + 0x18) +
               fVar7 * *(float *)(param_3 + 0x20);
  local_5f4 = *(float *)(param_3 + 0x34) +
              fVar11 * *(float *)(param_3 + 0x2c) + fVar8 * *(float *)(param_3 + 0x28) +
              fVar7 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4a8,&local_5fc);
  fVar11 = local_4a8 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar7 = fStack_4a4 * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  FUN_038d1270((double)*(float *)((long)param_1 + 0x6c),&local_698,"\n%.2f m");
  local_5b8 = (undefined1 *)0x0;
  local_5b0 = (undefined1 *)0x3f80000000000000;
  local_5c8 = CONCAT44(fVar7 + -2.0,fVar11 + 2.0);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  local_5b8 = *(undefined1 **)(param_6 + 0x19);
  local_5c8 = CONCAT44(fVar7,fVar11);
  local_5b0 = *(undefined1 **)(param_6 + 0x1b);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  fVar11 = local_548._4_4_ +
           fVar6 * local_550._4_4_ + fVar12 * (float)local_550 + (float)local_548 * 0.0;
  fVar7 = local_538._4_4_ +
          fVar6 * local_540._4_4_ + fVar12 * (float)local_540 + (float)local_538 * 0.0;
  fVar12 = local_528._4_4_ +
           fVar6 * local_530._4_4_ + fVar12 * (float)local_530 + (float)local_528 * 0.0;
  local_5fc = *(float *)(param_3 + 0x14) +
              fVar7 * *(float *)(param_3 + 0xc) + fVar11 * *(float *)(param_3 + 8) +
              fVar12 * *(float *)(param_3 + 0x10);
  fStack_5f8 = *(float *)(param_3 + 0x24) +
               fVar7 * *(float *)(param_3 + 0x1c) + fVar11 * *(float *)(param_3 + 0x18) +
               fVar12 * *(float *)(param_3 + 0x20);
  local_5f4 = *(float *)(param_3 + 0x34) +
              fVar7 * *(float *)(param_3 + 0x2c) + fVar11 * *(float *)(param_3 + 0x28) +
              fVar12 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4a8,&local_5fc);
  fVar12 = local_4a8 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar6 = fStack_4a4 * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  FUN_038d1270((double)fVar13,&local_698,"   %.2f");
  local_5b8 = (undefined1 *)0x0;
  local_5b0 = (undefined1 *)0x3f80000000000000;
  local_5c8 = CONCAT44(fVar6 + -2.0,fVar12 + 2.0);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  local_5b8 = *(undefined1 **)(param_6 + 0x19);
  local_5c8 = CONCAT44(fVar6,fVar12);
  local_5b0 = *(undefined1 **)(param_6 + 0x1b);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  fVar13 = param_6[0x21] * 1.2;
  fVar6 = local_548._4_4_ +
          fVar13 * local_550._4_4_ + (float)local_550 * 0.0 + (float)local_548 * 0.0;
  fVar12 = local_528._4_4_ +
           fVar13 * local_530._4_4_ + (float)local_530 * 0.0 + (float)local_528 * 0.0;
  fVar13 = local_538._4_4_ +
           fVar13 * local_540._4_4_ + (float)local_540 * 0.0 + (float)local_538 * 0.0;
  local_5fc = *(float *)(param_3 + 0x14) +
              fVar13 * *(float *)(param_3 + 0xc) + fVar6 * *(float *)(param_3 + 8) +
              fVar12 * *(float *)(param_3 + 0x10);
  fStack_5f8 = *(float *)(param_3 + 0x24) +
               fVar13 * *(float *)(param_3 + 0x1c) + fVar6 * *(float *)(param_3 + 0x18) +
               fVar12 * *(float *)(param_3 + 0x20);
  local_5f4 = *(float *)(param_3 + 0x34) +
              fVar13 * *(float *)(param_3 + 0x2c) + fVar6 * *(float *)(param_3 + 0x28) +
              fVar12 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4a8,&local_5fc);
  fVar13 = local_4a8 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar12 = fStack_4a4 * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  (**(code **)(*(long *)(param_6 + 0x26) + 0x18))(param_6 + 0x26);
  FUN_038d1270(&local_698,&DAT_0409e973,*(undefined8 *)(param_6 + 0x28));
  local_5b8 = (undefined1 *)0x0;
  local_5b0 = (undefined1 *)0x3f80000000000000;
  local_5c8 = CONCAT44(fVar12 + -2.0,fVar13 + 2.0);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  local_5b8 = *(undefined1 **)(param_6 + 0x19);
  local_5c8 = CONCAT44(fVar12,fVar13);
  local_5b0 = *(undefined1 **)(param_6 + 0x1b);
  (**(code **)(local_698 + 0x18))(&local_698);
  pfVar2 = &local_4a8;
  iVar4 = 0x200;
  if (local_590 != (float *)0x0) {
    pfVar2 = local_590;
    iVar4 = local_588;
  }
  FUN_038d4cb0(pfVar2,iVar4,puStack_690,iVar4 + -1);
  FUN_038e7464(&local_5f0,pfVar2,0xffffffff,1,0);
  local_584 = 1;
  (**(code **)(*local_5d0 + 0x40))(local_5d0,local_580);
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x18))(*(long **)PTR_DAT_04bd0c50,local_558);
  return;
}

