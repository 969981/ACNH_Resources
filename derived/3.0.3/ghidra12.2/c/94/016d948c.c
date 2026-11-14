
undefined8 FUN_016d948c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  long local_30;
  uint local_24;
  
  lVar3 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar1 = FUN_0277d6c4();
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      FUN_0124c030(auStack_40,param_1);
      iVar2 = FUN_0123db50(auStack_38,local_30);
      if (((iVar2 - 2U & 0xfffffff9) == 0) && (local_30 != 0)) {
        local_24 = 5;
        lVar3 = FUN_01246470(local_30,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
        if (lVar3 != 0) {
          uVar1 = local_24 + 7;
          if (-1 < (int)local_24) {
            uVar1 = local_24;
          }
          if ((*(byte *)(lVar3 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(local_24 & 7) & 1) != 0)
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

