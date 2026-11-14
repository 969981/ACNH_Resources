
void FUN_0189fdc4(float *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  lVar3 = DAT_052ae7b0;
  if (DAT_052ae7b0 != 0) {
    iVar1 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
    iVar2 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
    if (((DAT_052ae7c8 <= iVar1 && iVar1 <= DAT_052ae7d8) && DAT_052ae7cc <= iVar2) &&
        iVar2 <= DAT_052ae7dc) {
      lVar4 = (long)(int)((iVar1 - DAT_052ae7c8) + DAT_052ae7a8 * (iVar2 - DAT_052ae7cc));
      if (DAT_052ae7ac <= (uint)(iVar2 - DAT_052ae7cc) ||
          DAT_052ae7a8 <= (uint)(iVar1 - DAT_052ae7c8)) {
        lVar4 = 0;
      }
      pcVar5 = (char *)(DAT_052ae7b0 + lVar4 * 8 + 4);
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
        *(undefined4 *)(lVar3 + lVar4 * 8) = param_2;
        return;
      }
    }
  }
  return;
}

