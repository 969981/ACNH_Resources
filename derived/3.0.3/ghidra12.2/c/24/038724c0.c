
void FUN_038724c0(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [32];
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = 0;
  do {
    if (*(char *)(param_2[1] + lVar3) == '\0') {
LAB_03872530:
      if ((int)lVar3 != 0) {
LAB_03872534:
        iVar2 = *param_1;
        if (iVar2 == 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          FUN_00227930(auStack_40,param_2[1]);
          FUN_002524c0(auStack_50,param_1 + 0x144c,auStack_40);
        }
        else {
          if (iVar2 != 1) goto LAB_038725c8;
          (**(code **)(*param_2 + 0x18))(param_2);
          FUN_00227930(auStack_40,param_2[1]);
          FUN_002cc058(auStack_50,param_1 + 0x836,auStack_40);
        }
        iVar2 = *param_1;
LAB_038725c8:
        if (iVar2 == 2) {
          FUN_0022d52c(auStack_40,param_1 + 0x1b4a,param_1 + 0x176a);
          FUN_0022d584(auStack_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
        }
        else if (iVar2 == 1) {
          FUN_002cbc30(auStack_40,param_1 + 0x918,param_1 + 8);
          FUN_002cbc90(auStack_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
        }
        return;
      }
      break;
    }
    lVar1 = param_2[1] + lVar3;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_03872530;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      if ((int)lVar3 != -2) goto LAB_03872534;
      break;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  FUN_0387264c(param_1);
  return;
}

