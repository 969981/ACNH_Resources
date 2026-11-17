
/* WARNING: Removing unreachable block (ram,0x02d86ab0) */

void FUN_02d86a68(long param_1,ulong param_2)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  if (*(char *)(param_1 + 0x5ec) != '\0') {
    local_b0 = CONCAT44(local_b0._4_4_,3);
    puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar5 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
      local_4d = 0;
      local_90 = 0x3039303100000040;
      local_98 = (char *)((long)&local_90 + 4);
      uStack_a8 = 0xffffffffffffffff;
      local_3c = 0xffffffffffffffff;
      local_44 = 0;
      local_40 = 0;
      local_a0 = PTR_DAT_04bb2bc0 + 0x10;
      local_48 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_48) {
        local_48 = 0xff;
      }
      local_b0 = 0xffffffff00000004;
      local_88 = 0x31;
      FUN_02ee2b00(puVar5,&local_b0,1);
      pcVar1 = local_98;
      lVar4 = *(long *)(*(long *)(param_1 + 0x688) + 0xa0);
      if (lVar4 != 0) {
        local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
        if (local_98 != "10902") {
          iVar2 = 5;
          if ((int)local_90 < 6) {
            iVar2 = (int)local_90 + -1;
          }
          memcpy(local_98,"10902",(long)iVar2);
          pcVar1[iVar2] = '\0';
        }
        FUN_02ee2b00(puVar5,&local_b0,1);
      }
      pcVar1 = local_98;
      if ((param_2 & 1) != 0) {
        local_b0._0_4_ = 0xf;
        if (local_98 != "10903") {
          iVar2 = 5;
          if ((int)local_90 < 6) {
            iVar2 = (int)local_90 + -1;
          }
          memcpy(local_98,"10903",(long)iVar2);
          pcVar1[iVar2] = '\0';
        }
        FUN_02ee2b00(puVar5,&local_b0,1);
        pcVar1 = local_98;
        local_b0 = CONCAT44(local_b0._4_4_,7);
        if (local_98 != "10904") {
          iVar2 = 5;
          if ((int)local_90 < 6) {
            iVar2 = (int)local_90 + -1;
          }
          memcpy(local_98,"10904",(long)iVar2);
          pcVar1[iVar2] = '\0';
        }
        FUN_02ee2b00(puVar5,&local_b0,1);
      }
    }
  }
  return;
}

