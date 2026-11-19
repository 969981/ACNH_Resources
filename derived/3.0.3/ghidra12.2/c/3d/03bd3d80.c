
bool FUN_03bd3d80(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 int *param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  *param_4 = 0xffffffff;
  *param_5 = -1;
  uVar1 = *(uint *)(param_2 + 400);
  if ((int)uVar1 < 1) {
    bVar2 = false;
  }
  else {
    uVar5 = 0;
    bVar2 = true;
    do {
      lVar4 = *(long *)(*(long *)(param_2 + 0x198) + uVar5 * 8);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 9) != '\0')) &&
         (iVar3 = FUN_0033e6b0(param_2,param_3,uVar5 & 0xffffffff), -1 < iVar3)) {
        *param_4 = (int)uVar5;
        *param_5 = iVar3;
        return bVar2;
      }
      uVar5 = uVar5 + 1;
      bVar2 = uVar5 < uVar1;
    } while (uVar1 != uVar5);
  }
  return bVar2;
}

