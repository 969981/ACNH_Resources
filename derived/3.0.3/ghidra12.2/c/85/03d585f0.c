
void FUN_03d585f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((long *)param_1[0x3d] != param_1 + 0x3c) {
    lVar1 = (long)*(int *)((long)param_1 + 500);
    lVar2 = param_1[0x3d] - lVar1;
    do {
      if (*(long *)(lVar2 + 0x68) != lVar2 + 0x60) {
        lVar3 = (long)*(int *)(lVar2 + 0x74);
        lVar4 = *(long *)(lVar2 + 0x68) - lVar3;
        do {
          (**(code **)(**(long **)(lVar4 + 0x10) + 0x210))();
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar4 != (lVar2 + 0x60) - lVar3);
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != (long)(param_1 + 0x3c) - lVar1);
  }
  (**(code **)(*param_1 + 0xb0))(param_1);
  *(undefined1 *)((long)param_1 + 0x21e) = 1;
  return;
}

