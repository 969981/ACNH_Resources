
undefined4 FUN_00151910(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  char local_38 [4];
  char local_34 [4];
  
  if ((*(int *)(param_1 + 0xc78) == 2) && (*(char *)(param_2 + 0x41c) < '\0')) {
    bVar1 = *param_3 != 0;
    if (*param_3 != 0) {
      FUN_00143300();
      *param_3 = 0;
    }
    bVar2 = *param_4 != 0;
    if (*param_4 != 0) {
      FUN_00143300();
      *param_4 = 0;
    }
    *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) & 0xffffff7f;
  }
  else {
    bVar1 = false;
    bVar2 = false;
  }
  if (*(long *)(param_1 + 0xe00) != 0) {
    FUN_00143300(*param_3);
    lVar6 = FUN_00143320(*(undefined8 *)(param_1 + 0xe00));
    *param_3 = lVar6;
    if (lVar6 == 0) {
      return 0x1b;
    }
    bVar1 = true;
    *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 0x80;
  }
  if (*(long *)(param_1 + 0xe08) != 0) {
    FUN_00143300(*param_4);
    lVar6 = FUN_00143320(*(undefined8 *)(param_1 + 0xe08));
    *param_4 = lVar6;
    if (lVar6 == 0) {
      return 0x1b;
    }
    bVar2 = true;
    *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 0x80;
  }
  if (*(long *)(param_1 + 0xe10) != 0) {
    FUN_00143300(*param_5);
    lVar6 = FUN_00143320(*(undefined8 *)(param_1 + 0xe10));
    *param_5 = lVar6;
    if (lVar6 == 0) {
      return 0x1b;
    }
  }
  *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) & 0xffefffff;
  if ((*(int *)(param_1 + 0xc78) != 0) &&
     (((((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')) ||
       ((char *)*param_4 == (char *)0x0)) || (*(char *)*param_4 == '\0')))) {
    local_34[0] = '\0';
    local_38[0] = '\0';
    iVar3 = FUN_00178f30(*(undefined8 *)(param_2 + 0xd0),param_3,param_4,local_34,local_38,
                         *(undefined8 *)(param_1 + 0xd40));
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        return 0x1b;
      }
      *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 0x100080;
      if (local_34[0] != '\0') {
        bVar1 = true;
      }
      if (local_38[0] != '\0') {
        bVar2 = true;
      }
    }
    else {
      FUN_0014d430(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",
                   *(undefined8 *)(param_2 + 0xd0));
    }
  }
  if (bVar1) {
    uVar4 = FUN_00163050(*(undefined8 *)(param_1 + 0x1568),2,*param_3,0x80);
    switch(uVar4) {
    case 0:
      break;
    default:
      return 3;
    case 5:
      return 1;
    case 7:
      return 0x1b;
    case 8:
      return 0x43;
    }
  }
  if (bVar2) {
    uVar4 = 3;
    uVar5 = FUN_00163050(*(undefined8 *)(param_1 + 0x1568),3,*param_4,0x80);
    if (uVar5 < 9) {
      uVar4 = *(undefined4 *)(&DAT_04102b60 + (long)(int)uVar5 * 4);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

