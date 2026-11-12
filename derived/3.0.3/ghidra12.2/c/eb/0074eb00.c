
long FUN_0074eb00(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined **local_e0;
  char *local_d8;
  int local_d0;
  char local_cc [127];
  undefined1 local_4d;
  int local_48;
  
  local_d0 = 0x80;
  local_4d = 0;
  local_e0 = &PTR_LAB_048fcff0;
  local_d8 = local_cc;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (local_cc != pcVar8) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0074ebbc;
      lVar7 = param_2[1] + lVar3;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0074ebbc;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0074ebbc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0074ebbc:
    iVar1 = (int)lVar3;
    if (local_d0 <= (int)lVar3) {
      iVar1 = local_d0 + -1;
    }
    memcpy(local_cc,pcVar8,(long)iVar1);
    local_cc[iVar1] = '\0';
  }
  local_e0 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = FUN_006bd550(param_2[1],0);
  if (*(long *)(param_1 + 0x280) != param_1 + 0x278) {
    lVar7 = (long)*(int *)(param_1 + 0x28c);
    lVar3 = *(long *)(param_1 + 0x280) - lVar7;
    do {
      if (*(int *)(lVar3 + 0x100) == local_48) {
        plVar6 = (long *)(lVar3 + 0x68);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pcVar8 = *(char **)(lVar3 + 0x70);
        (*(code *)local_e0[3])(&local_e0);
        if (pcVar8 == local_d8) {
LAB_0074ed1c:
          return lVar3 + 0x18;
        }
        cVar2 = **(char **)(lVar3 + 0x70);
        if (cVar2 == *local_d8) {
          if (cVar2 == '\0') goto LAB_0074ed1c;
          lVar5 = 0x7fffe;
          pcVar8 = local_d8;
          pcVar4 = *(char **)(lVar3 + 0x70);
          while( true ) {
            if (pcVar4[1] != pcVar8[1]) break;
            if (pcVar4[1] == '\0') goto LAB_0074ed1c;
            if (pcVar4[2] != pcVar8[2]) break;
            if (pcVar4[2] == '\0') goto LAB_0074ed1c;
            if ((lVar5 == 0) || (cVar2 = pcVar4[3], cVar2 != pcVar8[3])) break;
            lVar5 = lVar5 + -3;
            pcVar8 = pcVar8 + 3;
            pcVar4 = pcVar4 + 3;
            if (cVar2 == '\0') goto LAB_0074ed1c;
          }
        }
      }
      lVar3 = *(long *)(lVar3 + lVar7 + 8) - lVar7;
    } while (lVar3 != (param_1 + 0x278) - lVar7);
  }
  return 0;
}

