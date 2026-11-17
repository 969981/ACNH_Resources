
void FUN_03006f0c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    return;
  }
  if (((*(int *)(param_1 + 0x30) == 0xf) && (0xe < *(uint *)(param_1 + 0x28))) &&
     (iVar1 = *(int *)(param_1 + 0x34), iVar1 != 0xe)) {
    if ((*(int *)(param_1 + 0x18) < 0x10) ||
       (lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) +
                                                         8) + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8) + 8) + 8),
       lVar2 = lVar3 - *(int *)(param_1 + 0x1c), lVar3 == 0 || lVar2 == 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(lVar2 + 0x270);
    }
    FUN_03137830(param_1,0xe - iVar1);
    FUN_031379f0(param_1,uVar4,iVar1,0);
  }
  lVar2 = 0xf0;
  if (DAT_04c49fb0 < 0x10) {
    lVar2 = 0;
  }
  PTR_DAT_04c49fb8[lVar2 + 0xc] = 0;
  FUN_03136590(param_1);
  return;
}

