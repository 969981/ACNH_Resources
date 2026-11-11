
void FUN_006662d0(char *param_1,int param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  byte local_44 [4];
  
  if (0 < param_2) {
    uVar2 = 0;
    do {
      while( true ) {
        if (*param_3 < param_3[1]) {
          memcpy(local_50,(void *)*param_3,1);
          *param_3 = *param_3 + 1;
        }
        else {
          FUN_0049e700(param_3,local_50,1);
        }
        *param_1 = local_50[0];
        if (*param_3 < param_3[1]) {
          memcpy(local_4c,(void *)*param_3,1);
          *param_3 = *param_3 + 1;
        }
        else {
          FUN_0049e700(param_3,local_4c,1);
        }
        param_1[1] = local_4c[0];
        if (*param_3 < param_3[1]) {
          memcpy(local_48,(void *)*param_3,1);
          *param_3 = *param_3 + 1;
        }
        else {
          FUN_0049e700(param_3,local_48,1);
        }
        param_1[2] = local_48[0];
        if (*param_3 < param_3[1]) {
          memcpy(local_44,(void *)*param_3,1);
          *param_3 = *param_3 + 1;
        }
        else {
          FUN_0049e700(param_3,local_44,1);
        }
        param_1[3] = local_44[0];
        if (((*param_1 != '\x01') || (param_1[1] != '\x01')) || (param_1[2] != '\x01')) break;
        iVar1 = (uint)local_44[0] << (ulong)(uVar2 & 0x1f);
        if (0 < iVar1) {
          iVar3 = iVar1;
          do {
            FUN_0043a3b0(param_1,param_1 + -4,4);
            iVar3 = iVar3 + -1;
            param_1 = param_1 + 4;
          } while (0 < iVar3);
          param_2 = param_2 - iVar1;
        }
        uVar2 = uVar2 + 8;
        if (param_2 < 1) {
          return;
        }
      }
      uVar2 = 0;
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

