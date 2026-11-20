
/* WARNING: Removing unreachable block (ram,0x03f2954c) */

undefined4 FUN_03f29390(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  char local_5c [8];
  char local_54 [8];
  undefined2 local_4c;
  undefined1 local_2d;
  undefined4 local_24;
  
  if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
    uVar6 = 4;
  }
  else {
    puVar1 = (uint *)(param_1 + 0x38);
    uVar6 = 3;
    if ((*puVar1 >> 3 & 1) == 0) {
      do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar2 & 4) == 0) {
        lVar8 = *(long *)PTR_DAT_04bc3578;
        if ((*(uint *)(lVar8 + 0xb0) >> 6 & 1) != 0) {
          local_2d = 0;
          local_4c = 0x67;
          local_5c[0] = s_system_report_tag_0406a2e0[0];
          local_5c[1] = s_system_report_tag_0406a2e0[1];
          local_5c[2] = s_system_report_tag_0406a2e0[2];
          local_5c[3] = s_system_report_tag_0406a2e0[3];
          local_5c[4] = s_system_report_tag_0406a2e0[4];
          local_5c[5] = s_system_report_tag_0406a2e0[5];
          local_5c[6] = s_system_report_tag_0406a2e0[6];
          local_5c[7] = s_system_report_tag_0406a2e0[7];
          local_54[0] = s_system_report_tag_0406a2e0[8];
          local_54[1] = s_system_report_tag_0406a2e0[9];
          local_54[2] = s_system_report_tag_0406a2e0[10];
          local_54[3] = s_system_report_tag_0406a2e0[0xb];
          local_54[4] = s_system_report_tag_0406a2e0[0xc];
          local_54[5] = s_system_report_tag_0406a2e0[0xd];
          local_54[6] = s_system_report_tag_0406a2e0[0xe];
          local_54[7] = s_system_report_tag_0406a2e0[0xf];
          local_24 = 0;
          if ((*(uint *)(param_1 + 0x38) & 1) != 0) {
            iVar5 = *(int *)(param_1 + 0x44);
            *(int *)(param_1 + 0x44) = iVar5 + 1;
            local_24 = 6;
            if (iVar5 < (int)((*(uint *)(lVar8 + 0xb0) >> 6 & 1) + *(int *)(param_1 + 0x40))) {
              local_2d = 0;
              nn::prepo::PlayReport::Add(*(char **)(param_1 + 0x30),(long)local_5c);
            }
          }
        }
        if (*(long *)(param_1 + 0x48) == 0 && *(long *)(param_1 + 0x50) == 0) {
          iVar5 = nn::prepo::PlayReport::Save();
        }
        else {
          iVar5 = nn::prepo::PlayReport::Save(*(Uid **)(param_1 + 0x30));
        }
        uVar2 = *puVar1;
        uVar6 = 1;
        if (iVar5 != 0) {
          uVar6 = 2;
        }
        do {
          uVar7 = *puVar1;
          if (uVar7 != uVar2) {
            ClearExclusiveLocal();
            do {
              while (*puVar1 == uVar7) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar7 & 0xfffffff3 | 8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  return uVar6;
                }
              }
              ClearExclusiveLocal();
              uVar7 = *puVar1;
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 & 0xfffffff3 | 8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        uVar6 = 3;
      }
    }
  }
  return uVar6;
}

