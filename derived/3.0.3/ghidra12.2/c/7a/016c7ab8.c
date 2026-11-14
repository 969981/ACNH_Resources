
undefined1 * FUN_016c7ab8(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  char local_28 [4];
  int local_24;
  
  local_28[0] = '\0';
  local_24 = -1;
  uVar2 = FUN_016cfd70(local_28);
  iVar1 = local_24;
  if ((((uVar2 & 1) != 0) && (local_24 != -1)) && (DAT_05574040 != 0)) {
    plVar4 = *(long **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      plVar4 = (long *)*plVar4;
    }
    else {
      if (plVar4 == (long *)0x0) {
        return (undefined1 *)0x0;
      }
      plVar4 = (long *)plVar4[0x26];
      if (plVar4 == (long *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    lVar3 = (**(code **)(*plVar4 + 0x38))();
    if (lVar3 != 0) {
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        if (DAT_05574040 != 0) {
          puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
            if (lVar3 == 0) {
              return (undefined1 *)0x0;
            }
            lVar3 = lVar3 + 0x70;
          }
          else {
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined1 *)0x0;
            }
            if ((long *)puVar5[0x26] == (long *)0x0) {
              return (undefined1 *)0x0;
            }
            lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
            if (lVar3 == 0) {
              return (undefined1 *)0x0;
            }
          }
          puVar6 = &LAB_002057b0 + lVar3;
          if (local_28[0] != '\0') {
            puVar6 = (undefined1 *)(lVar3 + 0x20b9e8);
          }
          puVar6 = puVar6 + (long)iVar1 * 0xc40;
          goto LAB_016c7c1c;
        }
      }
      else {
        iVar1 = FUN_0252d29c();
        if (DAT_05574040 != 0) {
          puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
            if (lVar3 == 0) {
              return (undefined1 *)0x0;
            }
            lVar3 = lVar3 + 0x70;
          }
          else {
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined1 *)0x0;
            }
            if ((long *)puVar5[0x26] == (long *)0x0) {
              return (undefined1 *)0x0;
            }
            lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
            if (lVar3 == 0) {
              return (undefined1 *)0x0;
            }
          }
          puVar6 = (undefined1 *)(lVar3 + (long)iVar1 * 0xcb0 + 0x211c58);
LAB_016c7c1c:
          return puVar6 + 0x70;
        }
      }
    }
  }
  return (undefined1 *)0x0;
}

