
bool FUN_01fd3fa0(long *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  lVar1 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      iVar4 = *(int *)(*param_1 + 0x80);
      FUN_0124c030(auStack_48,param_2);
      if (iVar4 == 2) {
        iVar4 = FUN_0123db50(auStack_40,local_38);
        bVar2 = 5 < iVar4 - 0x12U;
      }
      else {
        if (iVar4 == 1) {
          iVar4 = FUN_0123db50(auStack_40,local_38);
          return iVar4 == 0x1f;
        }
        if (iVar4 != 0) {
          return false;
        }
        iVar4 = FUN_0123db50(auStack_40,local_38);
        bVar2 = 8 < iVar4 - 0x23U;
      }
      return !bVar2;
    }
  }
  return false;
}

