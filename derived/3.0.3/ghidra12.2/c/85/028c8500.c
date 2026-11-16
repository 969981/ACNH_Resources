
bool FUN_028c8500(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  uint local_cc;
  undefined *local_c8;
  char *local_c0;
  int local_b8;
  char local_b4 [127];
  undefined1 local_35;
  
  lVar6 = *(long *)PTR_DAT_04bb46a8;
  if ((lVar6 == 0) || (plVar5 = (long *)*param_1, plVar5 == (long *)0x0)) {
LAB_028c86c4:
    uVar7 = 3;
LAB_028c86c8:
    *(undefined4 *)(param_1 + 2) = uVar7;
  }
  else {
    local_c8 = (undefined *)param_1[1];
    uVar7 = 3;
    local_c0 = (char *)CONCAT44(local_c0._4_4_,3);
    uVar2 = FUN_028c8370(&local_c8);
    if ((uVar2 & 1) != 0) {
      if ((int)local_c0 != 1) {
        local_35 = 0;
        local_b8 = 0x80;
        local_c0 = local_b4;
        uVar7 = *(undefined4 *)((long)param_1 + 0xc);
        local_b4[0] = '\0';
        local_c8 = PTR_DAT_04bb2d88 + 0x10;
        uVar2 = FUN_02701810(&local_c8,*(undefined4 *)(param_1 + 1),0xffffffff);
        if ((uVar2 & 1) != 0) {
          if (*local_c0 != '\0') {
            (**(code **)(local_c8 + 0x18))(&local_c8);
            lVar4 = 0;
            do {
              if (local_c0[lVar4] == '\0') goto LAB_028c860c;
              if (local_c0[lVar4 + 1] == '\0') {
                lVar4 = lVar4 + 1;
                goto LAB_028c860c;
              }
              if (local_c0[lVar4 + 2] == '\0') {
                lVar4 = lVar4 + 2;
                goto LAB_028c860c;
              }
              lVar4 = lVar4 + 3;
            } while (lVar4 != 0x80001);
            lVar4 = 0;
LAB_028c860c:
            if ((int)lVar4 < local_b8 + -1) {
              (local_c0 + (int)lVar4)[0] = '/';
              (local_c0 + (int)lVar4)[1] = '\0';
            }
          }
          FUN_027014c0(&local_c8,uVar7);
        }
        local_cc = 0;
        FUN_026d0950(lVar6,&local_cc,&local_c8);
        if (local_cc == 0) {
          uVar7 = 1;
        }
        else {
          if (7 < local_cc) {
            puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,local_cc,4);
            if (puVar3 != (undefined4 *)0x0) {
              iVar1 = FUN_026cf750(lVar6,puVar3,local_cc,&local_c8,0);
              if (iVar1 == 1) {
                *(undefined4 *)((long)param_1 + 0x14) = puVar3[1];
                uVar7 = *puVar3;
                *(undefined4 *)(param_1 + 2) = 0;
                *(undefined4 *)(param_1 + 3) = uVar7;
              }
              else {
                if (iVar1 == 5) {
                  uVar7 = 1;
                }
                else {
                  uVar7 = 3;
                }
                *(undefined4 *)(param_1 + 2) = uVar7;
              }
              (**(code **)(*plVar5 + 0x38))(plVar5,puVar3);
              return iVar1 == 1;
            }
            goto LAB_028c86c4;
          }
          uVar7 = 2;
        }
        goto LAB_028c86c8;
      }
      uVar7 = 1;
    }
    *(undefined4 *)(param_1 + 2) = uVar7;
  }
  return false;
}

