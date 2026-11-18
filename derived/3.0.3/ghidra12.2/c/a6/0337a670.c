
void FUN_0337a670(long param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined8 local_38;
  uint local_2c;
  int local_28;
  uint local_24;
  
  if (param_1 != 0) {
    puVar5 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    local_2c = param_2;
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    uVar4 = local_2c;
    if (*(uint *)(puVar5 + 0x42) <= local_2c) {
      uVar4 = 0;
    }
    local_38 = *(undefined8 *)(puVar5[0x43] + (long)(int)uVar4 * 8);
    local_80 = 0x40;
    local_3d = 0;
    puStack_88 = local_7c;
    local_7c[0] = 0;
    local_90 = PTR_DAT_04bb2bc0 + 0x10;
    local_28 = **(int **)PTR_DAT_04bb3448;
    if (local_28 == 0xc) {
      iVar2 = param_3 % 10;
      param_3 = param_3 % 100;
      if ((iVar2 == 1) && (param_3 != 0xb)) {
        local_24 = 1;
      }
      else if ((((iVar2 == 2) && (param_3 != 0xc)) || ((iVar2 == 3 && (param_3 != 0xd)))) ||
              ((local_24 = 3, iVar2 == 4 && (param_3 != 0xe)))) {
        local_24 = 2;
      }
    }
    else {
      uVar4 = 3;
      if (param_3 == 0) {
        uVar4 = 1;
      }
      local_24 = 2;
      if (param_3 != 1) {
        local_24 = uVar4;
      }
    }
    lVar1 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)local_24 * 0x128;
    if (0x50 < local_24) {
      lVar1 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
    }
    FUN_034632e0(&local_90,lVar1);
  }
  return;
}

