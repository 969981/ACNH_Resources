
undefined8 FUN_00172f80(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + *(int *)(param_1 + 0xd8);
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  lVar6 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(long *)(param_2 + 0x70) = param_1;
  if (lVar6 != 0) {
    lVar2 = *(long *)(param_2 + 0x78);
    if (*(long *)(param_2 + 0x78) == 0) {
      *(long *)(param_2 + 0x78) = lVar6;
      *(long *)(lVar6 + 0x70) = param_2;
    }
    else {
      do {
        lVar5 = lVar2;
        lVar2 = *(long *)(lVar5 + 0x88);
      } while (*(long *)(lVar5 + 0x88) != 0);
      *(long *)(lVar5 + 0x88) = lVar6;
      *(long *)(lVar6 + 0x80) = lVar5;
    }
    do {
      *(long *)(lVar6 + 0x70) = param_2;
      if ((*(char *)(lVar6 + 0xe6) != '\0') &&
         (uVar4 = FUN_00172c94(param_2,param_1,lVar6), (int)uVar4 != 0)) {
        return uVar4;
      }
      lVar6 = *(long *)(lVar6 + 0x88);
    } while (lVar6 != 0);
  }
  if ((((*(long *)(param_2 + 0xa8) == 0) || ((*(byte *)(param_2 + 0xe4) & 0xc) != 0)) &&
      (iVar3 = FUN_001734d8(param_2 + 0x18), iVar3 != 0)) ||
     (uVar4 = FUN_00172cdc(param_1,param_2), (int)uVar4 == 0)) {
    uVar4 = 0;
  }
  return uVar4;
}

