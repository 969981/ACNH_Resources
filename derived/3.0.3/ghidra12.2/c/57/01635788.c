
void FUN_01635788(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x9d);
  *(undefined1 *)(param_1 + 0x9c) = uVar1;
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar2 = (undefined1 *)(**(code **)(*(long *)(lVar3 + 0x158) + 0xf0))(lVar3 + 0x158);
    *puVar2 = uVar1;
    *(uint *)(lVar3 + 0x178) = *(uint *)(lVar3 + 0x178) | 0x1000000;
  }
  return;
}

