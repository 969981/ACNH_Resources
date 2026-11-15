
/* WARNING: Removing unreachable block (ram,0x021ff318) */
/* WARNING: Removing unreachable block (ram,0x021ff328) */

undefined8 FUN_021ff2d0(int *param_1,int *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined *local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  long lStack_68;
  
  local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_c8 = &local_b4;
  local_94 = 0;
  local_8c = 0;
  puVar1 = PTR_DAT_04bb96d8 + 0x10;
  local_84 = 0;
  local_d0 = 0x110000020d;
  lStack_68 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_7c = 0;
  local_b8 = 0x15;
  local_74 = 0;
  local_c0 = 0x1900000000;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_f8 = PTR_DAT_04bb2010 + 0x10;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = puStack_f8;
  local_d8 = puVar1;
  FUN_0118ad90(&local_100,0xc73bed0b);
  local_158 = &local_144;
  local_148 = 0x15;
  local_144 = 0;
  uStack_160 = 0x110000020d;
  local_e0._4_4_ = local_f0._4_4_ + 0xc;
  local_13c = 0;
  local_e0._0_4_ = ((int)local_e0 - (int)local_f0) + (int)local_f0 + -3 + 6;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  uStack_150 = 0x1900000000;
  local_168 = puVar1;
  local_f0._0_4_ = (int)local_f0 + -3;
  local_f0._4_4_ = local_f0._4_4_ + 7;
  FUN_02145060(&local_168,param_3);
  iVar7 = (int)local_f0;
  iVar8 = local_e0._4_4_ + 1;
  if (iVar8 != local_f0._4_4_) {
    iVar10 = local_f0._4_4_;
    iVar11 = (int)local_f0;
    do {
      uVar9 = FUN_035aa210(iVar11 + -1,iVar10 + -1,&local_70);
      if (((((uVar9 & 1) != 0) &&
           (uVar9 = FUN_035aa210(iVar11 + -1,iVar10,&local_70), (uVar9 & 1) != 0)) &&
          (uVar9 = FUN_035aa210(iVar11,iVar10 + -1,&local_70), (uVar9 & 1) != 0)) &&
         (uVar9 = FUN_035aa210(iVar11,iVar10,&local_70), (uVar9 & 1) != 0)) {
        uVar2 = (iVar11 - (int)local_f0) + uStack_150._4_4_ * (iVar10 - local_f0._4_4_);
        if ((*(uint *)((long)local_158 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1)
            == 0) {
          uVar3 = (iVar11 - (int)local_f0) + local_c0._4_4_ * (iVar10 - local_f0._4_4_);
          uVar6 = 1 << (ulong)(uVar3 & 0x1f);
          uVar2 = *(uint *)((long)local_c8 + (long)((int)uVar3 >> 5) * 4);
          if ((uVar6 & uVar2) == 0) {
            *(uint *)((long)local_c8 + ((long)((ulong)uVar3 << 0x20) >> 0x25) * 4) = uVar6 | uVar2;
            local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + 1);
          }
        }
      }
      if (iVar11 < (int)local_e0) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        iVar11 = (int)local_f0;
      }
    } while (iVar7 != iVar11 || iVar8 != iVar10);
  }
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = *puVar4 ^ *puVar4 << 0xb;
  uVar6 = puVar4[3];
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar2 = uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6;
  puVar4[2] = uVar6;
  puVar4[3] = uVar2;
  if (0 < (int)(uint)local_d0) {
    uVar6 = 0;
    uVar9 = (local_c0 & 0xffffffff) * (ulong)uVar2 >> 0x20;
    do {
      if ((*(uint *)((long)local_c8 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
        if ((int)uVar9 == 0) {
          uVar5 = 1;
          iVar8 = 0;
          if (local_c0._4_4_ != 0) {
            iVar8 = (int)uVar6 / local_c0._4_4_;
          }
          iVar7 = uVar6 - local_c0._4_4_ * iVar8;
          goto LAB_021ff4f4;
        }
        uVar9 = (ulong)((int)uVar9 - 1);
      }
      uVar6 = uVar6 + 1;
    } while ((uint)local_d0 != uVar6);
  }
  uVar5 = 0;
  iVar7 = 0;
  iVar8 = 0;
LAB_021ff4f4:
  *param_1 = iVar7;
  *param_2 = iVar8;
  return uVar5;
}

