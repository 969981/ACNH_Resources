
bool FUN_0277e394(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_18;
  
  lVar4 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar4 != 0) && (*(long *)(lVar4 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar4 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar4 + 0x488) != 0 && (*(long *)(*(long *)(lVar4 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar4 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar4 + 0x2b0) + 8) != 0)))))) {
    uVar1 = FUN_0277d6c4(param_1);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      FUN_0124c030(auStack_48,param_1);
      iVar2 = FUN_0123db50(auStack_40,local_38);
      if (iVar2 == 0x2e) {
        return false;
      }
      iVar2 = FUN_0277d6c4(param_1);
      if (iVar2 == 0xea79) {
        return false;
      }
      iVar2 = FUN_0123db50(auStack_40,local_38);
      if ((iVar2 - 2U & 0xfffffff9) == 0) {
        return false;
      }
      local_18 = 0xfffe;
      FUN_0277d4ac(&local_18);
      if ((((param_2 & 1) != 0) && (uVar3 = FUN_0124c4c0(auStack_48,&local_18,1), (uVar3 & 1) != 0))
         && (uVar3 = FUN_0277d9a8(&local_18), (uVar3 & 1) != 0)) {
        return true;
      }
      uVar3 = FUN_0124c70c(auStack_48,&local_18);
      if ((uVar3 & 1) == 0) {
        return false;
      }
      lVar4 = *(long *)PTR_DAT_04bb43c0;
      uVar1 = FUN_0277d6c4(&local_18);
      if (lVar4 == 0) {
        return false;
      }
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if (*(uint *)(lVar4 + 0x1d8) <= uVar1) {
        return false;
      }
      if (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) == 0) {
        return false;
      }
      return true;
    }
  }
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar1 = FUN_0277d6c4(param_1);
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (uVar1 < *(uint *)(lVar4 + 0x1d8)) {
      return *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0;
    }
  }
  return false;
}

