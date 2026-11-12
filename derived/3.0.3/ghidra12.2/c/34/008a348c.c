
undefined8 FUN_008a348c(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (*(char *)(param_1 + 0x28) == -1) {
    return 1;
  }
  iVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar2 < 0x3411ee5c) {
    if (iVar2 == -0x10e0fba8) {
      iVar3 = 0x3411ee5c;
    }
    else {
      if (iVar2 != -0xbb9f562) {
LAB_008a358c:
        iVar2 = *(int *)(PTR_DAT_04bc3a88 + 0x38);
        goto LAB_008a3598;
      }
      iVar3 = 0x617f19ef;
    }
LAB_008a3578:
    iVar2 = *(int *)(PTR_DAT_04bc3a88 + 0x38);
    if (iVar2 == iVar3) goto LAB_008a35b8;
  }
  else {
    iVar3 = 0x3411ee5c;
    if (iVar2 != 0x3411ee5c) {
      if (iVar2 != 0x565b4aba) {
        if (iVar2 != 0x6622bd46) goto LAB_008a358c;
        iVar3 = -0x143208e5;
      }
      goto LAB_008a3578;
    }
    iVar2 = *(int *)(PTR_DAT_04bc3a88 + 0x38);
    if (iVar2 == -0x10e0fba8 || iVar2 == 0x565b4aba) goto LAB_008a35b8;
  }
LAB_008a3598:
  if ((iVar2 != 0x4e32b7a) && (iVar2 != -0x62dfe0a2)) {
    return 1;
  }
LAB_008a35b8:
  if (*(char *)(param_1 + 0x1d) != '\0') {
    plVar1 = *(long **)PTR_DAT_04bb27d0;
    if (((plVar1[2] == 0) || ((*(uint *)(plVar1 + 0x10) & 0xfffffffe) != 2)) ||
       (*(int *)(plVar1[2] + 0x3e4) == 1)) {
      *(undefined2 *)(param_1 + 0x69) = 0x101;
    }
    else {
      local_8 = 0;
      local_2 = 0;
      local_4 = 0xff01;
      pcVar4 = (char *)(param_1 + 0x54);
      *pcVar4 = *(char *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x56) = 1;
      *(undefined1 *)(param_1 + 0x5d) = 1;
      iVar2 = *(int *)(*(long *)(param_1 + 0x60) + 8);
      if (-1 < iVar2) {
        FUN_01db1df0(*plVar1 + 0x480,iVar2,&local_8,pcVar4,0xc,0);
      }
      *pcVar4 = -1;
    }
  }
  return 0;
}

