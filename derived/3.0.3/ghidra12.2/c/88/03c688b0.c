
void * FUN_03c688b0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_68;
  char *local_60;
  int local_58;
  ushort local_54;
  char local_52;
  
  lVar6 = *(long *)(param_1 + 0x18);
  local_52 = '\0';
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_68,param_2,0xffffffff,0);
  if (*(long *)(lVar6 + 0xf8) != lVar6 + 0xf0) {
    lVar9 = (long)*(int *)(lVar6 + 0x104);
    pvVar7 = (void *)(*(long *)(lVar6 + 0xf8) - lVar9);
    do {
      if (*(int *)((long)pvVar7 + 0x40) == local_58) {
        uVar2 = *(ushort *)((long)pvVar7 + 0x44);
        uVar10 = (ulong)uVar2;
        if (uVar2 == local_54) {
          (**(code **)(*(long *)((long)pvVar7 + 0x30) + 0x18))((long)pvVar7 + 0x30);
          (**(code **)(*(long *)((long)pvVar7 + 0x30) + 0x18))((long)pvVar7 + 0x30);
          pcVar8 = *(char **)((long)pvVar7 + 0x38);
          (**(code **)(local_68 + 0x18))(&local_68);
          if ((uVar2 == 0) || (pcVar8 == local_60)) goto LAB_03c689dc;
          pcVar8 = local_60;
          pcVar4 = *(char **)((long)pvVar7 + 0x38);
          while( true ) {
            uVar10 = uVar10 - 1;
            if (*pcVar4 != *pcVar8) break;
            if ((*pcVar4 == '\0') || (pcVar8 = pcVar8 + 1, pcVar4 = pcVar4 + 1, uVar10 == 0))
            goto LAB_03c689dc;
          }
        }
      }
      pvVar7 = (void *)(*(long *)((long)pvVar7 + lVar9 + 8) - lVar9);
    } while (pvVar7 != (void *)((lVar6 + 0xf0) - lVar9));
  }
  pvVar7 = (void *)0x0;
LAB_03c689dc:
  if ((local_52 != '\0') &&
     ((**(code **)(local_68 + 0x18))(&local_68), pcVar8 = local_60, local_60 != (char *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_60);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_60);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pcVar8);
      }
    }
  }
  if (pvVar7 == (void *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      pvVar7 = malloc(0x48);
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar9 != 0) {
        puVar1 = (undefined8 *)(lVar9 + 0xa8);
      }
      pvVar7 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x48,8);
    }
    FUN_03c7f584(pvVar7,*(undefined8 *)(param_1 + 0x18),param_2);
    lVar6 = *(long *)(param_1 + 0x18);
    plVar5 = (long *)(lVar6 + 0xf0);
    lVar9 = *plVar5;
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x104) + (long)pvVar7);
    *plVar5 = (long)plVar3;
    *plVar3 = lVar9;
    plVar3[1] = (long)plVar5;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar3;
    }
    *(int *)(lVar6 + 0x100) = *(int *)(lVar6 + 0x100) + 1;
  }
  return pvVar7;
}

