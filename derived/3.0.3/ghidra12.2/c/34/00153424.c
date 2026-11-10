
int FUN_00153424(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 1:
    iVar1 = FUN_001535f4(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x78));
    goto LAB_001534bc;
  case 2:
    iVar1 = FUN_001536e0(param_1,*(undefined8 *)(param_2 + 0x20));
    if (iVar1 != 0x1a) goto LAB_001534bc;
  case 0:
switchD_00153460_caseD_0:
    if (*(long *)(param_2 + 0x58) == 0) {
      iVar1 = 0;
    }
    else {
      lVar2 = FUN_0014e0cc();
      if (lVar2 == 0) {
        iVar1 = 0x1b;
      }
      else {
        iVar1 = FUN_00153a08(param_1,lVar2,1);
        if (iVar1 != 0) {
          FUN_0014e11c(lVar2);
        }
      }
    }
    break;
  case 3:
    iVar1 = FUN_0015387c(param_1,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x28),
                         *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                         *(undefined8 *)(param_2 + 0x40));
LAB_001534bc:
    if (iVar1 == 0) goto switchD_00153460_caseD_0;
    break;
  case 4:
    lVar2 = FUN_00153910(*param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_00153d78(param_1,lVar2,1);
      if (iVar1 == 0) {
        for (lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x10); lVar4 != 0;
            lVar4 = *(long *)(lVar4 + 0x10)) {
          lVar3 = FUN_00153994(lVar2);
          if (lVar3 == 0) {
            iVar1 = 0x1b;
            goto joined_r0x001535ec;
          }
          iVar1 = FUN_00153424(lVar3,lVar4);
          if (iVar1 != 0) break;
        }
      }
      goto LAB_001534bc;
    }
    iVar1 = 0x1b;
    param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
    goto LAB_001535c8;
  default:
    iVar1 = 0x2b;
  }
joined_r0x001535ec:
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = 0x17;
  }
  else {
    param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
    if ((((iVar1 != 0) ||
         (iVar1 = FUN_00153a80(param_1,*(undefined8 *)(param_2 + 0x60)), iVar1 != 0)) ||
        (iVar1 = FUN_00153ad8(param_1,*(undefined8 *)(param_2 + 0x70)), iVar1 != 0)) ||
       (iVar1 = FUN_00153b30(param_1,*(undefined8 *)(param_2 + 0x68)), iVar1 != 0)) {
LAB_001535c8:
      FUN_001532b0(param_1);
    }
  }
  return iVar1;
}

