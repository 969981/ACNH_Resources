
bool FUN_03552410(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  lVar1 = DAT_05150358;
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
     (((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar2 = FUN_0277d6c4();
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(auStack_38,param_1);
      iVar3 = FUN_0123db50(auStack_30,local_28);
      if (((iVar3 == 9) ||
          ((((iVar3 = FUN_0123db50(auStack_30,local_28), iVar3 == 0x20 ||
             (iVar3 = FUN_0123db50(auStack_30,local_28), iVar3 == 10)) ||
            (iVar3 = FUN_0277d6c4(auStack_30), iVar3 == 0xec9a)) ||
           ((iVar3 = FUN_0277d6c4(auStack_30), iVar3 == 0xec97 ||
            (iVar3 = FUN_0123db50(auStack_30,local_28), iVar3 - 0xbU < 7)))))) ||
         (iVar3 = FUN_0123db50(auStack_30,local_28), iVar3 - 0x23U < 9)) {
        return true;
      }
      iVar3 = FUN_0123db50(auStack_30,local_28);
      return iVar3 - 0x12U < 6;
    }
  }
  return false;
}

