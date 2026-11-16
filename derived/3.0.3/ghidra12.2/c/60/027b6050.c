
void FUN_027b6050(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_2[7] != 0 && *param_2 != 0) {
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    param_1[2] = uVar5;
    *param_1 = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[6] = uVar7;
    param_1[3] = uVar2;
    param_1[4] = uVar5;
  }
  memcpy(param_1 + 7,param_2 + 0xe,0x100);
  uVar2 = *(undefined8 *)(param_2 + 0x4e);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0x29) = param_2[0x52];
  param_1[0x27] = uVar2;
  param_1[0x28] = uVar5;
  uVar6 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
  if (0x1f < (uint)uVar6) {
    uVar6 = 0;
  }
  uVar4 = (uint)(byte)(&DAT_04058440)[uVar6];
  uVar6 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
  if (10 < uVar4) {
    uVar4 = 1;
  }
  if (0x1f < (uint)uVar6) {
    uVar6 = 0;
  }
  uVar3 = (uint)(byte)(&DAT_04058440)[uVar6];
  if (10 < uVar3) {
    uVar3 = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x53);
  uVar5 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x55);
  uVar7 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x59);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x15c) =
       *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x57);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x164) = uVar7;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x14c) = uVar2;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x154) = uVar5;
  uVar2 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x5b);
  uVar5 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x5d);
  uVar7 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x61);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x17c) =
       *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x5f);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x184) = uVar7;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x16c) = uVar2;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x174) = uVar5;
  uVar2 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 99);
  uVar5 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x65);
  uVar7 = *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x69);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x19c) =
       *(undefined8 *)(param_2 + (ulong)uVar3 * 0x18 + 0x67);
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x1a4) = uVar7;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x18c) = uVar2;
  *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x60 + 0x194) = uVar5;
  uVar6 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x15b),(uint)*(byte *)((long)param_2 + 0x56e),
                     (uint)*(byte *)((long)param_2 + 0x56f));
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x56c) = 0;
  }
  else {
    uVar2 = FUN_0272eca4(param_2 + 0x15b,1);
    uVar6 = nn::time::IsValidDate
                      ((uint)uVar2 & 0xffff,(uint)uVar2 >> 0x10 & 0xff,
                       (uint)((ulong)uVar2 >> 0x18) & 0xff);
    if ((uVar6 & 1) != 0) {
      *(short *)((long)param_1 + 0x56c) = (short)uVar2;
      *(char *)((long)param_1 + 0x56e) = (char)((ulong)uVar2 >> 0x10);
      *(char *)((long)param_1 + 0x56f) = (char)((ulong)uVar2 >> 0x18);
    }
  }
  iVar1 = param_2[0x15c];
  *(undefined1 *)((long)param_1 + 0x572) = *(undefined1 *)((long)param_2 + 0x572);
  *(short *)(param_1 + 0xae) = (short)iVar1;
  *(short *)((long)param_1 + 0x574) = (short)param_2[0x15d];
  *(undefined1 *)((long)param_1 + 0x576) = *(undefined1 *)((long)param_2 + 0x576);
  *(undefined1 *)((long)param_1 + 0x577) = *(undefined1 *)((long)param_2 + 0x577);
  *(int *)(param_1 + 0xaf) = param_2[0x15e];
  *(int *)((long)param_1 + 0x57c) = param_2[0x15f];
  iVar1 = param_2[0x160];
  *(undefined1 *)((long)param_1 + 0x582) = *(undefined1 *)((long)param_2 + 0x582);
  *(short *)(param_1 + 0xb0) = (short)iVar1;
  *(short *)((long)param_1 + 0x584) = (short)param_2[0x161];
  *(undefined1 *)((long)param_1 + 0x586) = *(undefined1 *)((long)param_2 + 0x586);
  *(undefined1 *)((long)param_1 + 0x587) = *(undefined1 *)((long)param_2 + 0x587);
  *(int *)(param_1 + 0xb1) = param_2[0x162];
  *(int *)((long)param_1 + 0x58c) = param_2[0x163];
  iVar1 = param_2[0x164];
  *(undefined1 *)((long)param_1 + 0x592) = *(undefined1 *)((long)param_2 + 0x592);
  *(short *)(param_1 + 0xb2) = (short)iVar1;
  *(short *)((long)param_1 + 0x594) = (short)param_2[0x165];
  *(undefined1 *)((long)param_1 + 0x596) = *(undefined1 *)((long)param_2 + 0x596);
  *(undefined1 *)((long)param_1 + 0x597) = *(undefined1 *)((long)param_2 + 0x597);
  *(int *)(param_1 + 0xb3) = param_2[0x166];
  *(int *)((long)param_1 + 0x59c) = param_2[0x167];
  iVar1 = param_2[0x168];
  *(undefined1 *)((long)param_1 + 0x5a2) = *(undefined1 *)((long)param_2 + 0x5a2);
  *(short *)(param_1 + 0xb4) = (short)iVar1;
  *(short *)((long)param_1 + 0x5a4) = (short)param_2[0x169];
  *(undefined1 *)((long)param_1 + 0x5a6) = *(undefined1 *)((long)param_2 + 0x5a6);
  *(undefined1 *)((long)param_1 + 0x5a7) = *(undefined1 *)((long)param_2 + 0x5a7);
  *(int *)(param_1 + 0xb5) = param_2[0x16a];
  *(int *)((long)param_1 + 0x5ac) = param_2[0x16b];
  *(short *)((long)param_1 + 0x5b4) = (short)param_2[0x16d];
  *(undefined1 *)((long)param_1 + 0x5b6) = *(undefined1 *)((long)param_2 + 0x5b6);
  *(undefined1 *)((long)param_1 + 0x5b7) = *(undefined1 *)((long)param_2 + 0x5b7);
  *(int *)(param_1 + 0xb7) = param_2[0x16e];
  *(short *)((long)param_1 + 0x5bc) = (short)param_2[0x16f];
  *(undefined1 *)((long)param_1 + 0x5be) = *(undefined1 *)((long)param_2 + 0x5be);
  uVar6 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x170),(uint)*(byte *)((long)param_2 + 0x5c2),
                     (uint)*(byte *)((long)param_2 + 0x5c3));
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  else {
    uVar2 = FUN_0272eca4(param_2 + 0x170,1);
    uVar6 = nn::time::IsValidDate
                      ((uint)uVar2 & 0xffff,(uint)uVar2 >> 0x10 & 0xff,
                       (uint)((ulong)uVar2 >> 0x18) & 0xff);
    if ((uVar6 & 1) != 0) {
      *(short *)(param_1 + 0xb8) = (short)uVar2;
      *(char *)((long)param_1 + 0x5c2) = (char)((ulong)uVar2 >> 0x10);
      *(char *)((long)param_1 + 0x5c3) = (char)((ulong)uVar2 >> 0x18);
    }
  }
  if (param_2[0x171] == 0) {
    *(undefined4 *)((long)param_1 + 0x5dc) = 0;
    *(undefined8 *)((long)param_1 + 0x5c4) = 0;
    *(undefined8 *)((long)param_1 + 0x5cc) = 0;
    *(undefined8 *)((long)param_1 + 0x5d4) = 0;
    *(undefined1 *)((long)param_1 + 0x5dc) = 2;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x171);
    uVar5 = *(undefined8 *)(param_2 + 0x173);
    uVar7 = *(undefined8 *)(param_2 + 0x175);
    *(int *)((long)param_1 + 0x5dc) = param_2[0x177];
    *(undefined8 *)((long)param_1 + 0x5cc) = uVar5;
    *(undefined8 *)((long)param_1 + 0x5d4) = uVar7;
    *(undefined8 *)((long)param_1 + 0x5c4) = uVar2;
  }
  return;
}

