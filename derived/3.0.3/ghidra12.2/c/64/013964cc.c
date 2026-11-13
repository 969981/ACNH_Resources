
void FUN_013964cc(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = DAT_051a9970;
  lVar1 = param_1 + 0x108;
  if (*(long *)(param_1 + 0x118) != 0 || *(long *)(param_1 + 0x110) != 0) {
    plVar2 = (long *)(*(int *)(DAT_051a9970 + 0x21c) + lVar1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x218) = *(int *)(lVar4 + 0x218) + -1;
    if (*(long *)(param_1 + 0x170) != 0 || *(long *)(param_1 + 0x168) != 0) {
      FUN_0138e0a0(lVar1);
    }
    FUN_0138dd70(lVar1);
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc4);
  uVar3 = *(uint *)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xd9) = 1;
  *(uint *)(param_1 + 0xc0) = uVar3;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xe0) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  FUN_013954e8(param_1);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x48))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x48))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_0138dd70(lVar1);
  *(undefined1 *)(param_1 + 0x510) = 0;
  return;
}

