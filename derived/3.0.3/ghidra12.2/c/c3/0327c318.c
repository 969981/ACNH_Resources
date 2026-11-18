
/* WARNING: Removing unreachable block (ram,0x0327c354) */

void FUN_0327c318(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc7278), puVar1 = PTR_DAT_04bb2bc0,
     (uVar3 & 1) != 0)) {
    if ((*(char *)(param_1 + 0x218) == '\0') || (*(int *)(param_1 + 0x21c) != 3)) {
      local_4d = 0;
      local_44 = 0;
      local_90 = 0x3130383600000040;
      local_a0 = PTR_DAT_04bb2bc0 + 0x10;
      lStack_98 = (long)&local_90 + 4;
      local_48 = *(byte *)(param_1 + 0x1f8);
      uStack_a8 = 0xffffffffffffffff;
      local_3c = 0xffffffffffffffff;
      if (7 < local_48) {
        local_48 = 0xff;
      }
      local_40 = 0;
      local_88 = 0;
      local_b0 = 0xffffffff00000005;
      FUN_02ee2b00(puVar4,&local_b0,1);
      if (*(char *)(param_1 + 0x218) == '\0') {
        return;
      }
      if ((*(uint *)(param_1 + 0x21c) & 0xfffffffe) != 2) {
        return;
      }
    }
    local_a0 = puVar1 + 0x10;
    local_4d = 0;
    local_44 = 0;
    local_90 = 0x3230383600000040;
    lStack_98 = (long)&local_90 + 4;
    uStack_a8 = 0xffffffffffffffff;
    local_3c = 0xffffffffffffffff;
    local_40 = 0;
    local_88 = 0;
    local_b0 = 0xffffffff0000000c;
    local_48 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_48) {
      local_48 = 0xff;
    }
    FUN_02ee2b00(puVar4,&local_b0,1);
  }
  return;
}

