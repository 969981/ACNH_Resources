
void FUN_01d69d64(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x1f9) == '\0') {
    return;
  }
  uVar4 = FUN_01d6aba0(param_1 + 500);
  if ((uVar4 & 1) == 0) {
    return;
  }
  bVar2 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    lVar1 = param_1 + 0x108 + ((long)(char)bVar2 & 0xffffffffU) * 0xc;
    if (0xb < bVar2) {
      lVar1 = param_1 + 0x108;
    }
    if (*(char *)(lVar1 + 10) == '\0') {
      uVar5 = 8;
      goto LAB_01d69e34;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x100) - (*(uint *)(param_1 + 0x100) >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  if ((uVar3 + (uVar3 >> 0x10) & 0x3e) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 4;
  }
LAB_01d69e34:
  FUN_03ebb160(param_1 + 0xb8,uVar5);
  return;
}

