
void FUN_03b777e0(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
                 float *param_6)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
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
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined1 local_694 [127];
  undefined1 local_615;
  float local_60c;
  float fStack_608;
  float local_604;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  long *local_5e0;
  float local_5d8;
  float local_5d4;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  float *local_5a0;
  int local_598;
  undefined1 local_594;
  undefined8 local_590;
  undefined *local_588;
  undefined8 *local_580;
  long local_578;
  long local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined2 local_524 [50];
  undefined1 local_4bf;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  
  FUN_038e4cec(local_524);
  local_4bf = 2;
  local_524[0] = 0x101;
  FUN_038e4d90(local_524,param_2);
  local_540 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  uStack_538 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_550 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_548 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_560 = *(undefined8 *)PTR_DAT_04bb2f80;
  uStack_558 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x20);
  if ((*(byte *)(param_6 + 0x51) >> 3 & 1) == 0) {
    fVar13 = param_6[0x22];
    fVar12 = param_6[0x1d] * 0.017453292 * 0.5;
    fVar7 = cosf(fVar12);
    fVar12 = sinf(fVar12);
    fVar8 = fVar12 * 0.0;
    fVar10 = fVar12 * (fVar12 + fVar12);
    fVar15 = (fVar7 + fVar7) * fVar12;
    fVar9 = (fVar12 + fVar12) * fVar8;
    fVar11 = fVar8 * (fVar8 + fVar8);
    fVar7 = (fVar7 + fVar7) * fVar8;
    fVar12 = fVar12 * (fVar8 + fVar8);
    local_548 = CONCAT44(param_6[1],fVar14 * (fVar9 - fVar7));
    local_560 = CONCAT44(fVar14 * (fVar12 - fVar7),fVar14 * ((1.0 - fVar10) - fVar11));
    local_540 = CONCAT44(fVar14 * (fVar7 + fVar9),fVar14 * (fVar11 - fVar15));
    uStack_558 = CONCAT44(*param_6,fVar14 * (fVar15 + fVar11));
    local_550 = CONCAT44(fVar14 * ((1.0 - fVar11) - fVar11),fVar14 * (fVar7 + fVar12));
    uStack_538 = CONCAT44(param_6[2],fVar14 * ((1.0 - fVar11) - fVar10));
  }
  else {
    fVar8 = param_6[3] - *param_6;
    fVar7 = param_6[5] - param_6[2];
    fVar12 = param_6[4] - param_6[1];
    fVar13 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar7 * fVar7);
    if (0.0 < fVar13) {
      fVar9 = 1.0 / fVar13;
      fVar8 = fVar8 * fVar9;
      fVar12 = fVar12 * fVar9;
      fVar7 = fVar7 * fVar9;
    }
    fVar9 = fVar12 * 0.0 - fVar8;
    fVar11 = fVar7 + fVar12 * -0.0;
    fVar10 = fVar7 * -0.0 + fVar8 * 0.0;
    fVar15 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9);
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar11 = fVar11 * fVar15;
      fVar10 = fVar10 * fVar15;
      fVar9 = fVar9 * fVar15;
    }
    fVar17 = -(fVar7 * fVar10) + fVar9 * fVar12;
    fVar16 = fVar9 * -fVar8 + fVar11 * fVar7;
    fVar15 = -(fVar12 * fVar11) + fVar10 * fVar8;
    fVar18 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15);
    if (0.0 < fVar18) {
      fVar18 = 1.0 / fVar18;
      fVar17 = fVar17 * fVar18;
      fVar16 = fVar16 * fVar18;
      fVar15 = fVar15 * fVar18;
    }
    fVar13 = fVar13 / fVar14;
    local_560 = CONCAT44(fVar14 * fVar17,fVar14 * fVar8);
    local_550 = CONCAT44(fVar14 * fVar16,fVar14 * fVar12);
    local_540 = CONCAT44(fVar14 * fVar15,fVar14 * fVar7);
    uStack_558 = CONCAT44(*param_6,fVar14 * fVar11);
    local_548 = CONCAT44(param_6[1],fVar14 * fVar10);
    uStack_538 = CONCAT44(param_6[2],fVar14 * fVar9);
  }
  lVar6 = param_3 + 8;
  local_588 = PTR_DAT_04bd0d30 + 0x10;
  local_578 = lVar6;
  local_568 = param_2;
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) == '\0') goto LAB_03b77b14;
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
  }
  (**(code **)(*param_4 + 0x60))
            (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,*(undefined4 *)((long)param_4 + 0x8c))
  ;
  *(undefined1 *)((long)param_4 + 9) = 0;
LAB_03b77b14:
  local_570 = (long)param_4 + 0x4c;
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x10))(*(long **)PTR_DAT_04bd0c50,param_2,lVar6);
  puVar2 = PTR_DAT_04bb2150;
  local_580 = &local_560;
  if ((*(ushort *)(param_6 + 0x51) >> 1 & 1) == 0) {
    fStack_4ac = param_6[0x21];
    local_4b0 = 0.0;
    fStack_4a8 = 0.0;
    pfVar5 = param_6 + 0x11;
    FUN_038c5944(&local_588,PTR_DAT_04bb2150,&local_4b0,pfVar5,pfVar5);
    fStack_4ac = 0.0;
    fStack_4a8 = 0.0;
    local_4b0 = fVar13;
    FUN_038c5944(&local_588,puVar2,&local_4b0,pfVar5,pfVar5);
    fStack_4ac = param_6[0x21];
    local_4b0 = 0.0;
    fStack_4a8 = 0.0;
    local_6a0 = (undefined1 *)((ulong)local_6a0._4_4_ << 0x20);
    local_6a8 = (undefined *)CONCAT44(fStack_4ac,fVar13);
    FUN_038c5944(&local_588,&local_4b0,&local_6a8,pfVar5,pfVar5);
    fStack_4ac = 0.0;
    fStack_4a8 = 0.0;
    local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
    local_6a8 = (undefined *)CONCAT44(param_6[0x21],fVar13);
    local_4b0 = fVar13;
    FUN_038c5944(&local_588,&local_4b0,&local_6a8,pfVar5,pfVar5);
  }
  else {
    fVar14 = param_6[0x24];
    if (-1 < (int)fVar14) {
      iVar3 = -1;
      do {
        iVar3 = iVar3 + 1;
        local_4b0 = 0.0;
        fStack_4a8 = 0.0;
        local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
        fStack_4ac = (param_6[0x21] * (float)iVar3) / (float)(int)fVar14;
        local_6a8 = (undefined *)CONCAT44(fStack_4ac,fVar13);
        FUN_038c5944(&local_588,&local_4b0,&local_6a8,param_6 + 0x11,param_6 + 0x11);
        fVar14 = param_6[0x24];
      } while (iVar3 < (int)fVar14);
    }
    if (0.0 < param_6[0x23]) {
      iVar3 = (int)(fVar13 / param_6[0x23]);
      if (999 < iVar3) {
        iVar3 = 1000;
      }
      if (-1 < iVar3) {
        iVar4 = 0;
        do {
          fStack_4ac = 0.0;
          fStack_4a8 = 0.0;
          local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
          local_4b0 = param_6[0x23] * (float)iVar4;
          local_6a8 = (undefined *)CONCAT44(param_6[0x21],local_4b0);
          FUN_038c5944(&local_588,&local_4b0,&local_6a8,param_6 + 0x11,param_6 + 0x11);
          iVar4 = iVar4 + 1;
        } while (iVar3 + 1 != iVar4);
      }
    }
  }
  fVar14 = param_6[0x4f];
  if (fVar14 != 0.0) {
    pfVar5 = param_6 + 0xd;
    fStack_4ac = 0.0;
    fStack_4a8 = 0.0;
    local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
    local_6a8 = (undefined *)CONCAT44(param_6[0x21],fVar14);
    local_4b0 = fVar14;
    FUN_038c5944(&local_588,&local_4b0,&local_6a8,pfVar5,pfVar5);
    fStack_4ac = 0.0;
    fStack_4a8 = 0.0;
    local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
    local_4b0 = param_6[0x4f] - param_6[0x50];
    local_6a8 = (undefined *)CONCAT44(param_6[0x21],local_4b0);
    FUN_038c5944(&local_588,&local_4b0,&local_6a8,pfVar5,pfVar5);
  }
  fVar7 = (float)(**(code **)(*param_1 + 0x28))(0,param_1);
  fVar14 = param_6[0x25];
  if (-1 < (int)fVar14) {
    iVar3 = -1;
    fVar7 = fVar7 * param_6[0x21];
    fVar12 = 0.0;
    do {
      iVar3 = iVar3 + 1;
      local_4b0 = (float)*(undefined8 *)(param_6 + 9);
      fStack_4ac = (float)((ulong)*(undefined8 *)(param_6 + 9) >> 0x20);
      fStack_4a8 = (float)*(undefined8 *)(param_6 + 0xb);
      fStack_4a4 = (float)((ulong)*(undefined8 *)(param_6 + 0xb) >> 0x20);
      fVar9 = (fVar13 * (float)iVar3) / (float)(int)fVar14;
      fVar8 = (float)(**(code **)(*param_1 + 0x28))(fVar9,param_1);
      fVar8 = fVar8 * param_6[0x21];
      fVar14 = param_6[0x4f];
      if (((0.0 < fVar14) && (0.0 < fVar14)) &&
         ((fVar10 = 0.0, fVar14 <= fVar9 ||
          (((fVar10 = param_6[0x50], 0.0 < fVar10 && (fVar14 - fVar10 < fVar9)) &&
           (fVar10 = 1.0 - (fVar9 - (fVar14 - fVar10)) / fVar10, fVar10 = fVar10 * fVar10,
           fVar10 < 1.0)))))) {
        fVar8 = fVar8 * fVar10;
        local_4b0 = (float)*(undefined8 *)(param_6 + 0xd);
        fStack_4ac = (float)((ulong)*(undefined8 *)(param_6 + 0xd) >> 0x20);
        fStack_4a8 = (float)*(undefined8 *)(param_6 + 0xf);
        fStack_4a4 = (float)((ulong)*(undefined8 *)(param_6 + 0xf) >> 0x20);
      }
      local_6a8 = (undefined *)CONCAT44(fVar7,fVar12);
      local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
      local_600 = (undefined **)CONCAT44(fVar8,fVar9);
      local_5f8 = local_5f8 & 0xffffffff00000000;
      FUN_038c5944(&local_588,&local_6a8,&local_600,&local_4b0,&local_4b0);
      fVar14 = param_6[0x25];
      fVar7 = fVar8;
      fVar12 = fVar9;
    } while (iVar3 < (int)fVar14);
  }
  puVar2 = PTR_DAT_04bd0c50;
  if ((long *)param_1[0xd] != param_1 + 0xc) {
    lVar6 = (long)*(int *)((long)param_1 + 0x74);
    pfVar5 = (float *)(param_1[0xd] - lVar6);
    do {
      fVar14 = *pfVar5;
      fVar13 = (float)(**(code **)(*param_1 + 0x28))(param_1);
      fVar7 = param_6[0x4e] + param_6[0x4e];
      fVar13 = fVar13 * param_6[0x21];
      fVar12 = (float)local_560;
      fVar8 = (float)((ulong)local_560 >> 0x20);
      fVar9 = (float)uStack_558;
      local_4b0 = fVar7 * fVar12 + fVar8 * 0.0 + fVar9 * 0.0 + 0.0;
      fStack_4ac = fVar12 * 0.0 + fVar7 * fVar8 + fVar9 * 0.0 + 0.0;
      fStack_4a8 = fVar12 * 0.0 + fVar8 * 0.0 + fVar7 * fVar9 + 0.0;
      fStack_4a4 = (float)((ulong)uStack_558 >> 0x20) +
                   fVar14 * fVar12 + fVar13 * fVar8 + fVar9 * 0.0;
      fVar12 = (float)local_550;
      fVar8 = (float)((ulong)local_550 >> 0x20);
      fVar9 = (float)local_548;
      uStack_4a0 = CONCAT44(fVar12 * 0.0 + fVar7 * fVar8 + fVar9 * 0.0 + 0.0,
                            fVar7 * fVar12 + fVar8 * 0.0 + fVar9 * 0.0 + 0.0);
      uStack_498 = CONCAT44((float)((ulong)local_548 >> 0x20) +
                            fVar14 * fVar12 + fVar13 * fVar8 + fVar9 * 0.0,
                            fVar12 * 0.0 + fVar8 * 0.0 + fVar7 * fVar9 + 0.0);
      fVar12 = (float)local_540;
      fVar8 = (float)((ulong)local_540 >> 0x20);
      fVar10 = (float)((ulong)uStack_538 >> 0x20);
      fVar9 = (float)uStack_538;
      local_490 = CONCAT44(fVar12 * 0.0 + fVar7 * fVar8 + fVar9 * 0.0 + 0.0,
                           fVar7 * fVar12 + fVar8 * 0.0 + fVar9 * 0.0 + 0.0);
      uStack_488 = CONCAT44(fVar10 + fVar14 * fVar12 + fVar13 * fVar8 + fVar9 * 0.0,
                            fVar12 * 0.0 + fVar8 * 0.0 + fVar7 * fVar9 + 0.0);
      (**(code **)(**(long **)puVar2 + 0x50))
                (local_490,CONCAT44(fVar10,fVar10),*(long **)puVar2,param_2,&local_4b0,param_6 + 9,
                 param_6 + 9);
      pfVar5 = (float *)(*(long *)((long)pfVar5 + lVar6 + 8) - lVar6);
    } while (pfVar5 != (float *)((long)(param_1 + 0xc) - lVar6));
  }
  fVar14 = (float)(**(code **)(*param_1 + 0x28))(param_6[0x1e],param_1);
  fVar13 = param_6[0x1e];
  fVar7 = param_6[0x21];
  fStack_4ac = 0.0;
  fStack_4a8 = 0.0;
  local_6a0 = (undefined1 *)((ulong)local_6a0 & 0xffffffff00000000);
  local_6a8 = (undefined *)CONCAT44(fVar7,fVar13);
  local_4b0 = fVar13;
  FUN_038c5944(&local_588,&local_4b0,&local_6a8,param_6 + 0x15,param_6 + 0x15);
  if ((*(ushort *)(param_6 + 0x51) >> 2 & 1) != 0) {
    iVar3 = 1;
    fVar12 = param_6[0x1e];
    fVar8 = 0.0;
    do {
      fVar10 = ((float)iVar3 + (float)iVar3) * 3.1415927 * 0.03125;
      fVar9 = cosf(fVar10);
      fVar10 = sinf(fVar10);
      local_6a8 = (undefined *)(ulong)(uint)fVar12;
      fVar9 = fVar9 * param_6[0x1e];
      fVar10 = fVar10 * param_6[0x1e];
      local_4b0 = 1.0;
      fStack_4ac = 0.0;
      fStack_4a8 = 0.0;
      fStack_4a4 = 1.0;
      local_600 = (undefined **)(ulong)(uint)fVar9;
      local_6a0._0_4_ = fVar8;
      local_5f8._0_4_ = fVar10;
      FUN_038c5944(&local_588,&local_6a8,&local_600,&local_4b0,&local_4b0);
      local_6a8 = (undefined *)CONCAT44(fVar8,fVar12);
      local_6a0 = (undefined1 *)((ulong)local_6a0._4_4_ << 0x20);
      local_600 = (undefined **)CONCAT44(fVar10,fVar9);
      local_5f8 = (ulong)local_5f8._4_4_ << 0x20;
      local_4b0 = 0.0;
      fStack_4ac = 1.0;
      fStack_4a8 = 0.0;
      fStack_4a4 = 1.0;
      FUN_038c5944(&local_588,&local_6a8,&local_600,&local_4b0,&local_4b0);
      local_6a8 = (undefined *)((ulong)(uint)fVar12 << 0x20);
      local_6a0 = (undefined1 *)CONCAT44(local_6a0._4_4_,fVar8);
      local_600 = (undefined **)((ulong)(uint)fVar9 << 0x20);
      local_5f8 = CONCAT44(local_5f8._4_4_,fVar10);
      local_4b0 = 0.0;
      fStack_4ac = 0.0;
      fStack_4a8 = 1.0;
      fStack_4a4 = 1.0;
      FUN_038c5944(&local_588,&local_6a8,&local_600,&local_4b0,&local_4b0);
      iVar3 = iVar3 + 1;
      fVar12 = fVar9;
      fVar8 = fVar10;
    } while (iVar3 != 0x21);
  }
  fVar7 = fVar14 * fVar7;
  local_5a8 = 0x7f800000;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_600 = &PTR_LAB_04b65868;
  local_5a0 = (float *)0x0;
  local_598 = 0;
  plVar1 = DAT_05ae7470;
  if (*(long **)PTR_DAT_04bd0ef8 != (long *)0x0) {
    plVar1 = *(long **)PTR_DAT_04bd0ef8;
  }
  local_5f8 = param_5;
  local_5e0 = plVar1;
  local_590 = param_2;
  FUN_038e4d90(&DAT_05ae7800,param_2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  local_5d0 = 0x3f99999a3f99999a;
  local_594 = 0;
  local_615 = 0;
  local_694[0] = 0;
  local_698 = 0x80;
  local_6a0 = local_694;
  fVar12 = uStack_558._4_4_ +
           local_560._4_4_ * 0.0 + fVar13 * (float)local_560 + (float)uStack_558 * 0.0;
  fVar8 = local_548._4_4_ +
          local_550._4_4_ * 0.0 + fVar13 * (float)local_550 + (float)local_548 * 0.0;
  fVar9 = uStack_538._4_4_ +
          local_540._4_4_ * 0.0 + fVar13 * (float)local_540 + (float)uStack_538 * 0.0;
  local_6a8 = PTR_DAT_04bb2d88 + 0x10;
  fStack_608 = *(float *)(param_3 + 0x24) +
               fVar8 * *(float *)(param_3 + 0x1c) + fVar12 * *(float *)(param_3 + 0x18) +
               fVar9 * *(float *)(param_3 + 0x20);
  local_60c = *(float *)(param_3 + 0x14) +
              fVar8 * *(float *)(param_3 + 0xc) + fVar12 * *(float *)(param_3 + 8) +
              fVar9 * *(float *)(param_3 + 0x10);
  local_604 = *(float *)(param_3 + 0x34) +
              fVar8 * *(float *)(param_3 + 0x2c) + fVar12 * *(float *)(param_3 + 0x28) +
              fVar9 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4b0,&local_60c);
  fVar12 = local_4b0 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar8 = fStack_4ac * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  FUN_038d1270((double)fVar13,&local_6a8,"\n%.2f m");
  local_5c8 = 0;
  uStack_5c0 = 0x3f80000000000000;
  local_5d8 = fVar12 + 2.0;
  local_5d4 = fVar8 + -2.0;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  local_5c8 = *(undefined8 *)(param_6 + 0x19);
  uStack_5c0 = *(undefined8 *)(param_6 + 0x1b);
  local_5d8 = fVar12;
  local_5d4 = fVar8;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  fVar12 = uStack_558._4_4_ +
           fVar7 * local_560._4_4_ + fVar13 * (float)local_560 + (float)uStack_558 * 0.0;
  fVar8 = local_548._4_4_ +
          fVar7 * local_550._4_4_ + fVar13 * (float)local_550 + (float)local_548 * 0.0;
  fVar13 = uStack_538._4_4_ +
           fVar7 * local_540._4_4_ + fVar13 * (float)local_540 + (float)uStack_538 * 0.0;
  local_60c = *(float *)(param_3 + 0x14) +
              fVar8 * *(float *)(param_3 + 0xc) + fVar12 * *(float *)(param_3 + 8) +
              fVar13 * *(float *)(param_3 + 0x10);
  fStack_608 = *(float *)(param_3 + 0x24) +
               fVar8 * *(float *)(param_3 + 0x1c) + fVar12 * *(float *)(param_3 + 0x18) +
               fVar13 * *(float *)(param_3 + 0x20);
  local_604 = *(float *)(param_3 + 0x34) +
              fVar8 * *(float *)(param_3 + 0x2c) + fVar12 * *(float *)(param_3 + 0x28) +
              fVar13 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4b0,&local_60c);
  fVar13 = local_4b0 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar7 = fStack_4ac * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  FUN_038d1270((double)fVar14,&local_6a8,"   %.2f");
  local_5d4 = fVar7 + -2.0;
  local_5c8 = 0;
  uStack_5c0 = 0x3f80000000000000;
  local_5d8 = fVar13 + 2.0;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  local_5c8 = *(undefined8 *)(param_6 + 0x19);
  uStack_5c0 = *(undefined8 *)(param_6 + 0x1b);
  local_5d8 = fVar13;
  local_5d4 = fVar7;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  fVar14 = param_6[0x21] * 1.2;
  fVar7 = uStack_558._4_4_ +
          fVar14 * local_560._4_4_ + (float)local_560 * 0.0 + (float)uStack_558 * 0.0;
  fVar13 = uStack_538._4_4_ +
           fVar14 * local_540._4_4_ + (float)local_540 * 0.0 + (float)uStack_538 * 0.0;
  fVar14 = local_548._4_4_ +
           fVar14 * local_550._4_4_ + (float)local_550 * 0.0 + (float)local_548 * 0.0;
  local_60c = *(float *)(param_3 + 0x14) +
              fVar14 * *(float *)(param_3 + 0xc) + fVar7 * *(float *)(param_3 + 8) +
              fVar13 * *(float *)(param_3 + 0x10);
  fStack_608 = *(float *)(param_3 + 0x24) +
               fVar14 * *(float *)(param_3 + 0x1c) + fVar7 * *(float *)(param_3 + 0x18) +
               fVar13 * *(float *)(param_3 + 0x20);
  local_604 = *(float *)(param_3 + 0x34) +
              fVar14 * *(float *)(param_3 + 0x2c) + fVar7 * *(float *)(param_3 + 0x28) +
              fVar13 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_4b0,&local_60c);
  fVar14 = local_4b0 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  fVar13 = fStack_4ac * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  (**(code **)(*(long *)(param_6 + 0x26) + 0x18))(param_6 + 0x26);
  FUN_038d1270(&local_6a8,&DAT_0409e973,*(undefined8 *)(param_6 + 0x28));
  local_5d8 = fVar14 + 2.0;
  local_5d4 = fVar13 + -2.0;
  local_5c8 = 0;
  uStack_5c0 = 0x3f80000000000000;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  local_5c8 = *(undefined8 *)(param_6 + 0x19);
  uStack_5c0 = *(undefined8 *)(param_6 + 0x1b);
  local_5d8 = fVar14;
  local_5d4 = fVar13;
  (**(code **)(local_6a8 + 0x18))(&local_6a8);
  pfVar5 = &local_4b0;
  iVar3 = 0x200;
  if (local_5a0 != (float *)0x0) {
    pfVar5 = local_5a0;
    iVar3 = local_598;
  }
  FUN_038d4cb0(pfVar5,iVar3,local_6a0,iVar3 + -1);
  FUN_038e7464(&local_600,pfVar5,0xffffffff,1,0);
  local_594 = 1;
  (**(code **)(*local_5e0 + 0x40))(local_5e0,local_590);
  (**(code **)(*DAT_05ae74c0 + 0x18))(DAT_05ae74c0,local_568);
  return;
}

