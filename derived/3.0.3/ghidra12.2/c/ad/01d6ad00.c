
undefined8 FUN_01d6ad00(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  if ((((uVar1 & 1) != 0) && ((uVar2 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x48) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 1 & 1) != 0) && ((uVar2 >> 1 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 200) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 2 & 1) != 0) && ((uVar2 >> 2 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x148) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 3 & 1) != 0) && ((uVar2 >> 3 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x1c8) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 4 & 1) != 0) && ((uVar2 >> 4 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x248) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 5 & 1) != 0) && ((uVar2 >> 5 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x2c8) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 6 & 1) != 0) && ((uVar2 >> 6 & 1) == 0)) &&
     (((*(uint *)(lVar3 + 0x348) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 7 & 1) == 0) || ((uVar2 >> 7 & 1) != 0)) ||
     (((*(uint *)(lVar3 + 0x3c8) ^ 0xffffffff) & 10) != 0)) {
    return 1;
  }
  return 0;
}

