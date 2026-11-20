
void FUN_03fc2e9c(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  cVar4 = *(char *)(param_1 + 1);
  uVar5 = (param_2 & 0x7f) << 9;
  uVar2 = uVar6 & 0x1fe | uVar5;
  *(short *)(param_1 + 2) = (short)uVar2;
  uVar3 = uVar2;
  if (cVar4 == '\x03') {
    uVar3 = uVar5 & 0xf800 | ((uVar6 & 0xfe) >> 1) << 4 | uVar2 >> 7 & 0xe;
  }
  uVar2 = uVar5 & 0xfc00 | ((uVar6 & 0x7e) >> 1) << 4 | uVar2 >> 6 & 0xe;
  if (cVar4 != '\x02') {
    uVar2 = uVar3;
  }
  uVar3 = uVar5 | ((uVar6 & 0x3e) >> 1) << 4 | (uVar6 & 0x1c0) >> 5;
  if (cVar4 != '\x01') {
    uVar3 = uVar2;
  }
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x78) + (ulong)uVar3);
  *(undefined1 *)(param_1 + 8) = *puVar1;
  *(undefined1 *)(param_1 + 9) = puVar1[1];
  return;
}

