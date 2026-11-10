
void FUN_00173dd0(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  long *plVar4;
  long lVar3;
  int *piVar5;
  
  if (*(char *)(param_2 + 0xc) == '\x05') {
    plVar2 = (long *)(param_2 + 0x18);
    plVar4 = (long *)(param_2 + 0x20);
  }
  else {
    if (*(char *)(param_2 + 0xc) != '\x01') {
      return;
    }
    plVar2 = (long *)(param_2 + 0x28);
    plVar4 = (long *)(param_2 + 0x30);
  }
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    plVar2 = (long *)(*plVar2 + 0x10);
    do {
      if (((*plVar2 == 7) && (piVar5 = (int *)plVar2[-2], *(char *)((long)piVar5 + 6) == 'd')) &&
         (*piVar5 == 0x74656d3a && (short)piVar5[1] == 0x6f68)) {
        if (plVar2[1] == 4) {
          if (*(int *)plVar2[-1] != 0x44414548) {
            return;
          }
          uVar1 = 0x100;
        }
        else {
          if (plVar2[1] != 7) {
            return;
          }
          if (*(int *)plVar2[-1] != 0x4e4e4f43 || *(int *)(plVar2[-1] + 3) != 0x5443454e) {
            return;
          }
          uVar1 = 0x80;
        }
        *(ushort *)(param_1 + 0xe2) = *(ushort *)(param_1 + 0xe2) | uVar1;
        return;
      }
      plVar2 = plVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

