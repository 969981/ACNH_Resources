
long FUN_038b56b0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined *local_78;
  char *local_70;
  undefined4 local_68;
  char local_64 [31];
  undefined1 local_45;
  
  local_45 = 0;
  local_68 = 0x20;
  local_64[0] = '\0';
  local_70 = local_64;
  local_78 = PTR_DAT_04bb2028 + 0x10;
  uVar2 = FUN_038b6680(&local_78);
  if ((uVar2 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
LAB_038b5800:
      if (param_3 != 0) {
        FUN_038b6870(param_3,param_2);
      }
    }
  }
  else {
    for (lVar7 = *(long *)(param_1 + 8); lVar7 != param_1; lVar7 = *(long *)(lVar7 + 8)) {
      lVar8 = *(long *)(lVar7 + 0x10);
      plVar5 = (long *)(lVar8 + 0x40);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      pcVar6 = *(char **)(lVar8 + 0x48);
      (**(code **)(local_78 + 0x18))(&local_78);
      if (pcVar6 == local_70) {
LAB_038b57ec:
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 0;
        }
        goto LAB_038b5800;
      }
      cVar1 = **(char **)(lVar8 + 0x48);
      if (cVar1 == *local_70) {
        if (cVar1 == '\0') goto LAB_038b57ec;
        lVar4 = 0x7fffe;
        pcVar6 = local_70;
        pcVar3 = *(char **)(lVar8 + 0x48);
        while( true ) {
          if (pcVar3[1] != pcVar6[1]) break;
          if (pcVar3[1] == '\0') goto LAB_038b57ec;
          if (pcVar3[2] != pcVar6[2]) break;
          if (pcVar3[2] == '\0') goto LAB_038b57ec;
          if ((lVar4 == 0) || (cVar1 = pcVar3[3], cVar1 != pcVar6[3])) break;
          lVar4 = lVar4 + -3;
          pcVar6 = pcVar6 + 3;
          pcVar3 = pcVar3 + 3;
          if (cVar1 == '\0') goto LAB_038b57ec;
        }
      }
    }
    lVar7 = 0;
  }
  return lVar7;
}

