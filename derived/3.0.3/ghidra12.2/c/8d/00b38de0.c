
uint FUN_00b38de0(long *param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  
  lVar5 = *param_1;
  if ((*(char *)((long)param_1 + 10) == '\0' || lVar5 == 0) || (*(int *)(lVar5 + 0x500) != 0)) {
    return 1;
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x508);
  iVar2 = FUN_021d7030(uVar1);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_44[0] = *param_2;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "Friendship";
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    uVar3 = FUN_02669430(local_44);
    uVar4 = FUN_02746f80(uVar1,iVar2,&local_40,uVar3 & 1);
    if (uVar4 < 0x1e) {
      uVar3 = 1;
    }
    else if (uVar4 < 0x3c) {
      uVar3 = 2;
    }
    else if (uVar4 < 100) {
      uVar3 = 3;
    }
    else if (uVar4 < 0x96) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
      if (199 < uVar4) {
        uVar3 = 6;
      }
    }
  }
  if (uVar3 == 0) {
    if (param_3 < 8) {
      return 0x83U >> (ulong)(param_3 & 0x1f) & 1;
    }
switchD_00b38f14_caseD_0:
    return 0;
  }
  uVar4 = 1;
  switch(param_3) {
  case 0:
    break;
  case 1:
    uVar4 = (uint)(uVar3 == 1);
    break;
  case 2:
    uVar4 = (uint)(uVar3 == 2);
    break;
  case 3:
    uVar4 = (uint)(uVar3 == 3);
    break;
  case 4:
    uVar4 = (uint)(uVar3 == 4);
    break;
  case 5:
    uVar4 = (uint)(uVar3 == 5);
    break;
  case 6:
    uVar4 = (uint)(uVar3 == 6);
    break;
  case 7:
    uVar4 = (uint)(uVar3 < 3);
    break;
  case 8:
    uVar3 = uVar3 - 3;
    goto LAB_00b38f98;
  case 9:
    uVar3 = uVar3 - 5;
LAB_00b38f98:
    uVar4 = (uint)(uVar3 < 2);
    break;
  case 10:
    uVar4 = (uint)(1 < uVar3);
    break;
  case 0xb:
    uVar4 = (uint)(2 < uVar3);
    break;
  case 0xc:
    uVar4 = (uint)(3 < uVar3);
    break;
  default:
    goto switchD_00b38f14_caseD_0;
  }
  return uVar4;
}

