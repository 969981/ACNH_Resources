
void FUN_0043d5f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  
  if (*(int *)(*param_2 + 4) == -2) {
    *param_1 = &DAT_0413f820;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  lVar2 = param_2[1];
  lVar3 = FUN_0043c4e0(DAT_04c6f050);
  lVar1 = DAT_04c6f058;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  __dest = (void *)FUN_00422030(*(undefined8 *)(lVar1 + 0x58),8,(int)lVar2 + 1);
  *param_1 = __dest;
  memcpy(__dest,(void *)*param_2,(long)(int)param_2[1] * 8 + 8);
  return;
}

