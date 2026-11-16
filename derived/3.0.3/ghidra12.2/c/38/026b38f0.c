
undefined8 FUN_026b38f0(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1 = param_1 + 0x1094c;
  while ((uVar1 = FUN_0277d7b4(param_1 + (long)iVar3 * 0x2c,param_2), (uVar1 & 1) == 0 ||
         ((*(int *)(param_1 + (long)iVar3 * 0x2c + 8) == *param_3 &&
          (lVar2 = param_1 + (long)iVar3 * 0x2c,
          (*(long *)(param_3 + 1) == *(long *)(lVar2 + 0xc) &&
          *(long *)(param_3 + 3) == *(long *)(lVar2 + 0x14)) && param_3[5] == *(int *)(lVar2 + 0x1c)
          ))))) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x18) {
      return 0;
    }
  }
  return 1;
}

