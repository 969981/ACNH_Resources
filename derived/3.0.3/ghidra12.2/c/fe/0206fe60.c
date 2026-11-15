
void FUN_0206fe60(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 200) + lVar5 * 8);
      uVar1 = FUN_0277d7b4(lVar4,param_2);
      if ((((uVar1 & 1) != 0) && (*(char *)(lVar4 + 3) == *(char *)((long)param_2 + 3))) &&
         (*(int *)(lVar4 + 4) == *(int *)(param_2 + 2))) {
        if (*(long *)(*(long *)(param_1 + 200) + lVar5 * 8) != 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0xc0);
        break;
      }
      iVar2 = *(int *)(param_1 + 0xc0);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if (iVar2 < *(int *)(param_1 + 0xc4)) {
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = *puVar3;
    }
    *(undefined2 *)puVar3 = *param_2;
    *(undefined1 *)((long)puVar3 + 2) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_2 + 2);
    if (*(int *)(param_1 + 0xc0) < *(int *)(param_1 + 0xc4)) {
      *(undefined8 **)(*(long *)(param_1 + 200) + (long)*(int *)(param_1 + 0xc0) * 8) = puVar3;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
  }
  return;
}

