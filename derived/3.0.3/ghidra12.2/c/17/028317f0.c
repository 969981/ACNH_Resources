
void FUN_028317f0(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined2 *puVar5;
  
  memset(param_1,0,0x15950);
  lVar4 = 100;
  puVar5 = param_1;
  do {
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 0x2e) = 0;
    *(undefined1 *)(puVar5 + 0x5c) = 0;
    *(undefined8 *)(puVar5 + 0x5e) = 0xfffe00000000;
    *(undefined4 *)(puVar5 + 0x62) = 0;
    FUN_0277d4ac(puVar5 + 0x60);
    *(undefined1 *)(puVar5 + 100) = 0;
    *(undefined1 *)(puVar5 + 0x66) = 0;
    memset(puVar5 + 0x67,0,0x2a2);
    puVar5[0x1b8] = 0xfffe;
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 0x1ba;
  } while (lVar4 != 0);
  puVar5 = param_1 + 0xaca8;
  memset(puVar5,0,400);
  iVar2 = 0;
  uVar3 = 0;
  do {
    lVar4 = uVar3 << 0x20;
    iVar1 = iVar2 + 1;
    *(int *)((long)puVar5 + (-(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2)) = iVar2;
    iVar2 = iVar2 + 2;
    uVar3 = (ulong)((int)uVar3 + 2);
    *(int *)((long)puVar5 + (lVar4 + 0x100000000 >> 0x1e)) = iVar1;
  } while (iVar2 != 100);
  memset(param_1 + 0xad70,0,0x9740);
  FUN_028321f0(param_1 + 0xad70);
  param_1[0xf960] = 0;
  *(undefined1 *)(param_1 + 0xf963) = 0;
  *(undefined8 *)(param_1 + 0xf910) = 0x100000000;
  *(undefined8 *)(param_1 + 0xf914) = 0x300000002;
  *(undefined8 *)(param_1 + 0xf918) = 0x500000004;
  *(undefined8 *)(param_1 + 0xf91c) = 0x700000006;
  *(undefined8 *)(param_1 + 0xf920) = 0x900000008;
  *(undefined8 *)(param_1 + 0xf924) = 0xb0000000a;
  *(undefined8 *)(param_1 + 0xf928) = 0xd0000000c;
  *(undefined8 *)(param_1 + 0xf92c) = 0xf0000000e;
  *(undefined8 *)(param_1 + 0xf930) = 0x1100000010;
  *(undefined8 *)(param_1 + 0xf934) = 0x1300000012;
  *(undefined8 *)(param_1 + 0xf938) = 0x1500000014;
  *(undefined8 *)(param_1 + 0xf93c) = 0x1700000016;
  *(undefined8 *)(param_1 + 0xf940) = 0x1900000018;
  *(undefined8 *)(param_1 + 0xf944) = 0x1b0000001a;
  *(undefined8 *)(param_1 + 0xf948) = 0x1d0000001c;
  *(undefined8 *)(param_1 + 0xf94c) = 0x1f0000001e;
  *(undefined8 *)(param_1 + 0xf950) = 0x2100000020;
  *(undefined8 *)(param_1 + 0xf954) = 0x2300000022;
  *(undefined8 *)(param_1 + 0xf958) = 0x2500000024;
  *(undefined8 *)(param_1 + 0xf95c) = 0x2700000026;
  *(undefined4 *)(param_1 + 0xf961) = 0x101;
  param_1[0xf964] = 0;
  *(undefined4 *)(param_1 + 0xf965) = 0x101;
  *(undefined1 *)(param_1 + 0xf967) = 0;
  *(undefined1 *)(param_1 + 0xf968) = 0;
  param_1[0xf969] = 0;
  *(undefined4 *)(param_1 + 0xf96a) = 0x101;
  *(undefined1 *)(param_1 + 0xf96c) = 0;
  return;
}

