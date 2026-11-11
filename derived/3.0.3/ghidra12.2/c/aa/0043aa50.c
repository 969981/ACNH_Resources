
void FUN_0043aa50(undefined8 *param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = param_3;
  puVar6 = param_1;
  if (((ulong)param_1 & 0xf) != 0) {
    uVar4 = ((ulong)param_1 & 0xf) >> 2;
    uVar8 = 4 - uVar4;
    uVar9 = param_3;
    if (uVar8 <= param_3) {
      uVar9 = uVar8;
    }
    uVar8 = param_3 - uVar9;
    puVar2 = (undefined8 *)((long)param_1 + uVar9 * 4);
    if (param_1 < puVar2) {
      uVar4 = uVar4 - 5;
      if (uVar4 < ~param_3) {
        uVar4 = ~param_3;
      }
      uVar9 = uVar4 * -4 - 5;
      uVar1 = ((uint)(uVar9 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar10 = -((ulong)uVar1 & 7);
        puVar5 = param_1;
        do {
          lVar10 = lVar10 + 1;
          puVar6 = (undefined8 *)((long)puVar5 + 4);
          *(undefined4 *)puVar5 = param_2;
          puVar5 = puVar6;
        } while (lVar10 != 0);
      }
      puVar5 = puVar6;
      if (0x1b < uVar9) {
        do {
          puVar6 = puVar5 + 4;
          *(undefined4 *)puVar5 = param_2;
          *(undefined4 *)((long)puVar5 + 4) = param_2;
          *(undefined4 *)(puVar5 + 1) = param_2;
          *(undefined4 *)((long)puVar5 + 0xc) = param_2;
          *(undefined4 *)(puVar5 + 2) = param_2;
          *(undefined4 *)((long)puVar5 + 0x14) = param_2;
          *(undefined4 *)(puVar5 + 3) = param_2;
          *(undefined4 *)((long)puVar5 + 0x1c) = param_2;
          puVar5 = puVar6;
        } while (puVar6 < puVar2);
      }
    }
  }
  puVar2 = (undefined8 *)((long)param_1 + param_3 * 4);
  if ((3 < uVar8) && (0 < (long)(uVar8 & 0xfffffffffffffffc))) {
    puVar5 = (undefined8 *)((long)puVar6 + (uVar8 & 0xfffffffffffffffc) * 4);
    puVar3 = puVar5;
    if (puVar5 <= puVar6 + 2) {
      puVar3 = puVar6 + 2;
    }
    uVar8 = ~(ulong)puVar6;
    uVar1 = ((uint)((long)puVar3 + uVar8 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 7) != 0) {
      lVar10 = -((ulong)uVar1 & 7);
      puVar7 = puVar6;
      do {
        lVar10 = lVar10 + 1;
        puVar6 = puVar7 + 2;
        puVar7[1] = CONCAT44(param_2,param_2);
        *puVar7 = CONCAT44(param_2,param_2);
        puVar7 = puVar6;
      } while (lVar10 != 0);
    }
    if (0x6f < (long)puVar3 + uVar8) {
      do {
        puVar6[1] = CONCAT44(param_2,param_2);
        *puVar6 = CONCAT44(param_2,param_2);
        puVar6[3] = CONCAT44(param_2,param_2);
        puVar6[2] = CONCAT44(param_2,param_2);
        puVar6[5] = CONCAT44(param_2,param_2);
        puVar6[4] = CONCAT44(param_2,param_2);
        puVar6[7] = CONCAT44(param_2,param_2);
        puVar6[6] = CONCAT44(param_2,param_2);
        puVar6[9] = CONCAT44(param_2,param_2);
        puVar6[8] = CONCAT44(param_2,param_2);
        puVar6[0xb] = CONCAT44(param_2,param_2);
        puVar6[10] = CONCAT44(param_2,param_2);
        puVar6[0xd] = CONCAT44(param_2,param_2);
        puVar6[0xc] = CONCAT44(param_2,param_2);
        puVar6[0xf] = CONCAT44(param_2,param_2);
        puVar6[0xe] = CONCAT44(param_2,param_2);
        puVar6 = puVar6 + 0x10;
      } while (puVar6 < puVar5);
    }
  }
  if (puVar6 < puVar2) {
    uVar8 = (long)param_1 + ~(ulong)puVar6 + param_3 * 4;
    uVar1 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
    if ((uVar1 & 7) != 0) {
      lVar10 = -((ulong)uVar1 & 7);
      puVar5 = puVar6;
      do {
        lVar10 = lVar10 + 1;
        puVar6 = (undefined8 *)((long)puVar5 + 4);
        *(undefined4 *)puVar5 = param_2;
        puVar5 = puVar6;
      } while (lVar10 != 0);
    }
    if (0x1b < uVar8) {
      do {
        *(undefined4 *)puVar6 = param_2;
        *(undefined4 *)((long)puVar6 + 4) = param_2;
        *(undefined4 *)(puVar6 + 1) = param_2;
        *(undefined4 *)((long)puVar6 + 0xc) = param_2;
        *(undefined4 *)(puVar6 + 2) = param_2;
        *(undefined4 *)((long)puVar6 + 0x14) = param_2;
        *(undefined4 *)(puVar6 + 3) = param_2;
        *(undefined4 *)((long)puVar6 + 0x1c) = param_2;
        puVar6 = puVar6 + 4;
      } while (puVar6 < puVar2);
    }
  }
  return;
}

