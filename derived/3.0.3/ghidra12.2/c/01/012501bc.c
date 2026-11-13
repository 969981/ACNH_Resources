
uint FUN_012501bc(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = param_1 + 8;
  iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
  if ((((((iVar3 - 0x18U < 7) ||
         (iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar3 == 0x1f)) ||
        (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xecbf)) ||
       ((iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xea9f ||
        (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xeab4)))) ||
      ((iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xeab5 ||
       ((iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xeab7 ||
        (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xeab6)))))) ||
     (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xeab8)) {
    uVar2 = *(uint *)(param_1 + 0xc) & 7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

