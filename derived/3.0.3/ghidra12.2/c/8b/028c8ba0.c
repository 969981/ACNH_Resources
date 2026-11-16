
bool FUN_028c8ba0(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  plVar2 = (long *)param_1[1];
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if (((long *)*param_1 == (long *)0x0) || (*(long *)*param_1 != 0)) {
      bVar1 = false;
    }
    else {
      if (DAT_05ae7600 == 0) {
        puVar3 = malloc(0x30);
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x30,8);
      }
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 **)*param_1 = puVar3;
      bVar1 = false;
      if (*(long *)*param_1 != 0) {
        local_38 = param_1[1];
        local_28 = *(undefined4 *)((long)param_1 + 0x14);
        local_30 = (undefined4)param_1[3];
        uStack_2c = (undefined4)param_1[2];
        FUN_027b6c14(*(long *)*param_1,&local_38);
        bVar1 = *(int *)(*(long *)*param_1 + 0x2c) == 1;
      }
    }
  }
  return bVar1;
}

