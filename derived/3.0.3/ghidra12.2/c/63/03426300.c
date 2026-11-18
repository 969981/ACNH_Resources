
int FUN_03426300(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar5 = *(long *)puVar2;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      local_48 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
            local_38 = lVar5;
          }
        }
      }
      iVar4 = FUN_01aff960(&local_48);
      iVar1 = iVar4 * 700 + 300;
      if (7 < iVar4) {
        iVar1 = iVar4 * 800;
      }
      return iVar1;
    }
  }
  return 0;
}

