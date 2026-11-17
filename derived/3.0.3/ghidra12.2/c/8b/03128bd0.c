
void FUN_03128bd0(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bc4e68;
  pcVar5 = (char *)param_2[1];
  if (pcVar5 == "PlantBushSeedling") {
LAB_03128c70:
    lVar3 = *(long *)(param_1 + 0x220);
    if (lVar3 != 0) {
      plVar6 = *(long **)(lVar3 + 600);
      if (plVar6 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 7;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x1c0))(plVar6[1]);
        lVar3 = *(long *)(param_1 + 0x220);
      }
      plVar6 = *(long **)(lVar3 + 0x298);
      if (plVar6 != (long *)0x0) {
        local_40 = puVar1 + 0x10;
        local_38 = 6;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x1b8))(plVar6[1]);
      }
    }
  }
  else {
    if (*pcVar5 == 'P') {
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if ((uVar4 == 0x80000) || (pcVar5[uVar4 + 1] != "PlantBushSeedling"[uVar4 + 1]))
        goto LAB_03128d00;
        uVar2 = uVar4 + 1;
      } while (pcVar5[uVar4 + 1] != '\0');
      if (uVar4 >> 0x13 == 0) goto LAB_03128c70;
    }
LAB_03128d00:
    if ((*(long *)(param_1 + 0x210) != 0) &&
       (plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 600), plVar6 != (long *)0x0)) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x158))((float)param_3,plVar6[1]);
    }
  }
  return;
}

