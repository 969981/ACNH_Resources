
void * FUN_03c68b00(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_68;
  char *local_60;
  int local_58;
  ushort local_54;
  char local_52;
  
  lVar5 = *(long *)(param_1 + 0x18);
  local_52 = '\0';
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_68,param_2,0xffffffff,0);
  if (*(long *)(lVar5 + 0x128) != lVar5 + 0x120) {
    lVar8 = (long)*(int *)(lVar5 + 0x134);
    pvVar6 = (void *)(*(long *)(lVar5 + 0x128) - lVar8);
    do {
      if (*(int *)((long)pvVar6 + 0x60) == local_58) {
        uVar2 = *(ushort *)((long)pvVar6 + 100);
        uVar9 = (ulong)uVar2;
        if (uVar2 == local_54) {
          (**(code **)(*(long *)((long)pvVar6 + 0x50) + 0x18))((long)pvVar6 + 0x50);
          (**(code **)(*(long *)((long)pvVar6 + 0x50) + 0x18))((long)pvVar6 + 0x50);
          pcVar7 = *(char **)((long)pvVar6 + 0x58);
          (**(code **)(local_68 + 0x18))(&local_68);
          if ((uVar2 == 0) || (pcVar7 == local_60)) goto LAB_03c68c2c;
          pcVar7 = local_60;
          pcVar4 = *(char **)((long)pvVar6 + 0x58);
          while( true ) {
            uVar9 = uVar9 - 1;
            if (*pcVar4 != *pcVar7) break;
            if ((*pcVar4 == '\0') || (pcVar7 = pcVar7 + 1, pcVar4 = pcVar4 + 1, uVar9 == 0))
            goto LAB_03c68c2c;
          }
        }
      }
      pvVar6 = (void *)(*(long *)((long)pvVar6 + lVar8 + 8) - lVar8);
    } while (pvVar6 != (void *)((lVar5 + 0x120) - lVar8));
  }
  pvVar6 = (void *)0x0;
LAB_03c68c2c:
  if ((local_52 != '\0') &&
     ((**(code **)(local_68 + 0x18))(&local_68), pcVar7 = local_60, local_60 != (char *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_60);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_60);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pcVar7);
      }
    }
  }
  if (pvVar6 == (void *)0x0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      pvVar6 = malloc(0x68);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar5 + 8);
      if (lVar8 != 0) {
        puVar1 = (undefined8 *)(lVar8 + 0xa8);
      }
      pvVar6 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x68,8);
    }
    FUN_03c7f810(pvVar6,*(undefined8 *)(param_1 + 0x18),param_2);
    lVar5 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(lVar5 + 0x120);
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x134) + (long)pvVar6);
    *(long **)(lVar5 + 0x120) = plVar3;
    *plVar3 = lVar8;
    plVar3[1] = lVar5 + 0x120;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar3;
    }
    *(int *)(lVar5 + 0x130) = *(int *)(lVar5 + 0x130) + 1;
  }
  return pvVar6;
}

