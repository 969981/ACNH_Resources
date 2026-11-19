
void FUN_03c22fc0(long param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined **local_598;
  char *local_590;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x88);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x88,8);
  }
  FUN_03908644();
  *(void **)(param_1 + 0x110) = pvVar7;
  FUN_03c235d0(param_1,param_2,1);
  local_6d = 0;
  local_170 = 0x100;
  puStack_178 = local_16c;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  FUN_038d1270(&local_180,"System/lp_resource%s.szs",".Nin_NX_NVN");
  plVar6 = (long *)FUN_03eba090(&local_180,param_2,0x1000,0,1,0);
  FUN_006e9454(&local_598,"%s.%s","lp_resource",&DAT_040bd1ec);
  lVar10 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_598,0);
  if (lVar10 != 0) {
    FUN_03908960(*(undefined8 *)(param_1 + 0x110),lVar10,0,4,param_2);
  }
  lVar10 = *(long *)(param_1 + 0x110);
  iVar2 = *(int *)(lVar10 + 0x30);
  local_598 = &PTR_LAB_048f9770;
  local_590 = s_kcol_drawer_04b7e3a0;
  if (iVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x38);
    uVar11 = 0;
    iVar12 = 0;
    do {
      plVar6 = *(long **)(lVar10 + (long)iVar12 * 0x150 + 8);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pcVar9 = (char *)plVar6[1];
      (*(code *)local_598[3])(&local_598);
      if (pcVar9 == local_590) goto LAB_03c2324c;
      uVar8 = 0;
      bVar4 = true;
      do {
        lVar5 = plVar6[1] + 1 + uVar8;
        cVar3 = *(char *)(lVar5 + -1);
        if (cVar3 != local_590[uVar8]) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_03c2324c;
          break;
        }
        cVar3 = *(char *)(plVar6[1] + 1 + uVar8);
        if (cVar3 != local_590[uVar8 + 1]) break;
        if (cVar3 == '\0') goto LAB_03c2324c;
        cVar3 = *(char *)(lVar5 + 1);
        if (cVar3 != local_590[uVar8 + 2]) break;
        if (cVar3 == '\0') goto LAB_03c2324c;
        bVar4 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 + 1;
    } while (iVar2 != iVar12);
    uVar11 = 0xffffffff;
LAB_03c2324c:
    lVar10 = *(long *)(param_1 + 0x110);
    if ((uVar11 < *(uint *)(lVar10 + 0x30)) && (*(long *)(lVar10 + 0x38) != 0)) {
      lVar10 = *(long *)(lVar10 + 0x38) + (long)(int)uVar11 * 0x150;
      plVar6 = *(long **)(param_1 + 0x10);
      FUN_03906170(lVar10,1,param_2);
      puVar1 = (uint *)(lVar10 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(char **)(*(long *)(lVar10 + 0x38) + 0x10) = s_cPVW_0__04b7e3b8;
      iVar2 = *(int *)(*(long *)(lVar10 + 8) + 0x20);
      if (iVar2 != 0) {
        lVar5 = *(long *)(*(long *)(lVar10 + 8) + 0x28);
        iVar12 = 0;
        do {
          *(char **)(*(long *)(lVar5 + (long)iVar12 * 0x150 + 0x38) + 0x10) = s_cPVW_0__04b7e3b8;
          iVar12 = iVar12 + 1;
        } while (iVar2 != iVar12);
      }
      *plVar6 = lVar10;
      lVar10 = *(long *)(param_1 + 0x110);
    }
  }
  if (*(long *)(lVar10 + 0x20) != 0 || *(long *)(lVar10 + 0x28) != 0) {
    FUN_03909d70(lVar10);
    FUN_03909e50(lVar10,*(ushort *)(lVar10 + 0x46) & 1);
  }
  return;
}

