
void FUN_03f35dc0(long param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x40))();
  iVar2 = *piVar3;
  if (iVar2 != 0) {
    if (iVar2 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      iVar2 = iVar2 + -1;
      do {
        iVar5 = iVar2 + iVar6;
        if (iVar5 < 0 != SCARRY4(iVar2,iVar6)) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 >> 1;
        iVar1 = FUN_03f2a860(*(long *)(piVar3 + 2) + (long)iVar5 * 0x10,param_3);
        if (iVar1 == 0) goto joined_r0x03f35e7c;
        if (iVar1 < 0) {
          iVar6 = iVar5 + 1;
        }
        else {
          iVar2 = iVar5 + -1;
        }
      } while (iVar6 < iVar2);
    }
    iVar2 = FUN_03f2a860(*(long *)(piVar3 + 2) + (long)iVar6 * 0x10,param_3);
    iVar5 = iVar6;
    if (iVar2 == 0) {
joined_r0x03f35e7c:
      if (iVar5 != -1) {
        uVar4 = 2;
        goto LAB_03f35f18;
      }
    }
  }
  piVar3 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x38))();
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    iVar6 = -1;
  }
  else {
    if (iVar2 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar2 = iVar2 + -1;
      do {
        iVar6 = iVar2 + iVar5;
        if (iVar6 < 0 != SCARRY4(iVar2,iVar5)) {
          iVar6 = iVar6 + 1;
        }
        iVar6 = iVar6 >> 1;
        iVar1 = FUN_03f2a860(*(long *)(piVar3 + 2) + (long)iVar6 * 0x10,param_3);
        if (iVar1 == 0) goto LAB_03f35f10;
        if (iVar1 < 0) {
          iVar5 = iVar6 + 1;
        }
        else {
          iVar2 = iVar6 + -1;
        }
      } while (iVar5 < iVar2);
    }
    iVar2 = FUN_03f2a860(*(long *)(piVar3 + 2) + (long)iVar5 * 0x10,param_3);
    if (iVar2 != 0) {
      iVar5 = -1;
    }
    iVar6 = iVar5;
  }
LAB_03f35f10:
  uVar4 = (uint)(iVar6 != -1);
LAB_03f35f18:
  *param_2 = uVar4;
  return;
}

