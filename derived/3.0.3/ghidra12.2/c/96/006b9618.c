
void FUN_006b9618(undefined8 *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [12];
  
  *param_1 = param_2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar3 < 0) {
    uVar5 = param_2[2];
    bVar9 = (byte)uVar5 & 1;
    bVar8 = (byte)(uVar5 >> 1) & 0xf;
    bVar6 = (byte)(uVar5 >> 5) & 0xf;
  }
  else {
    bVar6 = 0;
    bVar8 = 0;
    bVar9 = 0;
  }
  *(byte *)(param_1 + 1) = bVar9;
  uVar5 = uVar3 >> 10 & 0xf;
  *(byte *)((long)param_1 + 0xb) = (byte)(uVar2 >> 0x10) & 0xf;
  *(byte *)((long)param_1 + 10) = bVar6;
  *(byte *)((long)param_1 + 0xc) = (byte)(uVar2 >> 0x14) & 0xf;
  bVar9 = (byte)(uVar2 >> 0x18);
  *(byte *)((long)param_1 + 9) = bVar8;
  cVar7 = (char)uVar5;
  cVar4 = cVar7 + -2;
  if (2 < uVar5) {
    cVar7 = '\x03';
  }
  *(byte *)((long)param_1 + 0xd) = bVar9 & 0xf;
  *(byte *)((long)param_1 + 0xe) = bVar9 >> 4;
  cVar1 = (char)(0x10000 >> (ulong)((uVar3 >> 10 & 3) << 3));
  if (2 < uVar5) {
    cVar1 = cVar4;
  }
  *(undefined1 *)((long)param_1 + 0xf) = 0;
  *(short *)(param_1 + 2) = (short)((uVar3 & 0x3ff) << 2);
  *(char *)((long)param_1 + 0x12) = cVar1;
  *(char *)((long)param_1 + 0x13) = cVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar2;
  *(byte *)((long)param_1 + 0x16) = (byte)(uVar3 >> 0x1f);
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(ushort *)(param_1 + 3) = (ushort)(uVar3 >> 0x14) & 0x7ff;
  auVar10 = FUN_006af7b0(param_1 + 1);
  *(undefined1 (*) [12])((long)param_1 + 0x1a) = auVar10;
  return;
}

