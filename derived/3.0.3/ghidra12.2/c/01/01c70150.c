
undefined8 FUN_01c70150(undefined4 *param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  
  if (0 < (int)param_1[0x46]) {
    lVar6 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x4a);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x48) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar8 = puVar10;
      *(undefined8 **)(param_1 + 0x4a) = puVar8;
      puVar10 = puVar8;
    } while (lVar6 < (int)param_1[0x46]);
  }
  param_1[0x46] = 0;
  if (0 < (int)param_1[2]) {
    lVar6 = 0;
    puVar10 = *(undefined8 **)(param_1 + 6);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 4) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar8 = puVar10;
      *(undefined8 **)(param_1 + 6) = puVar8;
      puVar10 = puVar8;
    } while (lVar6 < (int)param_1[2]);
  }
  param_1[2] = 0;
  if (10 < *(byte *)(param_2 + 8)) {
    return 0;
  }
  bVar3 = *(byte *)(param_2 + 9);
  if (10 < bVar3) {
    return 0;
  }
  if (*(byte *)(param_2 + 8) != 0) {
    uVar7 = 0;
    puVar9 = (undefined4 *)(param_2 + 0x28);
    do {
      pbVar1 = (byte *)(param_2 + 10) + uVar7;
      if (9 < uVar7) {
        pbVar1 = (byte *)(param_2 + 10);
      }
      bVar3 = *pbVar1;
      if (7 < bVar3) {
        return 0;
      }
      puVar10 = *(undefined8 **)(param_1 + 6);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 6) = *puVar10;
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      if ((int)param_1[2] < (int)param_1[3]) {
        *(undefined8 **)(*(long *)(param_1 + 4) + (long)(int)param_1[2] * 8) = puVar10;
        param_1[2] = param_1[2] + 1;
      }
      bVar5 = 9 < uVar7;
      *(uint *)(puVar10 + 1) = (uint)bVar3;
      uVar7 = uVar7 + 1;
      puVar2 = puVar9;
      if (bVar5) {
        puVar2 = (undefined4 *)(param_2 + 0x28);
      }
      puVar9 = puVar9 + 2;
      *(undefined4 *)puVar10 = *puVar2;
      *(undefined4 *)((long)puVar10 + 4) = puVar2[1];
    } while (uVar7 < *(byte *)(param_2 + 8));
    bVar3 = *(byte *)(param_2 + 9);
  }
  if (bVar3 != 0) {
    uVar7 = 0;
    puVar9 = (undefined4 *)(param_2 + 0x78);
    do {
      lVar6 = param_2 + uVar7;
      if (9 < uVar7) {
        lVar6 = param_2;
      }
      bVar3 = *(byte *)(lVar6 + 0x14);
      if (7 < bVar3) {
        return 0;
      }
      lVar6 = param_2 + uVar7;
      if (9 < uVar7) {
        lVar6 = param_2;
      }
      bVar4 = *(byte *)(lVar6 + 0x1e);
      if (5 < bVar4) {
        return 0;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x4a);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x4a) = *puVar10;
      }
      *puVar10 = 0;
      puVar10[1] = 0;
      if ((int)param_1[0x46] < (int)param_1[0x47]) {
        *(undefined8 **)(*(long *)(param_1 + 0x48) + (long)(int)param_1[0x46] * 8) = puVar10;
        param_1[0x46] = param_1[0x46] + 1;
      }
      bVar5 = 9 < uVar7;
      *(uint *)(puVar10 + 1) = (uint)bVar3;
      *(uint *)((long)puVar10 + 0xc) = (uint)bVar4;
      uVar7 = uVar7 + 1;
      puVar2 = puVar9;
      if (bVar5) {
        puVar2 = (undefined4 *)(param_2 + 0x78);
      }
      puVar9 = puVar9 + 2;
      *(undefined4 *)puVar10 = *puVar2;
      *(undefined4 *)((long)puVar10 + 4) = puVar2[1];
    } while (uVar7 < *(byte *)(param_2 + 9));
  }
  *param_1 = *(undefined4 *)(param_2 + 200);
  param_1[1] = *(undefined4 *)(param_2 + 0xcc);
  return 1;
}

