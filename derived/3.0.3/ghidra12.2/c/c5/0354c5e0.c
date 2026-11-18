
/* WARNING: Removing unreachable block (ram,0x0354c7dc) */

void FUN_0354c5e0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *local_100;
  char *local_f8;
  undefined1 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined8 local_c0;
  char *local_b8;
  undefined *local_b0;
  uint *local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98;
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (*(uint *)(lVar6 + 0x298) < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x444) + *(int *)(lVar6 + 0x2e8) * *(int *)(lVar6 + 0x440);
  }
  FUN_0354bdb0(auStack_d8,param_1,iVar4);
  uVar7 = 0xffffffff;
  uVar8 = *(uint *)(param_1 + 0x1c288);
  local_e8 = PTR_DAT_04bb2e18 + 0x10;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1c270))) {
    lVar6 = param_1 + 0x1c260;
    uVar3 = uVar8 + 1 & 3;
    if (2 < uVar8) {
      uVar8 = uVar8 + 1 & 0xfffffffc;
      do {
        uVar8 = uVar8 - 4;
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
      } while (uVar8 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar6 = *(long *)(lVar6 + 8);
    }
    uVar7 = 0xffffffff;
    if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c274), lVar6 != 0)) {
      uVar7 = *(undefined4 *)(lVar6 + 0x270);
    }
  }
  local_c0 = CONCAT44(local_c0._4_4_,uVar7);
  FUN_0354bdb0(auStack_cc,param_1,iVar4);
  FUN_03414580(&local_c0,auStack_cc,(byte *)(param_1 + 0x1f8));
  local_f0 = local_b0._0_1_;
  local_100._0_6_ = (undefined6)local_c0;
  local_f8 = local_b8;
  local_e0 = local_a0;
  uStack_dc = local_9c;
  uVar3 = FUN_03416230(auStack_d8,&local_100);
  uVar8 = *(uint *)(param_1 + 0x1c288);
  iVar4 = -1;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1c270))) {
    lVar6 = param_1 + 0x1c260;
    uVar1 = uVar8 + 1 & 3;
    if (2 < uVar8) {
      uVar8 = uVar8 + 1 & 0xfffffffc;
      do {
        uVar8 = uVar8 - 4;
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
      } while (uVar8 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar6 = *(long *)(lVar6 + 8);
    }
    iVar4 = -1;
    if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c274), lVar6 != 0)) {
      iVar4 = *(int *)(lVar6 + 0x270);
    }
  }
  uVar8 = uVar3 & 0xfffffffb;
  if (iVar4 != 0x78) {
    uVar8 = uVar3;
  }
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar9 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar5 & 1) != 0)) {
    FUN_03459d70();
    local_5d = 0;
    local_9c = local_9c & 0xffffff00;
    local_a8 = &local_9c;
    local_a0 = 0x40;
    local_c0 = 0xffffffffffffffff;
    local_b8 = (char *)0xffffffffffffffff;
    uVar3 = uVar8 & 0xff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_4c = 0xffffffffffffffff;
    local_54 = 0;
    local_50 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    puVar2 = local_a8;
    if ((uVar8 & 1) != 0) {
      local_c0 = 0xffffffff00000004;
      local_9c = 0x31303936;
      local_98 = 0;
      FUN_02ee2b00(puVar9,&local_c0,1);
      puVar2 = local_a8;
    }
    local_a8 = puVar2;
    if ((uVar3 >> 1 & 1) != 0) {
      local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      local_c0 = CONCAT44(local_c0._4_4_,5);
      if (puVar2 != (uint *)&DAT_04073db4) {
        iVar4 = 4;
        if (local_a0 < 5) {
          iVar4 = local_a0 + -1;
        }
        memcpy(puVar2,&DAT_04073db4,(long)iVar4);
        *(undefined1 *)((long)puVar2 + (long)iVar4) = 0;
      }
      FUN_02ee2b00(puVar9,&local_c0,1);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      local_100 = PTR_DAT_04bb2020 + 0x10;
      local_f8 = "/L_SortWin_00";
      lVar6 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_100);
      puVar2 = local_a8;
      if (lVar6 != 0) {
        local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar6 + 0x2cc));
        if (local_a8 != (uint *)&DAT_04073db9) {
          iVar4 = 4;
          if (local_a0 < 5) {
            iVar4 = local_a0 + -1;
          }
          memcpy(local_a8,&DAT_04073db9,(long)iVar4);
          *(undefined1 *)((long)puVar2 + (long)iVar4) = 0;
        }
        FUN_02ee2b00(puVar9,&local_c0,1);
      }
    }
    puVar2 = local_a8;
    if ((uVar3 >> 4 & 1) != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,6);
      if (local_a8 != (uint *)&DAT_0406ec7a) {
        iVar4 = 4;
        if (local_a0 < 5) {
          iVar4 = local_a0 + -1;
        }
        memcpy(local_a8,&DAT_0406ec7a,(long)iVar4);
        *(undefined1 *)((long)puVar2 + (long)iVar4) = 0;
      }
      FUN_02ee2b00(puVar9,&local_c0,1);
      puVar2 = local_a8;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      local_c0 = CONCAT44(local_c0._4_4_,6);
      local_a8 = puVar2;
      if (puVar2 != (uint *)&DAT_040f6af4) {
        iVar4 = 4;
        if (local_a0 < 5) {
          iVar4 = local_a0 + -1;
        }
        memcpy(puVar2,&DAT_040f6af4,(long)iVar4);
        *(undefined1 *)((long)puVar2 + (long)iVar4) = 0;
      }
      FUN_02ee2b00(puVar9,&local_c0,1);
      puVar2 = local_a8;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      local_c0 = CONCAT44(local_c0._4_4_,6);
      local_a8 = puVar2;
      if (puVar2 != (uint *)&DAT_040bcfb5) {
        iVar4 = 4;
        if (local_a0 < 5) {
          iVar4 = local_a0 + -1;
        }
        memcpy(puVar2,&DAT_040bcfb5,(long)iVar4);
        *(undefined1 *)((long)puVar2 + (long)iVar4) = 0;
      }
      FUN_02ee2b00(puVar9,&local_c0,1);
    }
  }
  return;
}

