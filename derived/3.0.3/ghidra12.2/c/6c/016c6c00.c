
undefined1 * FUN_016c6c00(char *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 4) == -1) {
    return (undefined1 *)0x0;
  }
  if (DAT_05574040 != 0) {
    plVar3 = *(long **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      plVar3 = (long *)*plVar3;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return (undefined1 *)0x0;
      }
      plVar3 = (long *)plVar3[0x26];
      if (plVar3 == (long *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    lVar2 = (**(code **)(*plVar3 + 0x38))();
    if (lVar2 == 0) {
      return (undefined1 *)0x0;
    }
    if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
      if ((*(int *)(param_1 + 4) != -1) && (DAT_05574040 != 0)) {
        puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
          if (lVar2 == 0) {
            return (undefined1 *)0x0;
          }
          lVar2 = lVar2 + 0x70;
        }
        else {
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined1 *)0x0;
          }
          if ((long *)puVar4[0x26] == (long *)0x0) {
            return (undefined1 *)0x0;
          }
          lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
          if (lVar2 == 0) {
            return (undefined1 *)0x0;
          }
        }
        if (*param_1 == '\0') {
          return &LAB_002057b0 + lVar2 + (long)*(int *)(param_1 + 4) * 0xc40;
        }
        return (undefined1 *)(lVar2 + (long)*(int *)(param_1 + 4) * 0xc40 + 0x20b9e8);
      }
    }
    else {
      iVar1 = FUN_0252d29c();
      if (DAT_05574040 != 0) {
        puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
          if (lVar2 == 0) {
            return (undefined1 *)0x0;
          }
          lVar2 = lVar2 + 0x70;
        }
        else {
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined1 *)0x0;
          }
          if ((long *)puVar4[0x26] == (long *)0x0) {
            return (undefined1 *)0x0;
          }
          lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
          if (lVar2 == 0) {
            return (undefined1 *)0x0;
          }
        }
        return (undefined1 *)(lVar2 + (long)iVar1 * 0xcb0 + 0x211c58);
      }
    }
  }
  return (undefined1 *)0x0;
}

