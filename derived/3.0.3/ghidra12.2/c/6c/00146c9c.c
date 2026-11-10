
void FUN_00146c9c(long param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  long *plVar5;
  
  uVar4 = FUN_00147178();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x1038) = uVar4;
    *(ulong *)(param_1 + 0x1040) = CONCAT44(extraout_var,extraout_w1);
    return;
  case 2:
    *(undefined8 *)(param_1 + 0x1028) = uVar4;
    *(ulong *)(param_1 + 0x1030) = CONCAT44(extraout_var,extraout_w1);
    *(byte *)(param_1 + 0x111c) = *(byte *)(param_1 + 0x111c) & 0xfd;
    return;
  case 3:
    plVar5 = (long *)(param_1 + 0xfe8);
    break;
  case 4:
    plVar5 = (long *)(param_1 + 0xff0);
    break;
  case 5:
    plVar5 = (long *)(param_1 + 0xff8);
    break;
  case 6:
    plVar5 = (long *)(param_1 + 0x1000);
    break;
  case 7:
    bVar1 = *(byte *)(param_1 + 0x111c);
    if ((bVar1 >> 1 & 1) != 0) {
      return;
    }
    *(byte *)(param_1 + 0x111c) = bVar1 | 2;
    plVar5 = (long *)(param_1 + 0x1008);
    break;
  default:
    goto switchD_00146cd4_caseD_8;
  case 9:
    *(undefined8 *)(param_1 + 0x1048) = uVar4;
    *(ulong *)(param_1 + 0x1050) = CONCAT44(extraout_var,extraout_w1);
    return;
  case 10:
    iVar3 = FUN_00147204((int)uVar4,extraout_w1,*(undefined8 *)(param_1 + 0x1018),
                         *(undefined8 *)(param_1 + 0x1020));
    *(long *)(param_1 + 0x1010) = (long)iVar3;
    goto switchD_00146cd4_caseD_8;
  }
  uVar2 = FUN_00147204((int)uVar4,extraout_w1,*(undefined8 *)(param_1 + 0x1028),
                       *(undefined8 *)(param_1 + 0x1030));
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  *plVar5 = *plVar5 + (ulong)uVar2;
switchD_00146cd4_caseD_8:
  return;
}

