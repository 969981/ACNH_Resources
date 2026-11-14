
int FUN_01ad5de0(long *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  char *pcVar7;
  undefined *local_68;
  char *local_60;
  int local_58;
  
  if (DAT_0532a838 != 0) {
    local_60 = (char *)param_1[1];
    local_68 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(*param_1 + 0x18))();
    local_58 = FUN_006bd550(param_1[1],0);
    lVar2 = DAT_0532a838;
    iVar6 = 0;
    do {
      if (*(int *)(lVar2 + (long)iVar6 * 0x18 + 0x10) == local_58) {
        plVar5 = (long *)(lVar2 + (long)iVar6 * 0x18);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        pcVar7 = (char *)plVar5[1];
        (**(code **)(local_68 + 0x18))(&local_68);
        if (pcVar7 == local_60) {
          return iVar6;
        }
        cVar1 = *(char *)plVar5[1];
        if (cVar1 == *local_60) {
          if (cVar1 == '\0') {
            return iVar6;
          }
          lVar4 = 0x7fffe;
          pcVar7 = local_60;
          pcVar3 = (char *)plVar5[1];
          while( true ) {
            if (pcVar3[1] != pcVar7[1]) break;
            if (pcVar3[1] == '\0') {
              return iVar6;
            }
            if (pcVar3[2] != pcVar7[2]) break;
            if (pcVar3[2] == '\0') {
              return iVar6;
            }
            if ((lVar4 == 0) || (cVar1 = pcVar3[3], cVar1 != pcVar7[3])) break;
            lVar4 = lVar4 + -3;
            pcVar7 = pcVar7 + 3;
            pcVar3 = pcVar3 + 3;
            if (cVar1 == '\0') {
              return iVar6;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 15000);
  }
  return 0xfffe;
}

