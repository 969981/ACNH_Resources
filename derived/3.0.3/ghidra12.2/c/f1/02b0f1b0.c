
/* WARNING: Removing unreachable block (ram,0x02b0f25c) */
/* WARNING: Removing unreachable block (ram,0x02b0f4cc) */
/* WARNING: Removing unreachable block (ram,0x02b0f5c4) */
/* WARNING: Removing unreachable block (ram,0x02b0f394) */
/* WARNING: Removing unreachable block (ram,0x02b0f6cc) */

void FUN_02b0f1b0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_168;
  undefined4 local_164;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [127];
  undefined1 local_b5;
  undefined4 local_b0;
  char local_ac;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  int local_60 [2];
  undefined1 local_58;
  
  param_1[2] = 0;
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0;
  uVar3 = *(undefined1 *)(param_3 + 0x1d);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar3;
  local_164 = *(undefined4 *)(param_3 + 8);
  switch(local_164) {
  case 1:
    local_168 = 0;
    FUN_02b674f0(&local_168,*(undefined4 *)(param_3 + 0x3c));
    iVar8 = local_168;
    fVar15 = 0.0;
    fVar17 = 0.0;
    local_150 = (undefined *)CONCAT44(local_150._4_4_,1);
    *(undefined4 *)param_1 = 1;
    *(int *)((long)param_1 + 4) = local_168;
    if (*(long **)(param_2 + 0x10) == (long *)0x0) {
LAB_02b0f774:
      fVar17 = 0.0;
      uVar14 = 0;
      fVar16 = 0.0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_2 + 0x10) + 0x38))();
      uVar14 = 0;
      fVar16 = 0.0;
      local_160 = 0;
      local_158 = 0.0;
      if (lVar9 != 0) {
        if (iVar8 != 0) {
          local_58 = 0;
          local_140 = local_134;
          local_60[0] = iVar8;
          local_60[1] = 0;
          local_138 = 0x80;
          local_b5 = 0;
          local_134[0] = 0;
          puStack_90 = PTR_DAT_04bbc1a0 + 0x10;
          local_b0 = 0;
          local_148 = PTR_DAT_04bb2d88 + 0x10;
          local_98 = 0;
          local_ac = '\0';
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_68 = 0;
          local_64 = 0;
          local_a0 = 0;
          uStack_80 = 0;
          uStack_70 = 0;
          local_150 = PTR_DAT_04bc49b8 + 0x10;
          local_88 = local_a8;
          local_78 = local_a8;
          FUN_02b34590(&local_150,local_60);
          if (local_ac == '\0') {
            fVar16 = 0.0;
          }
          else {
            fVar16 = (float)(*(int *)(lVar9 + 0x28) - (int)local_a0) * 5.0;
            local_160 = CONCAT44(local_160._4_4_,fVar16);
            fVar15 = (float)(*(int *)(lVar9 + 0x2c) - local_a0._4_4_) * 5.0;
            local_158 = fVar15;
          }
        }
        lVar9 = *(long *)PTR_DAT_04bb27c8;
        fVar17 = fVar15;
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0'))
        {
LAB_02b0f800:
          uVar14 = 0xc3fa0000;
        }
        else {
          uVar14 = FUN_0093b024(lVar9 + 0x28,&local_160,0);
          fVar17 = local_158;
          fVar16 = (float)local_160;
        }
      }
    }
    break;
  case 2:
    uVar7 = *(uint *)(param_3 + 0x40);
    fVar16 = 0.0;
    fVar17 = 0.0;
    if (9 < uVar7) {
      uVar7 = 0;
    }
    iVar8 = (&DAT_05636e30)[(int)uVar7];
    local_150 = (undefined *)CONCAT44(local_150._4_4_,2);
    *(undefined4 *)param_1 = 2;
    *(int *)((long)param_1 + 4) = iVar8;
    local_168 = iVar8;
    if (*(long **)(param_2 + 0x18) == (long *)0x0) {
      uVar14 = 0;
      fVar15 = 0.0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_2 + 0x18) + 0x38))();
      uVar14 = 0;
      fVar15 = 0.0;
      local_160 = 0;
      local_158 = 0.0;
      if (lVar9 != 0) {
        if (iVar8 != 0) {
          local_58 = 0;
          local_140 = local_134;
          local_60[1] = 0;
          local_138 = 0x80;
          local_b5 = 0;
          local_134[0] = 0;
          puStack_90 = PTR_DAT_04bbc1a0 + 0x10;
          local_b0 = 0;
          local_148 = PTR_DAT_04bb2d88 + 0x10;
          local_98 = 0;
          local_ac = '\0';
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_68 = 0;
          local_64 = 0;
          local_a0 = 0;
          uStack_80 = 0;
          uStack_70 = 0;
          local_150 = PTR_DAT_04bc49b8 + 0x10;
          local_88 = local_a8;
          local_78 = local_a8;
          local_60[0] = iVar8;
          FUN_02b34590(&local_150,local_60);
          if (local_ac == '\0') {
            fVar15 = 0.0;
          }
          else {
            fVar15 = (float)(*(int *)(lVar9 + 0x28) - (int)local_a0) * 5.0;
            local_160 = CONCAT44(local_160._4_4_,fVar15);
            fVar16 = (float)(*(int *)(lVar9 + 0x2c) - local_a0._4_4_) * 5.0;
            local_158 = fVar16;
          }
        }
        lVar9 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0'))
        {
          uVar14 = 0xc3fa0000;
          fVar17 = fVar16;
        }
        else {
          uVar14 = FUN_0093a950(lVar9 + 0x28,&local_160,0);
          fVar17 = local_158;
          fVar15 = (float)local_160;
        }
      }
    }
    *(float *)(param_1 + 1) = fVar15;
    lVar9 = param_3 + 0x20;
    *(undefined4 *)((long)param_1 + 0xc) = uVar14;
    *(float *)(param_1 + 2) = fVar17;
    puVar1 = PTR_DAT_04bb43c0;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(lVar9);
    lVar12 = *(long *)puVar1;
    if (lVar12 == 0) {
      return;
    }
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (*(uint *)(lVar13 + 0x1d8) <= uVar7) {
      return;
    }
    if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      return;
    }
    local_140 = (undefined1 *)0x0;
    local_148 = *(undefined **)(param_3 + 0x20);
    local_150 = PTR_DAT_04bc0510 + 0x10;
    uVar7 = FUN_0277d6c4(&local_148);
    if (*(long *)puVar1 == 0) {
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
      return;
    }
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      return;
    }
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(lVar9);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
      return;
    }
    puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar10 == (uint *)0x0) {
      return;
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      return;
    }
    if (puVar10 == (uint *)(ulong)uVar7) {
      return;
    }
    puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
    if (*puVar11 == 0) {
      return;
    }
    uVar7 = puVar11[1];
    if (uVar7 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar11[2] == 0) {
      return;
    }
    lVar12 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
    if (lVar12 == 0) {
      return;
    }
    uVar2 = 0;
    if ((ulong)uVar7 != 0) {
      uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
    }
    if (*puVar11 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc00c8 <= uVar2) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 0x83) {
      return;
    }
    iVar8 = FUN_0277d6c4(lVar9);
    if (iVar8 == 0x16c3) {
      *(undefined4 *)(param_1 + 3) = 0;
      return;
    }
    iVar8 = FUN_0277d6c4(lVar9);
    if (iVar8 == 0x16c4) {
      *(undefined4 *)(param_1 + 3) = 1;
      return;
    }
    iVar8 = FUN_0277d6c4(lVar9);
    *(uint *)(param_1 + 3) = (uint)(iVar8 == 0x16c5) << 1;
    return;
  case 3:
    uVar7 = *(uint *)(param_3 + 0x38);
    if (0xf < uVar7) {
      uVar7 = 0;
    }
    local_60[0] = (&DAT_05636e58)[(int)uVar7];
    local_150 = (undefined *)CONCAT44(local_150._4_4_,3);
    *(undefined4 *)param_1 = 3;
    *(int *)((long)param_1 + 4) = local_60[0];
    if (*(long **)(param_2 + 0x20) == (long *)0x0) goto LAB_02b0f774;
    lVar9 = (**(code **)(**(long **)(param_2 + 0x20) + 0x38))();
    uVar14 = 0;
    fVar17 = 0.0;
    fVar16 = 0.0;
    if (lVar9 != 0) {
      fVar16 = ((float)*(int *)(lVar9 + 0x28) * 5.0 + (float)*(int *)(lVar9 + 0x38) * 5.0 + 5.0) *
               0.5;
      fVar17 = (float)((*(int *)(lVar9 + 0x3c) - *(int *)(lVar9 + 0x2c)) + 1) * 5.0 * 0.5 +
               ((float)*(int *)(lVar9 + 0x2c) * 5.0 + (float)*(int *)(lVar9 + 0x3c) * 5.0 + 5.0) *
               0.5;
      local_150 = (undefined *)(ulong)(uint)fVar16;
      local_148 = (undefined *)CONCAT44(local_148._4_4_,fVar17);
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0'))
      goto LAB_02b0f800;
      uVar14 = FUN_0093a950(lVar9 + 0x28,&local_150,0);
      fVar17 = local_148._0_4_;
      fVar16 = (float)local_150;
    }
    break;
  case 4:
    uVar4 = *(ushort *)(param_4 + 0xe);
    local_150 = (undefined *)CONCAT44(local_150._4_4_,4);
    *(undefined4 *)param_1 = 4;
    *(uint *)((long)param_1 + 4) = (uint)uVar4;
    if (*(long **)(param_2 + 0x28) == (long *)0x0) {
      local_148 = (undefined *)0x0;
      uVar14 = 0;
      local_150 = (undefined *)0x0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_2 + 0x28) + 0x38))();
      local_150 = (undefined *)0x0;
      uVar6 = (ulong)local_148 >> 0x20;
      local_148 = (undefined *)0x0;
      if (lVar9 == 0) {
        uVar14 = 0;
      }
      else {
        local_150 = (undefined *)
                    (ulong)(uint)(((float)*(int *)(lVar9 + 0x28) * 5.0 +
                                  (float)*(int *)(lVar9 + 0x38) * 5.0 + 5.0) * 0.5);
        local_148 = (undefined *)
                    CONCAT44((int)uVar6,
                             ((float)*(int *)(lVar9 + 0x2c) * 5.0 +
                             (float)*(int *)(lVar9 + 0x3c) * 5.0 + 5.0) * 0.5);
        uVar14 = FUN_02b57ee0(&local_150,1);
        local_150 = (undefined *)CONCAT44(uVar14,(float)local_150);
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 != -1) {
          local_60[0] = 0x20;
          puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
          if (0xff < (uint)(int)sVar5) {
            puVar1 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar1 + 4) & 1) != 0) {
            uVar14 = FUN_02b57ee0(&local_150,0x32);
          }
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar14;
    *(float *)(param_1 + 1) = (float)local_150;
    *(float *)(param_1 + 2) = local_148._0_4_;
    goto LAB_02b0f7cc;
  case 5:
    uVar4 = *(ushort *)(param_3 + 0x46);
    fVar17 = 0.0;
    local_150 = (undefined *)CONCAT44(local_150._4_4_,5);
    *(undefined4 *)param_1 = 5;
    *(uint *)((long)param_1 + 4) = (uint)uVar4;
    if (*(long **)(param_2 + 0x30) == (long *)0x0) {
      uVar14 = 0;
      local_150._0_4_ = 0.0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_2 + 0x30) + 0x38))();
      uVar14 = 0;
      local_150._0_4_ = 0.0;
      if (lVar9 != 0) {
        fVar16 = ((float)*(int *)(lVar9 + 0x28) * 5.0 + (float)*(int *)(lVar9 + 0x38) * 5.0 + 5.0) *
                 0.5;
        fVar17 = ((float)*(int *)(lVar9 + 0x2c) * 5.0 + (float)*(int *)(lVar9 + 0x3c) * 5.0 + 5.0) *
                 0.5;
        local_150 = (undefined *)(ulong)(uint)fVar16;
        local_148 = (undefined *)CONCAT44(local_148._4_4_,fVar17);
        lVar9 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0'))
        {
          uVar14 = 0xc3fa0000;
          local_150._0_4_ = fVar16;
        }
        else {
          uVar14 = FUN_0093a950(lVar9 + 0x28,&local_150,0);
          fVar17 = local_148._0_4_;
        }
      }
    }
    *(float *)(param_1 + 1) = (float)local_150;
    *(undefined4 *)((long)param_1 + 0xc) = uVar14;
    *(float *)(param_1 + 2) = fVar17;
LAB_02b0f7cc:
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_4 + 0x10);
  default:
    goto switchD_02b0f224_default;
  }
  *(float *)(param_1 + 1) = fVar16;
  *(undefined4 *)((long)param_1 + 0xc) = uVar14;
  *(float *)(param_1 + 2) = fVar17;
switchD_02b0f224_default:
  return;
}

