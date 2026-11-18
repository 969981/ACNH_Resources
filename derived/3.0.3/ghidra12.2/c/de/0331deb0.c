
void FUN_0331deb0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_04bc1118 + 0xbf8);
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0x2599) != '\0')) &&
     (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16431) == '\0')) {
    if (*(char *)((long)param_1 + 0x17e4) == '\0') {
      *(int *)(param_1 + 0x2bd) = param_3;
      *(undefined1 *)((long)param_1 + 0x17e4) = 1;
    }
    else {
      if (*(char *)((long)param_1 + 0x17e5) != '\0') {
        return;
      }
      if ((int)param_1[0x2bd] != param_3) {
        return;
      }
    }
    iVar1 = FUN_0331eb0c(param_2);
    if ((iVar1 == 4) || (iVar1 = FUN_0331eb0c(param_2), iVar1 == 3)) {
      *(undefined1 *)((long)param_1 + 0x17e4) = 0;
    }
    uVar2 = FUN_0331eb0c(param_2);
    switch(uVar2) {
    case 1:
      FUN_0331ec40(param_1);
      return;
    case 2:
      if ((char)param_1[0x2fb] != '\0') {
        lVar5 = param_1[0x6b];
        if (lVar5 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(lVar5 + 0x5e8);
        }
        if (iVar1 == 2) {
          if (lVar5 == 0) goto LAB_0331e08c;
          uVar4 = 0;
        }
        else if (iVar1 == 1) {
          if (lVar5 == 0) goto LAB_0331e08c;
          uVar4 = 2;
        }
        else {
          if ((iVar1 != 0) || (lVar5 == 0)) goto LAB_0331e08c;
          uVar4 = 1;
        }
        FUN_032e4828(lVar5,uVar4,1);
      }
LAB_0331e08c:
      if ((int)param_1[0x61] - 0xeU < 3) {
        FUN_032e4b30(param_1[1],9,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0331e0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))(param_1);
      return;
    case 3:
    case 4:
      if (param_3 == 0) {
        iVar1 = FUN_0331eb0c(param_2);
        lVar5 = 0x70;
        if (iVar1 != 4) {
          lVar5 = 0x78;
        }
        (**(code **)(*param_1 + lVar5))(param_1);
        (**(code **)(*param_1 + 0x188))(param_1);
        FUN_03322410(param_1);
        return;
      }
      break;
    case 5:
    case 6:
      if (param_3 == 0) {
        uVar3 = FUN_0331eb0c(param_2);
        *(uint *)(param_1 + 0x2fd) = *(uint *)(param_1 + 0x2fd) | 1 << (ulong)(uVar3 & 0x1f);
      }
    }
  }
  return;
}

