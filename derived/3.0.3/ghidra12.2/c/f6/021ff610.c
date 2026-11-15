
/* WARNING: Removing unreachable block (ram,0x021ff658) */
/* WARNING: Removing unreachable block (ram,0x021ff668) */

uint FUN_021ff610(int *param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  uint local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
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
  
  puVar6 = PTR_DAT_04bb5c90;
  local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_84 = 0;
  local_8c = 0;
  local_94 = 0;
  local_9c = 0;
  local_108 = &local_f4;
  local_a4 = 0;
  local_110 = 0x1f000003c1;
  local_1b8 = PTR_DAT_04bb7f30 + 0x10;
  local_fc = 0x1f0000001f;
  lStack_70 = DAT_04cfae30 + 0x28;
  local_ac = 0;
  local_b4 = 0;
  local_bc = 0;
  local_c4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e4 = 0;
  local_ec = 0;
  local_f4 = 0;
  local_7c = 0;
  local_100 = 0;
  lVar11 = *(long *)PTR_DAT_04bb5c90;
  iVar5 = *(int *)(lVar11 + 0x28) + param_4 * -2;
  iVar2 = *(int *)(lVar11 + 0x38) + param_4 * 2;
  iVar1 = *(int *)(lVar11 + 0x2c) + 10;
  iVar12 = *(int *)(lVar11 + 0x3c) + param_4 * 2;
  local_19c = 0x1f0000001f;
  iVar3 = iVar5;
  if (iVar2 <= iVar5) {
    iVar3 = iVar2;
  }
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  local_194 = 0;
  iVar2 = iVar1;
  if (iVar12 <= iVar1) {
    iVar2 = iVar12;
  }
  if (iVar1 <= iVar12) {
    iVar1 = iVar12;
  }
  local_18c = 0;
  local_1a8 = &local_194;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_1a0 = 0;
  local_1b0 = 0x1f000003c1;
  local_118 = local_1b8;
  FUN_021454d0(&local_1b8,param_3,iVar3,iVar2);
  if (iVar1 + 1 != iVar2) {
    lVar11 = *(long *)puVar6;
    iVar12 = iVar2;
    iVar13 = iVar3;
    do {
      if (((iVar13 < *(int *)(lVar11 + 0x28) || *(int *)(lVar11 + 0x38) < iVar13) ||
          (iVar12 < *(int *)(lVar11 + 0x2c))) || (*(int *)(lVar11 + 0x3c) < iVar12)) {
        uVar8 = FUN_035aa210(iVar13 + -1,iVar12 + -1,&local_78);
        if ((((uVar8 & 1) != 0) &&
            (uVar8 = FUN_035aa210(iVar13 + -1,iVar12,&local_78), (uVar8 & 1) != 0)) &&
           ((uVar8 = FUN_035aa210(iVar13,iVar12 + -1,&local_78), (uVar8 & 1) != 0 &&
            (uVar8 = FUN_035aa210(iVar13,iVar12,&local_78), (uVar8 & 1) != 0)))) {
          uVar7 = (iVar13 - iVar3) + (int)local_19c * (iVar12 - iVar2);
          if ((*(uint *)((long)local_1a8 + (long)((int)uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1
              ) == 0) {
            uVar4 = (iVar13 - iVar3) + (int)local_fc * (iVar12 - iVar2);
            uVar10 = 1 << (ulong)(uVar4 & 0x1f);
            uVar7 = *(uint *)((long)local_108 + (long)((int)uVar4 >> 5) * 4);
            if ((uVar10 & uVar7) == 0) {
              *(uint *)((long)local_108 + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar10 | uVar7;
              local_100 = local_100 + 1;
            }
          }
        }
      }
      if (iVar13 < iVar5) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar13 = iVar3;
      }
    } while ((iVar3 != iVar13) || (iVar1 + 1 != iVar12));
  }
  puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar7 = *puVar9 ^ *puVar9 << 0xb;
  uVar10 = puVar9[3];
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar7 = uVar7 >> 8 ^ uVar10 >> 0x13 ^ uVar7 ^ uVar10;
  puVar9[2] = uVar10;
  puVar9[3] = uVar7;
  if (0 < (int)(uint)local_110) {
    uVar10 = 0;
    uVar8 = (ulong)local_100 * (ulong)uVar7 >> 0x20;
    do {
      if ((*(uint *)((long)local_108 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0
         ) {
        if ((int)uVar8 == 0) {
          uVar7 = 1;
          iVar1 = 0;
          if ((int)local_fc != 0) {
            iVar1 = (int)uVar10 / (int)local_fc;
          }
          *param_1 = uVar10 - (int)local_fc * iVar1;
          *param_2 = iVar1;
          goto LAB_021ff97c;
        }
        uVar8 = (ulong)((int)uVar8 - 1);
      }
      uVar10 = uVar10 + 1;
    } while ((uint)local_110 != uVar10);
  }
  uVar7 = FUN_021ff2d0(param_1,param_2,param_3);
LAB_021ff97c:
  return uVar7 & 1;
}

