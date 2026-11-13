
void FUN_012502a4(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
  if ((((((iVar2 - 0x18U < 7) ||
         (iVar2 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar2 == 0x1f)) ||
        (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xecbf)) ||
       ((iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xea9f ||
        (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeab4)))) ||
      ((iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeab5 ||
       ((iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeab7 ||
        (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeab6)))))) ||
     (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeab8)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8 | param_2 & 7;
  }
  return;
}

