
void FUN_038d9cc0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined *local_78;
  char *local_70;
  undefined4 local_68;
  char local_64 [31];
  undefined1 local_45;
  
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 == (long *)0x0) {
    local_45 = 0;
    local_68 = 0x20;
    local_70 = local_64;
    local_64[0] = '\0';
    local_78 = PTR_DAT_04bb2028 + 0x10;
    uVar3 = FUN_038b6c10(&local_78,param_2);
    if ((uVar3 & 1) != 0) {
      for (lVar7 = *(long *)(param_1 + 8); lVar7 != param_1; lVar7 = *(long *)(lVar7 + 8)) {
        lVar8 = *(long *)(lVar7 + 0x10);
        plVar2 = (long *)(lVar8 + 0x40);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        pcVar6 = *(char **)(lVar8 + 0x48);
        (**(code **)(local_78 + 0x18))(&local_78);
        if (pcVar6 == local_70) {
LAB_038d9dfc:
          plVar2 = (long *)(lVar7 + 0x10);
          goto LAB_038d9e08;
        }
        cVar1 = **(char **)(lVar8 + 0x48);
        if (cVar1 == *local_70) {
          if (cVar1 == '\0') goto LAB_038d9dfc;
          lVar5 = 0x7fffe;
          pcVar6 = local_70;
          pcVar4 = *(char **)(lVar8 + 0x48);
          while( true ) {
            if (pcVar4[1] != pcVar6[1]) break;
            if (pcVar4[1] == '\0') goto LAB_038d9dfc;
            if (pcVar4[2] != pcVar6[2]) break;
            if (pcVar4[2] == '\0') goto LAB_038d9dfc;
            if ((lVar5 == 0) || (cVar1 = pcVar4[3], cVar1 != pcVar6[3])) break;
            lVar5 = lVar5 + -3;
            pcVar6 = pcVar6 + 3;
            pcVar4 = pcVar4 + 3;
            if (cVar1 == '\0') goto LAB_038d9dfc;
          }
        }
      }
    }
    plVar2 = (long *)(param_1 + 0x38);
LAB_038d9e08:
    plVar2 = (long *)*plVar2;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  return;
}

