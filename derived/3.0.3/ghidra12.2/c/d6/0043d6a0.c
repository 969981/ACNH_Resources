
void FUN_0043d6a0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  
  if (param_2 != param_1) {
    lVar4 = *param_1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
      lVar3 = param_1[1];
      lVar2 = FUN_0043c4e0(DAT_04c6f050);
      lVar1 = DAT_04c6f058;
      if (lVar2 != 0) {
        lVar1 = lVar2;
      }
      FUN_004220c0(*(undefined8 *)(lVar1 + 0x58),lVar4,8,(int)lVar3 + 1);
      *param_1 = (long)&DAT_0413f820;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (*(int *)(*param_2 + 4) != -2) {
      *(int *)(param_1 + 1) = (int)param_2[1];
      lVar1 = param_2[1];
      lVar3 = FUN_0043c4e0(DAT_04c6f050);
      lVar4 = DAT_04c6f058;
      if (lVar3 != 0) {
        lVar4 = lVar3;
      }
      __dest = (void *)FUN_00422030(*(undefined8 *)(lVar4 + 0x58),8,(int)lVar1 + 1);
      *param_1 = (long)__dest;
      memcpy(__dest,(void *)*param_2,(long)(int)param_2[1] * 8 + 8);
      return;
    }
    *param_1 = (long)&DAT_0413f820;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

