
undefined8 FUN_03af9e80(long param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  if ((*(uint *)(param_1 + 0x18) >> 4 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar8 = lVar12 + (long)(int)param_3 * 0x23c0;
    if ((*(uint *)(param_1 + 0x18) >> 0xc & 1) == 0) {
      fVar13 = *(float *)(lVar8 + 0xae0);
      fVar15 = *(float *)(lVar8 + 0xad8);
      fVar16 = *(float *)(lVar8 + 0xadc);
      lVar10 = *(long *)PTR_DAT_04bbd510;
      fVar14 = *(float *)(lVar8 + 0xae4);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      local_78 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "gsys::RenderBuffer::color(ReduceBuffer)";
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar6 == 0) {
        local_64 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_64 = (int)lVar6 + -1;
      }
      uVar7 = FUN_03948e10(lVar10,param_2,lVar10 + (long)local_64 * 0x290 + 0x10,&local_78,uVar3,1,
                           (int)((fVar13 - fVar15) * 0.5),(int)((fVar14 - fVar16) * 0.5),1,0,1,0,1,0
                           ,0,0);
      lVar6 = lVar12 + (long)(int)param_3 * 0x23c0;
      *(undefined8 *)(lVar6 + 0x1de8) = uVar7;
      FUN_01560750(lVar6 + 0x1d08,*(undefined8 *)(lVar6 + 0x1de8),*(undefined1 *)(lVar6 + 0x1dc6),
                   *(undefined2 *)(lVar6 + 0x1dc4));
      *(undefined4 *)(lVar6 + 0x1ea8) = 0;
      puVar1 = (uint *)(lVar6 + 0x1ec4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar12 + (long)(int)param_3 * 0x23c0 + 0x1eac) = 0;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      lVar6 = lVar12 + (long)(int)param_3 * 0x23c0;
      *(undefined8 *)(lVar6 + 0x1de8) = *(undefined8 *)(lVar6 + 0x1b90);
      FUN_01560750(lVar6 + 0x1d08,*(undefined8 *)(lVar6 + 0x1b90),1,0);
      *(undefined4 *)(lVar6 + 0x1ea8) = 0x3f800000;
      puVar1 = (uint *)(lVar6 + 0x1ec4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar12 + (long)(int)param_3 * 0x23c0 + 0x1eac) = 0x3f800000;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar6 = lVar12 + (long)(int)param_3 * 0x23c0;
    puVar11 = *(undefined4 **)(lVar6 + 0x1de8);
    *(undefined4 *)(lVar6 + 0x1df0) = *puVar11;
    *(undefined4 *)(lVar6 + 0x1df4) = puVar11[1];
    *(undefined8 *)(lVar6 + 0x1df8) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(lVar6 + 0x1e00) = *(undefined8 *)(puVar11 + 4);
    *(undefined4 *)(lVar6 + 0x1e08) = puVar11[6];
    *(undefined4 *)(lVar6 + 0x1e0c) = puVar11[7];
    *(undefined8 *)(lVar6 + 0x1e10) = *(undefined8 *)(puVar11 + 8);
    *(undefined8 *)(lVar6 + 0x1e18) = *(undefined8 *)(puVar11 + 10);
    uVar9 = *(undefined8 *)(puVar11 + 0x10);
    uVar7 = *(undefined8 *)(puVar11 + 0xc);
    uVar2 = *(undefined8 *)(puVar11 + 0xe);
    *(undefined8 *)(lVar6 + 0x1e37) = *(undefined8 *)((long)puVar11 + 0x47);
    *(undefined8 *)(lVar6 + 0x1e30) = uVar9;
    *(undefined8 *)(lVar6 + 0x1e28) = uVar2;
    *(undefined8 *)(lVar6 + 0x1e20) = uVar7;
    FUN_038fd1e0(lVar6 + 0x1e40);
    FUN_038fd2f0(lVar6 + 0x1e40,puVar11 + 0x14);
    uVar3 = puVar11[0x26];
    *(undefined8 *)(lVar6 + 0x1e80) = *(undefined8 *)(puVar11 + 0x24);
    *(undefined4 *)(lVar6 + 0x1e88) = uVar3;
    puVar1 = (uint *)(lVar6 + 0x1ec4);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = lVar12 + (long)(int)param_3 * 0x23c0;
    lVar6 = lVar12 + 0x1ca0;
    *(long *)(lVar12 + 0x1d00) = lVar8 + 0x1590;
    *(long *)(lVar12 + 0x1cc0) = lVar12 + 0x1d08;
    (**(code **)(*(long *)(lVar12 + 0x1ca0) + 0x38))(lVar6,param_2);
    FUN_038e77e4(lVar12 + 0x1ed0,param_2,lVar6);
    FUN_039025b0(0x3f800000,lVar6,param_2,0,1,param_1 + 0xa8,0,lVar12 + 0x1ed0,1);
  }
  return 1;
}

