
void FUN_03b43a00(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_4 [4];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 7) {
    return;
  }
  local_4[0] = '\0';
  if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) != 0) {
    uVar2 = FUN_03b43b10(param_1,local_4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x1e0);
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (*(char *)(param_1 + 0x1a5) == '\0' && local_4[0] == '\0') {
      return;
    }
    bVar1 = *(short *)(param_1 + 0xea) != 0;
    (**(code **)(*plVar3 + 0x28))
              (plVar3,(bVar1 && *(char *)(param_1 + 0xec) != '\0') &&
                      (!bVar1 || *(char *)(param_1 + 0xec) != '\x01'));
    return;
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    if (*(char *)(param_1 + 0x1a4) == '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x1e8);
    if ((*(long *)(param_1 + 0x1e0) == 0) || (lVar4 == 0)) {
      if (*(long *)(param_1 + 0x1e0) == 0) {
        lVar4 = FUN_03bc36b0(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 8) + 0x58),
                             param_1 + 0x1a8,*(undefined1 *)(param_1 + 0x1a6));
        *(long *)(param_1 + 0x1e0) = lVar4;
        if (lVar4 == 0) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x1e8);
      }
      if (lVar4 == 0) {
        lVar4 = FUN_03bc42a0(*(undefined8 *)(*(long *)(DAT_05aebb78 + 8) + 0x60));
        *(long *)(param_1 + 0x1e8) = lVar4;
        if (lVar4 == 0) {
          return;
        }
      }
      uVar5 = 1;
      goto LAB_03b43a3c;
    }
  }
  uVar5 = 0;
LAB_03b43a3c:
  FUN_03b43c10(param_1,uVar5);
  return;
}

