
void FUN_039a1880(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined4 *puVar12;
  long *plVar13;
  uint local_14c;
  uint local_148;
  undefined1 auStack_d8 [8];
  char *local_d0 [4];
  undefined *local_b0;
  char *local_a0;
  char *local_90;
  char *local_80;
  char *local_70;
  
  if ((*(char *)(param_1 + 0x7f8) != '\0') &&
     (*(long *)(param_1 + 0x1d8) != 0 && 0 < *(int *)(param_1 + 0x1e0) ||
      *(char *)(param_1 + 0x920) != '\0')) {
    lVar10 = *(long *)PTR_DAT_04bbd510;
    lVar7 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar7 == 0) {
      local_14c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_14c = (int)lVar7 - 1;
    }
    if ((*(uint *)(lVar10 + (long)(int)local_14c * 0x290 + 0x298) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c0) = 0;
      *(byte *)(param_1 + 0x7b8) = *(byte *)(param_1 + 0x7b8) & 0xfe;
    }
    FUN_038e4cec(&local_14c);
    local_14c = local_14c & 0xffffff00;
    local_148 = local_148 & 0xfffffffe;
    FUN_038e4d90(&local_14c,param_2);
    *(long *)(param_1 + 0x568) = param_3;
    uVar4 = *(ushort *)(param_3 + 0x98);
    *(undefined2 *)(param_1 + 0x650) = 0x302;
    puVar1 = (uint *)(param_1 + 0x654);
    *(undefined1 *)(param_1 + 0x7ac) = 0;
    *(undefined1 *)(param_1 + 0x652) = 4;
    *(uint *)(param_1 + 0x578) = (uint)uVar4;
    *(char *)(param_1 + 0x653) = (char)*(undefined4 *)(param_1 + 0x7a8);
    *(byte *)(param_1 + 0x658) = *(byte *)(param_1 + 0x658) | 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined2 *)(param_1 + 0x644) = 0x101;
    *(undefined1 *)(param_1 + 0x646) = 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined2 *)(param_1 + 0x647) = 0x707;
    *(undefined1 *)(param_1 + 0x649) = 7;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 & 0xfffffffd | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (*(char *)(param_1 + 0x920) == '\0') {
      iVar11 = 0;
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x858) + 0x58))(param_1 + 0x858,param_2,param_1 + 0x568);
      if (*(long *)(param_1 + 0x570) == 0) {
        iVar11 = 1;
      }
      else {
        local_d0[0] = "reduce";
        local_d0[2] = "expand";
        local_b0 = &DAT_040d1a55;
        local_a0 = "color_correction";
        local_90 = "change_format";
        local_80 = "color_drift";
        local_70 = "trimming";
        iVar11 = 1;
        FUN_006d8678(auStack_d8,"%d_%s",1,local_d0[(ulong)*(uint *)(param_1 + 0x900) * 2]);
      }
    }
    for (lVar7 = *(long *)(param_1 + 0x1d8); lVar7 != param_1 + 0x1d0; lVar7 = *(long *)(lVar7 + 8))
    {
      iVar11 = iVar11 + 1;
      plVar13 = *(long **)(lVar7 + 0x10);
      if ((char)plVar13[0x19] != '\0') {
        (**(code **)(*plVar13 + 0x58))(plVar13,param_2,param_1 + 0x568);
      }
      if (*(long *)(param_1 + 0x570) != 0) {
        local_d0[0] = "reduce";
        local_d0[2] = "expand";
        local_b0 = &DAT_040d1a55;
        local_a0 = "color_correction";
        local_90 = "change_format";
        local_80 = "color_drift";
        local_70 = "trimming";
        FUN_006d8678(auStack_d8,"%d_%s",iVar11,local_d0[(ulong)*(uint *)(plVar13 + 0x15) * 2]);
      }
    }
    puVar12 = *(undefined4 **)(param_1 + 0x570);
    if (puVar12 != (undefined4 *)0x0) {
      uVar3 = *(undefined1 *)(param_1 + 0x850);
      *(undefined4 *)(param_1 + 0x580) = *puVar12;
      *(undefined4 *)(param_1 + 0x584) = puVar12[1];
      *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(puVar12 + 4);
      *(undefined4 *)(param_1 + 0x598) = puVar12[6];
      *(undefined4 *)(param_1 + 0x59c) = puVar12[7];
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(puVar12 + 10);
      uVar8 = *(undefined8 *)(puVar12 + 0xc);
      uVar2 = *(undefined8 *)(puVar12 + 0xe);
      uVar9 = *(undefined8 *)(puVar12 + 0x10);
      *(undefined8 *)(param_1 + 0x5c7) = *(undefined8 *)((long)puVar12 + 0x47);
      *(undefined8 *)(param_1 + 0x5c0) = uVar9;
      *(undefined8 *)(param_1 + 0x5b8) = uVar2;
      *(undefined8 *)(param_1 + 0x5b0) = uVar8;
      FUN_038fd1e0(param_1 + 0x5d0);
      FUN_038fd2f0(param_1 + 0x5d0,puVar12 + 0x14);
      uVar8 = *(undefined8 *)(puVar12 + 0x24);
      *(undefined4 *)(param_1 + 0x618) = puVar12[0x26];
      *(undefined8 *)(param_1 + 0x610) = uVar8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 *)(param_1 + 0x644) = uVar3;
      *(undefined1 *)(param_1 + 0x645) = uVar3;
      *(undefined1 *)(param_1 + 0x646) = 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  return;
}

