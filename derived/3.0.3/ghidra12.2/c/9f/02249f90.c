
void FUN_02249f90(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  
  lVar14 = param_1[0xc];
  if (lVar14 == 0) {
    return;
  }
  pvVar12 = *(void **)(lVar14 + 0x280);
  (**(code **)(param_1[0x4f] + 0x18))(param_1 + 0x4f);
  pvVar13 = (void *)param_1[0x50];
  if (pvVar12 != pvVar13) {
    (**(code **)(param_1[0x4f] + 0x18))(param_1 + 0x4f);
    lVar9 = 0;
    do {
      if (*(char *)(param_1[0x50] + lVar9) == '\0') goto LAB_0224a03c;
      lVar1 = param_1[0x50] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0224a03c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0224a03c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0224a03c:
    iVar2 = (int)lVar9;
    if (*(int *)(lVar14 + 0x288) <= (int)lVar9) {
      iVar2 = *(int *)(lVar14 + 0x288) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar2);
    *(undefined1 *)((long)pvVar12 + (long)iVar2) = 0;
  }
  *(undefined4 *)(lVar14 + 0x10d8) = 0;
  if (*(char *)param_1[0x5b] == '\0') {
LAB_0224a0f0:
    if (*(char *)((long)param_1 + 0x402) == '\0') {
      return;
    }
  }
  else {
    plVar7 = param_1 + 0x5a;
    (**(code **)(param_1[0x5a] + 0x18))(plVar7);
    (**(code **)(param_1[0x5a] + 0x18))(plVar7);
    pcVar11 = (char *)param_1[0x5b];
    if (pcVar11 == "None") goto LAB_0224a0f0;
    if (*pcVar11 == 'N') {
      uVar8 = 0;
      do {
        uVar10 = uVar8;
        if ((uVar10 == 0x80000) || (pcVar11[uVar10 + 1] != (&DAT_040cd540)[uVar10]))
        goto LAB_0224a154;
        uVar8 = uVar10 + 1;
      } while (pcVar11[uVar10 + 1] != '\0');
      if (uVar10 < 0x80000) goto LAB_0224a0f0;
    }
LAB_0224a154:
    lVar14 = param_1[0xc];
    pvVar12 = *(void **)(lVar14 + 0x1028);
    (**(code **)(param_1[0x5a] + 0x18))(plVar7);
    pvVar13 = (void *)param_1[0x5b];
    if (pvVar12 != pvVar13) {
      (**(code **)(param_1[0x5a] + 0x18))(plVar7);
      lVar9 = 0;
      do {
        if (*(char *)(param_1[0x5b] + lVar9) == '\0') goto LAB_0224a28c;
        lVar1 = param_1[0x5b] + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0224a28c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0224a28c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0224a28c:
      iVar4 = *(int *)(lVar14 + 0x1030);
      iVar2 = (int)lVar9;
      if (iVar4 <= (int)lVar9) {
        iVar2 = iVar4 + -1;
      }
      memcpy(pvVar12,pvVar13,(long)iVar2);
      *(undefined1 *)((long)pvVar12 + (long)iVar2) = 0;
    }
    uVar8 = (**(code **)(*param_1 + 0x108))(param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar7 = malloc(0x2d8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar14 + 8);
      if (lVar9 != 0) {
        puVar3 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      plVar7 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_0224a1dc;
    }
    plVar7 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x2d8,8);
  }
LAB_0224a1dc:
  FUN_00705c50(plVar7);
  puVar5 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar7 + 0x55) = 0;
  puVar6 = PTR_DAT_04bdf1d8;
  pcVar11 = (char *)plVar7[0xc];
  plVar7[0x56] = 0;
  plVar7[0x58] = 0;
  plVar7[0x59] = 0;
  plVar7[0x5a] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[0x57] = (long)(puVar6 + 0x10);
  if (pcVar11 != "XLink") {
    iVar2 = 5;
    if ((int)plVar7[0xd] < 6) {
      iVar2 = (int)plVar7[0xd] + -1;
    }
    memcpy(pcVar11,"XLink",(long)iVar2);
    pcVar11[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  return;
}

