
uint FUN_03f2a310(long *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if ((uVar1 & 1) != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x30))(param_1);
    if (*(long *)(piVar2 + 2) != 0) {
      FUN_03f2a3d0(piVar2,0,*piVar2 + -1);
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x38))(param_1);
    if (*(long *)(piVar2 + 2) != 0) {
      FUN_03f2a3d0(piVar2,0,*piVar2 + -1);
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
    if (*(long *)(piVar2 + 2) != 0) {
      FUN_03f2a3d0(piVar2,0,*piVar2 + -1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar1 & 1;
}

