
int FUN_0019b6c8(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x38))();
  iVar1 = (int)param_1[7];
  switch(iVar1) {
  case 1:
  case 2:
  case 4:
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    return iVar1;
  case 8:
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,0x20);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x28))(param_1,0x20);
      *(undefined4 *)(param_1 + 7) = 0x20;
      return 0x20;
    }
    goto LAB_0019b7f8;
  case 0x10:
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar2 & 1) == 0) goto LAB_0019b7f8;
    goto LAB_0019b780;
  case 0x20:
    if (*(int *)((long)param_1 + 0x3c) != 0) goto LAB_0019b7f8;
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,0x10);
    if ((uVar2 & 1) != 0) {
      lVar3 = *param_1;
      goto LAB_0019b758;
    }
    goto LAB_0019b76c;
  default:
    if ((iVar1 != 0x80) && (iVar1 != 0x100)) {
      return iVar1;
    }
  }
  lVar3 = *param_1;
LAB_0019b758:
  (**(code **)(lVar3 + 0x28))(param_1,0x10);
  *(undefined4 *)(param_1 + 7) = 0x10;
LAB_0019b76c:
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((uVar2 & 1) != 0) {
LAB_0019b780:
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,0x40);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x28))(param_1,0x40);
      *(undefined4 *)(param_1 + 7) = 0x40;
      return 0x40;
    }
  }
LAB_0019b7f8:
  return (int)param_1[7];
}

