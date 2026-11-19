
void FUN_03a74d70(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x558) <= param_2) {
    uVar1 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x560) + (long)(int)uVar1 * 0x1b8;
  if (*(uint *)(param_1 + 0x220) <= param_2) {
    param_2 = 0;
  }
  puVar3 = (undefined1 *)(*(long *)(param_1 + 0x228) + (long)(int)param_2 * 0x2c);
  *puVar3 = *(undefined1 *)(lVar4 + 0x48);
  puVar3[1] = *(undefined1 *)(lVar4 + 0x68);
  iVar5 = *(int *)(lVar4 + 0x88);
  if (4 < iVar5) {
    iVar5 = 5;
  }
  puVar3[4] = (char)iVar5;
  *(short *)(puVar3 + 2) = (short)*(undefined4 *)(lVar4 + 0xa8);
  fVar6 = *(float *)(lVar4 + 200);
  *(float *)(puVar3 + 8) = fVar6;
  *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(lVar4 + 0xe8);
  *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(lVar4 + 0x108);
  puVar3[5] = (char)*(undefined4 *)(lVar4 + 0x128);
  *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(lVar4 + 0x148);
  fVar6 = fVar6 + -1.0;
  *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x168);
  fVar7 = -fVar6;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  puVar3[6] = (char)*(undefined4 *)(lVar4 + 0x188);
  uVar2 = *(undefined8 *)(lVar4 + 0x1a8);
  *(undefined8 *)(puVar3 + 0x24) = *(undefined8 *)(lVar4 + 0x1b0);
  *(undefined8 *)(puVar3 + 0x1c) = uVar2;
  if (fVar7 < 0.01) {
    *(float *)(puVar3 + 8) = 1.0;
  }
  return;
}

