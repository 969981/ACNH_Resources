
undefined8 FUN_0041a8d0(long param_1,undefined8 param_2)

{
  undefined1 *__n;
  int iVar1;
  void *__dest;
  undefined1 *puVar2;
  void *__src;
  long lVar3;
  undefined1 *puVar4;
  long *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  long local_70;
  long local_68;
  void *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 uStack_31;
  
  puStack_a8 = &uStack_31;
  local_50 = (undefined1 *)0x0;
  local_48 = (undefined1 *)0x100;
  local_b0 = &local_70;
  local_80 = 0x200;
  local_78 = 0x144;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = (undefined1 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_001896f8(&local_b0);
  FUN_0018f3d0(&local_b0,"requestId",9,0);
  iVar1 = FUN_00189e50(0xffffffff);
  FUN_00189aa8(&local_b0,iVar1 + 1);
  FUN_0018f3d0(&local_b0,"parameter",9,0);
  FUN_001896f8(&local_b0);
  FUN_0018f3d0(&local_b0,"roomId",6,0);
  FUN_001898c4(&local_b0,*(undefined8 *)(param_1 + 8));
  local_90 = local_90 + -0x10;
  FUN_00421000(&local_b0);
  local_90 = local_90 + -0x10;
  FUN_00421000(&local_b0);
  if (local_50 < local_58 + 1) {
    if (local_60 == (void *)0x0) {
      if (local_70 == 0) {
        local_70 = FUN_00187df4(1);
        puVar2 = local_48;
        __src = local_60;
        local_68 = local_70;
      }
      else {
        puVar2 = local_48;
        __src = (void *)0x0;
      }
    }
    else {
      puVar2 = local_50 + (((ulong)(local_50 + (1 - (long)local_60)) >> 1) - (long)local_60);
      __src = local_60;
    }
    lVar3 = (long)local_58 - (long)__src;
    if (puVar2 <= (undefined1 *)(lVar3 + 1)) {
      puVar2 = (undefined1 *)(lVar3 + 1);
    }
    if (puVar2 == (undefined1 *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      puVar4 = local_50 + -(long)__src;
      __dest = (void *)FUN_00187df4(puVar2);
      __n = puVar2;
      if (puVar4 <= puVar2) {
        __n = puVar4;
      }
      memcpy(__dest,__src,(size_t)__n);
    }
    FUN_00187e4c(__src);
    local_58 = (undefined1 *)((long)__dest + lVar3);
    local_50 = (undefined1 *)((long)__dest + (long)puVar2);
    local_60 = __dest;
  }
  *local_58 = 0;
  FUN_0018a58c(param_2,local_60);
  FUN_00187e4c(local_98);
  if (local_a0 != 0) {
    FUN_00187e4c();
  }
  FUN_00187e4c(local_60);
  if (local_68 != 0) {
    FUN_00187e4c();
  }
  return 1;
}

