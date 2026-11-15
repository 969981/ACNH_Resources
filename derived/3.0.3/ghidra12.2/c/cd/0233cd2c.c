
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffac : 0x0233ce7c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0233cd2c(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte local_54;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_40 = 0;
      local_48 = *param_1;
      uStack_44 = param_1[1];
      local_50 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar3 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
            local_40 = lVar3;
          }
        }
      }
      local_34 = local_34 & 0xffff0000;
      FUN_01adab50(&local_50,&local_34);
      local_54 = (byte)local_34;
      if (((local_54 >> 5 & 1) != 0) && ((local_54 >> 6 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

