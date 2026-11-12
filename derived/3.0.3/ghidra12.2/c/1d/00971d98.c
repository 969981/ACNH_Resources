
bool FUN_00971d98(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (((((int)uVar1 < 0) || (uVar2 = *(uint *)(param_2 + 0xc), (int)uVar2 < 0)) ||
      (*(uint *)(param_1 + 0x38) <= uVar1)) ||
     (((*(uint *)(param_1 + 0x3c) <= uVar2 ||
       (uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2, *(uint *)(param_1 + 0x48) <= uVar1)) ||
      (lVar3 = *(long *)(param_1 + 0x50), lVar3 == 0)))) {
    return false;
  }
  lVar4 = lVar3 + (long)(int)uVar1 * 0x34;
  if ((*(char *)(lVar4 + 0x30) == '\x01' || *(char *)(lVar4 + 0x31) == '\x01') ||
      *(char *)(lVar4 + 0x32) == '\x01') {
    return true;
  }
  return *(char *)(lVar3 + (long)(int)uVar1 * 0x34 + 0x33) == '\x01';
}

