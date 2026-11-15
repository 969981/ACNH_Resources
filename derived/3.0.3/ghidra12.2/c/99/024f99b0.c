
void FUN_024f99b0(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      uVar1 = FUN_0277d7b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + lVar5 * 8));
      if ((uVar1 & 1) != 0) {
        if (*(long *)(*(long *)(param_1 + 0x80) + lVar5 * 8) != 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x78);
        break;
      }
      iVar2 = *(int *)(param_1 + 0x78);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 <= iVar2) {
    if (0 < iVar2) {
      puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x80);
      *puVar4 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 **)(param_1 + 0x88) = puVar4;
      iVar2 = *(int *)(param_1 + 0x78);
      if (0 < iVar2) {
        if (iVar2 - 1U == 0) {
          iVar2 = 0;
        }
        else {
          memmove(*(void **)(param_1 + 0x80),(void *)((long)*(void **)(param_1 + 0x80) + 8),
                  (ulong)(iVar2 - 1U) << 3);
          iVar2 = *(int *)(param_1 + 0x78) + -1;
        }
        *(int *)(param_1 + 0x78) = iVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x7c);
  }
  if (iVar2 < iVar3) {
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *puVar4;
    }
    *(undefined2 *)puVar4 = *param_2;
    *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 4);
    if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x7c)) {
      *(undefined8 **)(*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78) * 8) = puVar4;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
  }
  return;
}

