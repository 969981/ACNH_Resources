
uint FUN_027019b0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_02701810(param_1,param_2,param_4);
  if ((param_1 != (long *)0x0) && ((uVar1 & 1) != 0)) {
    if (*(char *)param_1[1] != '\0') {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar2 = param_1[1];
      lVar3 = 0;
      do {
        if (*(char *)(lVar2 + lVar3) == '\0') goto LAB_02701a4c;
        if (*(char *)(lVar2 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_02701a4c;
        }
        if (*(char *)(lVar2 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_02701a4c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02701a4c:
      if ((int)lVar3 < (int)param_1[2] + -1) {
        *(undefined2 *)(lVar2 + (int)lVar3) = 0x2f;
      }
    }
    FUN_02701270(param_1,param_3);
  }
  return uVar1 & 1;
}

