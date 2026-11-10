
float FUN_00359910(undefined8 *param_1,long param_2,int param_3,int param_4,undefined4 *param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_1d0;
  int local_1b4;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  long local_160;
  code *local_158;
  ulong uStack_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  float local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  ushort local_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  ushort uStack_fa;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  lVar1 = param_2 + (long)param_3 * 2;
  local_114 = *(float *)((long)param_1 + 0x14);
  fVar22 = *(float *)(param_1 + 3);
  fVar24 = *(float *)((long)param_1 + 0x3c);
  bVar3 = *(char *)(param_1 + 7) == '\0';
  bVar4 = *(char *)((long)param_1 + 99) == '\0';
  local_118 = fVar22;
  (**(code **)(*(long *)param_1[0xb] + 0x50))((long *)param_1[0xb],param_1,param_2,lVar1);
  fVar15 = (float)FUN_0035a260(param_1,&local_114,&local_118,param_2,param_3);
  local_128 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_124 = *(undefined4 *)(param_1 + 2);
  local_120 = 0;
  local_130 = local_114;
  fStack_12c = local_118;
  fVar16 = *(float *)(param_1 + 3);
  if (param_4 != 0) {
    if (param_4 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = *param_5;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar17;
  }
  lVar13 = (long)param_3;
  local_148 = param_1;
  local_140 = param_2;
  local_138 = lVar1;
  FUN_00352dc0(&local_160,param_1[5],0);
  local_160 = param_2;
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_148);
  pcVar9 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar9 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar5 = (*pcVar9)();
  if (lVar13 < local_160 - param_2 >> 1) {
switchD_00359e80_caseD_4:
    if (bVar3 || bVar4) {
      iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_120._4_4_,0);
      fVar24 = *(float *)((long)param_1 + 0x14) + *(float *)((long)param_1 + 0xc) * (float)iVar7;
      *(float *)((long)param_1 + 0x14) = fVar24;
      uVar5 = *(uint *)(param_1 + 10);
      uVar20 = SUB42(local_130,0);
      uVar21 = (undefined2)((uint)local_130 >> 0x10);
    }
    else {
      fVar24 = *(float *)((long)param_1 + 0x14);
      uVar5 = *(uint *)(param_1 + 10);
      uVar20 = SUB42(local_130,0);
      uVar21 = (undefined2)((uint)local_130 >> 0x10);
    }
    if (((uVar5 & 0x300) != 0x100) && ((uVar5 & 0x300) != 0x200)) {
      fVar22 = (fVar22 - fVar16) + *(float *)(param_1 + 3);
    }
    *(float *)(param_1 + 3) = fVar22;
    fVar24 = fVar24 - (float)CONCAT22(uVar21,uVar20);
    if (fVar24 <= fVar15) {
      fVar24 = fVar15;
    }
    (**(code **)(*(long *)param_1[0xb] + 0x38))((long *)param_1[0xb],&local_148);
    (**(code **)(*(long *)param_1[0xb] + 0x58))((long *)param_1[0xb],param_1,param_2,lVar1);
    return fVar24;
  }
  fVar26 = 0.0;
  lVar11 = 0;
  local_1b4 = 0;
  lVar12 = param_2;
  local_1d0 = param_2;
LAB_00359ac8:
  iVar7 = (int)lVar11;
  lVar10 = (long)iVar7;
  do {
    lVar14 = local_160;
    if (uVar5 < 0x20) {
      local_120 = (CONCAT44(local_120._4_4_,local_1b4) ^ 0xffffffff) & 0xffffffff00000001;
      local_140 = local_160;
      if ((3.4028235e+38 <= fVar24 || uVar5 == 10) || param_4 <= iVar7 && lVar12 == local_1d0)
      goto LAB_00359d78;
      local_178 = CONCAT44(fStack_12c,local_130);
      uStack_170 = CONCAT44(uStack_124,local_128);
      local_1a0 = 0;
      local_198 = 0;
      local_180 = local_138;
      local_190 = &local_110;
      local_168 = local_120;
      local_c0 = param_1[10];
      uStack_b8 = param_1[0xb];
      local_b0 = param_1[0xc];
      local_e0 = param_1[6];
      uStack_d8 = param_1[7];
      local_d0 = param_1[8];
      uStack_c8 = param_1[9];
      uVar2 = param_1[2];
      local_100 = (ushort)uVar2;
      uStack_fe = (undefined2)((ulong)uVar2 >> 0x10);
      uStack_fc = (undefined2)((ulong)uVar2 >> 0x20);
      uStack_fa = (ushort)((ulong)uVar2 >> 0x30);
      uStack_f8 = (undefined4)param_1[3];
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_f0 = param_1[4];
      local_e8 = param_1[5];
      local_110 = *param_1;
      uStack_108 = param_1[1];
      local_188 = local_160;
      (**(code **)(*(long *)param_1[0xb] + 0x20))((long *)param_1[0xb],&local_1a0,&local_190,uVar5);
      if ((float)local_198 - (float)local_1a0 <= 0.0) break;
      fVar18 = 0.0;
      if (iVar7 < param_4) {
        fVar18 = *(float *)(param_6 + lVar10 * 4);
      }
      if ((float)CONCAT22(uStack_fa,uStack_fc) - local_130 <=
          *(float *)((long)param_1 + 0x3c) + fVar18) break;
      local_120 = local_120 & 0xffffffff;
      local_160 = lVar12;
      thunk_FUN_0035008c(&local_110);
      uVar5 = 10;
    }
    else {
      uVar8 = FUN_00358680(uVar5);
      if ((uVar8 & 1) == 0) goto LAB_0035a100;
      uVar17 = *(undefined4 *)(param_1 + 3);
      fVar18 = 0.0;
      if (bVar3 || bVar4) {
        iVar6 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_120._4_4_,uVar5);
        fVar18 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
      }
      (**(code **)(*(long *)param_1[5] + 0x90))((long *)param_1[5],&local_110,uVar5);
      if (local_100 <= uStack_fa) {
        fVar19 = *(float *)(param_1 + 8);
        if (local_1b4 == 0) {
          fVar19 = -0.0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          fVar23 = (float)NEON_ucvtf((uint)uStack_108._4_2_);
          fVar23 = *(float *)((long)param_1 + 0xc) * fVar23;
        }
        else {
          fVar23 = *(float *)(param_1 + 4);
        }
        fVar25 = 0.0;
        if (bVar3 || bVar4) {
          iVar6 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar5,0);
          fVar25 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
        }
        fVar19 = fVar18 + fVar26 + fVar19 + fVar23 + fVar25;
        if ((param_4 > iVar7 || lVar12 != local_1d0) && fVar24 < 3.4028235e+38) {
          fVar23 = 0.0;
          if (iVar7 < param_4) {
            fVar23 = *(float *)(param_6 + lVar10 * 4);
          }
          if (*(float *)((long)param_1 + 0x3c) + fVar23 < fVar19) {
            local_120 = local_120 & 0xffffffff;
            uVar5 = 10;
            local_160 = lVar12;
            goto LAB_00359b18;
          }
        }
        fVar26 = fVar19 - fVar25;
        uVar20 = (undefined2)*(undefined4 *)(param_1 + 8);
        uVar21 = (undefined2)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
        if (local_1b4 == 0) {
          uVar20 = 0;
          uVar21 = 0x8000;
        }
        *(float *)((long)param_1 + 0x14) =
             fVar18 + *(float *)((long)param_1 + 0x14) + (float)CONCAT22(uVar21,uVar20);
        iVar7 = (**(code **)(*(long *)param_1[5] + 0xc0))();
        *(float *)(param_1 + 3) =
             *(float *)(param_1 + 3) +
             *(float *)(param_1 + 2) * (float)(-iVar7 - (int)(short)local_e8);
        FUN_00350198(param_1,&local_110);
        *(undefined4 *)(param_1 + 3) = uVar17;
        local_1b4 = 1;
        local_120 = CONCAT44(uVar5,(undefined4)local_120);
        lVar14 = local_160;
        goto LAB_0035a100;
      }
      pcVar9 = local_158;
      if ((uStack_150 & 1) != 0) {
        pcVar9 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
      }
      uVar5 = (*pcVar9)();
    }
LAB_00359b18:
    if (lVar13 < local_160 - param_2 >> 1) goto switchD_00359e80_caseD_4;
  } while( true );
  thunk_FUN_0035008c(&local_110);
LAB_00359d78:
  uVar17 = (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],uVar5,&local_148);
  fVar18 = local_114;
  fVar26 = *(float *)((long)param_1 + 0x14);
  if (((uVar5 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) &&
     (local_120 = local_120 & 0xffffffff, *(char *)((long)param_1 + 0x62) != '\0')) {
    uStack_c8 = param_1[9];
    local_c0 = param_1[10];
    uStack_b8 = param_1[0xb];
    local_b0 = param_1[0xc];
    fVar23 = *(float *)(param_1 + 3);
    local_e8 = param_1[5];
    local_e0 = param_1[6];
    uStack_d8 = param_1[7];
    local_d0 = param_1[8];
    local_190 = (undefined8 *)0x0;
    local_188 = 0;
    local_f0 = param_1[4];
    local_100 = (ushort)param_1[2];
    uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
    uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_1a0 = local_160;
    local_110 = *param_1;
    uStack_108 = param_1[1];
    uStack_fc = 0;
    uStack_fa = 0;
    uStack_f8 = 0;
    FUN_003590a0(&local_110,&local_190,&local_1a0,param_3 - (int)((ulong)(local_160 - param_2) >> 1)
                );
    fVar25 = local_188._4_4_ - local_190._4_4_;
    thunk_FUN_0035008c(&local_110);
    fVar19 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    *(float *)(param_1 + 3) = fVar23 + (fVar25 - fVar19);
  }
  local_1b4 = 0;
  switch(uVar17) {
  case 2:
    local_1b4 = 1;
    break;
  case 3:
    fVar19 = 0.0;
    lVar11 = lVar10 + 1;
    if ((int)lVar11 < param_4) {
      fVar19 = (float)param_5[lVar11];
    }
    if ((*(uint *)(param_1 + 10) & 3) == 2) {
      local_c0 = param_1[10];
      uStack_b8 = param_1[0xb];
      local_b0 = param_1[0xc];
      local_190 = (undefined8 *)0x0;
      local_188 = 0;
      local_e0 = param_1[6];
      uStack_d8 = param_1[7];
      local_1a0 = local_140;
      local_d0 = param_1[8];
      uStack_c8 = param_1[9];
      local_100 = (ushort)param_1[2];
      uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_f0 = param_1[4];
      local_e8 = param_1[5];
      local_110 = *param_1;
      uStack_108 = param_1[1];
      uStack_fc = 0;
      uStack_fa = 0;
      uStack_f8 = 0;
      FUN_003590a0(&local_110,&local_190,&local_1a0,
                   param_3 - (int)((ulong)(local_140 - param_2) >> 1));
      fVar23 = (float)local_188 - (float)local_190;
      thunk_FUN_0035008c(&local_110);
      *(float *)((long)param_1 + 0x14) = fVar19 + (fVar15 - fVar23) + local_130;
    }
    else if ((*(uint *)(param_1 + 10) & 3) == 1) {
      local_c0 = param_1[10];
      uStack_b8 = param_1[0xb];
      local_b0 = param_1[0xc];
      local_190 = (undefined8 *)0x0;
      local_188 = 0;
      local_e0 = param_1[6];
      uStack_d8 = param_1[7];
      local_1a0 = local_140;
      local_d0 = param_1[8];
      uStack_c8 = param_1[9];
      local_100 = (ushort)param_1[2];
      uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_f0 = param_1[4];
      local_e8 = param_1[5];
      local_110 = *param_1;
      uStack_108 = param_1[1];
      uStack_fc = 0;
      uStack_fa = 0;
      uStack_f8 = 0;
      FUN_003590a0(&local_110,&local_190,&local_1a0,
                   param_3 - (int)((ulong)(local_140 - param_2) >> 1));
      fVar23 = (float)local_188 - (float)local_190;
      thunk_FUN_0035008c(&local_110);
      fVar25 = fVar15 * 0.5;
      if (*(char *)(param_1 + 0xc) != '\0') {
        fVar25 = (float)(int)(fVar15 * 0.5);
      }
      fVar23 = fVar23 * 0.5;
      if (*(char *)(param_1 + 0xc) != '\0') {
        fVar23 = (float)(int)fVar23;
      }
      *(float *)((long)param_1 + 0x14) = fVar19 + local_130 + (fVar25 - fVar23);
    }
    else {
      fVar23 = *(float *)((long)param_1 + 0x14) - local_130;
      if (fVar23 <= fVar15) {
        fVar23 = fVar15;
      }
      *(float *)((long)param_1 + 0x14) = fVar19 + local_130;
      fVar15 = fVar23;
    }
    if (fVar24 < 3.4028235e+38) {
      local_1b4 = 0;
      local_1d0 = local_160;
    }
    else {
      local_1b4 = 0;
    }
    break;
  case 4:
    goto switchD_00359e80_caseD_4;
  }
  fVar26 = fVar26 - fVar18;
  local_160 = local_140;
  lVar14 = local_140;
LAB_0035a100:
  if (fVar24 < 3.4028235e+38) {
    lVar12 = lVar14;
  }
  pcVar9 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar9 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar5 = (*pcVar9)();
  if (lVar13 < local_160 - param_2 >> 1) goto switchD_00359e80_caseD_4;
  goto LAB_00359ac8;
}

