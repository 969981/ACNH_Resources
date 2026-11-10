
undefined8 FUN_0016ca1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_001726f0(param_1,*(undefined4 *)(param_2 + 8));
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) {
      lVar2 = 0;
      if (*(int *)(lVar1 + 0xdc) != 5) {
        lVar2 = lVar1;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    if (lVar2 == 0) {
      return 0xfffffe02;
    }
    if (*(long *)(lVar2 + 0xa8) == 0) {
      uVar3 = FUN_00172a38(lVar2,param_2);
      return uVar3;
    }
    return 0xfffffdef;
  case 1:
    if ((*(int *)(param_2 + 0x38) == 0) || ((lVar2 != 0 && (*(int *)(lVar2 + 0xdc) == 4)))) {
      param_1 = param_1 + 0x138;
      goto LAB_0016cb40;
    }
    break;
  case 3:
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0xdc) = 3;
    }
    break;
  case 4:
  case 6:
    param_1 = param_1 + 0x108;
    goto LAB_0016cb40;
  case 5:
    local_28 = 0;
    local_30 = 0;
    if (lVar2 == 0) {
      return 0xfffffe02;
    }
    FUN_00167484(&local_30,*(undefined4 *)(lVar2 + 0xb8),0x10,0);
    lVar2 = FUN_0016c73c(param_1,*(undefined4 *)(param_2 + 0x28),0,&local_30,4,
                         *(undefined8 *)(param_2 + 0x70));
    if (lVar2 == 0) {
      return 0xfffffc7b;
    }
    break;
  case 8:
    if (lVar2 == 0) {
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(param_1 + 0x9ac) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar2 + 0xe7) = 1;
    }
  }
  param_1 = param_1 + 0x120;
LAB_0016cb40:
  FUN_0016bc74(param_1,param_2);
  *(undefined1 *)(param_2 + 0x90) = 1;
  return 0;
}

