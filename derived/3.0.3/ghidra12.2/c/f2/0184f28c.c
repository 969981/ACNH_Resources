
undefined1 FUN_0184f28c(float param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int local_a4;
  char local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  byte local_78 [4];
  undefined4 local_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  pfVar3 = (float *)FUN_0252d9bc(0);
  if (pfVar3 == (float *)0x0) {
    return 0;
  }
  DAT_052a1980 = (**(code **)(*param_2 + 0x2b0))(param_2);
  local_74 = 0;
  local_80 = pfVar3[2];
  local_78[0] = *(byte *)((long)param_2 + 0x494) ^ 1;
  local_88 = *(long *)pfVar3;
  local_98 = *(undefined8 *)((long)param_2 + 0x334);
  local_90 = *(undefined4 *)((long)param_2 + 0x33c);
  fVar6 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  fVar7 = (float)FUN_015cb8d4(&local_98,1);
  local_98 = CONCAT44(fVar6 + fVar7,(undefined4)local_98);
  uVar1 = FUN_01a1e5d0(&local_88,&local_98,&LAB_0184eea0,local_78);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      *(undefined1 *)(param_2 + 0x94) = 0;
      param_2[0x65] = local_88;
      goto LAB_0184f8c8;
    }
    fVar6 = (float)local_88 - *(float *)((long)param_2 + 0x334);
    fVar7 = local_80 - *(float *)((long)param_2 + 0x33c);
    if (param_1 < SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
      *(float *)(param_2 + 0x65) = (float)local_88;
      *(float *)(param_2 + 0x66) = local_80;
      *(undefined1 *)(param_2 + 0x94) = 0;
      *(undefined4 *)((long)param_2 + 0x32c) = local_88._4_4_;
      if (param_3 == (undefined1 *)0x0) {
        return 1;
      }
      *param_3 = (char)((uVar1 & 2) >> 1);
      return 1;
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar4 = param_2[0x60];
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  puStack_b0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = &LAB_0184f1e0;
  local_a8 = *(int *)(PTR_DAT_04bb5d40 + 8);
  local_a4 = *(int *)(PTR_DAT_04bb5d40 + 0xc);
  local_68 = (int)((float)(int)*(float *)(lVar4 + 0x278) / 5.0) -
             (uint)(*(float *)(lVar4 + 0x278) < 0.0);
  iStack_64 = (int)((float)(int)*(float *)(lVar4 + 0x280) / 5.0) -
              (uint)(*(float *)(lVar4 + 0x280) < 0.0);
  local_70 = puStack_b0;
  FUN_01946dd0(*(undefined4 *)(lVar4 + 0x27c),&local_b8,&local_70,local_78);
  if ((char)(local_a0[1] + local_a0[0] + local_a0[2]) == -local_a0[3]) {
    return 0;
  }
  if (((char)param_2[0x94] == '\0') || (local_a0[*(uint *)((long)param_2 + 0x49c)] == '\0')) {
    if (local_a0[0] == '\0') {
      fVar6 = 3.4028235e+38;
    }
    else {
      fVar6 = (float)local_a8 * 0.5;
      uVar1 = 0;
      if (fVar6 != (float)(int)fVar6) {
        uVar1 = (uint)(fVar6 < 0.0);
      }
      fVar7 = (float)(local_a4 + 2) * 0.5;
      uVar5 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar5 = (uint)(fVar7 < 0.0);
      }
      fVar8 = (float)(int)((int)fVar6 - uVar1) * 10.0 + 5.0;
      fVar9 = (float)(int)((int)fVar7 - uVar5) * 10.0 + 5.0;
      fVar6 = fVar8 - *pfVar3;
      fVar7 = fVar9 - pfVar3[2];
      fVar7 = fVar7 * fVar7 + fVar6 * fVar6;
      fVar6 = 3.4028235e+38;
      if (fVar7 < 3.4028235e+38) {
        *(undefined4 *)((long)param_2 + 0x49c) = 0;
        fVar6 = (float)local_a8 * 5.0 + 5.0;
        uVar2 = FUN_006f0400(fVar6 - fVar6,
                             ((float)(local_a4 + 2) * 5.0 + 5.0) - ((float)local_a4 * 5.0 + 5.0));
        *(undefined4 *)(param_2 + 0x93) = uVar2;
        local_88 = CONCAT44(local_88._4_4_,fVar8);
        *(undefined1 *)(param_2 + 0x94) = 1;
        fVar6 = fVar7;
        local_80 = fVar9;
      }
    }
    if (local_a0[1] != '\0') {
      fVar7 = (float)(local_a8 + 2) * 0.5;
      uVar1 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar1 = (uint)(fVar7 < 0.0);
      }
      fVar8 = (float)local_a4 * 0.5;
      uVar5 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar5 = (uint)(fVar8 < 0.0);
      }
      fVar10 = (float)(int)((int)fVar7 - uVar1) * 10.0 + 5.0;
      fVar9 = (float)(int)((int)fVar8 - uVar5) * 10.0 + 5.0;
      fVar7 = fVar10 - *pfVar3;
      fVar8 = fVar9 - pfVar3[2];
      fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
      if (fVar7 < fVar6) {
        *(undefined4 *)((long)param_2 + 0x49c) = 1;
        fVar6 = (float)local_a4 * 5.0 + 5.0;
        uVar2 = FUN_006f0400(((float)(local_a8 + 2) * 5.0 + 5.0) - ((float)local_a8 * 5.0 + 5.0),
                             fVar6 - fVar6);
        *(undefined4 *)(param_2 + 0x93) = uVar2;
        local_88 = CONCAT44(local_88._4_4_,fVar10);
        *(undefined1 *)(param_2 + 0x94) = 1;
        fVar6 = fVar7;
        local_80 = fVar9;
      }
    }
    if (local_a0[2] != '\0') {
      fVar7 = (float)local_a8 * 0.5;
      uVar1 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar1 = (uint)(fVar7 < 0.0);
      }
      fVar8 = (float)(local_a4 + -2) * 0.5;
      uVar5 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar5 = (uint)(fVar8 < 0.0);
      }
      fVar10 = (float)(int)((int)fVar7 - uVar1) * 10.0 + 5.0;
      fVar9 = (float)(int)((int)fVar8 - uVar5) * 10.0 + 5.0;
      fVar7 = fVar10 - *pfVar3;
      fVar8 = fVar9 - pfVar3[2];
      fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
      if (fVar7 < fVar6) {
        *(undefined4 *)((long)param_2 + 0x49c) = 2;
        fVar6 = (float)local_a8 * 5.0 + 5.0;
        uVar2 = FUN_006f0400(fVar6 - fVar6,
                             ((float)(local_a4 + -2) * 5.0 + 5.0) - ((float)local_a4 * 5.0 + 5.0));
        *(undefined4 *)(param_2 + 0x93) = uVar2;
        local_88 = CONCAT44(local_88._4_4_,fVar10);
        *(undefined1 *)(param_2 + 0x94) = 1;
        fVar6 = fVar7;
        local_80 = fVar9;
      }
    }
    if (local_a0[3] != '\0') {
      fVar7 = (float)(local_a8 + -2) * 0.5;
      uVar1 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar1 = (uint)(fVar7 < 0.0);
      }
      fVar8 = (float)local_a4 * 0.5;
      uVar5 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar5 = (uint)(fVar8 < 0.0);
      }
      fVar10 = (float)(int)((int)fVar7 - uVar1) * 10.0 + 5.0;
      fVar9 = (float)(int)((int)fVar8 - uVar5) * 10.0 + 5.0;
      fVar7 = fVar10 - *pfVar3;
      fVar8 = fVar9 - pfVar3[2];
      if (fVar8 * fVar8 + fVar7 * fVar7 < fVar6) {
        *(undefined4 *)((long)param_2 + 0x49c) = 3;
        fVar6 = (float)local_a4 * 5.0 + 5.0;
        uVar2 = FUN_006f0400(((float)(local_a8 + -2) * 5.0 + 5.0) - ((float)local_a8 * 5.0 + 5.0),
                             fVar6 - fVar6);
        *(undefined4 *)(param_2 + 0x93) = uVar2;
        local_88 = CONCAT44(local_88._4_4_,fVar10);
        *(undefined1 *)(param_2 + 0x94) = 1;
        local_80 = fVar9;
      }
    }
    *(undefined4 *)((long)param_2 + 0x32c) = local_88._4_4_;
    *(float *)(param_2 + 0x65) = (float)local_88;
  }
  else {
    pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 0x93) >> 0x14) & 0xff0));
    fVar6 = (float)(*(uint *)(param_2 + 0x93) & 0xffffff) * 5.9604645e-08;
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    *(float *)(param_2 + 0x65) =
         *(float *)((long)param_2 + 0x334) + (*pfVar3 + fVar6 * pfVar3[1]) * 15.625;
    local_80 = (fVar7 + fVar6 * fVar8) * 15.625 + *(float *)((long)param_2 + 0x33c);
    *(float *)((long)param_2 + 0x32c) = *(float *)(param_2 + 0x67) + 0.0;
  }
LAB_0184f8c8:
  *(float *)(param_2 + 0x66) = local_80;
  return 1;
}

