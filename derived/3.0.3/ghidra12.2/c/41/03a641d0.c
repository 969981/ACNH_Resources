
void FUN_03a641d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x60);
      uVar1 = uVar5;
      if (*(uint *)(param_1 + 0x58) <= uVar5) {
        uVar1 = 0;
      }
      lVar8 = *(long *)(lVar6 + (ulong)uVar1 * 0x28 + 0x10);
      if ((*(char *)(lVar8 + 0x58) != '\0') &&
         (*(uint *)(*(long *)(lVar8 + 0xcb8) + 0xb90) =
               *(uint *)(*(long *)(lVar8 + 0xcb8) + 0xb90) | 1, *(char *)(lVar8 + 0x58) != '\0')) {
        *(undefined1 *)(lVar8 + 0x58) = 0;
        *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) = *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) | 1;
      }
      *(undefined8 *)(lVar6 + (ulong)uVar1 * 0x28 + 0x20) = 0;
      if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
        *(ulong *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) =
             lVar6 + (ulong)uVar1 * 0x28;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar6 = (long)*(int *)(param_1 + 0x18) << 3;
    do {
      lVar8 = *plVar4;
      *(undefined2 *)(lVar8 + 0x4a) = *(undefined2 *)(lVar8 + 0x48);
      *(ushort *)(lVar8 + 0x48) = -(ushort)(*(long *)(lVar8 + 0x40) == 0);
      lVar8 = *plVar4;
      if ((((*(short *)(lVar8 + 0x4a) == 0) || (lVar7 = *(long *)(lVar8 + 0x40), lVar7 == 0)) ||
          (*(char *)(lVar7 + 0x58) == '\0')) ||
         ((*(int *)(lVar7 + 0x290) == -1 ||
          (uVar2 = *(int *)(param_1 + 0x28) - 1, *(int *)(param_1 + 0x28) < 1)))) {
LAB_03a64370:
        *(undefined8 *)(lVar8 + 0x18) = 0;
      }
      else {
        *(uint *)(param_1 + 0x28) = uVar2;
        lVar7 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 8);
        lVar8 = *plVar4;
        if (lVar7 == 0) goto LAB_03a64370;
        *(long *)(lVar7 + 0x20) = lVar8;
        lVar8 = *(long *)(lVar7 + 0x10);
        if ((*(char *)(lVar8 + 0x58) == '\0') &&
           (*(uint *)(*(long *)(lVar8 + 0xcb8) + 0xb90) =
                 *(uint *)(*(long *)(lVar8 + 0xcb8) + 0xb90) | 1, *(char *)(lVar8 + 0x58) == '\0'))
        {
          *(undefined1 *)(lVar8 + 0x58) = 1;
          *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) =
               *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) | 1;
        }
        *(long *)(*plVar4 + 0x18) = lVar7;
        if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
          *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = lVar7;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        }
      }
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar4 = *(long **)(param_1 + 0x40);
    lVar6 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      lVar8 = *plVar4;
      iVar3 = *(int *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x40) + 0x290);
      if (*(int *)(lVar8 + 0x18) != iVar3) {
        FUN_03a188a0(*(undefined8 *)(lVar8 + 0x10),iVar3,0);
        *(undefined4 *)(*plVar4 + 0x18) =
             *(undefined4 *)(*(long *)(*(long *)(*plVar4 + 0x20) + 0x40) + 0x290);
      }
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}

