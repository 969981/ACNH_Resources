
undefined4 FUN_016fe470(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = PTR_DAT_04bc0510 + 0x10;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
      }
      iVar3 = FUN_01ad78cc(&local_58);
      puVar4 = (undefined4 *)PTR_DAT_04bb3808;
      switch(iVar3) {
      case 10:
        return *(undefined4 *)PTR_DAT_04bb3828;
      case 0xb:
        return *(undefined4 *)PTR_DAT_04bb3820;
      case 0xc:
        return *(undefined4 *)PTR_DAT_04bb37f0;
      case 0x14:
        return *(undefined4 *)PTR_DAT_04bb37f8;
      case 0x1b:
        return *(undefined4 *)PTR_DAT_04bb3818;
      case 0x1c:
        if ((*(uint *)(param_1 + 0x15f4) >> 3 & 1) == 0) {
          return *(undefined4 *)PTR_DAT_04bb3800;
        }
        return *(undefined4 *)PTR_DAT_04bb37e8;
      case 0x28:
        return *(undefined4 *)PTR_DAT_04bb3810;
      case 0x2a:
        return *(undefined4 *)PTR_DAT_04bb3830;
      case 0x3d:
        puVar4 = (undefined4 *)PTR_DAT_04bb3838;
      case 0x11:
        return *puVar4;
      }
      if (iVar3 == 0x6a) {
        return 0xd6;
      }
    }
  }
  return 0x9b;
}

