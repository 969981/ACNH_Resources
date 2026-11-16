
void FUN_02971a60(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    iVar5 = 0;
    do {
      puVar7 = (undefined8 *)(lVar4 + (long)iVar5 * 0xc);
      *puVar7 = 0;
      *(undefined2 *)(puVar7 + 1) = 0xfffe;
      *(undefined1 *)((long)puVar7 + 10) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = 0;
    do {
      lVar1 = lVar4 + ((long)((ulong)uVar6 << 0x20) >> 0x1b);
      local_4 = CONCAT13(local_4._3_1_,0xfffe);
      if (*(long *)(lVar1 + 8) != 0 || *(int *)(lVar1 + 0x10) != local_4) {
        *(long *)(lVar1 + 8) = 0;
        *(int *)(lVar1 + 0x10) = local_4;
        *(undefined1 *)(lVar4 + (long)(int)uVar6 * 0x20 + 0x14) = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}

