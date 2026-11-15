
/* WARNING: Removing unreachable block (ram,0x021feeec) */
/* WARNING: Removing unreachable block (ram,0x021feefc) */

undefined8 FUN_021feea0(int *param_1,int *param_2,undefined8 param_3,ulong param_4,ushort *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
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
  local_84 = 0;
  local_8c = 0;
  local_94 = 0;
  local_9c = 0;
  local_d0 = &local_bc;
  local_a4 = 0;
  local_148 = PTR_DAT_04bb96d8 + 0x10;
  local_ac = 0;
  local_b4 = 0;
  lStack_70 = DAT_04cfae30 + 0x28;
  local_c0 = 0x15;
  local_7c = 0;
  local_d8 = 0x110000020d;
  local_c8 = 0x1900000000;
  lVar14 = *(long *)PTR_DAT_04bb5c90;
  iVar1 = *(int *)(lVar14 + 0x28);
  iVar3 = *(int *)(lVar14 + 0x2c);
  iVar2 = *(int *)(lVar14 + 0x38);
  iVar13 = *(int *)(lVar14 + 0x3c);
  local_128 = 0x15;
  uStack_140 = 0x110000020d;
  local_124 = 0;
  local_138 = &local_124;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  uStack_130 = 0x1900000000;
  local_e0 = local_148;
  FUN_02145060(&local_148,param_3,iVar1,iVar3);
  iVar13 = iVar13 + 1;
  iVar11 = 5;
  if ((param_4 & 1) == 0) {
    iVar11 = 10;
  }
  if (iVar13 != iVar3) {
    iVar15 = iVar3;
    iVar16 = iVar1;
    do {
      iVar7 = iVar15 - iVar3;
      if (iVar11 <= iVar7) {
        uVar8 = FUN_035aa210(iVar16 + -1,iVar15 + -1,&local_78);
        if (((((uVar8 & 1) != 0) &&
             (uVar8 = FUN_035aa210(iVar16 + -1,iVar15,&local_78), (uVar8 & 1) != 0)) &&
            (uVar8 = FUN_035aa210(iVar16,iVar15 + -1,&local_78), (uVar8 & 1) != 0)) &&
           (uVar8 = FUN_035aa210(iVar16,iVar15,&local_78), (uVar8 & 1) != 0)) {
          uVar4 = (iVar16 - iVar1) + uStack_130._4_4_ * iVar7;
          if ((*(uint *)((long)local_138 + (long)((int)uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1
              ) == 0) {
            uVar5 = (iVar16 - iVar1) + local_c8._4_4_ * iVar7;
            uVar12 = 1 << (ulong)(uVar5 & 0x1f);
            uVar4 = *(uint *)((long)local_d0 + (long)((int)uVar5 >> 5) * 4);
            if ((uVar12 & uVar4) == 0) {
              *(uint *)((long)local_d0 + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
                   uVar12 | uVar4;
              local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
            }
          }
        }
      }
      if (iVar16 < iVar2) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
        iVar16 = iVar1;
      }
    } while ((iVar1 != iVar16) || (iVar13 != iVar15));
    if ((param_5 != (ushort *)0x0) && (iVar13 != iVar3)) {
      iVar15 = iVar1;
      iVar11 = iVar3;
      do {
        uVar5 = (iVar15 - iVar1) + local_c8._4_4_ * (iVar11 - iVar3);
        uVar12 = 1 << (ulong)(uVar5 & 0x1f);
        uVar4 = *(uint *)((long)local_d0 + (long)((int)uVar5 >> 5) * 4);
        if (((uVar12 & uVar4) != 0) &&
           (uVar6 = (iVar15 - (uint)*param_5) +
                    *(int *)(*(long *)(param_5 + 0x20) + 0x1c) * (iVar11 - (uint)param_5[1]),
           (*(uint *)(*(long *)(*(long *)(param_5 + 0x20) + 0x10) + (long)((int)uVar6 >> 5) * 4) >>
            (ulong)(uVar6 & 0x1f) & 1) == 0)) {
          *(uint *)((long)local_d0 + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
               uVar4 & (uVar12 ^ 0xffffffff);
          local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + -1);
        }
        if (iVar15 < iVar2) {
          iVar15 = iVar15 + 1;
        }
        else {
          iVar11 = iVar11 + 1;
          iVar15 = iVar1;
        }
      } while ((iVar1 != iVar15) || (iVar13 != iVar11));
    }
  }
  puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar4 = *puVar9 ^ *puVar9 << 0xb;
  uVar12 = puVar9[3];
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar4 = uVar4 >> 8 ^ uVar12 >> 0x13 ^ uVar4 ^ uVar12;
  puVar9[2] = uVar12;
  puVar9[3] = uVar4;
  if (0 < (int)(uint)local_d8) {
    uVar12 = 0;
    uVar8 = (local_c8 & 0xffffffff) * (ulong)uVar4 >> 0x20;
    do {
      if ((*(uint *)((long)local_d0 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
      {
        if ((int)uVar8 == 0) {
          uVar10 = 1;
          iVar13 = 0;
          if (local_c8._4_4_ != 0) {
            iVar13 = (int)uVar12 / local_c8._4_4_;
          }
          iVar11 = uVar12 - local_c8._4_4_ * iVar13;
          goto LAB_021ff228;
        }
        uVar8 = (ulong)((int)uVar8 - 1);
      }
      uVar12 = uVar12 + 1;
    } while ((uint)local_d8 != uVar12);
  }
  uVar10 = 0;
  iVar11 = 0;
  iVar13 = 0;
LAB_021ff228:
  *param_1 = iVar11;
  *param_2 = iVar13;
  return uVar10;
}

