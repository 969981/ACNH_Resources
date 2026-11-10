
void FUN_001005e0(undefined2 *param_1,byte *param_2,short param_3)

{
  short sVar1;
  short sVar2;
  
  if (param_3 != 0) {
    do {
      if ((*param_2 & 0xfc) != 0xd8) {
        sVar2 = 1;
        goto LAB_00100628;
      }
      sVar2 = 1;
      if (*(short *)(param_2 + 2) != 0) {
        sVar2 = 2;
      }
      *param_1 = *(undefined2 *)param_2;
      sVar1 = *(short *)param_2;
      while( true ) {
        if (sVar1 == 0) {
          return;
        }
        sVar2 = sVar2 + -1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 2;
        if (sVar2 == 0) break;
LAB_00100628:
        *param_1 = *(undefined2 *)param_2;
        sVar1 = *(short *)param_2;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = 0;
  return;
}

