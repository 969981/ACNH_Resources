
void FUN_002ab4a0(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    local_44 = 0x10c08;
  }
  else {
    lVar1 = param_2 + 0x10;
    if (*(long *)(param_2 + 0x18) != lVar1) {
      iVar2 = *(int *)(param_2 + 0x24);
      plVar4 = (long *)(*(long *)(param_2 + 0x18) - (long)iVar2);
      do {
        (**(code **)(*plVar4 + 0x30))(param_1,plVar4);
        lVar3 = (long)*(int *)(param_2 + 0x24);
        if (*param_1 != 0) {
          if (*(long *)(param_2 + 0x18) == lVar1) {
            return;
          }
          plVar4 = (long *)(*(long *)(param_2 + 0x18) - lVar3);
          do {
            (**(code **)(*plVar4 + 0x38))(plVar4);
            plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_2 + 0x24) + 8) -
                             (long)*(int *)(param_2 + 0x24));
          } while (plVar4 != (long *)(lVar1 - lVar3));
          return;
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar3 + 8) + (long)-*(int *)(param_2 + 0x24));
      } while (plVar4 != (long *)(lVar1 - iVar2));
    }
    local_44 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

