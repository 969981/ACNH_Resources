
long * FUN_03c5e080(long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined *local_68;
  char *local_60;
  int local_58;
  ushort local_54;
  char local_52;
  
  local_52 = '\0';
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_68,param_3,0xffffffff,0);
  if (*(long *)(param_1 + 8) != param_1) {
    lVar8 = (long)*(int *)(param_1 + 0x14);
    plVar6 = (long *)(*(long *)(param_1 + 8) - lVar8);
    do {
      puVar2 = (undefined8 *)(**(code **)(*plVar6 + 8))(plVar6);
      uVar3 = (**(code **)*puVar2)(puVar2,param_2);
      if (((uVar3 & 1) != 0) && ((int)plVar6[5] == local_58)) {
        uVar1 = *(ushort *)((long)plVar6 + 0x2c);
        uVar3 = (ulong)uVar1;
        if (uVar1 == local_54) {
          (**(code **)(plVar6[3] + 0x18))(plVar6 + 3);
          (**(code **)(plVar6[3] + 0x18))(plVar6 + 3);
          pcVar7 = (char *)plVar6[4];
          (**(code **)(local_68 + 0x18))(&local_68);
          if ((uVar1 == 0) || (pcVar7 == local_60)) goto LAB_03c5e1d8;
          pcVar7 = local_60;
          pcVar5 = (char *)plVar6[4];
          while( true ) {
            uVar3 = uVar3 - 1;
            if (*pcVar5 != *pcVar7) break;
            if ((*pcVar5 == '\0') || (pcVar7 = pcVar7 + 1, pcVar5 = pcVar5 + 1, uVar3 == 0))
            goto LAB_03c5e1d8;
          }
        }
      }
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
    } while (plVar6 != (long *)(param_1 - lVar8));
  }
  plVar6 = (long *)0x0;
LAB_03c5e1d8:
  if ((local_52 != '\0') &&
     ((**(code **)(local_68 + 0x18))(&local_68), pcVar7 = local_60, local_60 != (char *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_60);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_60);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pcVar7);
      }
    }
  }
  return plVar6;
}

