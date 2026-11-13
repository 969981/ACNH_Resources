
void FUN_011be848(long param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04bb5c90;
  if (param_1 != 0) {
    local_50 = PTR_DAT_04bbb978 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb5c90;
    uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x498);
    if (uVar4 < *(uint *)(lVar6 + 0x478)) {
      local_48 = *(undefined8 *)(*(long *)(lVar6 + 0x480) + (long)(int)uVar4 * 8);
    }
    else {
      local_48 = 0;
    }
    uVar5 = FUN_0119f860(&local_50);
    if ((uVar5 & 1) != 0) {
      iVar1 = *(int *)(param_3 + 0xc) + *(int *)(*(long *)puVar3 + 0x2c);
      iVar2 = *(int *)(param_3 + 8) + *(int *)(*(long *)puVar3 + 0x28);
      FUN_0119ffb0(&local_28,&local_50);
      puVar3 = PTR_DAT_04bb43c0;
      local_58 = 0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = local_28;
      uStack_5c = uStack_24;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar3 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(&local_28);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
            local_58 = lVar6;
          }
        }
      }
      local_80 = 0;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_70 = 0;
      local_78 = puStack_88;
      FUN_01afb480(&local_68,&local_90);
      *(int *)(param_1 + 0x10) = (int)local_80 + iVar2;
      *(int *)(param_1 + 0x14) = local_80._4_4_ + iVar1;
      *(int *)(param_1 + 0x20) = (int)local_70 + iVar2;
      *(int *)(param_1 + 0x24) = local_70._4_4_ + iVar1;
    }
  }
  return;
}

