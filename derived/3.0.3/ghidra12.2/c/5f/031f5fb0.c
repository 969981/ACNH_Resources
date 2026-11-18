
/* WARNING: Removing unreachable block (ram,0x031f5fec) */

void FUN_031f5fb0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined1 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    local_4d = 0;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_98 = &local_8c;
    local_90 = 0x40;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_3c = 0xffffffffffffffff;
    local_8c = local_8c & 0xffffff00;
    local_44 = 0;
    local_40 = 0;
    local_48 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_48) {
      local_48 = 0xff;
    }
    uVar1 = *(uint *)(param_1 + 0x1c5a8);
    if (*(uint *)(param_1 + 0x340) <= uVar1) {
      uVar1 = 0;
    }
    if ((*(uint *)(*(long *)(param_1 + 0x348) + (long)(int)uVar1 * 0x70 + 8) | 2) == 0x8f) {
      local_b0 = 0xffffffff00000004;
      local_8c = 0x31303337;
      local_88 = 0;
      FUN_02ee2b00(puVar6,&local_b0,1);
    }
    puVar2 = local_98;
    lVar5 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if (lVar5 != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar5 + 0x14));
      if (local_98 != (uint *)&DAT_040ad0df) {
        iVar3 = 4;
        if (local_90 < 5) {
          iVar3 = local_90 + -1;
        }
        memcpy(local_98,&DAT_040ad0df,(long)iVar3);
        *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
      }
      FUN_02ee2b00(puVar6,&local_b0,1);
    }
  }
  return;
}

