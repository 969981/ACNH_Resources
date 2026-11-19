
void FUN_038cf4a0(char *param_1,long *param_2,char *param_3,ulong param_4)

{
  char cVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined *local_f8;
  char *pcStack_f0;
  undefined *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [127];
  undefined1 local_55;
  int local_34;
  
  sVar7 = param_4 & 0xffffffff;
  iVar5 = (int)param_4;
  if (param_1 != (char *)0x0) {
    cVar1 = param_1[1];
    if (cVar1 != 's') {
      sVar2 = strlen(param_1);
      if (param_1[sVar2 - 1] == 's') {
        local_d4[0] = '\0';
        local_d8 = 0x80;
        local_e0 = local_d4;
        local_55 = 0;
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        local_e8 = PTR_DAT_04bb2d88 + 0x10;
        FUN_038d5060(&local_f8,local_e0,0x80,param_3,0xffffffff);
        iVar6 = (int)local_f8;
        if (cVar1 == '-') {
          if (iVar5 == -1) {
            sVar7 = strlen(param_3);
            sVar7 = sVar7 & 0xffffffff;
          }
          (**(code **)(*param_2 + 0x10))(param_2,param_3,sVar7);
          pcStack_f0 = param_1 + 2;
          local_34 = 0;
          local_f8 = PTR_DAT_04bb2020 + 0x10;
          FUN_038d30c0(&local_34,&local_f8,10);
          iVar6 = local_34 - iVar6;
          if (iVar6 < 1) {
            return;
          }
          do {
            (**(code **)(*param_2 + 0x10))(param_2,&DAT_04064e67,1);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          return;
        }
        local_34 = 0;
        local_f8 = PTR_DAT_04bb2020 + 0x10;
        pcStack_f0 = param_1 + 1;
        FUN_038d30c0(&local_34,&local_f8,10);
        iVar6 = local_34 - iVar6;
        if (0 < iVar6) {
          do {
            (**(code **)(*param_2 + 0x10))(param_2,&DAT_04064e67,1);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (iVar5 == -1) {
          sVar7 = strlen(param_3);
          sVar7 = sVar7 & 0xffffffff;
        }
        lVar4 = *param_2;
      }
      else {
        local_55 = 0;
        local_d8 = 0x80;
        local_e0 = local_d4;
        local_d4[0] = '\0';
        local_e8 = PTR_DAT_04bb2d88 + 0x10;
        uVar3 = FUN_038d1270(&local_e8,param_1,param_3);
        sVar7 = uVar3 & 0xffffffff;
        (**(code **)(local_e8 + 0x18))(&local_e8);
        lVar4 = *param_2;
        param_3 = local_e0;
      }
      (**(code **)(lVar4 + 0x10))(param_2,param_3,sVar7);
      return;
    }
  }
  if (iVar5 == -1) {
    sVar7 = strlen(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x038cf520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_3,sVar7 & 0xffffffff);
  return;
}

