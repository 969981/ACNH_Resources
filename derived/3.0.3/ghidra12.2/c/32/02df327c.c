
/* WARNING: Removing unreachable block (ram,0x02df32b4) */

void FUN_02df327c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 *puStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_3d;
  byte local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_2c;
  
  _local_a0 = CONCAT44(uStack_9c,3);
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc7278), (uVar2 & 1) != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x228))(param_1);
    if (lVar3 == 0) {
      *(byte *)((long)puVar4 + 0x239) = *(byte *)((long)puVar4 + 0x239) | 4;
    }
    else {
      local_3d = 0;
      uStack_98 = 0xffffffffffffffff;
      puStack_88 = &local_7c;
      local_80 = 0x40;
      local_2c = 0xffffffffffffffff;
      local_90 = PTR_DAT_04bb2bc0 + 0x10;
      local_34 = 0;
      local_30 = 0;
      local_38 = *(byte *)(param_1 + 0x3f);
      if (7 < local_38) {
        local_38 = 0xff;
      }
      local_7c = 0x31303733;
      local_78 = 0;
      _local_a0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar3 + 0x14));
      FUN_02ee2b00(puVar4,&local_a0,1);
    }
  }
  return;
}

