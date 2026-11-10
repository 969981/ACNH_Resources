
/* WARNING: Removing unreachable block (ram,0x0019f67c) */
/* WARNING: Removing unreachable block (ram,0x0019f44c) */
/* WARNING: Removing unreachable block (ram,0x0019f7fc) */
/* WARNING: Removing unreachable block (ram,0x0019f93c) */

undefined8 FUN_0019f300(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  plVar11 = *(long **)(param_1 + 0x1b8);
  uVar7 = (**(code **)(*plVar11 + 0x28))(plVar11);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  puVar5 = PTR_DAT_04bcbca8;
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  uVar7 = (ulong)param_2;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_70);
  }
  else {
    FUN_0018c9b0(&local_70,0);
  }
  uVar15 = local_70;
  puVar6 = PTR_DAT_04bcbcb0;
  *(ulong *)(param_1 + 0x1c0) = local_70;
  *(ulong *)puVar6 = local_70;
  if (param_2 == 0xffffffff) {
    local_78 = 0;
  }
  else {
    if ((int)param_2 < 0) {
      uVar7 = -(ulong)-param_2;
    }
    local_78 = local_70 + uVar7;
  }
  plVar12 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  lVar13 = *(long *)(param_1 + 0x178);
  if (lVar13 != *(long *)(param_1 + 0x188)) {
    do {
      piVar1 = (int *)(lVar13 + 8);
      iVar9 = *piVar1;
      if (iVar9 != *piVar1) {
        ClearExclusiveLocal();
LAB_0019f460:
        do {
          iVar10 = *piVar1;
          if (iVar10 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0019f3e0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar10;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0019f460;
LAB_0019f3e0:
      *(undefined4 *)(lVar13 + 0x40) = 3;
      local_68 = uVar15;
      FUN_0019fea0(param_1,lVar13,&local_78,&local_68);
      *(undefined4 *)(lVar13 + 0x40) = 0;
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != *(long *)(param_1 + 0x188));
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar12);
  *(undefined4 *)(param_1 + 0x1cc) = 2;
  if ((param_3 >> 1 & 1) != 0) goto LAB_0019f98c;
  if ((param_3 & 1) != 0) {
    lVar13 = 0;
    do {
      (**(code **)(**(long **)(param_1 + 0x1b8) + 0x10))();
      uVar7 = local_78;
      local_88 = local_70;
      uStack_80 = local_78;
      lVar8 = FUN_0019f9d0(param_1,&uStack_80,&local_88);
      if (lVar8 == 0) {
        if (uVar7 != 0) goto LAB_0019f5b0;
LAB_0019f58c:
        iVar9 = -1;
      }
      else {
        if (*puVar5 == '\0') {
          FUN_0018cb8c(&local_68);
        }
        else {
          FUN_0018c9b0(&local_68,0);
        }
        *(ulong *)puVar6 = local_68;
        local_70 = local_68;
        if (uVar7 == 0) goto LAB_0019f58c;
LAB_0019f5b0:
        uVar15 = local_70;
        if (local_70 == 0) {
          if (*puVar5 == '\0') {
            FUN_0018cb8c(&local_68);
          }
          else {
            FUN_0018c9b0(&local_68,0);
          }
          *(ulong *)puVar6 = local_68;
          uVar15 = local_68;
        }
        if ((uVar7 <= uVar15) || (iVar9 = (int)uVar7 - (int)uVar15, iVar9 == 0)) goto LAB_0019f838;
      }
      uVar7 = local_70;
      *(undefined4 *)(param_1 + 0x1cc) = 3;
      (**(code **)(*(long *)(param_1 + 0x78) + 0x10))(plVar12);
      for (lVar14 = *(long *)(param_1 + 0x178); lVar14 != *(long *)(param_1 + 0x188);
          lVar14 = *(long *)(lVar14 + 0x10)) {
        piVar1 = (int *)(lVar14 + 8);
        iVar10 = *piVar1;
        if (iVar10 != *piVar1) {
          ClearExclusiveLocal();
LAB_0019f690:
          do {
            iVar2 = *piVar1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0019f610;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0019f690;
LAB_0019f610:
        *(undefined4 *)(lVar14 + 0x40) = 3;
        local_68 = uVar7;
        FUN_0019fea0(param_1,lVar14,&local_78,&local_68);
        *(undefined4 *)(lVar14 + 0x40) = 0;
      }
      *(undefined1 *)(param_1 + 0x1d0) = 0;
      (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar12);
      FUN_0019f1a0(param_1,iVar9);
      if (*puVar5 == '\0') {
        FUN_0018cb8c(&local_68);
        *(ulong *)puVar6 = local_68;
        local_70 = local_68;
        uVar7 = local_78;
      }
      else {
        FUN_0018c9b0(&local_68,0);
        *(ulong *)puVar6 = local_68;
        local_70 = local_68;
        uVar7 = local_78;
      }
      local_78 = uVar7;
      local_68 = local_70;
      if (uVar7 != 0) {
        if (local_70 == 0) {
          if (*puVar5 == '\0') {
            FUN_0018cb8c(&local_68);
          }
          else {
            FUN_0018c9b0(&local_68,0);
          }
          *(ulong *)puVar6 = local_68;
        }
        if ((uVar7 <= local_68) || ((int)uVar7 == (int)local_68)) goto LAB_0019f838;
      }
      uVar7 = local_70;
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        *(undefined4 *)(param_1 + 0x1cc) = 1;
        (**(code **)(*(long *)(param_1 + 0x78) + 0x10))(plVar12);
        for (lVar14 = *(long *)(param_1 + 0x178); lVar14 != *(long *)(param_1 + 0x188);
            lVar14 = *(long *)(lVar14 + 0x10)) {
          piVar1 = (int *)(lVar14 + 8);
          iVar9 = *piVar1;
          if (iVar9 != *piVar1) {
            ClearExclusiveLocal();
LAB_0019f810:
            do {
              iVar10 = *piVar1;
              if (iVar10 == iVar9) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_0019f794;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar9 = iVar10;
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0019f810;
LAB_0019f794:
          *(undefined4 *)(lVar14 + 0x40) = 3;
          local_68 = uVar7;
          FUN_0019fea0(param_1,lVar14,&local_78,&local_68);
          *(undefined4 *)(lVar14 + 0x40) = 0;
        }
        *(undefined1 *)(param_1 + 0x1d0) = 0;
        (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar12);
      }
      *(undefined4 *)(param_1 + 0x1cc) = 2;
      lVar13 = lVar8 + lVar13;
    } while( true );
  }
  (**(code **)(**(long **)(param_1 + 0x1b8) + 0x10))();
  uVar7 = local_78;
  local_88 = local_70;
  uStack_80 = local_78;
  lVar13 = FUN_0019f9d0(param_1,&uStack_80,&local_88);
  if (lVar13 == 0) goto LAB_0019f98c;
  if (*puVar5 == '\0') {
    FUN_0018cb8c(&local_68);
    *(undefined4 *)(param_1 + 0x1cc) = 3;
    *(ulong *)puVar6 = local_68;
    local_70 = local_68;
  }
  else {
    FUN_0018c9b0(&local_68,0);
    *(undefined4 *)(param_1 + 0x1cc) = 3;
    *(ulong *)puVar6 = local_68;
    local_70 = local_68;
  }
  local_68 = local_70;
  if (uVar7 != 0) goto LAB_0019f848;
LAB_0019f8ac:
  uVar7 = local_70;
  (**(code **)(*(long *)(param_1 + 0x78) + 0x10))(plVar12);
  lVar13 = *(long *)(param_1 + 0x178);
  if (lVar13 != *(long *)(param_1 + 0x188)) {
    do {
      piVar1 = (int *)(lVar13 + 8);
      iVar9 = *piVar1;
      if (iVar9 != *piVar1) {
        ClearExclusiveLocal();
LAB_0019f950:
        do {
          iVar10 = *piVar1;
          if (iVar10 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0019f8d4;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar10;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0019f950;
LAB_0019f8d4:
      *(undefined4 *)(lVar13 + 0x40) = 3;
      local_68 = uVar7;
      FUN_0019fea0(param_1,lVar13,&local_78,&local_68);
      *(undefined4 *)(lVar13 + 0x40) = 0;
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != *(long *)(param_1 + 0x188));
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar12);
LAB_0019f98c:
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  (**(code **)(*plVar11 + 0x30))(plVar11);
  return 0;
LAB_0019f838:
  *(undefined4 *)(param_1 + 0x1cc) = 3;
  if (lVar8 + lVar13 == 0) goto LAB_0019f98c;
LAB_0019f848:
  uVar15 = local_70;
  if (local_70 == 0) {
    if (*puVar5 == '\0') {
      FUN_0018cb8c(&local_68);
    }
    else {
      FUN_0018c9b0(&local_68,0);
    }
    *(ulong *)puVar6 = local_68;
    uVar15 = local_68;
  }
  if ((uVar7 <= uVar15) || ((int)uVar7 == (int)uVar15)) goto LAB_0019f98c;
  goto LAB_0019f8ac;
}

