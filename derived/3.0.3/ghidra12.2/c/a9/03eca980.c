
bool FUN_03eca980(long param_1,char *param_2,int param_3,void *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
  if ((int)uVar1 < 1) {
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    pcVar4 = (char *)(*(long *)(param_1 + 0x18) + 0x23);
    bVar2 = true;
    do {
      if (((((*param_2 == pcVar4[-0xf]) && (param_2[1] == pcVar4[-0xe])) &&
           (param_2[2] == pcVar4[-0xd])) &&
          (((param_2[3] == pcVar4[-0xc] && (param_2[4] == pcVar4[-0xb])) &&
           ((param_2[5] == pcVar4[-10] && ((param_2[6] == pcVar4[-9] && (param_2[7] == pcVar4[-8])))
            ))))) &&
         ((param_2[8] == pcVar4[-7] &&
          (((((param_2[9] == pcVar4[-6] && (param_2[10] == pcVar4[-5])) &&
             (param_2[0xb] == pcVar4[-4])) &&
            ((param_2[0xc] == pcVar4[-3] && (param_2[0xd] == pcVar4[-2])))) &&
           ((param_2[0xe] == pcVar4[-1] && (param_2[0xf] == *pcVar4)))))))) {
        memcpy((void *)(*(long *)(param_1 + 8) + (long)*(int *)(pcVar4 + -0x1b) + (long)param_3),
               param_4,(long)param_5);
        return bVar2;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x24;
      bVar2 = uVar3 < uVar1;
    } while (uVar1 != uVar3);
  }
  return bVar2;
}

