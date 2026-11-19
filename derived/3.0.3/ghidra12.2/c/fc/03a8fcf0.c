
void FUN_03a8fcf0(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 param_6,byte param_7)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_68;
  undefined8 uStack_60;
  int local_54;
  
  lVar9 = *(long *)PTR_DAT_04bbd510;
  uStack_60 = param_6;
  if (param_3 < 3) {
    puVar1 = (uint *)(param_1 + 0xe4);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    if ((param_7 & 1) == 0) {
      lVar6 = nn::os::GetTlsValue(DAT_05ae7898);
      if (lVar6 == 0) {
        local_54 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_54 = (int)lVar6 + -1;
      }
      puVar5 = (undefined4 *)
               FUN_03948e10(lVar9,param_2,lVar9 + (long)local_54 * 0x290 + 0x10,&local_68,0x1a,1,
                            param_4,param_5,1,0,1,0,1,0,0,0);
      *(undefined4 **)(param_1 + 8) = puVar5;
      *(undefined4 *)(param_1 + 0x10) = *puVar5;
      *(undefined4 *)(param_1 + 0x14) = puVar5[1];
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar5 + 2);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar5 + 4);
      *(undefined4 *)(param_1 + 0x28) = puVar5[6];
      *(undefined4 *)(param_1 + 0x2c) = puVar5[7];
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 10);
      uVar8 = *(undefined8 *)(puVar5 + 0x10);
      uVar7 = *(undefined8 *)(puVar5 + 0xc);
      uVar2 = *(undefined8 *)(puVar5 + 0xe);
      *(undefined8 *)(param_1 + 0x57) = *(undefined8 *)((long)puVar5 + 0x47);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      FUN_038fd1e0(param_1 + 0x60);
      FUN_038fd2f0(param_1 + 0x60,puVar5 + 0x14);
      uVar7 = *(undefined8 *)(puVar5 + 0x24);
      *(undefined4 *)(param_1 + 0xa8) = puVar5[0x26];
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined2 *)(param_1 + 0xd4) = 0x101;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      puVar5 = (undefined4 *)
               FUN_03948e10(lVar9,param_2,lVar9 + 0x7c0,&local_68,0x1a,1,param_4,param_5,1,0,1,0,0,0
                            ,0,0);
      *(undefined4 **)(param_1 + 8) = puVar5;
      *(undefined4 *)(param_1 + 0x10) = *puVar5;
      *(undefined4 *)(param_1 + 0x14) = puVar5[1];
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar5 + 2);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar5 + 4);
      *(undefined4 *)(param_1 + 0x28) = puVar5[6];
      *(undefined4 *)(param_1 + 0x2c) = puVar5[7];
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 10);
      uVar8 = *(undefined8 *)(puVar5 + 0x10);
      uVar7 = *(undefined8 *)(puVar5 + 0xc);
      uVar2 = *(undefined8 *)(puVar5 + 0xe);
      *(undefined8 *)(param_1 + 0x57) = *(undefined8 *)((long)puVar5 + 0x47);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      FUN_038fd1e0(param_1 + 0x60);
      FUN_038fd2f0(param_1 + 0x60,puVar5 + 0x14);
      uVar7 = *(undefined8 *)(puVar5 + 0x24);
      *(undefined4 *)(param_1 + 0xa8) = puVar5[0x26];
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined2 *)(param_1 + 0xd4) = 0x101;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    if (param_3 != 3) goto LAB_03a90288;
    puVar1 = (uint *)(param_1 + 0xe4);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    if ((param_7 & 1) == 0) {
      lVar6 = nn::os::GetTlsValue(DAT_05ae7898);
      if (lVar6 == 0) {
        local_54 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_54 = (int)lVar6 + -1;
      }
      puVar5 = (undefined4 *)
               FUN_03948e10(lVar9,param_2,lVar9 + (long)local_54 * 0x290 + 0x10,&local_68,0x14,1,
                            param_4,param_5,1,0,1,0,1,0,0,0);
      *(undefined4 **)(param_1 + 8) = puVar5;
      *(undefined4 *)(param_1 + 0x10) = *puVar5;
      *(undefined4 *)(param_1 + 0x14) = puVar5[1];
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar5 + 2);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar5 + 4);
      *(undefined4 *)(param_1 + 0x28) = puVar5[6];
      *(undefined4 *)(param_1 + 0x2c) = puVar5[7];
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 10);
      uVar8 = *(undefined8 *)(puVar5 + 0x10);
      uVar7 = *(undefined8 *)(puVar5 + 0xc);
      uVar2 = *(undefined8 *)(puVar5 + 0xe);
      *(undefined8 *)(param_1 + 0x57) = *(undefined8 *)((long)puVar5 + 0x47);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      FUN_038fd1e0(param_1 + 0x60);
      FUN_038fd2f0(param_1 + 0x60,puVar5 + 0x14);
      uVar7 = *(undefined8 *)(puVar5 + 0x24);
      *(undefined4 *)(param_1 + 0xa8) = puVar5[0x26];
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined2 *)(param_1 + 0xd4) = 0x101;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      puVar5 = (undefined4 *)
               FUN_03948e10(lVar9,param_2,lVar9 + 0x7c0,&local_68,0x14,1,param_4,param_5,1,0,1,0,0,0
                            ,0,0);
      *(undefined4 **)(param_1 + 8) = puVar5;
      *(undefined4 *)(param_1 + 0x10) = *puVar5;
      *(undefined4 *)(param_1 + 0x14) = puVar5[1];
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar5 + 2);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar5 + 4);
      *(undefined4 *)(param_1 + 0x28) = puVar5[6];
      *(undefined4 *)(param_1 + 0x2c) = puVar5[7];
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 10);
      uVar8 = *(undefined8 *)(puVar5 + 0x10);
      uVar7 = *(undefined8 *)(puVar5 + 0xc);
      uVar2 = *(undefined8 *)(puVar5 + 0xe);
      *(undefined8 *)(param_1 + 0x57) = *(undefined8 *)((long)puVar5 + 0x47);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      FUN_038fd1e0(param_1 + 0x60);
      FUN_038fd2f0(param_1 + 0x60,puVar5 + 0x14);
      uVar7 = *(undefined8 *)(puVar5 + 0x24);
      *(undefined4 *)(param_1 + 0xa8) = puVar5[0x26];
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined2 *)(param_1 + 0xd4) = 0x101;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_01560750(param_1 + 0x158,*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x216),
               *(undefined2 *)(param_1 + 0x214));
  fVar10 = (float)param_4;
  *(undefined8 *)(param_1 + 0x100) = 0;
  fVar12 = (float)param_5;
  *(long *)(param_1 + 0x110) = param_1 + 0x158;
  *(uint *)(param_1 + 0x260) = param_4;
  *(uint *)(param_1 + 0x264) = param_5;
  *(float *)(param_1 + 0xf8) = fVar10;
  *(float *)(param_1 + 0xfc) = fVar12;
  *(float *)(param_1 + 0x108) = fVar10;
  *(float *)(param_1 + 0x10c) = fVar12;
  if (*(uint *)(param_1 + 0x250) < 6) {
    *(undefined8 *)(param_1 + 0x240) = 0;
    fVar11 = fVar12;
    if ((1 << (ulong)(*(uint *)(param_1 + 0x250) & 0x1f) & 0x39U) == 0) {
      fVar11 = fVar10;
      fVar10 = fVar12;
    }
    *(float *)(param_1 + 0x248) = fVar10;
    *(float *)(param_1 + 0x24c) = fVar11;
  }
LAB_03a90288:
  *(undefined1 *)(param_1 + 0x268) = 1;
  *(byte *)(param_1 + 0x269) = param_7 & 1;
  return;
}

