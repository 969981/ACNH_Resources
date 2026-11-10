
undefined8 FUN_00152938(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  iVar3 = FUN_00157b2c(param_1,0,1);
  uVar2 = *(uint *)(param_2 + 0x41c);
  if ((uVar2 >> 1 & 1) != 0) {
    *param_3 = 0;
    return 0;
  }
  local_28 = 0;
  if ((uVar2 >> 4 & 1) == 0) {
    lVar1 = param_2 + 0xc0;
    if ((uVar2 & 4) != 0) {
      lVar1 = param_2 + 0xf0;
    }
    lVar4 = 0x198;
    if ((uVar2 & 8) != 0) {
      lVar4 = 0x19c;
    }
    *(long *)(param_2 + 400) = (long)*(int *)(param_2 + lVar4);
    lVar4 = FUN_00143320(*(undefined8 *)(lVar1 + 0x10));
    *(long *)(param_2 + 0xe0) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
    iVar3 = FUN_0014a88c(param_2,lVar4,*(undefined4 *)(param_2 + 400),&local_28,(long)iVar3);
    if (iVar3 == -2) {
LAB_00152a68:
      uVar5 = 0x1c;
      goto LAB_00152a98;
    }
    if (iVar3 == 1) {
LAB_00152a50:
      uVar5 = 0;
      *param_3 = 1;
      goto LAB_00152a98;
    }
    if (local_28 == 0) {
      FUN_0014d5f8(param_1,"Couldn\'t resolve host \'%s\'",*(undefined8 *)(lVar1 + 0x18));
      uVar5 = 6;
      goto LAB_00152a98;
    }
  }
  else {
    lVar1 = param_2 + 0x150;
    if ((uVar2 & 0x40) != 0) {
      lVar1 = param_2 + 0x110;
    }
    lVar4 = FUN_00143320(*(undefined8 *)(lVar1 + 0x10));
    *(long *)(param_2 + 0xe0) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
    iVar3 = FUN_0014a88c(param_2,lVar4,*(undefined4 *)(param_2 + 400),&local_28,(long)iVar3);
    if (iVar3 == -2) goto LAB_00152a68;
    if (iVar3 == 1) goto LAB_00152a50;
    if (local_28 == 0) {
      FUN_0014d5f8(param_1,"Couldn\'t resolve proxy \'%s\'",*(undefined8 *)(lVar1 + 0x18));
      uVar5 = 5;
      goto LAB_00152a98;
    }
  }
  uVar5 = 0;
LAB_00152a98:
  *(long *)(param_2 + 0x68) = local_28;
  return uVar5;
}

