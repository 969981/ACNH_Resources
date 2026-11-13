
undefined2 FUN_01250420(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) {
    return 0xfffe;
  }
  local_3c = *(uint *)(param_1 + 0xc) & 0xffff;
  local_38 = 0;
  FUN_0277d4ac(&local_3c);
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_3c);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = local_3c;
      uStack_4c = local_38;
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_3c);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
      }
      uVar4 = FUN_01aed584(&local_58);
      if ((uVar4 & 1) != 0) {
LAB_01250550:
        return *(undefined2 *)(param_1 + 0xc);
      }
      if (DAT_04c487d4 != -1) {
        local_34 = 0x20;
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if (((*(uint *)(puVar1 + 4) & 1) != 0) && (iVar3 = FUN_0277d6c4(&local_3c), iVar3 == 0x1e33)
           ) goto LAB_01250550;
      }
    }
  }
  return 0x842;
}

