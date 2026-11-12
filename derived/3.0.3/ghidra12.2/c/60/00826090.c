
void FUN_00826090(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte local_24 [4];
  
  local_24[0] = *(byte *)(param_1 + 0x158);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  iVar1 = FUN_02582fe0(local_24);
  if (iVar1 == -1) {
    iVar2 = *(int *)(param_1 + 0xf8);
    if (iVar2 != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x100);
      lVar3 = (long)iVar2 << 3;
      do {
        if ((((int *)*puVar5)[1] & 1U) == 0) {
          iVar1 = *(int *)*puVar5;
          if (iVar1 != -1) goto LAB_00826124;
          break;
        }
        puVar5 = puVar5 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xf8);
  }
LAB_00826124:
  if (0 < iVar2) {
    lVar3 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x100) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar6 = puVar5;
      *(undefined8 **)(param_1 + 0x108) = puVar6;
      puVar5 = puVar6;
    } while (lVar3 < *(int *)(param_1 + 0xf8));
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (0 < *(int *)(param_1 + 0xfc)) {
    piVar4 = *(int **)(param_1 + 0x108);
    if (piVar4 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)piVar4;
    }
    piVar4[0] = -1;
    piVar4[1] = 0;
    if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
      *(int **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = piVar4;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    *piVar4 = iVar1;
    piVar4[1] = piVar4[1] & 0xfffffffe;
  }
  return;
}

