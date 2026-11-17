
void FUN_02ceb840(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  uVar3 = FUN_02cd9040(param_2);
  if (uVar3 != 0xffffffff) {
    puVar1 = (undefined2 *)(param_1 + 0x75b44);
    puVar2 = puVar1 + (ulong)uVar3 * 8;
    if (9 < uVar3) {
      puVar2 = puVar1;
    }
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    uVar4 = FUN_02665700(param_2);
    puVar2 = puVar1 + (ulong)uVar3 * 8;
    if (9 < uVar3) {
      puVar2 = puVar1;
    }
    uVar6 = 3;
    if ((uVar4 & 1) == 0) {
      uVar6 = 4;
    }
    *(undefined4 *)(puVar2 + 4) = uVar6;
    puVar2 = puVar1 + (ulong)uVar3 * 8;
    if (9 < uVar3) {
      puVar2 = puVar1;
    }
    *puVar2 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    if (uVar3 != 0xffffffff) {
      puVar2 = puVar1 + (ulong)uVar3 * 8;
      if (9 < uVar3) {
        puVar2 = puVar1;
      }
      if (*(int *)(puVar2 + 4) == 4) {
        puVar2 = puVar1 + (ulong)uVar3 * 8;
        if (9 < uVar3) {
          puVar2 = puVar1;
        }
        if (*(int *)(param_1 + 0x3b130) == 0) {
          iVar7 = -1;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x3b138);
          lVar8 = 0;
          lVar10 = (long)*(int *)(param_1 + 0x3b130) << 3;
          iVar7 = -1;
          do {
            puVar5 = *(undefined2 **)(lVar9 + lVar8 * 8);
            local_58 = *puVar5;
            local_56 = *(undefined1 *)(puVar5 + 1);
            local_55 = *(undefined1 *)((long)puVar5 + 3);
            local_54 = *(undefined4 *)(puVar5 + 2);
            uVar4 = FUN_0277d7b4(&local_58,puVar2);
            if ((uVar4 & 1) != 0) {
              iVar7 = *(int *)(param_1 + 0x75b3c) + (int)lVar8;
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
        iVar7 = *(int *)(param_1 + 0x75b38);
      }
      puVar2 = puVar1 + (ulong)uVar3 * 8;
      if (9 < uVar3) {
        puVar2 = puVar1;
      }
      *(int *)(puVar2 + 6) = iVar7;
    }
  }
  return;
}

