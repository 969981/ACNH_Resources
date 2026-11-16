
undefined8 * FUN_028160a8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  if (((DAT_0559d5b0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0559d5b0), iVar4 != 0)) {
    DAT_0559d5a4 = 0x1515;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0559d5b0);
  }
  if (((DAT_0559d5c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0559d5c0), iVar4 != 0)) {
    DAT_0559d5b8 = 0x347d;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0559d5c0);
  }
  if (((DAT_0559d5d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0559d5d0), iVar4 != 0)) {
    DAT_0559d5c8 = 0x3a2c;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0559d5d0);
  }
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = (undefined8 *)(param_1 + 0x1a50);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(puVar1);
  lVar6 = *(long *)puVar2;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_50 = *(undefined2 *)(param_1 + 0x1a50);
      local_48 = 0;
      local_4e = *(undefined2 *)(param_1 + 0x1a52);
      local_4c = *(undefined4 *)(param_1 + 0x1a54);
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(puVar1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
            local_48 = lVar6;
          }
        }
      }
      iVar4 = FUN_01ad78cc(&local_58);
      if (iVar4 == 0x1c) {
        uVar5 = FUN_0277d7b4(puVar1,&DAT_0559d5a4);
        if ((uVar5 & 1) != 0) {
          return puVar1;
        }
        uVar5 = FUN_0277d7b4(puVar1,&DAT_0559d5b8);
        if ((uVar5 & 1) != 0) {
          return puVar1;
        }
        uVar5 = FUN_0277d7b4(puVar1,&DAT_0559d5c8);
        if ((uVar5 & 1) != 0) {
          return puVar1;
        }
      }
    }
  }
  return &DAT_0559d5a4;
}

