
ulong FUN_010fa0c0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_40;
  long lStack_38;
  
  (**(code **)(*param_1 + 0x18))();
  lVar4 = param_1[1];
  lVar3 = 0;
  do {
    if (*(char *)(lVar4 + lVar3) == '\0') {
LAB_010fa124:
      iVar2 = (int)lVar3;
joined_r0x010fa128:
      if (0 < iVar2) {
        lVar5 = 0;
        goto LAB_010fa140;
      }
      break;
    }
    if (*(char *)(lVar4 + lVar3 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_010fa124;
    }
    if (*(char *)(lVar4 + lVar3 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x010fa128;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  goto LAB_010fa1b0;
  while( true ) {
    if (*(char *)(lVar4 + lVar3 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_010fa1dc;
    }
    if (*(char *)(lVar4 + lVar3 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      goto LAB_010fa1dc;
    }
    lVar3 = lVar3 + 3;
    if (lVar3 == 0x80001) break;
LAB_010fa180:
    if (*(char *)(lVar4 + lVar3) == '\0') goto LAB_010fa1dc;
  }
  lVar3 = 0;
LAB_010fa1dc:
  lStack_38 = *(long *)(PTR_PTR_04bb2238 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if ((int)lVar5 < (int)lVar3) {
    lStack_38 = lVar4 + lVar5 + 1;
  }
  uVar1 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_40,PTR_DAT_04bb3238,1);
  return uVar1;
  while (lVar5 = lVar5 + 1, lVar3 != lVar5) {
LAB_010fa140:
    if (*(char *)(lVar4 + lVar5) == '_') {
      if (-1 < (int)lVar5) {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar4 = param_1[1];
        lVar3 = 0;
        goto LAB_010fa180;
      }
      break;
    }
  }
LAB_010fa1b0:
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}

