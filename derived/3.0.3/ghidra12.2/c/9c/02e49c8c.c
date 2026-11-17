
/* WARNING: Removing unreachable block (ram,0x02e49ccc) */

void FUN_02e49c8c(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    local_4d = 0;
    local_90 = 0x40;
    local_98 = &local_8c;
    local_3c = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_8c = local_8c & 0xffffff00;
    local_44 = 0;
    local_40 = 0;
    local_48 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_48) {
      local_48 = 0xff;
    }
    if ((param_2 & 1) == 0) {
      local_b0 = 0xffffffff00000004;
      local_8c = 0x31303935;
      local_88 = 0;
      FUN_02ee2b00(puVar5,&local_b0,1);
    }
    puVar1 = local_98;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
    if (lVar4 != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      if (local_98 != (uint *)&DAT_040acc34) {
        iVar2 = 4;
        if (local_90 < 5) {
          iVar2 = local_90 + -1;
        }
        memcpy(local_98,&DAT_040acc34,(long)iVar2);
        *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
      }
      FUN_02ee2b00(puVar5,&local_b0,1);
    }
  }
  return;
}

