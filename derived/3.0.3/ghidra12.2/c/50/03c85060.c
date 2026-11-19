
void FUN_03c85060(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_78;
  char *local_70;
  int local_68;
  ushort local_64;
  char local_62;
  
  local_62 = '\0';
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_78,param_2,0xffffffff,0);
  lVar1 = param_1 + 0x160;
  if (*(long *)(param_1 + 0x168) != lVar1) {
    lVar11 = (long)*(int *)(param_1 + 0x174);
    lVar9 = *(long *)(param_1 + 0x168) - lVar11;
    do {
      if ((*(long *)(lVar9 + 0x28) == param_3) && (*(int *)(lVar9 + 0x20) == local_68)) {
        uVar2 = *(ushort *)(lVar9 + 0x24);
        uVar10 = (ulong)uVar2;
        if (uVar2 == local_64) {
          (**(code **)(*(long *)(lVar9 + 0x10) + 0x18))(lVar9 + 0x10);
          (**(code **)(*(long *)(lVar9 + 0x10) + 0x18))(lVar9 + 0x10);
          pcVar8 = *(char **)(lVar9 + 0x18);
          (**(code **)(local_78 + 0x18))(&local_78);
          if ((uVar2 == 0) || (pcVar8 == local_70)) goto LAB_03c85260;
          pcVar8 = local_70;
          pcVar7 = *(char **)(lVar9 + 0x18);
          while( true ) {
            uVar10 = uVar10 - 1;
            if (*pcVar7 != *pcVar8) break;
            if (*pcVar7 == '\0') goto LAB_03c85260;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
            if (uVar10 == 0) goto LAB_03c85260;
          }
        }
      }
      lVar9 = *(long *)(lVar9 + lVar11 + 8) - lVar11;
    } while (lVar9 != lVar1 - lVar11);
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar11 != 0) {
      plVar6 = (long *)(lVar11 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x30,8);
    }
  }
  puVar4 = PTR_DAT_04bb2120;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined1 *)((long)puVar5 + 0x26) = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[3] = puVar4;
  puVar5[2] = puVar3 + 0x10;
  FUN_03c5a110(puVar5 + 2,param_2,0xffffffff,2);
  puVar5[5] = param_3;
  lVar9 = *(long *)(param_1 + 0x160);
  plVar6 = (long *)((long)*(int *)(param_1 + 0x174) + (long)puVar5);
  *(long **)(param_1 + 0x160) = plVar6;
  *plVar6 = lVar9;
  plVar6[1] = lVar1;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar6;
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
LAB_03c85260:
  if (local_62 != '\0') {
    (**(code **)(local_78 + 0x18))(&local_78);
    pcVar8 = local_70;
    if (local_70 != (char *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_70);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_70);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pcVar8);
        }
      }
    }
  }
  return;
}

