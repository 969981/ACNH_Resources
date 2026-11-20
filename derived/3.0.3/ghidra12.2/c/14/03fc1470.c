
undefined1 FUN_03fc1470(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(undefined1 *)(param_1 + 8);
  if (*(short *)(param_1 + 4) == 0) {
    return uVar2;
  }
  cVar3 = *(char *)(param_1 + 1);
  if (cVar3 == '\x01') {
    uVar5 = *(ushort *)(param_1 + 2);
    uVar6 = uVar5 & 0xfe00 | (uVar5 >> 1 & 0x1f) << 4;
    uVar7 = (uint)(uVar5 >> 5);
  }
  else if (cVar3 == '\x02') {
    uVar5 = *(ushort *)(param_1 + 2);
    uVar6 = uVar5 & 0xfc00 | (uVar5 >> 1 & 0x3f) << 4;
    uVar7 = (uint)(uVar5 >> 6);
  }
  else {
    if (cVar3 != '\x03') {
      uVar5 = *(ushort *)(param_1 + 2);
      uVar6 = (uint)uVar5;
      goto LAB_03fc14f4;
    }
    uVar5 = *(ushort *)(param_1 + 2);
    uVar6 = uVar5 & 0xf800 | (uVar5 >> 1 & 0x7f) << 4;
    uVar7 = (uint)(uVar5 >> 7);
  }
  uVar6 = uVar6 | uVar7 & 0xe;
LAB_03fc14f4:
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x78) + (ulong)uVar6);
  *(undefined1 *)(param_1 + 8) = *puVar1;
  uVar4 = puVar1[1];
  *(ushort *)(param_1 + 2) = uVar5 + *(short *)(param_1 + 4);
  *(undefined1 *)(param_1 + 9) = uVar4;
  return uVar2;
}

