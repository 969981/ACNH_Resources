
void FUN_036e7a00(long *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  undefined *local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  long local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_e4 = 0;
  local_e8 = 0.0;
  local_f8 = 0;
  local_f0 = 0;
  if (param_2 != 0) {
    fVar18 = 3.4028235e+38;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = param_3 + param_2;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar12 = *(undefined2 **)(*(long *)(*param_1 + 8) + (long)*(int *)*param_3 * 8);
      local_dc = (float)*(int *)(puVar12 + 10) * 5.0 + 5.0;
      fVar16 = (float)*(int *)(puVar12 + 8) * 5.0 + 5.0;
      local_e4 = CONCAT44(local_e4._4_4_,fVar16);
      uVar7 = FUN_006f0400(*(float *)param_1[1] - fVar16,((float *)param_1[1])[2] - local_dc);
      local_f8 = CONCAT44(local_f8._4_4_,uVar7);
      uVar10 = FUN_021f32f0(&local_e4,&local_f0,(long)&local_f8 + 4,0,&local_f8);
      if ((uVar10 & 1) != 0) {
        local_b0 = 0;
        local_a0 = 0;
        lVar14 = param_1[2];
        lVar15 = *(long *)puVar5;
        local_d0 = *puVar12;
        local_ce = *(undefined1 *)(puVar12 + 1);
        local_cd = *(undefined1 *)((long)puVar12 + 3);
        local_cc = *(undefined4 *)(puVar12 + 2);
        local_c8 = 0;
        local_d8 = puVar4;
        local_c0 = puVar2;
        puStack_b8 = puVar3;
        local_a8 = puVar3;
        uVar8 = FUN_0277d6c4(&local_d0);
        if (*(long *)puVar5 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(puVar12);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
               (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8), lVar15 != 0))
            {
              local_c8 = lVar15;
            }
          }
        }
        FUN_01afb480(&local_d8,&local_c0);
        local_b0 = CONCAT44(local_b0._4_4_ + *(int *)(puVar12 + 10),
                            (int)local_b0 + *(int *)(puVar12 + 8));
        local_a0 = CONCAT44(local_a0._4_4_ + *(int *)(puVar12 + 10),
                            (int)local_a0 + *(int *)(puVar12 + 8));
        iVar9 = FUN_01ae7550(&local_d8);
        local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar9);
        if (iVar9 - 1U < 6) {
          uVar13 = *(undefined8 *)(lVar14 + 8);
          uVar10 = FUN_01a4fafc(uVar13,1,&local_c0);
          if ((uVar10 & 1) == 0) goto LAB_036e7ab0;
          iVar6 = (int)local_b0;
          local_80 = (int)local_b0;
          local_7c = local_b0._4_4_;
          local_88 = PTR_DAT_04bb2010 + 0x10;
          iVar9 = local_a0._4_4_ + 1;
          local_98 = &puStack_b8;
          local_90 = &local_a8;
          if (iVar9 != local_b0._4_4_) {
            do {
              uVar10 = FUN_01a4fd6c(uVar13,1,&local_88,1);
              if ((uVar10 & 1) == 0) goto LAB_036e7ab0;
              if (local_80 < *(int *)(local_90 + 1)) {
                local_80 = local_80 + 1;
              }
              else {
                local_7c = local_7c + 1;
                local_80 = *(int *)(local_98 + 1);
              }
            } while (iVar6 != local_80 || iVar9 != local_7c);
          }
        }
        fVar16 = (float)local_f0 - *(float *)param_1[1];
        fVar17 = local_e8 - ((float *)param_1[1])[2];
        fVar16 = SQRT(fVar17 * fVar17 + fVar16 * fVar16);
        if (fVar16 <= fVar18) {
          pfVar11 = (float *)param_1[3];
          *pfVar11 = (float)local_f0;
          pfVar11[1] = local_f0._4_4_;
          pfVar11[2] = local_e8;
          *(undefined4 *)param_1[4] = local_f8._4_4_;
          fVar18 = fVar16;
        }
      }
LAB_036e7ab0:
      param_3 = param_3 + 1;
    } while (param_3 != puVar1);
  }
  return;
}

