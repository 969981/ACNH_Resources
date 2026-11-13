
undefined8 FUN_012508a8(long param_1,ushort *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 8;
  iVar3 = FUN_0277d6c4(lVar1);
  if (((iVar3 == 0xec9a) || (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0xec97)) ||
     ((uVar5 = FUN_012509c0(param_1,1), (uVar5 & 1) != 0 &&
      ((((iVar3 = FUN_0277d6c4(lVar1), iVar3 != 0xec9a &&
         (iVar3 = FUN_0277d6c4(lVar1), iVar3 != 0xec97)) &&
        (uVar5 = FUN_012509c0(param_1,0), (uVar5 & 1) == 0)) ||
       ((*(byte *)(param_1 + 0xe) & 1) == 0)))))) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = 1;
    *(uint *)(param_1 + 0xc) = uVar2 | 0x10000;
    *(uint *)(param_1 + 0xc) = uVar2 & 0xffff0000 | 0x10000 | (uint)*param_2;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

