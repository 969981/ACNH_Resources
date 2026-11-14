
byte FUN_016cff80(char *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  if ((*(int *)(param_1 + 4) == -1) || (DAT_05574040 == 0)) {
LAB_016d0064:
    bVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) goto LAB_016d0064;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar3 == 0)) goto LAB_016d0064;
    iVar2 = *(int *)(param_1 + 4);
    puVar1 = &LAB_002057b0 + lVar3;
    if (*param_1 != '\0') {
      puVar1 = (undefined1 *)(lVar3 + 0x20b9e8);
    }
    if ((*(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x28),
       puVar5 == (undefined8 *)0x0)) {
      bVar6 = *(byte *)(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x10) +
                       *(long *)(puVar1 + (long)iVar2 * 0xc40 + 8)) & 1;
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      bVar6 = *(byte *)(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x10) +
                       *(long *)(puVar1 + (long)iVar2 * 0xc40 + 8)) & 1;
      if ((((uVar4 & 1) != 0) && (*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x28) + 8),
         puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return bVar6;
}

