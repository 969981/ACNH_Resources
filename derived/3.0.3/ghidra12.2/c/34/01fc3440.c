
uint FUN_01fc3440(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                 int *param_5,long param_6)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  short *psVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  long local_168;
  long local_160;
  undefined *local_158;
  int local_150;
  int local_14c;
  undefined8 local_f0;
  undefined **local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  int local_74;
  
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    lVar11 = param_1[1];
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar3 = FUN_006bd550(*puVar6,0);
    uVar5 = 0;
    if (iVar3 != 0x758f7eaf) goto LAB_01fc382c;
    if (((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
       (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) {
      local_168 = param_6 + 8;
      local_160 = param_6 + 0x18;
      iVar3 = *(int *)(param_6 + 0x10);
      iVar4 = *(int *)(param_6 + 0x14);
      iVar9 = *(int *)(param_6 + 0x24);
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_158 = puVar1;
      local_150 = iVar3;
      local_14c = iVar4;
      if (iVar9 + 1 != iVar4) {
        do {
          psVar7 = (short *)FUN_01a5190c(*param_1,0,&local_158,0);
          if (*psVar7 != -2) goto LAB_01fc3828;
          if (local_150 < *(int *)(local_160 + 8)) {
            local_150 = local_150 + 1;
          }
          else {
            local_14c = local_14c + 1;
            local_150 = *(int *)(local_168 + 8);
          }
        } while (iVar3 != local_150 || iVar9 + 1 != local_14c);
        iVar3 = *(int *)(param_6 + 0x10);
        iVar4 = *(int *)(param_6 + 0x14);
        iVar9 = *(int *)(param_6 + 0x24);
      }
      local_90 = 0;
      local_b0 = 0;
      local_a0 = 0;
      local_c0 = &PTR_FUN_0498d548;
      lVar10 = *(long *)(*(long *)(lVar11 + 8) + 0x68);
      fVar13 = ((float)iVar4 * 5.0 + (float)iVar9 * 5.0 + 5.0) * 0.5;
      fVar12 = ((float)iVar3 * 5.0 + (float)*(int *)(param_6 + 0x20) * 5.0 + 5.0) * 0.5;
      puStack_b8 = puVar1;
      local_a8 = puVar1;
      local_98 = puVar1;
      iVar3 = FUN_006f0400(fVar12 - *(float *)(lVar10 + 0x278),fVar13 - *(float *)(lVar10 + 0x280));
      iVar4 = FUN_006f0400(fVar12 - *(float *)(lVar10 + 0x278),fVar13 - *(float *)(lVar10 + 0x280));
      uVar5 = iVar4 + 0xa0000000U >> 0x1e;
      local_d8 = 0;
      local_e8 = &PTR_FUN_0498d548;
      local_74 = uVar5 + 2;
      local_c8 = 0;
      if (2 < uVar5 - 1) {
        local_74 = 2;
      }
      puStack_e0 = puVar1;
      local_d0 = puVar1;
      local_168._0_4_ = uVar5;
      FUN_01508594(&local_e8,&local_74);
      uVar5 = 0;
      if ((*(float *)(lVar10 + 0x278) <= (float)(int)local_d8 * 5.0) ||
         ((float)(int)local_c8 * 5.0 + 5.0 <= *(float *)(lVar10 + 0x278))) goto LAB_01fc382c;
      uVar5 = 0;
      if ((*(float *)(lVar10 + 0x280) <= (float)local_d8._4_4_ * 5.0) ||
         ((float)local_c8._4_4_ * 5.0 + 5.0 <= *(float *)(lVar10 + 0x280))) goto LAB_01fc382c;
      uVar5 = 1;
      uVar8 = FUN_021e6540(param_3,&local_98,param_1[2],local_74,1);
      if ((uVar8 & 1) != 0) {
        FUN_01ad5d04(&local_168,param_3);
        FUN_01afb480(&local_168,&local_c0);
        *param_2 = 1;
        *(int *)(param_4 + 0x10) = (int)local_b0 + (int)local_90;
        *(int *)(param_4 + 0x14) = local_b0._4_4_ + local_90._4_4_;
        *(int *)(param_4 + 0x20) = (int)local_a0 + (int)local_90;
        *(int *)(param_4 + 0x24) = local_a0._4_4_ + local_90._4_4_;
LAB_01fc3760:
        *param_5 = local_74;
        goto LAB_01fc382c;
      }
      if (*(char *)(param_1[3] + 2) == '\0') {
        local_f0 = 0xfffe;
        FUN_0277d4ac(&local_f0);
        if ((DAT_05292338 == 0) || (*(char *)(DAT_05292338 + 0xe9e) == '\0')) {
          psVar7 = (short *)PTR_DAT_04bb37e0;
          if (DAT_05292338 != 0) {
            psVar7 = (short *)(DAT_05292338 + 0xe70);
          }
          sVar2 = *psVar7;
          local_f0._0_4_ = *(undefined4 *)psVar7;
        }
        else {
          local_168._0_4_ = iVar3 + 0x20000000U >> 0x1e;
          lVar10 = 0xe94;
          psVar7 = (short *)(DAT_05292338 + 0xe94);
          if ((uint)local_168 != *(uint *)(DAT_05292338 + 0xea0)) {
            lVar10 = 0xe70;
            psVar7 = (short *)(DAT_05292338 + 0xe70);
          }
          sVar2 = *(short *)(DAT_05292338 + lVar10);
          local_f0._0_4_ = CONCAT22(psVar7[1],sVar2);
        }
        local_f0._4_4_ = *(undefined4 *)(psVar7 + 2);
        if (sVar2 != -2) {
          FUN_01faa470(&local_168);
          uVar5 = FUN_02080ddc(lVar11 + 0xafb8,&local_168,&local_f0,&puStack_b8,&local_74);
          if ((uVar5 & 1) == 0) goto LAB_01fc382c;
          *param_3 = (undefined4)local_f0;
          param_3[1] = local_f0._4_4_;
          *param_2 = 3;
          goto LAB_01fc3760;
        }
      }
    }
  }
LAB_01fc3828:
  uVar5 = 0;
LAB_01fc382c:
  return uVar5 & 1;
}

