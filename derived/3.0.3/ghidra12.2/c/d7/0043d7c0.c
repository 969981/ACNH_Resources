
void FUN_0043d7c0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != param_1) {
    lVar4 = *param_1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
      lVar2 = param_1[1];
      lVar3 = FUN_0043c4e0(DAT_04c6f050);
      lVar1 = DAT_04c6f058;
      if (lVar3 != 0) {
        lVar1 = lVar3;
      }
      FUN_004220c0(*(undefined8 *)(lVar1 + 0x58),lVar4,8,(int)lVar2 + 1);
      *param_1 = (long)&DAT_0413f820;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *param_2 = (long)&DAT_0413f820;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}

