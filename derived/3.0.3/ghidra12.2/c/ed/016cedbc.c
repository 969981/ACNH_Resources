
byte FUN_016cedbc(char *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (DAT_05574040 != 0) {
    plVar6 = *(long **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      plVar6 = (long *)*plVar6;
    }
    else {
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      plVar6 = (long *)plVar6[0x26];
      if (plVar6 == (long *)0x0) {
        return 0;
      }
    }
    lVar4 = (**(code **)(*plVar6 + 0x38))();
    if (((lVar4 != 0) && (*(int *)(param_1 + 4) != -1)) && (DAT_05574040 != 0)) {
      puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar4 != 0) {
          lVar4 = lVar4 + 0x70;
LAB_016cee64:
          iVar3 = *(int *)(param_1 + 4);
          puVar2 = &LAB_002057b0 + lVar4;
          if (*param_1 != '\0') {
            puVar2 = (undefined1 *)(lVar4 + 0x20b9e8);
          }
          if ((*(long **)(puVar2 + (long)iVar3 * 0xc40 + 0x28) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(puVar2 + (long)iVar3 * 0xc40 + 0x28),
             puVar7 == (undefined8 *)0x0)) {
            return *(byte *)(*(long *)(puVar2 + (long)iVar3 * 0xc40 + 0x10) +
                            *(long *)(puVar2 + (long)iVar3 * 0xc40 + 8)) & 1;
          }
          uVar5 = (**(code **)*puVar7)();
          bVar1 = *(byte *)(*(long *)(puVar2 + (long)iVar3 * 0xc40 + 0x10) +
                           *(long *)(puVar2 + (long)iVar3 * 0xc40 + 8)) & 1;
          if ((uVar5 & 1) == 0) {
            return bVar1;
          }
          if (*(long *)(puVar2 + (long)iVar3 * 0xc40 + 0x28) == 0) {
            return bVar1;
          }
          puVar7 = *(undefined8 **)(*(long *)(puVar2 + (long)iVar3 * 0xc40 + 0x28) + 8);
          if (puVar7 == (undefined8 *)0x0) {
            return bVar1;
          }
          (**(code **)*puVar7)();
          return bVar1;
        }
      }
      else if (((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) &&
              (lVar4 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar4 != 0))
      goto LAB_016cee64;
    }
  }
  return 0;
}

