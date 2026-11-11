
void FUN_003a2610(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)*param_1;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[8] = 8;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 8;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  bVar1 = *(byte *)(lVar4 + 0xeb);
  lVar5 = (ulong)bVar1 << 2;
  param_1[3] = lVar5;
  bVar2 = *(byte *)(lVar4 + 0xeb);
  lVar7 = (ulong)bVar2 * 4;
  param_1[7] = lVar7;
  bVar3 = *(byte *)(lVar4 + 0xeb);
  param_1[1] = 0;
  param_1[2] = 8;
  lVar4 = (ulong)bVar3 * 4;
  param_1[0xb] = lVar4;
  if ((ulong)bVar1 == 0) {
    lVar5 = 0;
  }
  else {
    param_1[6] = 0;
    param_1[1] = lVar5;
  }
  if (bVar2 != 0) {
    uVar6 = (ulong)((int)lVar5 + 7) & 0x7f8;
    param_1[10] = uVar6;
    lVar5 = uVar6 + lVar7;
    param_1[1] = lVar5;
    param_1[2] = 8;
  }
  if (bVar3 != 0) {
    uVar6 = (ulong)((int)lVar5 + 7) & 0x1ff8;
    param_1[0xe] = uVar6;
    param_1[1] = uVar6 + lVar4;
    param_1[2] = 8;
  }
  return;
}

