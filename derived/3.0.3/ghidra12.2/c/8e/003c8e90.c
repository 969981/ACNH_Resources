
void FUN_003c8e90(long *param_1,int *param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x52415746)) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] == 0x10000)) {
    *param_1 = (long)param_2;
    lVar1 = FUN_003c9100(param_2);
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[1] = lVar1 + 8;
    param_1[2] = 0;
    if (((param_3 & 1) != 0) &&
       (lVar1 = *param_1, uVar2 = FUN_003c9188(lVar1),
       *(int *)(lVar1 + (uVar2 & 0xffffffff)) == 0x54415746)) {
      uVar2 = FUN_003c9188(*param_1);
      param_1[2] = (long)param_2 + (uVar2 & 0xffffffff) + 4;
    }
  }
  return;
}

