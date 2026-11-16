
void FUN_029377c0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  byte bStack_12;
  undefined1 uStack_11;
  undefined1 uStack_9;
  undefined2 uStack_2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    iVar3 = 0;
    do {
      puVar4 = (undefined4 *)(lVar2 + (long)iVar3 * 0x18);
      puVar4[2] = 0xfffffe;
      *(undefined1 *)(puVar4 + 3) = 0;
      *puVar4 = 0;
      *(undefined2 *)(puVar4 + 1) = 0;
      *(byte *)((long)puVar4 + 6) = *(byte *)((long)puVar4 + 6) & 0xf0;
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    iVar3 = 0;
    do {
      lVar5 = lVar2 + (long)iVar3 * 0x30;
      if ((*(long *)(lVar5 + 8) != (ulong)(CONCAT11(uStack_11,bStack_12) & 0xfff0) << 0x30 ||
          *(long *)(lVar5 + 0x10) != CONCAT17(uStack_9,0xfffffe)) ||
          *(long *)(lVar5 + 0x18) != CONCAT26(uStack_2,0x42c80000)) {
        *(long *)(lVar5 + 8) = (ulong)(CONCAT11(uStack_11,bStack_12) & 0xfff0) << 0x30;
        *(ulong *)(lVar5 + 0x10) = CONCAT17(uStack_9,0xfffffe);
        *(ulong *)(lVar5 + 0x18) = CONCAT26(uStack_2,0x42c80000);
        *(undefined1 *)(lVar2 + (long)iVar3 * 0x30 + 0x20) = 1;
      }
      iVar3 = iVar3 + 1;
      bStack_12 = bStack_12 & 0xf0;
    } while (iVar1 != iVar3);
  }
  return;
}

