
undefined8 FUN_01250bf0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(lVar1);
  if ((iVar2 != 0xec9a) && (iVar2 = FUN_0277d6c4(lVar1), iVar2 != 0xec97)) {
    uVar3 = FUN_012509c0(param_1,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    iVar2 = FUN_0277d6c4(lVar1);
    if (((iVar2 != 0xec9a) && (iVar2 = FUN_0277d6c4(lVar1), iVar2 != 0xec97)) &&
       (uVar3 = FUN_012509c0(param_1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffe0000;
  return 1;
}

