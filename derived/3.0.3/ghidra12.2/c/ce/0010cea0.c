
undefined8 FUN_0010cea0(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_24;
  
  if (param_1 == 0) {
    return 0xffffae9b;
  }
  if (param_2 == 0) {
    return 0xffffbb9b;
  }
  iVar2 = FUN_0010db60(param_2,8,0);
  if (iVar2 != 0) {
    return 0xffffbc9b;
  }
  iVar2 = FUN_0010db20(&local_24,4,param_2);
  if (iVar2 == 0) {
    return 0xffffbd9b;
  }
  uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((uVar1 - 0x50000 < 2) || (uVar1 == 6)) {
    uVar3 = FUN_00129f60(param_1,uVar1,param_2,param_3);
    return uVar3;
  }
  return 0xffffa69b;
}

