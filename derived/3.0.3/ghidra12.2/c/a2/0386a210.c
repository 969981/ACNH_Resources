
long FUN_0386a210(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_58;
  char *local_50;
  int local_48;
  ushort local_44;
  char local_42;
  
  local_42 = '\0';
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_58,param_2,0xffffffff,0);
  if (*(long *)(param_1 + 8) != param_1) {
    lVar6 = (long)*(int *)(param_1 + 0x14);
    lVar4 = *(long *)(param_1 + 8) - lVar6;
    do {
      if (*(int *)(lVar4 + 0xb0) == local_48) {
        uVar1 = *(ushort *)(lVar4 + 0xb4);
        uVar7 = (ulong)uVar1;
        if (uVar1 == local_44) {
          (**(code **)(*(long *)(lVar4 + 0xa0) + 0x18))(lVar4 + 0xa0);
          (**(code **)(*(long *)(lVar4 + 0xa0) + 0x18))(lVar4 + 0xa0);
          pcVar5 = *(char **)(lVar4 + 0xa8);
          (**(code **)(local_58 + 0x18))(&local_58);
          if ((uVar1 == 0) || (pcVar5 == local_50)) goto LAB_0386a32c;
          pcVar5 = local_50;
          pcVar3 = *(char **)(lVar4 + 0xa8);
          while( true ) {
            uVar7 = uVar7 - 1;
            if (*pcVar3 != *pcVar5) break;
            if ((*pcVar3 == '\0') || (pcVar5 = pcVar5 + 1, pcVar3 = pcVar3 + 1, uVar7 == 0))
            goto LAB_0386a32c;
          }
        }
      }
      lVar4 = *(long *)(lVar4 + lVar6 + 8) - lVar6;
    } while (lVar4 != param_1 - lVar6);
  }
  lVar4 = 0;
LAB_0386a32c:
  if ((local_42 != '\0') &&
     ((**(code **)(local_58 + 0x18))(&local_58), pcVar5 = local_50, local_50 != (char *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_50);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_50);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pcVar5);
      }
    }
  }
  return lVar4;
}

