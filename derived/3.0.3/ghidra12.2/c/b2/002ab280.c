
void FUN_002ab280(int *param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5,
                 undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 local_64;
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    local_64 = 0x10c08;
  }
  else {
    lVar1 = param_2 + 0x10;
    if (*(long *)(param_2 + 0x18) != lVar1) {
      plVar4 = (long *)(lVar1 - *(int *)(param_2 + 0x24));
      plVar3 = (long *)(*(long *)(param_2 + 0x18) - (long)*(int *)(param_2 + 0x24));
      if (param_5 == 0) {
        do {
          FUN_002aa940(plVar3,param_4);
          FUN_002aa968(plVar3,param_6);
          (**(code **)(*plVar3 + 0x40))(param_1,plVar3,param_3);
          if (*param_1 != 0) goto LAB_002ab394;
          plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_2 + 0x24) + 8) -
                           (long)*(int *)(param_2 + 0x24));
        } while (plVar3 != plVar4);
      }
      else {
        do {
          FUN_002aa940(plVar3,param_4);
          FUN_002aa954(plVar3,param_5);
          FUN_002aa968(plVar3,param_6);
          (**(code **)(*plVar3 + 0x40))(param_1,plVar3,param_3);
          if (*param_1 != 0) {
LAB_002ab394:
            if (*(long *)(param_2 + 0x18) == lVar1) {
              return;
            }
            iVar2 = *(int *)(param_2 + 0x24);
            plVar3 = (long *)(*(long *)(param_2 + 0x18) - (long)iVar2);
            do {
              (**(code **)(*plVar3 + 0x48))(plVar3);
              plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_2 + 0x24) + 8) -
                               (long)*(int *)(param_2 + 0x24));
            } while (plVar3 != (long *)(lVar1 - iVar2));
            return;
          }
          plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_2 + 0x24) + 8) -
                           (long)*(int *)(param_2 + 0x24));
        } while (plVar3 != plVar4);
      }
    }
    local_64 = 0;
  }
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_54);
  FUN_002296c4(param_1,&local_64);
  return;
}

