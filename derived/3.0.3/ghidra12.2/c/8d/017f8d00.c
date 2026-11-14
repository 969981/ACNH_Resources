
uint FUN_017f8d00(long param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  uVar5 = *(undefined8 *)PTR_DAT_04bb46d0;
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x208) != -1) {
    uVar3 = 0xea;
    goto LAB_017f8ed0;
  }
  sVar1 = *(short *)(param_1 + 0xb4);
  if (sVar1 == -2) {
    local_38 = 0x139b;
    FUN_0277d4ac(&local_38);
    puVar2 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    local_44 = local_38._4_4_;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_38);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar4 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(lVar6 + 0x1e0);
LAB_017f8eb8:
          lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8);
          if (lVar6 != 0) {
            local_40 = lVar6;
          }
        }
      }
    }
  }
  else {
    local_40 = 0;
    local_48 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar1);
    local_44 = *(undefined4 *)(param_1 + 0xb8);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4((short *)(param_1 + 0xb4));
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar4 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(lVar6 + 0x1e0);
          goto LAB_017f8eb8;
        }
      }
    }
  }
  uVar3 = FUN_01b020f0(&local_50);
LAB_017f8ed0:
  uVar4 = FUN_017c0620(uVar5,uVar3);
  return uVar4 & 1;
}

