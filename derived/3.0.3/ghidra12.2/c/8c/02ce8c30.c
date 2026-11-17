
void FUN_02ce8c30(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_58;
  uint local_54;
  
  uVar4 = FUN_02cd9040(param_2);
  if (uVar4 == 0xffffffff) {
    return;
  }
  uVar5 = FUN_02665700(param_2);
  if ((uVar5 & 1) != 0) {
    return;
  }
  puVar1 = (undefined2 *)(param_1 + 0x753c8);
  puVar2 = puVar1 + (ulong)uVar4 * 8;
  if (9 < uVar4) {
    puVar2 = puVar1;
  }
  if (*(int *)(puVar2 + 4) == 3) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    local_58 = 0;
    if (uVar4 != 0) {
      if (uVar4 == 3) {
        local_58 = 2;
      }
      else {
        if (uVar4 != 4) goto LAB_02ce8d20;
        local_58 = 1;
      }
    }
    *(byte *)(param_1 + 0x753b8) = *(byte *)(param_1 + 0x753b8) | (byte)(1 << (ulong)local_58);
    puVar2 = (undefined2 *)(param_1 + 0x753a0) + (ulong)local_58 * 4;
    if (2 < local_58) {
      puVar2 = (undefined2 *)(param_1 + 0x753a0);
    }
    *puVar2 = DAT_05586008;
    *(undefined1 *)(puVar2 + 1) = DAT_0558600a;
    *(undefined1 *)((long)puVar2 + 3) = DAT_0558600b;
    *(undefined4 *)(puVar2 + 2) = DAT_0558600c;
    FUN_02ce119c(param_1 + 0x75358,uVar3);
  }
LAB_02ce8d20:
  puVar2 = puVar1 + (ulong)uVar4 * 8;
  if (9 < uVar4) {
    puVar2 = puVar1;
  }
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  puVar2 = puVar1 + (ulong)uVar4 * 8;
  if (9 < uVar4) {
    puVar2 = puVar1;
  }
  *(undefined4 *)(puVar2 + 4) = 4;
  puVar2 = puVar1 + (ulong)uVar4 * 8;
  if (9 < uVar4) {
    puVar2 = puVar1;
  }
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
  if (uVar4 != 0xffffffff) {
    puVar2 = puVar1 + (ulong)uVar4 * 8;
    if (9 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(int *)(puVar2 + 4) == 4) {
      puVar2 = puVar1 + (ulong)uVar4 * 8;
      if (9 < uVar4) {
        puVar2 = puVar1;
      }
      if (*(int *)(param_1 + 0x3a9b8) == 0) {
        iVar7 = -1;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x3a9c0);
        lVar8 = 0;
        lVar10 = (long)*(int *)(param_1 + 0x3a9b8) << 3;
        iVar7 = -1;
        do {
          puVar6 = *(uint **)(lVar9 + lVar8 * 8);
          local_58 = *puVar6;
          local_54 = puVar6[1];
          uVar5 = FUN_0277d7b4(&local_58,puVar2);
          if ((uVar5 & 1) != 0) {
            iVar7 = *(int *)(param_1 + 0x753c4) + (int)lVar8;
            break;
          }
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      if (*(int *)(puVar2 + 4) != 3) {
        return;
      }
      iVar7 = *(int *)(param_1 + 0x753c0);
    }
    puVar2 = puVar1 + (ulong)uVar4 * 8;
    if (9 < uVar4) {
      puVar2 = puVar1;
    }
    *(int *)(puVar2 + 6) = iVar7;
  }
  return;
}

