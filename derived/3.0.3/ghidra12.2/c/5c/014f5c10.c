
uint FUN_014f5c10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte local_34 [4];
  
  uVar2 = FUN_014e5b54(0);
  if ((((uVar2 & 1) != 0) && (DAT_056b6f18 != 0)) && (*(int *)(DAT_056b6f18 + 0xef8) == 0x45)) {
    local_34[0] = *(byte *)(DAT_056b6f18 + 0xef4);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    lVar3 = FUN_02ef3c90(local_34);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x228) == 2)) {
      uVar1 = 0;
      goto LAB_014f5ccc;
    }
  }
  if (*(long *)(param_1 + 0x2c8) == param_1 + 0x2c0) {
    uVar1 = 1;
  }
  else {
    lVar4 = (long)*(int *)(param_1 + 0x2d4);
    lVar3 = *(long *)(param_1 + 0x2c8) - lVar4;
    do {
      uVar1 = FUN_014ecd24(lVar3);
      if ((uVar1 & 1) == 0) break;
      lVar3 = *(long *)(lVar3 + lVar4 + 8) - lVar4;
    } while (lVar3 != (param_1 + 0x2c0) - lVar4);
  }
LAB_014f5ccc:
  return uVar1 & 1;
}

