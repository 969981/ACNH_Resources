
/* WARNING: Removing unreachable block (ram,0x03166be0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_03166b9c(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  uint *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined1 local_6d;
  byte local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined *local_50;
  char *pcStack_48;
  
  local_d0 = CONCAT44(local_d0._4_4_,3);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    FUN_03459d70();
    local_6d = 0;
    local_ac = local_ac & 0xffffff00;
    local_b8 = &local_ac;
    local_b0 = 0x40;
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0xffffffffffffffff;
    uVar1 = param_2 & 0xff;
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    local_5c = 0xffffffffffffffff;
    local_64 = 0;
    local_60 = 0;
    local_68 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_68) {
      local_68 = 0xff;
    }
    if ((param_2 & 1) != 0) {
      local_d0 = 0xffffffff00000004;
      local_ac = 0x31303231;
      local_a8 = 0;
      FUN_02ee2b00(puVar6,&local_d0,1);
    }
    puVar2 = local_b8;
    if (((uVar1 >> 1 & 1) != 0) &&
       (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar5 != 0)) {
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar5 + 0x14));
      if (local_b8 != (uint *)&DAT_040fb011) {
        iVar3 = 4;
        if (local_b0 < 5) {
          iVar3 = local_b0 + -1;
        }
        memcpy(local_b8,&DAT_040fb011,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "/L_SortWin_00";
      lVar5 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_50);
      puVar2 = local_b8;
      if (lVar5 != 0) {
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar5 + 0x2cc));
        if (local_b8 != (uint *)&DAT_040b2068) {
          iVar3 = 4;
          if (local_b0 < 5) {
            iVar3 = local_b0 + -1;
          }
          memcpy(local_b8,&DAT_040b2068,(long)iVar3);
          *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
        }
        FUN_02ee2b00(puVar6,&local_d0,1);
      }
    }
    puVar2 = local_b8;
    if ((uVar1 >> 4 & 1) != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,DAT_056fc1b0);
      if (local_b8 != (uint *)&DAT_0409dcd2) {
        iVar3 = 4;
        if (local_b0 < 5) {
          iVar3 = local_b0 + -1;
        }
        memcpy(local_b8,&DAT_0409dcd2,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
      puVar2 = local_b8;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
      local_d0 = CONCAT44(local_d0._4_4_,DAT_056fc1b0);
      local_b8 = puVar2;
      if (puVar2 != (uint *)&DAT_04063d61) {
        iVar3 = 4;
        if (local_b0 < 5) {
          iVar3 = local_b0 + -1;
        }
        memcpy(puVar2,&DAT_04063d61,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
      puVar2 = local_b8;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
      local_d0 = CONCAT44(local_d0._4_4_,6);
      local_b8 = puVar2;
      if (puVar2 != (uint *)&DAT_040790a0) {
        iVar3 = 4;
        if (local_b0 < 5) {
          iVar3 = local_b0 + -1;
        }
        memcpy(puVar2,&DAT_040790a0,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
      puVar2 = local_b8;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
      local_d0 = CONCAT44(local_d0._4_4_,6);
      local_b8 = puVar2;
      if (puVar2 != (uint *)&DAT_040b785d) {
        iVar3 = 4;
        if (local_b0 < 5) {
          iVar3 = local_b0 + -1;
        }
        memcpy(puVar2,&DAT_040b785d,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
    }
  }
  return;
}

