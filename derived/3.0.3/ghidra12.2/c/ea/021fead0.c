
/* WARNING: Removing unreachable block (ram,0x021feb14) */
/* WARNING: Removing unreachable block (ram,0x021feb24) */

undefined8 FUN_021fead0(int *param_1,int *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined *local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  long lStack_70;
  
  local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  iVar10 = *(int *)(param_4 + 0x10);
  iVar9 = *(int *)(param_4 + 0x14);
  iVar12 = *(int *)(param_4 + 0x20);
  iVar11 = *(int *)(param_4 + 0x24);
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_d0 = &local_bc;
  local_e0 = PTR_DAT_04bb96d8 + 0x10;
  local_84 = 0;
  local_d8 = 0x110000020d;
  lStack_70 = DAT_04cfae30 + 0x28;
  local_c0 = 0x15;
  local_7c = 0;
  iVar7 = (iVar11 - iVar9) + 1;
  iVar8 = (iVar12 - iVar10) + 1;
  local_c8 = 0x1900000000;
  if ((0x15 < iVar7) || (0x19 < iVar8)) {
    if (0x14 < iVar7) {
      iVar7 = 0x15;
    }
    if (0x18 < iVar8) {
      iVar8 = 0x19;
    }
    iVar12 = iVar8;
    if (iVar8 < 0) {
      iVar12 = iVar8 + 1;
    }
    iVar11 = iVar7;
    if (iVar7 < 0) {
      iVar11 = iVar7 + 1;
    }
    fVar13 = ((float)(iVar10 + (iVar12 >> 1)) * 5.0 + 2.5) - ((float)iVar8 * 0.5 * 5.0 + -2.5);
    fVar14 = ((float)(iVar9 + (iVar11 >> 1)) * 5.0 + 2.5) - ((float)iVar7 * 0.5 * 5.0 + -2.5);
    iVar10 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar12 = iVar8 + iVar10 + -1;
    iVar9 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar11 = iVar7 + iVar9 + -1;
  }
  local_128 = 0x15;
  local_148 = PTR_DAT_04bb96d8 + 0x10;
  local_138 = &local_124;
  local_124 = 0;
  local_11c = 0;
  uStack_140 = 0x110000020d;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  uStack_130 = 0x1900000000;
  FUN_02145060(&local_148,param_3,iVar10,iVar9);
  if (iVar11 + 1 != iVar9) {
    iVar7 = iVar9;
    iVar8 = iVar10;
    do {
      uVar3 = FUN_035aa210(iVar8 + -1,iVar7 + -1,&local_78);
      if (((((uVar3 & 1) != 0) &&
           (uVar3 = FUN_035aa210(iVar8 + -1,iVar7,&local_78), (uVar3 & 1) != 0)) &&
          (uVar3 = FUN_035aa210(iVar8,iVar7 + -1,&local_78), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_035aa210(iVar8,iVar7,&local_78), (uVar3 & 1) != 0)) {
        uVar1 = (iVar8 - iVar10) + uStack_130._4_4_ * (iVar7 - iVar9);
        if ((*(uint *)((long)local_138 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1)
            == 0) {
          uVar2 = (iVar8 - iVar10) + local_c8._4_4_ * (iVar7 - iVar9);
          uVar6 = 1 << (ulong)(uVar2 & 0x1f);
          uVar1 = *(uint *)((long)local_d0 + (long)((int)uVar2 >> 5) * 4);
          if ((uVar6 & uVar1) == 0) {
            *(uint *)((long)local_d0 + ((long)((ulong)uVar2 << 0x20) >> 0x25) * 4) = uVar6 | uVar1;
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
          }
        }
      }
      if (iVar8 < iVar12) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = iVar10;
      }
    } while ((iVar10 != iVar8) || (iVar11 + 1 != iVar7));
  }
  puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar1 = *puVar4 ^ *puVar4 << 0xb;
  uVar6 = puVar4[3];
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar1 = uVar1 >> 8 ^ uVar6 >> 0x13 ^ uVar1 ^ uVar6;
  puVar4[2] = uVar6;
  puVar4[3] = uVar1;
  if (0 < (int)(uint)local_d8) {
    uVar6 = 0;
    uVar3 = (local_c8 & 0xffffffff) * (ulong)uVar1 >> 0x20;
    do {
      if ((*(uint *)((long)local_d0 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
        if ((int)uVar3 == 0) {
          uVar5 = 1;
          iVar7 = 0;
          if (local_c8._4_4_ != 0) {
            iVar7 = (int)uVar6 / local_c8._4_4_;
          }
          *param_1 = uVar6 - local_c8._4_4_ * iVar7;
          *param_2 = iVar7;
          *param_1 = *param_1 + iVar10;
          iVar9 = *param_2 + iVar9;
          goto LAB_021fee74;
        }
        uVar3 = (ulong)((int)uVar3 - 1);
      }
      uVar6 = uVar6 + 1;
    } while ((uint)local_d8 != uVar6);
  }
  uVar5 = 0;
  iVar9 = 0;
  *param_1 = 0;
LAB_021fee74:
  *param_2 = iVar9;
  return uVar5;
}

