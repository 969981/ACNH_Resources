
/* WARNING: Removing unreachable block (ram,0x02f8cf48) */

void FUN_02f8cef8(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,3);
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7278), puVar3 = PTR_DAT_04bb2bc0,
     (uVar5 & 1) != 0)) {
    local_7d = 0;
    local_74 = 0;
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = (undefined1 *)0xffffffff00000004;
    local_78 = *(byte *)(param_1 + 0x1f8);
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    if (7 < local_78) {
      local_78 = 0xff;
    }
    local_c0 = 0x3730363300000040;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_b8 = 0;
    local_d0 = puVar1;
    local_c8 = (long)&local_c0 + 4;
    FUN_02ee2b00(puVar7,&local_e0,1);
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x218) + 0x570) + 0xa0);
    if (lVar6 != 0) {
      local_7d = 0;
      local_78 = *(byte *)(param_1 + 0x1f8);
      local_74 = 0;
      local_6c = 0xffffffffffffffff;
      if (7 < local_78) {
        local_78 = 0xff;
      }
      local_70 = 0;
      uStack_d8 = 0xffffffffffffffff;
      local_b8 = 0;
      local_e0 = (undefined1 *)CONCAT44(0xffffffff,*(undefined4 *)(lVar6 + 0x14));
      uVar2 = 0x38303633;
      if (*(int *)(param_1 + 0x228) == 1 && (param_3 & 1) == 0) {
        uVar2 = 0x39303633;
      }
      local_c0 = CONCAT44(uVar2,0x40);
      local_d0 = puVar1;
      local_c8 = (long)&local_c0 + 4;
      FUN_02ee2b00(puVar7,&local_e0,1);
    }
    if ((param_2 & 1) != 0) {
      local_d0 = puVar3 + 0x10;
      local_7d = 0;
      local_74 = 0;
      local_c0 = 0x3031363300000040;
      local_c8 = (long)&local_c0 + 4;
      local_6c = 0xffffffffffffffff;
      local_78 = *(byte *)(param_1 + 0x1f8);
      uStack_d8 = 0xffffffffffffffff;
      local_70 = 0;
      if (7 < local_78) {
        local_78 = 0xff;
      }
      local_b8 = 0;
      local_e0 = &DAT_ffffffff00000006;
      FUN_02ee2b00(puVar7,&local_e0,1);
    }
  }
  return;
}

