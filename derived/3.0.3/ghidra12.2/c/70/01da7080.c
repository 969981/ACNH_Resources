
undefined8 FUN_01da7080(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = (*(long **)PTR_DAT_04bb27d0)[3];
  if ((*(int *)(lVar4 + 0x84f4) != -1 || *(long *)(lVar4 + 0xd0) != 0) ||
     (*(ulong *)(lVar4 + 0xd8) != 0 &&
      ((*(ulong *)(lVar4 + 0xd8) & 1) != 0 || *(long *)(lVar4 + 0xd0) != 0))) {
    return 0;
  }
  if (*(int *)(**(long **)PTR_DAT_04bb27d0 + 0x490) < 0) {
    uVar3 = (ulong)DAT_05372688;
    if (0 < (int)DAT_05372688) {
      plVar5 = DAT_05372690;
      do {
        if ((*plVar5 != 0) && (*(char *)(*plVar5 + 0x40) != '\0')) {
          return 0;
        }
        uVar3 = uVar3 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 != 0);
    }
    lVar4 = *(long *)PTR_DAT_04bb36f0;
    iVar1 = 0xd;
    uVar2 = *(uint *)(lVar4 + 0x20);
    lVar6 = *(long *)(lVar4 + 0x28);
    if (uVar2 < 0xe) {
      iVar1 = 0;
    }
    if (*(char *)(lVar6 + (long)iVar1 * 0x38 + 0x2c) != '\0') {
      iVar1 = 0xd;
      if (uVar2 < 0xe) {
        iVar1 = 0;
      }
      if (*(char *)(lVar6 + (long)iVar1 * 0x38 + 0x2c) != '\0') {
        iVar1 = 0xd;
        if (uVar2 < 0xe) {
          iVar1 = 0;
        }
        if (*(int *)(lVar6 + (long)iVar1 * 0x38) != 0) {
          iVar1 = 0xd;
          if (uVar2 < 0xe) {
            iVar1 = 0;
          }
          *(undefined1 *)(lVar6 + (long)iVar1 * 0x38 + 0x2c) = 0;
          iVar1 = 0xd;
          if (*(uint *)(lVar4 + 0x20) < 0xe) {
            iVar1 = 0;
          }
          *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2d) = 0;
          iVar1 = 0xd;
          if (*(uint *)(lVar4 + 0x20) < 0xe) {
            iVar1 = 0;
          }
          *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38) = 0;
          iVar1 = 0xd;
          if (*(uint *)(lVar4 + 0x20) < 0xe) {
            iVar1 = 0;
          }
          *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2f) = 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

