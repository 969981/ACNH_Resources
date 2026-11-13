
/* WARNING: Removing unreachable block (ram,0x01389d84) */
/* WARNING: Removing unreachable block (ram,0x01389d94) */
/* WARNING: Removing unreachable block (ram,0x01389da0) */

void FUN_01389d40(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined **local_b0;
  ulong *puStack_a8;
  undefined4 *local_a0;
  ulong local_90 [2];
  uint local_80;
  long local_78;
  long lStack_70;
  undefined4 local_64;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    local_90[0] = local_90[0] & 0xffffffff00000000;
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar6 != 0) {
      if ((*(uint *)(param_1 + 8) >> 3 & 1) != 0) {
        FUN_012588e8(lVar6);
      }
      lVar1 = param_1 + 0x10;
      FUN_01389ee8(param_1 + 0x60,lVar6,lVar1);
      uVar7 = *(uint *)(param_1 + 8);
      if ((uVar7 >> 1 & 1) != 0) {
        local_64 = 0;
        local_90[0] = local_90[0] & 0xffffffff00000000;
        uVar4 = local_90[0];
        local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
        local_90[0]._0_4_ = 0;
        uVar7 = (uint)local_90[0];
        local_90[0] = uVar4;
        do {
          local_90[0] = CONCAT44(local_90[0]._4_4_,uVar7);
          lVar3 = lVar6 + 200 + (ulong)uVar7 * 0x10;
          if (7 < uVar7) {
            lVar3 = lVar6 + 200;
          }
          lVar5 = *(long *)(lVar3 + 8);
          if (lVar5 != 0) {
            puVar2 = (undefined8 *)(lVar5 + 0x1d8);
            uVar4 = (**(code **)(*(long *)(lVar5 + 0x1d8) + 0x10))(puVar2);
            if (((uVar4 & 1) != 0) && (lVar5 = (**(code **)*puVar2)(puVar2), lVar5 != 0)) {
              puStack_a8 = local_90;
              local_b0 = &PTR_LAB_04993ad0;
              local_a0 = &local_64;
              local_90[0] = param_1 + 0x70;
              local_80 = uVar7;
              local_78 = lVar3;
              lStack_70 = lVar1;
              if (*(long *)(lVar3 + 8) != 0) {
                FUN_012e6150(*(long *)(lVar3 + 8),&local_b0,lVar6 + 0x38);
              }
            }
          }
          uVar8 = 8;
          if ((int)uVar7 < 8) {
            uVar8 = uVar7 + 1;
          }
          uVar7 = uVar8;
        } while (uVar8 != 2);
        uVar7 = *(uint *)(param_1 + 8);
      }
      if ((uVar7 >> 2 & 1) != 0) {
        FUN_0138a180(param_1,lVar6);
      }
    }
  }
  return;
}

