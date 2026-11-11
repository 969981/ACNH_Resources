
void FUN_003cc778(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)((long)param_1 + 0xc);
  if (*piVar1 != (int)param_1[2]) {
    iVar3 = *piVar1;
    *(undefined8 *)(*param_1 + (long)iVar3 * 0x18 + 0x10) = param_4;
    memcpy(*(void **)(*param_1 + (long)iVar3 * 0x18),param_2,param_3);
    iVar2 = 0;
    if (iVar3 + 1 < (int)param_1[1]) {
      iVar2 = iVar3 + 1;
    }
    *piVar1 = iVar2;
  }
  return;
}

