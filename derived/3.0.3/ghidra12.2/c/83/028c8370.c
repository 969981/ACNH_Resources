
bool FUN_028c8370(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *local_c8;
  char *local_c0;
  int local_b8;
  char local_b4 [127];
  undefined1 local_35;
  int local_18;
  char local_14 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb46a8;
  if (lVar6 == 0) {
LAB_028c84c4:
    bVar1 = false;
  }
  else {
    local_35 = 0;
    local_b8 = 0x80;
    local_c0 = local_b4;
    uVar4 = param_1[1];
    local_b4[0] = '\0';
    local_c8 = PTR_DAT_04bb2d88 + 0x10;
    uVar3 = FUN_02701810(&local_c8,*param_1,0xffffffff);
    if ((uVar3 & 1) != 0) {
      if (*local_c0 != '\0') {
        (**(code **)(local_c8 + 0x18))(&local_c8);
        lVar5 = 0;
        do {
          if (local_c0[lVar5] == '\0') goto LAB_028c843c;
          if (local_c0[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_028c843c;
          }
          if (local_c0[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_028c843c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_028c843c:
        if ((int)lVar5 < local_b8 + -1) {
          (local_c0 + (int)lVar5)[0] = '/';
          (local_c0 + (int)lVar5)[1] = '\0';
        }
      }
      FUN_02701270(&local_c8,uVar4);
    }
    local_14[0] = '\0';
    iVar2 = FUN_026d0cf0(lVar6,local_14,&local_c8);
    if (iVar2 != 1) goto LAB_028c84c4;
    if (local_14[0] == '\0') {
      param_1[2] = 1;
      return true;
    }
    local_18 = 0;
    iVar2 = FUN_026d0950(lVar6,&local_18,&local_c8);
    bVar1 = iVar2 == 1;
    if (bVar1) {
      if (local_18 != 0) {
        param_1[2] = 0;
        return true;
      }
      uVar4 = 1;
      goto LAB_028c84cc;
    }
  }
  uVar4 = 2;
LAB_028c84cc:
  param_1[2] = uVar4;
  return bVar1;
}

