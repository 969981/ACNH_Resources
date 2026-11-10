
void FUN_002e9e90(long param_1,int param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  
  lVar1 = *(long *)(param_1 + 0x2c8);
  if (lVar1 != 0) {
    piVar3 = (int *)(lVar1 + 0x10);
    if (*piVar3 != param_2) {
      if (*(int *)(lVar1 + 0x658) == param_2) {
        piVar3 = (int *)(lVar1 + 0x658);
      }
      else if (*(int *)(lVar1 + 0xca0) == param_2) {
        piVar3 = (int *)(lVar1 + 0xca0);
      }
      else {
        if (*(int *)(lVar1 + 0x12e8) != param_2) {
          return;
        }
        piVar3 = (int *)(lVar1 + 0x12e8);
      }
    }
    for (piVar2 = *(int **)(piVar3 + 4); piVar2 != piVar3 + 2; piVar2 = *(int **)(piVar2 + 2)) {
      if ((*(long *)(piVar2 + 4) == param_3) && (0 < *(short *)((long)piVar2 + 0x22))) {
        *(undefined1 *)((long)piVar2 + 0x26) = 1;
        return;
      }
    }
  }
  return;
}

