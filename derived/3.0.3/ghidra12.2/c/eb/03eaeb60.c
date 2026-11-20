
char * FUN_03eaeb60(long param_1,char *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  
  plVar1 = (long *)(param_1 + 8);
  plVar11 = *(long **)(param_1 + 0x10);
  do {
    plVar8 = plVar11;
    if (plVar8 == plVar1) {
      sVar5 = strlen(param_2);
      puVar2 = PTR_DAT_04bb2698;
      sVar5 = sVar5 + 1;
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        pcVar9 = malloc(sVar5);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar10 + 8);
        if (lVar6 != 0) {
          plVar11 = (long *)(lVar6 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar5,8);
        }
      }
      strncpy(pcVar9,param_2,sVar5);
      lVar10 = *(long *)puVar2;
      if (lVar10 == 0) {
        plVar11 = malloc(0x20);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar10 + 8);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        plVar11 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          plVar11 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
        }
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar11[2] = (long)pcVar9;
      plVar11[3] = (long)plVar1;
      lVar10 = *plVar1;
      *plVar1 = (long)plVar11;
      *plVar11 = lVar10;
      plVar11[1] = (long)plVar1;
      goto joined_r0x03eaed90;
    }
    plVar11 = (long *)plVar8[1];
    pcVar9 = (char *)plVar8[2];
    iVar4 = strcmp(param_2,pcVar9);
    if (iVar4 == 0) {
      return pcVar9;
    }
  } while (-1 < iVar4);
  sVar5 = strlen(param_2);
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  sVar5 = sVar5 + 1;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pcVar9 = malloc(sVar5);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar11 = (long *)(lVar6 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar5,8);
    }
  }
  strncpy(pcVar9,param_2,sVar5);
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    plVar11 = malloc(0x20);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    plVar11 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
  }
  *plVar11 = 0;
  plVar11[1] = 0;
  plVar11[2] = (long)pcVar9;
  plVar11[3] = (long)plVar1;
  lVar10 = *plVar8;
  *plVar8 = (long)plVar11;
  *plVar11 = lVar10;
  plVar11[1] = (long)plVar8;
joined_r0x03eaed90:
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar11;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return pcVar9;
}

