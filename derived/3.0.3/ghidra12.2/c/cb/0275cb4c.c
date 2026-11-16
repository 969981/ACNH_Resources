
void FUN_0275cb4c(long param_1,int param_2,long param_3)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  psVar1 = (short *)(param_1 + 0x41c);
  uVar6 = param_2 * 0x12;
  uVar7 = (ulong)uVar6;
  psVar3 = psVar1 + uVar7;
  if (0x8f < uVar6) {
    uVar7 = 0;
    psVar3 = psVar1;
  }
  sVar4 = *psVar3;
  uVar2 = param_2 * 0x12 | 1;
  uVar8 = (ulong)uVar2;
  psVar3 = psVar1 + uVar8;
  if (0x8f < uVar2) {
    uVar8 = 0;
    psVar3 = psVar1;
  }
  sVar5 = *psVar3;
  *(int *)(param_3 + 8) = (int)sVar4;
  *(int *)(param_3 + 0xc) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 8) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 2;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x18) = (int)sVar4;
  *(int *)(param_3 + 0x1c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x18) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 4;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x28) = (int)sVar4;
  *(int *)(param_3 + 0x2c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x28) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 6;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x38) = (int)sVar4;
  *(int *)(param_3 + 0x3c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x38) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 8;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x48) = (int)sVar4;
  *(int *)(param_3 + 0x4c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x48) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 10;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x58) = (int)sVar4;
  *(int *)(param_3 + 0x5c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x58) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 0xc;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x68) = (int)sVar4;
  *(int *)(param_3 + 0x6c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x68) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar2 = uVar6 + 0xe;
  uVar7 = (ulong)uVar2;
  if (0x8f < uVar2) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar2 | 1);
  if (0x8f < (uVar2 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x78) = (int)sVar4;
  *(int *)(param_3 + 0x7c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x78) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  uVar6 = uVar6 + 0x10;
  uVar7 = (ulong)uVar6;
  if (0x8f < uVar6) {
    uVar7 = 0;
  }
  uVar8 = (ulong)(uVar6 | 1);
  if (0x8f < (uVar6 | 1)) {
    uVar8 = 0;
  }
  sVar4 = psVar1[uVar7];
  sVar5 = psVar1[uVar8];
  *(int *)(param_3 + 0x88) = (int)sVar4;
  *(int *)(param_3 + 0x8c) = (int)sVar5;
  if (sVar4 == 0 && sVar5 == 0) {
    *(undefined8 *)(param_3 + 0x88) = 0xffffffffffffffff;
    psVar1[uVar7] = -1;
    psVar1[uVar8] = -1;
  }
  return;
}

