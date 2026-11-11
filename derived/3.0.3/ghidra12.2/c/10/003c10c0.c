
void FUN_003c10c0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_3a [10];
  
  if (0 < *(int *)(param_1 + 0x1c4)) {
    lVar4 = 0;
    lVar3 = param_1;
    do {
      while( true ) {
        lVar1 = FUN_03b38a74();
        plVar2 = *(long **)(lVar1 + (ulong)*(byte *)(param_1 + 0x1ea) * 8 + 0x110);
        if ((plVar2 != (long *)0x0) && (0.0 < *(float *)(param_1 + 0x200))) break;
        FUN_003c2fd0(lVar3,0,0);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0xe0;
        if (*(int *)(param_1 + 0x1c4) <= lVar4) {
          return;
        }
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_3a);
      FUN_003c2fd0(lVar3,1,auStack_3a);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xe0;
    } while (lVar4 < *(int *)(param_1 + 0x1c4));
  }
  return;
}

