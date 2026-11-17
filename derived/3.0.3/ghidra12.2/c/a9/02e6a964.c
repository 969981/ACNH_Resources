
void FUN_02e6a964(long *param_1,short *param_2,short *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short local_38;
  short local_36;
  undefined4 local_34;
  
  if (param_2 == (short *)0x0) {
    return;
  }
  if (*param_3 == -2) {
    return;
  }
  uVar2 = FUN_02cd9040(param_3);
  switch(uVar2) {
  case 0:
    *param_2 = *param_3;
    *(char *)(param_2 + 1) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    break;
  case 1:
    param_2[4] = *param_3;
    *(char *)(param_2 + 5) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 2);
    break;
  case 2:
    param_2[8] = *param_3;
    *(char *)(param_2 + 9) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_3 + 2);
    break;
  case 3:
    param_2[0xc] = *param_3;
    *(char *)(param_2 + 0xd) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 2);
    break;
  case 4:
    param_2[0xc] = *param_3;
    *(char *)(param_2 + 0xd) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 2);
    if (param_2[0x10] != -2) {
      return;
    }
    FUN_02e6ad48(&local_38,param_1,5);
    param_2[0x11] = local_36;
    param_2[0x10] = local_38;
    *(undefined4 *)(param_2 + 0x12) = local_34;
    goto LAB_02e6ab04;
  case 5:
    param_2[0x10] = *param_3;
    *(char *)(param_2 + 0x11) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_3 + 2);
    if (param_2[0xc] != -2) {
      return;
    }
    FUN_02e6ad48(&local_38,param_1,4);
    param_2[0xd] = local_36;
    param_2[0xc] = local_38;
    *(undefined4 *)(param_2 + 0xe) = local_34;
LAB_02e6ab04:
    if (local_38 == -2) {
      FUN_02ceb9e4(param_1 + 0x3896,uVar2);
    }
    else {
      FUN_02ceb840(param_1 + 0x3896,&local_38);
      uVar3 = FUN_02cd9040(&local_38);
      lVar5 = (long)param_1 + 0x91ff4 + (ulong)uVar3 * 0x10;
      if (9 < uVar3) {
        lVar5 = (long)param_1 + 0x91ff4;
      }
      iVar1 = *(int *)(lVar5 + 0xc);
      if ((((-1 < iVar1) && (iVar4 = FUN_02cd9040(&local_38), iVar4 != -1)) &&
          (lVar5 = (**(code **)(*param_1 + 0x278))(param_1), lVar5 != 0)) &&
         (iVar1 < *(int *)(lVar5 + 0x3cc))) {
        FUN_02cd10a0(param_1 + 0x387b,lVar5,iVar4,iVar1);
      }
    }
    break;
  case 6:
    param_2[0x14] = *param_3;
    *(char *)(param_2 + 0x15) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_3 + 2);
    break;
  case 7:
    param_2[0x18] = *param_3;
    *(char *)(param_2 + 0x19) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_3 + 2);
    break;
  case 8:
    param_2[0x1c] = *param_3;
    *(char *)(param_2 + 0x1d) = (char)param_3[1];
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_3 + 2);
  }
  return;
}

