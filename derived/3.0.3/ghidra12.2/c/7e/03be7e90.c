
void FUN_03be7e90(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  puVar1 = param_2 + 5;
  param_1[0xf] = *param_2;
  uVar3 = param_2[1];
  *param_1 = uVar3;
  param_1[0xd] = uVar3 - param_3;
  param_1[0xe] = param_3;
  uVar6 = param_2[2];
  param_1[1] = uVar6;
  uVar4 = param_2[3];
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar6 - uVar4;
  param_1[2] = param_2[4];
  uVar4 = param_2[2];
  puVar5 = puVar1 + (ulong)param_2[1] * 3;
  param_1[10] = (int)(puVar5 + (ulong)uVar4 * 3) + param_2[4] * 0xc;
  if (uVar3 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    *(uint **)(param_1 + 4) = puVar1;
    do {
      *(uint *)(*(long *)(param_1 + 4) + lVar7) =
           *(int *)(*(long *)(param_1 + 4) + lVar7) + param_1[10];
      lVar2 = *(long *)(param_1 + 4) + lVar7;
      if (*(int *)(lVar2 + 4) == 4) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + param_1[10];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 < *param_1);
    uVar6 = param_1[1];
  }
  if (uVar6 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    *(uint **)(param_1 + 6) = puVar5;
    do {
      *(uint *)(*(long *)(param_1 + 6) + lVar7) =
           *(int *)(*(long *)(param_1 + 6) + lVar7) + param_1[10];
      lVar2 = *(long *)(param_1 + 6) + lVar7;
      if (*(int *)(lVar2 + 4) == 4) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + param_1[10];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 < param_1[1]);
  }
  if (param_1[2] != 0) {
    lVar7 = 0;
    uVar8 = 0;
    *(uint **)(param_1 + 8) = puVar5 + (ulong)uVar4 * 3;
    do {
      *(uint *)(*(long *)(param_1 + 8) + lVar7) =
           *(int *)(*(long *)(param_1 + 8) + lVar7) + param_1[10];
      lVar2 = *(long *)(param_1 + 8) + lVar7;
      if (*(int *)(lVar2 + 4) == 4) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + param_1[10];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 < param_1[2]);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

