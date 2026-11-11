
void FUN_004715a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    lVar1 = 0;
    lVar2 = -1;
    do {
      *(undefined8 *)(*param_1 + lVar1) = 0xffffffffffffffff;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 < *(int *)((long)param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

