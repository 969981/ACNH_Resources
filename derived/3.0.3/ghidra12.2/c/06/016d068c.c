
undefined8 FUN_016d068c(long param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  **(undefined1 **)(param_1 + 8) = 0;
  if ((*(int *)(param_2 + 4) == -1) || (DAT_05574040 == 0)) {
LAB_016d0790:
    uVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_016d0790;
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    iVar2 = *(int *)(param_2 + 4);
    puVar1 = &LAB_002057b0 + lVar3;
    if (*param_2 != '\0') {
      puVar1 = (undefined1 *)(lVar3 + 0x20b9e8);
    }
    if ((*(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0),
       puVar6 == (undefined8 *)0x0)) {
      FUN_02775100(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d8) +
                   *(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d0),param_1);
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      FUN_02775100(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d8) +
                   *(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d0),param_1);
      if ((((uVar4 & 1) != 0) && (*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) + 8),
         puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

