
void FUN_01470c04(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x900);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x918) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x904);
    *(undefined8 *)(param_1 + 0x904) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x919) = 1;
    *(undefined4 *)(param_1 + 0x90c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x910);
    *(uint *)(param_1 + 0x900) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x920);
      lVar4 = *(long *)(param_1 + 0x928);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x900);
        goto LAB_01470c88;
      }
      *(undefined1 *)(param_1 + 0x919) = 0;
      goto LAB_01470cb0;
    }
    *(undefined1 *)(param_1 + 0x919) = 0;
  }
  else {
LAB_01470c88:
    *(undefined1 *)(param_1 + 0x919) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x920);
      lVar4 = *(long *)(param_1 + 0x928);
LAB_01470cb0:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
      if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x919) != '\0'))
      goto LAB_01470ce4;
    }
  }
  *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + 1;
LAB_01470ce4:
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x100))();
  if ((*(long *)(param_1 + 0xaa8) != 0) && (*(long *)(param_1 + 0xa88) != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xaa8) + 0x280);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
      *(uint *)(lVar4 + 0x38) =
           *(uint *)(lVar4 + 0x38) & 0xffffffe0 |
           *(uint *)(lVar4 + 0x38) & 0xf |
           (uint)((*(uint *)(*(long *)(param_1 + 0xa88) + 0x280) & 0xfffffffd) == 0) << 4;
    }
  }
  return;
}

