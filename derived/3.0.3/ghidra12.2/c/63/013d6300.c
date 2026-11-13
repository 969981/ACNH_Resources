
void FUN_013d6300(long param_1)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    iVar4 = 0;
    do {
      puVar1 = (undefined2 *)(lVar3 + (long)iVar4 + (long)iVar4 * 4);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 3) = 0xff;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    iVar4 = 0;
    do {
      lVar5 = lVar3 + (long)iVar4 * 0x18;
      if (*(int *)(lVar5 + 8) != -0x1000000 || *(char *)(lVar5 + 0xc) != '\0') {
        *(int *)(lVar5 + 8) = -0x1000000;
        *(undefined1 *)(lVar5 + 0xc) = 0;
        *(undefined1 *)(lVar3 + (long)iVar4 * 0x18 + 0xd) = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return;
}

