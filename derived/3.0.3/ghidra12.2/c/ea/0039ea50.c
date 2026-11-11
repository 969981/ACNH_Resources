
void FUN_0039ea50(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *(ushort *)(param_1 + 0x9e);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar4 = 0;
    }
    else {
      lVar5 = 0;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 2;
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar5);
        *(undefined4 *)((long)puVar2 + 0x14) = 0xffffffff;
        *puVar2 = 0;
        lVar1 = *(long *)(param_1 + 0x50) + lVar5;
        lVar5 = lVar5 + 0x40;
        *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
        *(undefined8 *)(lVar1 + 0x20) = 0;
      } while (((ulong)uVar3 & 0xfffe) != uVar4);
    }
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x50) + uVar4 * 0x20);
      *(undefined4 *)((long)puVar2 + 0x14) = 0xffffffff;
      *puVar2 = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_1 + 0x9c);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined2 *)(param_1 + 0xa0) = 0;
  memset(*(void **)(param_1 + 0x78),0,(ulong)(uVar3 >> 5));
  return;
}

