
long FUN_0019f9d0(long param_1,ulong *param_2,ulong *param_3)

{
  MutexType *pMVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong local_70;
  ulong local_68;
  
  puVar10 = PTR_DAT_04bcc088;
  puVar9 = PTR_DAT_04bcbd28;
  puVar8 = PTR_DAT_04bcbcb0;
  pMVar1 = (MutexType *)(param_1 + 0x88);
  lVar2 = param_1 + 0xc0;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (*puVar9 == '\0') {
      nn::os::LockMutex(pMVar1);
    }
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(lVar2);
    local_70 = *param_3;
    FUN_0019ece0(param_1,&local_70);
    if (*(long *)(param_1 + 0x128) == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(lVar2);
      plVar16 = *(long **)(param_1 + 8);
    }
    else {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 0x110);
      *(undefined1 *)(param_1 + 0x10) = 1;
      piVar3 = (int *)(*(long *)(param_1 + 0x110) + 8);
      iVar11 = *piVar3;
      if (iVar11 != *piVar3) {
        ClearExclusiveLocal();
LAB_0019fbd0:
        do {
          iVar12 = *piVar3;
          if (iVar12 == iVar11) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = iVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0019fad0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0019fbd0;
LAB_0019fad0:
      lVar13 = *(long *)(param_1 + 0x110);
      lVar14 = *(long *)(lVar13 + 0x10);
      lVar5 = *(long *)(lVar13 + 0x18);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar14;
      }
      *(undefined8 *)(lVar13 + 0x18) = 0;
      if (lVar14 != 0) {
        *(long *)(lVar14 + 0x18) = lVar5;
      }
      *(undefined8 *)(lVar13 + 0x10) = 0;
      if (*(long *)(param_1 + 0x110) == lVar13) {
        *(long *)(param_1 + 0x110) = lVar14;
        lVar14 = *(long *)(param_1 + 0x118);
      }
      else {
        lVar14 = *(long *)(param_1 + 0x118);
      }
      if (lVar14 == lVar13) {
        *(long *)(param_1 + 0x118) = lVar5;
      }
      *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + -1;
      (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(lVar2);
      plVar16 = *(long **)(param_1 + 8);
    }
    if (plVar16 == (long *)0x0) {
      if (*puVar9 == '\0') {
        nn::os::UnlockMutex(pMVar1);
      }
      return lVar15;
    }
    if ((char)plVar16[0xc] == '\0') {
      if (*(char *)(param_1 + 0x10) != '\0') {
        local_68 = *param_3;
        FUN_0019fea0(param_1,plVar16,param_2,&local_68);
      }
      plVar4 = plVar16 + 1;
      iVar11 = (int)*plVar4;
      iVar12 = (int)*plVar4 + -1;
      if (iVar11 != (int)*plVar4) {
        ClearExclusiveLocal();
LAB_0019fd90:
        do {
          lVar14 = *plVar4;
          iVar12 = iVar11 + -1;
          if ((int)lVar14 == iVar11) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *(int *)plVar4 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0019fd24;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar14;
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(int *)plVar4 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0019fd90;
LAB_0019fd24:
      if ((iVar12 == 0) && (*(char *)((long)plVar16 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar16 + 0xc) = 1;
        (**(code **)(*plVar16 + 8))(plVar16);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 0x10) = 0;
        cVar6 = *puVar9;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 0x10) = 0;
        cVar6 = *puVar9;
      }
      if (cVar6 == '\0') {
        nn::os::UnlockMutex(pMVar1);
        cVar6 = *PTR_DAT_04bcbca8;
        goto joined_r0x0019fdf4;
      }
      if (*PTR_DAT_04bcbca8 != '\0') goto LAB_0019fd50;
LAB_0019fe00:
      FUN_0018cb8c(&local_68);
      *(ulong *)puVar8 = local_68;
      *param_3 = local_68;
      uVar17 = *param_2;
    }
    else {
      if (*puVar9 == '\0') {
        nn::os::UnlockMutex(pMVar1);
      }
      (**(code **)(*(long *)puVar10 + 0x10))(puVar10);
      (**(code **)(*(long *)(param_1 + 0x78) + 0x10))(param_1 + 0x78);
      plVar16 = *(long **)(param_1 + 8);
      if (*(char *)(param_1 + 0x10) != '\0') {
        local_68 = *param_3;
        FUN_0019fea0(param_1,plVar16,param_2,&local_68);
      }
      plVar4 = plVar16 + 1;
      iVar11 = (int)*plVar4;
      iVar12 = (int)*plVar4 + -1;
      if (iVar11 != (int)*plVar4) {
        ClearExclusiveLocal();
LAB_0019fcd0:
        do {
          lVar14 = *plVar4;
          iVar12 = iVar11 + -1;
          if ((int)lVar14 == iVar11) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *(int *)plVar4 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0019fc5c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar14;
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(int *)plVar4 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0019fcd0;
LAB_0019fc5c:
      if ((iVar12 == 0) && (*(char *)((long)plVar16 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar16 + 0xc) = 1;
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(param_1 + 0x78);
      (**(code **)(*(long *)puVar10 + 0x20))(puVar10);
      cVar6 = *PTR_DAT_04bcbca8;
joined_r0x0019fdf4:
      if (cVar6 == '\0') goto LAB_0019fe00;
LAB_0019fd50:
      FUN_0018c9b0(&local_68,0);
      *(ulong *)puVar8 = local_68;
      *param_3 = local_68;
      uVar17 = *param_2;
    }
    lVar14 = lVar15 + 1;
    if (uVar17 != 0) {
      lVar14 = lVar15 + 1;
      if (local_68 == 0) {
        if (*PTR_DAT_04bcbca8 == '\0') {
          FUN_0018cb8c(&local_68);
        }
        else {
          FUN_0018c9b0(&local_68,0);
        }
        *(ulong *)puVar8 = local_68;
      }
      if (uVar17 <= local_68) {
        return lVar14;
      }
      if ((int)uVar17 == (int)local_68) {
        return lVar14;
      }
    }
  } while( true );
}

