
/* WARNING: Removing unreachable block (ram,0x028cb6fc) */
/* WARNING: Removing unreachable block (ram,0x028cb704) */

undefined8
FUN_028cb670(long param_1,byte *param_2,ulong param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long *local_d0;
  byte *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  long **pplStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  uVar11 = 2;
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == (byte *)0x0) {
    return 2;
  }
  local_c8 = (byte *)0x0;
  local_c0 = 0;
  pplStack_58 = &local_d0;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_d0 = (long *)0x0;
  uStack_80 = 0;
  local_7a = 0;
  uStack_78 = 0;
  local_50 = FUN_028b5fd4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04a91fa8;
  _local_88 = CONCAT44(param_6,param_5);
  local_68 = (ulong)param_7;
  local_70 = 4;
  local_90 = param_1;
  FUN_028b5ff0(pplStack_58);
  if (local_68._4_4_ == 2) {
    if (local_c0 == param_3) {
      if ((param_4 == (uint *)0x0) || (param_4[1] == 0)) {
        uVar4 = 0;
        uVar2 = 0xffffffff;
        uVar9 = 0;
        uVar8 = 0;
        uVar3 = 0xffffffff;
      }
      else {
        uVar4 = *param_4;
        if (uVar4 == 0) {
          uVar2 = 0xffffffff;
          uVar9 = 0;
          uVar8 = 0;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = uVar4 & 3;
          pbVar6 = param_2;
          if (uVar4 < 4) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar8 = uVar4 & 0xfffffffc;
            uVar2 = 0xffffffff;
            do {
              uVar8 = uVar8 - 4;
              uVar1 = crc32b(uVar2,(uint)*pbVar6,0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[1],0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[2],0x4c11db7);
              pbVar7 = pbVar6 + 3;
              pbVar6 = pbVar6 + 4;
              uVar2 = crc32b(uVar1,(uint)*pbVar7,0x4c11db7);
            } while (uVar8 != 0);
          }
          while (uVar3 != 0) {
            uVar3 = uVar3 - 1;
            uVar2 = crc32b(uVar2,(uint)*pbVar6,0x4c11db7);
            pbVar6 = pbVar6 + 1;
          }
          uVar8 = uVar4 & 3;
          pbVar6 = local_c8;
          if (uVar4 < 4) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar9 = uVar4 & 0xfffffffc;
            uVar3 = 0xffffffff;
            do {
              uVar9 = uVar9 - 4;
              uVar1 = crc32b(uVar3,(uint)*pbVar6,0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[1],0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[2],0x4c11db7);
              pbVar7 = pbVar6 + 3;
              pbVar6 = pbVar6 + 4;
              uVar3 = crc32b(uVar1,(uint)*pbVar7,0x4c11db7);
            } while (uVar9 != 0);
          }
          while (uVar8 != 0) {
            uVar8 = uVar8 - 1;
            uVar3 = crc32b(uVar3,(uint)*pbVar6,0x4c11db7);
            pbVar6 = pbVar6 + 1;
          }
          uVar8 = ~uVar2;
          uVar9 = ~uVar3;
        }
        uVar4 = uVar4 + param_4[1];
      }
      uVar5 = (ulong)uVar4;
      if (uVar5 < param_3) {
        uVar8 = (int)param_3 - uVar4;
        if (uVar8 != 0) {
          pbVar6 = param_2 + uVar5;
          uVar9 = uVar8 & 3;
          uVar4 = ~uVar4 + (int)param_3;
          if (2 < uVar4) {
            uVar10 = uVar8 & 0xfffffffc;
            do {
              uVar10 = uVar10 - 4;
              uVar1 = crc32b(uVar2,(uint)*pbVar6,0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[1],0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[2],0x4c11db7);
              pbVar7 = pbVar6 + 3;
              pbVar6 = pbVar6 + 4;
              uVar2 = crc32b(uVar1,(uint)*pbVar7,0x4c11db7);
            } while (uVar10 != 0);
          }
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            uVar2 = crc32b(uVar2,(uint)*pbVar6,0x4c11db7);
            pbVar6 = pbVar6 + 1;
          }
          pbVar6 = local_c8 + uVar5;
          uVar9 = uVar8 & 3;
          if (2 < uVar4) {
            uVar8 = uVar8 & 0xfffffffc;
            do {
              uVar8 = uVar8 - 4;
              uVar1 = crc32b(uVar3,(uint)*pbVar6,0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[1],0x4c11db7);
              uVar1 = crc32b(uVar1,(uint)pbVar6[2],0x4c11db7);
              pbVar7 = pbVar6 + 3;
              pbVar6 = pbVar6 + 4;
              uVar3 = crc32b(uVar1,(uint)*pbVar7,0x4c11db7);
            } while (uVar8 != 0);
          }
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            uVar3 = crc32b(uVar3,(uint)*pbVar6,0x4c11db7);
            pbVar6 = pbVar6 + 1;
          }
        }
        uVar8 = ~uVar2;
        uVar9 = ~uVar3;
      }
      if (uVar8 == uVar9) {
        if (param_4 == (uint *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = param_4[1];
          if (uVar4 != 0) {
            uVar2 = *param_4;
            uVar5 = (ulong)uVar2;
            if (uVar2 != 0) {
              pbVar6 = local_c8;
              pbVar7 = param_2;
              do {
                if (*pbVar7 != *pbVar6) goto LAB_028cb9b8;
                pbVar6 = pbVar6 + 1;
                pbVar7 = pbVar7 + 1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            uVar4 = uVar2 + uVar4;
          }
        }
        uVar5 = (ulong)uVar4;
        if (uVar5 < param_3) {
          do {
            uVar4 = uVar4 + 1;
            if (param_2[uVar5] != local_c8[uVar5]) goto LAB_028cb9b8;
            uVar5 = (ulong)uVar4;
            uVar11 = 0;
          } while (uVar5 < param_3);
        }
        else {
          uVar11 = 0;
        }
        goto LAB_028cb9bc;
      }
    }
LAB_028cb9b8:
    uVar11 = 1;
  }
LAB_028cb9bc:
  if (local_a8 != 0) {
    (**(code **)(*local_b0 + 0x38))();
  }
  if (local_c8 != (byte *)0x0) {
    (**(code **)(*local_d0 + 0x38))();
  }
  return uVar11;
}

