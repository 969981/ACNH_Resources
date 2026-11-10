
void FUN_001c6a10(undefined8 *param_1,long *param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((int)param_2[0x14] != 0) {
    uVar14 = (ulong)param_5;
    uVar8 = (**(code **)(*param_2 + 0x58))();
    if ((uVar8 & 1) != 0) {
      FUN_001c70f0(param_2);
      (**(code **)(*param_2 + 0xb0))(param_2,3);
      param_2[0x60] = 0;
      param_2[0x5f] = 0;
      param_2[0x61] = param_3;
      param_2[0x62] = *param_4;
      plVar9 = (long *)FUN_00185a6c(0x238);
      if (plVar9 != (long *)0x0) {
        FUN_001d8a50(plVar9,param_2,3,0x60,0,0);
      }
      *(undefined1 *)(plVar9 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
      uVar6 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (((uVar6 >> 0x1b & 1) != 0) &&
         (iVar7 = (**(code **)(*param_2 + 200))(param_2), iVar7 == 0xd)) {
        *(undefined4 *)(plVar9 + 0x15) = 2;
      }
      puVar5 = PTR_DAT_04bcb910;
      puVar4 = PTR_DAT_04bcb908;
      puVar3 = PTR_DAT_04bcb900;
      lVar15 = plVar9[0x3e];
      plVar16 = (long *)(PTR_DAT_04bcb900 + 0x28);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar6 = *puVar10;
        if (uVar6 != 0) {
          lVar1 = **(long **)(puVar3 + 0xa0);
          if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar6)
          goto LAB_001c70d0;
          plVar16 = (long *)(*(long *)(lVar1 + (ulong)uVar6 * 8) + 0x20);
        }
      }
      if (*(char *)(*(long *)(*plVar16 + 0x10) + 0x50) == '\0') {
        if (*PTR_DAT_04bcbca8 == '\0') {
          FUN_0018cb8c(&local_b0);
        }
        else {
          FUN_0018c9b0(&local_b0,0);
        }
        uVar8 = uVar14;
        if ((int)param_5 < 0) {
          uVar8 = -(ulong)-param_5;
        }
        *(long *)PTR_DAT_04bcbcb0 = CONCAT44(uStack_ac,local_b0);
        *(ulong *)(lVar15 + 0x18) = CONCAT44(uStack_ac,local_b0) + uVar8;
      }
      else {
        plVar16 = (long *)(puVar3 + 0x28);
        if (*puVar4 != '\0') {
          puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
          uVar6 = *puVar10;
          if (uVar6 != 0) {
            lVar1 = **(long **)(puVar3 + 0xa0);
            if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar6)
            goto LAB_001c70d0;
            plVar16 = (long *)(*(long *)(lVar1 + (ulong)uVar6 * 8) + 0x20);
          }
        }
        uVar6 = *(uint *)PTR_DAT_04bcc690;
        uVar8 = (ulong)uVar6;
        if ((int)uVar6 < 0) {
          uVar8 = -(ulong)-uVar6;
        }
        uVar8 = uVar8 + *(long *)(*(long *)(*plVar16 + 0x10) + 0x58);
        if (*PTR_DAT_04bcbca8 == '\0') {
          FUN_0018cb8c(&local_b0);
        }
        else {
          FUN_0018c9b0(&local_b0,0);
        }
        uVar12 = uVar8 & 0xffffffff;
        param_5 = (uint)uVar8;
        if ((int)param_5 < 0) {
          uVar12 = -(ulong)-param_5;
        }
        *(long *)PTR_DAT_04bcbcb0 = CONCAT44(uStack_ac,local_b0);
        *(ulong *)(lVar15 + 0x18) = CONCAT44(uStack_ac,local_b0) + uVar12;
      }
      *(long *)(lVar15 + 0x20) = (long)(int)param_5;
      *(undefined4 *)(lVar15 + 8) = 0x10;
      FUN_001c7680(param_2[1] + 0x40,plVar9);
      FUN_001c7bf0(&local_78,param_2,plVar9);
      local_b0 = local_b0 & 0xffffff00;
      uVar8 = FUN_0018aad8(&local_78,&local_b0);
      plVar16 = plVar9 + 1;
      iVar7 = (int)*plVar16;
      iVar11 = (int)*plVar16 + -1;
      if (iVar7 == (int)*plVar16) {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar13) {
          *(int *)plVar16 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_001c6e1c;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001c6e1c:
        bVar13 = false;
      }
      if ((uVar8 & 1) == 0) {
        if (!bVar13) {
          do {
            lVar15 = *plVar16;
            iVar11 = iVar7 + -1;
            if ((int)lVar15 == iVar7) {
              cVar2 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar13) {
                *(int *)plVar16 = iVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = (int)lVar15;
          } while( true );
        }
        if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar9 + 0xc) = 1;
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        if (param_3 == 0) {
          plVar9 = (long *)(puVar3 + 0x28);
          if (*puVar4 != '\0') {
            puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
            uVar6 = *puVar10;
            if (uVar6 != 0) {
              lVar15 = **(long **)(puVar3 + 0xa0);
              if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar6) {
LAB_001c70d0:
                    /* WARNING: Subroutine does not return */
                FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                             ,0x47,0xe0000003,0);
              }
              plVar9 = (long *)(*(long *)(lVar15 + (ulong)uVar6 * 8) + 0x20);
            }
          }
          if (*(char *)(*(long *)(*plVar9 + 0x10) + 0x50) == '\0') {
            FUN_0018af38(&local_b0,0x32,uVar14);
            FUN_00189428(&local_b0);
            do {
              uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              if ((uVar8 & 1) == 0) break;
              plVar9 = (long *)(puVar3 + 0x28);
              if (*puVar4 != '\0') {
                puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
                uVar6 = *puVar10;
                if (uVar6 != 0) {
                  lVar15 = **(long **)(puVar3 + 0xa0);
                  if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar6)
                  goto LAB_001c70d0;
                  plVar9 = (long *)(*(long *)(lVar15 + (ulong)uVar6 * 8) + 0x20);
                }
              }
              if (*(char *)(*(long *)(*plVar9 + 0x10) + 0x50) != '\0') break;
              FUN_001a0400();
              uVar8 = FUN_00189434(&local_b0,
                                   "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                                   ,600,
                                   "(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately())"
                                  );
            } while ((uVar8 & 1) != 0);
          }
          else {
            FUN_0018af38(&local_b0,0x32,*(undefined4 *)PTR_DAT_04bcc690);
            FUN_00189428(&local_b0);
            do {
              uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              if ((uVar8 & 1) == 0) break;
              FUN_001a0400();
              uVar8 = FUN_00189434(&local_b0,
                                   "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                                   ,0x251,"IsDisconnecting()");
            } while ((uVar8 & 1) != 0);
          }
          FUN_0018afc4(&local_b0);
          plVar9 = (long *)param_2[0x60];
          if (plVar9 != (long *)0x0) {
            plVar16 = plVar9 + 1;
            lVar15 = *plVar16;
            iVar7 = (int)*plVar16 + -1;
            if ((int)lVar15 == (int)*plVar16) {
              cVar2 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar13) {
                *(int *)plVar16 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_001c7024;
              bVar13 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001c7024:
              bVar13 = false;
            }
            iVar11 = (int)lVar15;
            if (!bVar13) {
              do {
                lVar15 = *plVar16;
                iVar7 = iVar11 + -1;
                if ((int)lVar15 == iVar11) {
                  cVar2 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar13) {
                    *(int *)plVar16 = iVar7;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = (int)lVar15;
              } while( true );
            }
            if ((iVar7 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar9 + 0xc) = 1;
              (**(code **)(*plVar9 + 8))();
            }
          }
          param_2[0x60] = 0;
          param_2[0x5f] = 0;
          param_2[0x61] = 0;
          uVar8 = (**(code **)(*param_2 + 0x38))(param_2);
          if ((uVar8 & 1) == 0) {
            (**(code **)(*param_2 + 0xb0))(param_2,0);
            local_b0 = 0x80050008;
            goto LAB_001c6bdc;
          }
        }
        local_b0 = 0x10001;
        goto LAB_001c6bdc;
      }
      if (!bVar13) {
        do {
          lVar15 = *plVar16;
          iVar11 = iVar7 + -1;
          if ((int)lVar15 == iVar7) {
            cVar2 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar13) {
              *(int *)plVar16 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = (int)lVar15;
        } while( true );
      }
      if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      plVar9 = (long *)param_2[0x60];
      if (plVar9 == (long *)0x0) goto LAB_001c6ee4;
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      iVar7 = (int)*plVar16 + -1;
      if ((int)lVar15 == (int)*plVar16) {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar13) {
          *(int *)plVar16 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_001c6ebc;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001c6ebc:
        bVar13 = false;
      }
      iVar11 = (int)lVar15;
      if (!bVar13) {
        do {
          lVar15 = *plVar16;
          iVar7 = iVar11 + -1;
          if ((int)lVar15 == iVar11) {
            cVar2 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar13) {
              *(int *)plVar16 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar15;
        } while( true );
      }
      if ((iVar7 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))();
      }
LAB_001c6ee4:
      param_2[0x60] = 0;
      param_2[0x5f] = 0;
      param_2[0x61] = 0;
      *param_1 = local_78;
      param_1[1] = uStack_70;
      param_1[2] = local_68;
      return;
    }
  }
  local_b0 = 0x80050002;
LAB_001c6bdc:
  FUN_0018aa70(param_1,&local_b0);
  return;
}

