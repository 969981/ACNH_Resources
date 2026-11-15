
undefined8 FUN_02123780(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_d0;
  char *local_c8;
  undefined4 local_c0;
  char local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  char *local_90;
  undefined4 local_88;
  char local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  local_84[0] = '\0';
  local_90 = local_84;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_98 = puVar1;
  FUN_021d7aa0(&local_98);
  iVar4 = FUN_021d5df0(&local_98);
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar7 = *(long **)(param_1 + 0x1f0);
    plVar2 = plVar7 + *(int *)(param_1 + 0x1e8);
    do {
      lVar8 = *plVar7;
      local_c0 = 0x20;
      local_9d = 0;
      local_bc[0] = '\0';
      local_d0 = puVar1;
      local_c8 = local_bc;
      FUN_021d7aa0(&local_d0,lVar8 + 0xf8);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar5 = local_c8;
      (**(code **)(local_98 + 0x18))(&local_98);
      if (pcVar5 == local_90) {
LAB_021238e0:
        if ((iVar4 != 2) || (*(int *)(lVar8 + 0xf0) == param_3)) {
          return 1;
        }
      }
      else if (*local_c8 == *local_90) {
        if (*local_c8 != '\0') {
          lVar6 = 0x7fffe;
          pcVar5 = local_90;
          do {
            if (local_c8[1] != pcVar5[1]) goto LAB_02123800;
            if (local_c8[1] == '\0') break;
            if (local_c8[2] != pcVar5[2]) goto LAB_02123800;
            if (local_c8[2] == '\0') break;
            if ((lVar6 == 0) || (cVar3 = local_c8[3], cVar3 != pcVar5[3])) goto LAB_02123800;
            lVar6 = lVar6 + -3;
            pcVar5 = pcVar5 + 3;
            local_c8 = local_c8 + 3;
          } while (cVar3 != '\0');
        }
        goto LAB_021238e0;
      }
LAB_02123800:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  return 0;
}

