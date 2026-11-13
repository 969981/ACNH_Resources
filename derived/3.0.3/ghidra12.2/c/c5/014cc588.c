
uint FUN_014cc588(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_02582d8c(param_1 + 0x5d0,1);
  if ((uVar3 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar4 = *(undefined4 *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d8);
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar3 = FUN_009b55cc(DAT_04d02f58,uVar4);
  lVar2 = DAT_0538b8e8;
  if ((-1 < (int)uVar3) && (*(int *)(DAT_0538b8e8 + 0x10) != 1)) {
    lVar1 = DAT_0538b8e8 + 8;
    *(uint *)(DAT_0538b8e8 + 0x50) = uVar3;
    *(undefined1 *)(lVar2 + 0x98) = 1;
    *(undefined4 *)(lVar2 + 0x9c) = 0;
    FUN_03ebb160(lVar1,1);
  }
  return ~uVar3 >> 0x1f;
}

