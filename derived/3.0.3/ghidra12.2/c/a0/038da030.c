
undefined8 FUN_038da030(long param_1,long param_2,undefined ***param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **local_98;
  char *local_90;
  undefined4 local_88;
  char local_84 [31];
  undefined1 local_65;
  undefined *local_60;
  undefined **local_58;
  
  local_65 = 0;
  local_84[0] = '\0';
  local_88 = 0x20;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_98 = &PTR_LAB_048f9700;
  local_90 = local_84;
  if (param_4 == 0) {
    uVar4 = FUN_038b6c10(&local_98,param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    for (lVar10 = *(long *)(param_1 + 0x20); lVar10 != param_1 + 0x18;
        lVar10 = *(long *)(lVar10 + 8)) {
      lVar11 = *(long *)(lVar10 + 0x10);
      plVar3 = (long *)(lVar11 + 0x40);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      pcVar8 = *(char **)(lVar11 + 0x48);
      (*(code *)local_98[3])(&local_98);
      if (pcVar8 == local_90) {
LAB_038da26c:
        param_4 = *(long *)(lVar10 + 0x10);
        if (param_4 != 0) goto LAB_038da098;
        break;
      }
      cVar1 = **(char **)(lVar11 + 0x48);
      if (cVar1 == *local_90) {
        if (cVar1 == '\0') goto LAB_038da26c;
        lVar7 = 0x7fffe;
        pcVar8 = local_90;
        pcVar6 = *(char **)(lVar11 + 0x48);
        while( true ) {
          if (pcVar6[1] != pcVar8[1]) break;
          if (pcVar6[1] == '\0') goto LAB_038da26c;
          if (pcVar6[2] != pcVar8[2]) break;
          if (pcVar6[2] == '\0') goto LAB_038da26c;
          if ((lVar7 == 0) || (cVar1 = pcVar6[3], cVar1 != pcVar8[3])) break;
          lVar7 = lVar7 + -3;
          pcVar8 = pcVar8 + 3;
          pcVar6 = pcVar6 + 3;
          if (cVar1 == '\0') goto LAB_038da26c;
        }
      }
    }
    bVar2 = false;
    param_4 = 0;
    param_3 = &local_98;
  }
  else {
LAB_038da098:
    bVar2 = true;
  }
  local_58 = param_3[1];
  plVar3 = *(long **)(param_2 + 0x38);
  if (plVar3 == (long *)0x0) {
    for (lVar10 = *(long *)(param_1 + 8); lVar10 != param_1; lVar10 = *(long *)(lVar10 + 8)) {
      lVar11 = *(long *)(lVar10 + 0x10);
      plVar3 = (long *)(lVar11 + 0x40);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      ppuVar9 = *(undefined ***)(lVar11 + 0x48);
      (**(code **)(local_60 + 0x18))(&local_60);
      if (ppuVar9 == local_58) {
LAB_038da17c:
        plVar3 = (long *)(lVar10 + 0x10);
        goto LAB_038da290;
      }
      cVar1 = **(char **)(lVar11 + 0x48);
      if (cVar1 == *(char *)local_58) {
        if (cVar1 == '\0') goto LAB_038da17c;
        lVar7 = 0x7fffe;
        ppuVar9 = local_58;
        pcVar8 = *(char **)(lVar11 + 0x48);
        while( true ) {
          if (pcVar8[1] != *(char *)((long)ppuVar9 + 1)) break;
          if (pcVar8[1] == '\0') goto LAB_038da17c;
          if (pcVar8[2] != *(char *)((long)ppuVar9 + 2)) break;
          if (pcVar8[2] == '\0') goto LAB_038da17c;
          if ((lVar7 == 0) || (cVar1 = pcVar8[3], cVar1 != *(char *)((long)ppuVar9 + 3))) break;
          lVar7 = lVar7 + -3;
          ppuVar9 = (undefined **)((long)ppuVar9 + 3);
          pcVar8 = pcVar8 + 3;
          if (cVar1 == '\0') goto LAB_038da17c;
        }
      }
    }
    plVar3 = (long *)(param_1 + 0x38);
LAB_038da290:
    plVar3 = (long *)*plVar3;
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(bool *)*(long *)(param_2 + 0x50) = bVar2;
  }
  if (bVar2) {
    uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_4);
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  }
  return uVar5;
}

