
undefined8 FUN_0014af3c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar1 = (long *)(lVar3 + lVar2 * 0x20);
  plVar4 = (long *)*plVar1;
  do {
    if (plVar4 == (long *)0x0) {
LAB_0014afc8:
      lVar3 = FUN_001432f0(param_3 + 0x30);
      if (lVar3 == 0) {
        param_4 = 0;
      }
      else {
        memcpy((void *)(lVar3 + 0x28),param_2,param_3);
        *(undefined8 *)(lVar3 + 0x18) = param_4;
        *(size_t *)(lVar3 + 0x20) = param_3;
        FUN_00143a90(plVar1,plVar1[1],lVar3,lVar3);
        param_1[5] = param_1[5] + 1;
      }
      return param_4;
    }
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3);
    if (lVar3 != 0) {
      FUN_00143b00(plVar1,plVar4,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_0014afc8;
    }
    plVar4 = (long *)plVar4[2];
  } while( true );
}

