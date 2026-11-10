
undefined8 FUN_0014e1e4(char *param_1,undefined8 *param_2,int param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_28;
  
  piVar3 = __errno_location();
  *piVar3 = 0;
  *param_4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_0014e24c:
      local_28 = (char *)0x0;
      lVar4 = strtol(param_1,&local_28,param_3);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_28;
      }
      if (*piVar3 == 0x22) {
        uVar5 = 1;
      }
      else if (param_1 == local_28) {
LAB_0014e29c:
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
        *param_4 = lVar4;
      }
      return uVar5;
    }
    iVar2 = FUN_00146528();
    if (iVar2 == 0) {
      if (*param_1 == '-') {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = param_1;
        }
        goto LAB_0014e29c;
      }
      goto LAB_0014e24c;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}

