
void FUN_0034f400(long *param_1,undefined8 param_2,byte *param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  
  *(byte *)((long)param_1 + 0x41) = *param_3;
  uVar2 = *(ushort *)(param_3 + 2);
  uVar4 = (uint)uVar2;
  *(uint *)(param_1 + 1) = (uint)uVar2;
  puVar11 = *(undefined4 **)(param_3 + 8);
  puVar3 = *(undefined4 **)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 2) = *puVar11;
  *(undefined4 *)((long)param_1 + 0x14) = puVar11[1];
  *(undefined4 *)(param_1 + 3) = puVar11[2];
  *(undefined4 *)((long)param_1 + 0x1c) = puVar11[3];
  param_1[4] = (long)(double)(float)puVar11[4];
  param_1[5] = (long)(double)(float)puVar11[5];
  if ((*param_3 & 1) == 0) {
    uVar5 = 0x7fffffff;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x7fffffff;
  }
  else {
    *(undefined4 *)(param_1 + 6) = *puVar3;
    *(undefined4 *)((long)param_1 + 0x34) = puVar3[1];
    *(undefined4 *)(param_1 + 7) = puVar3[2];
    uVar5 = puVar3[3];
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar5;
  lVar6 = (ulong)*(ushort *)(param_3 + 2) - 1;
  puVar1 = (undefined4 *)(*param_1 + lVar6 * 0x10);
  if (1 < uVar2) {
    puVar9 = (undefined4 *)(*param_1 + 8);
    lVar10 = 1;
    puVar7 = puVar11 + 0x11;
    puVar11 = puVar1;
    do {
      lVar10 = lVar10 + 1;
      puVar9[-2] = puVar7[-5];
      puVar9[-1] = puVar7[-4];
      *puVar9 = puVar7[-3];
      puVar9[1] = puVar7[-2];
      puVar9 = puVar9 + 4;
      *puVar11 = puVar7[-1];
      puVar11[1] = *puVar7;
      puVar11 = puVar11 + 2;
      uVar4 = *(uint *)(param_1 + 1);
      puVar7 = puVar7 + 0xc;
    } while (lVar10 < (int)uVar4);
  }
  if (1 < (int)uVar4) {
    uVar4 = 0;
    puVar3 = puVar3 + 0xb;
    lVar10 = 1;
    do {
      if ((*param_3 & 1) == 0) {
        uVar8 = ((int)lVar10 + -1) * 4;
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 1)] = 0;
        uVar5 = 0x7fffffff;
        puVar1[lVar6 * 2 + (long)(int)uVar4] = 0;
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 2)] = 0x7fffffff;
      }
      else {
        puVar1[lVar6 * 2 + (long)(int)uVar4] = puVar3[-3];
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 1)] = puVar3[-2];
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 2)] = puVar3[-1];
        uVar5 = *puVar3;
        uVar8 = uVar4;
      }
      lVar10 = lVar10 + 1;
      uVar4 = uVar4 + 4;
      puVar1[lVar6 * 2 + (long)(int)(uVar8 | 3)] = uVar5;
      puVar3 = puVar3 + 8;
    } while (lVar10 < (int)param_1[1]);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

