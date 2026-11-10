
void FUN_0033d150(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x1e0);
  puVar1 = (undefined8 *)(param_2 + 0x1e0);
  if (((lVar2 == 0) && (*(long *)(param_2 + 0x1e8) == 0)) && (*(char *)(param_2 + 0x1f) != '\0')) {
    lVar2 = param_1 + (long)*(int *)(param_2 + 0x24) * 8;
    if (*(long *)(lVar2 + 0x838) == param_2) {
      *(undefined8 *)(lVar2 + 0x838) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x24);
      lVar3 = *(long *)(param_1 + lVar2 * 8 + 0x838);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1e8) = 0;
        lVar2 = (long)*(int *)(param_2 + 0x24);
      }
      param_1 = param_1 + lVar2 * 8;
      if (*(long *)(param_1 + 0xa38) == param_2) {
        *(undefined8 *)(param_1 + 0xa38) = 0;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1e8) = 0;
        return;
      }
      *(undefined1 *)(param_2 + 0x1f) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1e8) = 0;
      return;
    }
    if (*(long *)(lVar2 + 0xa38) == param_2) {
      *(undefined8 *)(lVar2 + 0xa38) = 0;
      lVar2 = *(long *)(param_2 + 0x1e8);
      if (*(long *)(param_2 + 0x1e0) != 0) {
        *(long *)(*(long *)(param_2 + 0x1e0) + 0x1e8) = lVar2;
        lVar2 = *(long *)(param_2 + 0x1e8);
      }
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x1e0) = *puVar1;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1e8) = 0;
        return;
      }
    }
    FUN_0032c3c0("EmitterSet removing failed.\n");
    *(undefined1 *)(param_2 + 0x1f) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x1e8) = 0;
    return;
  }
  lVar3 = param_1 + (long)*(int *)(param_2 + 0x24) * 8;
  if (*(long *)(lVar3 + 0x438) == param_2) {
    *(long *)(lVar3 + 0x438) = lVar2;
    lVar2 = (long)*(int *)(param_2 + 0x24);
    lVar3 = *(long *)(param_1 + lVar2 * 8 + 0x438);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x1e8) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x24);
    }
    param_1 = param_1 + lVar2 * 8;
    if (*(long *)(param_1 + 0x638) == param_2) {
      *(undefined8 *)(param_1 + 0x638) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1e8) = 0;
      return;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x638) == param_2) {
      *(undefined8 *)(lVar3 + 0x638) = *(undefined8 *)(param_2 + 0x1e8);
      lVar2 = *(long *)(param_2 + 0x1e0);
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
    }
    if (*(long *)(param_2 + 0x1e8) == 0) {
      FUN_0032c3c0("EmitterSet removing failed.\n");
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1e8) = 0;
      return;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x1e8) + 0x1e0) = *puVar1;
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  return;
}

