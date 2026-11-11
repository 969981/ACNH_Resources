
void FUN_00470a90(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar2 = 0;
    uVar3 = (ulong)(*(int *)((long)param_1 + 0xc) + 1);
    do {
      if (*(long *)(*param_1 + lVar2) != -1) {
        *(undefined8 *)(*param_1 + lVar2) = 0xffffffffffffffff;
      }
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (*param_1 != 0)) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(long)(*(int *)((long)param_1 + 0xc) * 0x10 + 0x10));
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}

