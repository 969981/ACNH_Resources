
undefined8 FUN_0015b1d4(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_00171b00();
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x1e8);
    if (lVar4 == 0) {
      uVar3 = 0xfffffc7a;
    }
    else {
      *(undefined1 *)(lVar4 + 0x250) = 1;
      *(long *)(lVar2 + 0x1540) = *(long *)(lVar2 + 0x1540) + 1;
      *(undefined4 *)(param_4 + 0x630) = param_3;
      *(long *)(param_4 + 0x600) = *(long *)(param_4 + 0x600) + 1;
      iVar1 = FUN_00171b38(param_1,param_2,0);
      if (iVar1 != 0) {
        FUN_0014d430(lVar2,"http/2: failed to clear user_data for stream %d!\n",param_2);
      }
      if (*(int *)(param_4 + 0x5f8) == param_2) {
        *(undefined4 *)(param_4 + 0x5f8) = 0;
      }
      uVar3 = 0;
      *(undefined4 *)(lVar4 + 0x218) = 0;
    }
  }
  return uVar3;
}

