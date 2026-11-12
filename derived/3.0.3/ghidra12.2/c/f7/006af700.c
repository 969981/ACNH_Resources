
void FUN_006af700(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [12];
  
  *param_1 = param_2;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((int)uVar2 < 0) {
    uVar3 = param_2[2];
    bVar6 = (byte)uVar3 & 1;
    bVar5 = (byte)(uVar3 >> 1) & 0xf;
    bVar4 = (byte)(uVar3 >> 5) & 0xf;
  }
  else {
    bVar4 = 0;
    bVar5 = 0;
    bVar6 = 0;
  }
  *(byte *)(param_1 + 1) = bVar6;
  *(byte *)((long)param_1 + 9) = bVar5;
  bVar6 = (byte)(uVar1 >> 0x18);
  *(byte *)((long)param_1 + 10) = bVar4;
  *(byte *)((long)param_1 + 0xb) = (byte)(uVar1 >> 0x10) & 0xf;
  *(byte *)((long)param_1 + 0xc) = (byte)(uVar1 >> 0x14) & 0xf;
  *(byte *)((long)param_1 + 0xd) = bVar6 & 0xf;
  *(byte *)((long)param_1 + 0xe) = bVar6 >> 4;
  *(undefined1 *)((long)param_1 + 0xf) = 0;
  *(short *)(param_1 + 2) = (short)((uVar2 & 0x3ff) << 2);
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  *(short *)((long)param_1 + 0x14) = (short)uVar1;
  *(byte *)((long)param_1 + 0x16) = (byte)(uVar2 >> 0x1f);
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  auVar7 = FUN_006af7b0(param_1 + 1,uVar2 >> 0x1f,0);
  *(undefined1 (*) [12])((long)param_1 + 0x1a) = auVar7;
  return;
}

