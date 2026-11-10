
undefined8 FUN_0016c5c4(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_40 [4];
  
  uVar3 = FUN_00173148(param_2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  local_40[2] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  if (*param_3 != 0) {
    lVar4 = FUN_001726f0(param_1);
    if (lVar4 == 0) {
      uVar1 = *param_3;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar2 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x938);
        }
        if (iVar2 < (int)uVar1) {
          FUN_00167498(local_40);
          lVar4 = FUN_0016c73c(param_1,*param_3,0,local_40,5,0);
          if (lVar4 == 0) {
            return 0xfffffc7b;
          }
          goto LAB_0016c694;
        }
      }
LAB_0016c688:
      FUN_00167498(local_40);
      param_3 = local_40;
    }
    else {
      iVar2 = FUN_00173148(lVar4);
      if (iVar2 == 0) goto LAB_0016c688;
    }
LAB_0016c694:
    if (*param_3 != 0) {
      iVar2 = FUN_00172bc8(lVar4,param_2);
      if (iVar2 != 0) {
        FUN_001730d0(lVar4);
        uVar3 = FUN_00173054(*(undefined8 *)(param_2 + 0x70),lVar4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      goto LAB_0016c6cc;
    }
  }
  lVar4 = param_1 + 0x20;
LAB_0016c6cc:
  if ((lVar4 == *(long *)(param_2 + 0x70)) && ((char)param_3[2] == '\0')) {
    FUN_0017294c(param_2,param_3[1]);
    uVar3 = 0;
  }
  else {
    FUN_001730d0(param_2);
    *(uint *)(param_2 + 0xd0) = param_3[1];
    if ((char)param_3[2] == '\0') {
      uVar3 = FUN_00173054(lVar4,param_2);
    }
    else {
      uVar3 = FUN_00172f80(lVar4,param_2);
    }
  }
  return uVar3;
}

