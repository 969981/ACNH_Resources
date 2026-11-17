
/* WARNING: Removing unreachable block (ram,0x02bb90ec) */

void FUN_02bb90b0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  undefined *local_40;
  char *pcStack_38;
  
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    local_5d = 0;
    local_a0 = 0x3130373400000040;
    local_a8 = (undefined *)((long)&local_a0 + 4);
    local_54 = 0;
    local_4c = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_50 = 0;
    local_98 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    local_c0 = 0xffffffff00000004;
    FUN_02ee2b00(puVar5,&local_c0,1);
    puVar1 = local_a8;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x220) + 0x570) + 0xa0);
    if (lVar4 != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      if (local_a8 != &DAT_040cb662) {
        iVar2 = 4;
        if ((int)local_a0 < 5) {
          iVar2 = (int)local_a0 + -1;
        }
        memcpy(local_a8,&DAT_040cb662,(long)iVar2);
        puVar1[iVar2] = 0;
      }
      FUN_02ee2b00(puVar5,&local_c0,1);
    }
    if (*(int *)(param_1 + 0x1c1c0) == 0xd) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "/L_SortWin_00";
      lVar4 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x220) + 0x3f8) + 0x38,&local_40);
      puVar1 = local_a8;
      if (lVar4 != 0) {
        local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x2cc));
        if (local_a8 != &DAT_04088571) {
          iVar2 = 4;
          if ((int)local_a0 < 5) {
            iVar2 = (int)local_a0 + -1;
          }
          memcpy(local_a8,&DAT_04088571,(long)iVar2);
          puVar1[iVar2] = 0;
        }
        FUN_02ee2b00(puVar5,&local_c0,1);
      }
    }
  }
  return;
}

