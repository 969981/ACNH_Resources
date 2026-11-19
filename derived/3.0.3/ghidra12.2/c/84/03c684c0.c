
void FUN_03c684c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined *local_78;
  char *local_70;
  int local_68;
  ushort local_64;
  char local_62;
  
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0) {
    return;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  local_62 = '\0';
  local_78 = PTR_DAT_04bb2020 + 0x10;
  lVar8 = lVar14 + 0x1e0;
  local_70 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_78,param_2,0xffffffff,0);
  if (*(long *)(lVar14 + 0x1e8) == lVar8) {
    pvVar9 = (void *)0x0;
  }
  else {
    lVar13 = (long)*(int *)(lVar14 + 500);
    pvVar9 = (void *)(*(long *)(lVar14 + 0x1e8) - lVar13);
    do {
      if (*(int *)((long)pvVar9 + 0x20) == local_68) {
        uVar2 = *(ushort *)((long)pvVar9 + 0x24);
        uVar10 = (ulong)uVar2;
        if (uVar2 == local_64) {
          (**(code **)(*(long *)((long)pvVar9 + 0x10) + 0x18))((long)pvVar9 + 0x10);
          (**(code **)(*(long *)((long)pvVar9 + 0x10) + 0x18))((long)pvVar9 + 0x10);
          pcVar12 = *(char **)((long)pvVar9 + 0x18);
          (**(code **)(local_78 + 0x18))(&local_78);
          if ((uVar2 == 0) || (pcVar12 == local_70)) goto LAB_03c68618;
          pcVar12 = local_70;
          pcVar7 = *(char **)((long)pvVar9 + 0x18);
          while( true ) {
            uVar10 = uVar10 - 1;
            if (*pcVar7 != *pcVar12) break;
            if (*pcVar7 == '\0') goto LAB_03c68618;
            pcVar12 = pcVar12 + 1;
            pcVar7 = pcVar7 + 1;
            if (uVar10 == 0) goto LAB_03c68618;
          }
        }
      }
      pvVar9 = (void *)(*(long *)((long)pvVar9 + lVar13 + 8) - lVar13);
    } while (pvVar9 != (void *)(lVar8 - lVar13));
    pvVar9 = (void *)0x0;
  }
LAB_03c68618:
  puVar3 = PTR_DAT_04bb2698;
  if (local_62 != '\0') {
    (**(code **)(local_78 + 0x18))(&local_78);
    pcVar12 = local_70;
    if (local_70 != (char *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(local_70);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar3,local_70);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pcVar12);
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bb3350;
  if (pvVar9 == (void *)0x0) {
    lVar13 = *(long *)puVar3;
    if (lVar13 == 0) {
      pvVar9 = malloc(0x80);
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar13 + 8);
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x80,8);
      }
    }
    lVar11 = *(long *)puVar3;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar1 = (undefined8 *)(lVar11 + 8);
    if (lVar13 != 0) {
      puVar1 = (undefined8 *)(lVar13 + 0xa8);
    }
    FUN_03ca094c(pvVar9,*puVar1,param_2,
                 *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) + 0x21c),param_4);
    plVar6 = (long *)((long)*(int *)(lVar14 + 500) + (long)pvVar9);
    lVar13 = *(long *)(lVar14 + 0x1e0);
    *(long **)(lVar14 + 0x1e0) = plVar6;
    *plVar6 = lVar13;
    plVar6[1] = lVar8;
    if (lVar13 != 0) {
      *(long **)(lVar13 + 8) = plVar6;
    }
    *(int *)(lVar14 + 0x1f0) = *(int *)(lVar14 + 0x1f0) + 1;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) goto LAB_03c68790;
  }
  else {
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_03c68790:
      plVar6 = malloc(0x80);
      goto LAB_03c6879c;
    }
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  plVar6 = (long *)(lVar8 + 8);
  if (lVar14 != 0) {
    plVar6 = (long *)(lVar14 + 0xa8);
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x80,8);
  }
LAB_03c6879c:
  puVar4 = PTR_DAT_04bb2120;
  puVar3 = PTR_DAT_04bb2020;
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(plVar6 + 2) = 0;
  puVar5 = PTR_DAT_04bd4510;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = (long)pvVar9;
  plVar6[7] = (long)puVar4;
  *(undefined1 *)((long)plVar6 + 0x46) = 0;
  plVar6[6] = (long)(puVar3 + 0x10);
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[1] = lVar8;
  FUN_03c5a110(plVar6 + 6,param_3,0xffffffff,0);
  plVar6[0xb] = (long)(plVar6 + 10);
  plVar6[0xc] = 0x800000000;
  plVar6[9] = 0;
  plVar6[10] = (long)(plVar6 + 10);
  plVar6[0xd] = (long)(plVar6 + 0xd);
  plVar6[0xe] = (long)(plVar6 + 0xd);
  plVar6[0xf] = 0x800000000;
  lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  lVar8 = *(long *)(lVar14 + 0x40);
  if (*(long *)(lVar8 + 0x58) != lVar8 + 0x50) {
    lVar11 = (long)*(int *)(lVar8 + 100);
    lVar13 = *(long *)(lVar8 + 0x58) - lVar11;
    do {
      uVar10 = (**(code **)(**(long **)(lVar13 + 0x10) + 0x88))(*(long **)(lVar13 + 0x10),lVar14);
      if ((uVar10 & 1) != 0) {
        lVar13 = lVar13 + 0x20;
        goto LAB_03c68878;
      }
      lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
    } while (lVar13 != (lVar8 + 0x50) - lVar11);
  }
  lVar13 = 0;
LAB_03c68878:
  FUN_03ca111c(pvVar9,plVar6,lVar13,*(undefined8 *)(param_1 + 0x30));
  *(long **)(*(long *)(param_1 + 0x18) + 0x58) = plVar6;
  return;
}

