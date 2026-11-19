
void FUN_03a750d0(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  ushort uVar12;
  ushort uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined4 *puVar25;
  uint uVar26;
  long lVar27;
  byte *pbVar28;
  undefined4 *puVar29;
  undefined4 uVar30;
  undefined *local_80;
  char *pcStack_78;
  int local_6c;
  
  lVar24 = *(long *)(param_1 + 0x238);
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    param_3 = 0;
  }
  lVar17 = lVar24 + (long)(int)param_3 * 0x6d0;
  uVar19 = *(uint *)(lVar17 + 0x210);
  if (0 < (int)uVar19) {
    uVar20 = (ulong)uVar19 & 3;
    plVar1 = (long *)(lVar24 + (long)(int)param_3 * 0x6d0 + 0x218);
    if (uVar19 < 4) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      do {
        lVar23 = uVar22 * 8;
        uVar22 = uVar22 + 4;
        *(undefined8 *)(*plVar1 + lVar23) = 0;
        *(undefined8 *)(*plVar1 + lVar23 + 8) = 0;
        *(undefined8 *)(*plVar1 + lVar23 + 0x10) = 0;
        *(undefined8 *)(*plVar1 + lVar23 + 0x18) = 0;
      } while (((ulong)uVar19 & 0xfffffffc) != uVar22);
    }
    if ((uVar19 & 3) != 0) {
      lVar23 = uVar22 << 3;
      do {
        uVar20 = uVar20 - 1;
        *(undefined8 *)(*plVar1 + lVar23) = 0;
        lVar23 = lVar23 + 8;
      } while (uVar20 != 0);
    }
  }
  lVar23 = lVar24 + (long)(int)param_3 * 0x6d0;
  *(undefined8 *)(lVar23 + 0x2d8) = 0;
  *(undefined8 *)(lVar23 + 0x2d0) = 0;
  *(undefined8 *)(lVar23 + 0x2c8) = 0;
  *(undefined8 *)(lVar23 + 0x2c0) = 0;
  *(undefined8 *)(lVar23 + 0x2b8) = 0;
  *(undefined8 *)(lVar23 + 0x2b0) = 0;
  *(undefined8 *)(lVar23 + 0x2a8) = 0;
  *(undefined8 *)(lVar23 + 0x2a0) = 0;
  *(undefined8 *)(lVar23 + 0x298) = 0;
  *(undefined8 *)(lVar23 + 0x290) = 0;
  *(undefined8 *)(lVar23 + 0x288) = 0;
  *(undefined8 *)(lVar23 + 0x280) = 0;
  *(undefined8 *)(lVar23 + 0x278) = 0;
  *(undefined8 *)(lVar23 + 0x270) = 0;
  *(undefined8 *)(lVar23 + 0x268) = 0;
  *(undefined8 *)(lVar23 + 0x260) = 0;
  *(undefined8 *)(lVar23 + 600) = 0;
  *(undefined8 *)(lVar23 + 0x250) = 0;
  *(undefined8 *)(lVar23 + 0x248) = 0;
  *(undefined8 *)(lVar23 + 0x240) = 0;
  *(undefined8 *)(lVar23 + 0x238) = 0;
  *(undefined8 *)(lVar23 + 0x230) = 0;
  *(undefined8 *)(lVar23 + 0x228) = 0;
  *(undefined8 *)(lVar23 + 0x220) = 0;
  uVar19 = *(uint *)(param_1 + 0x220);
  if (0 < (int)uVar19) {
    uVar26 = 0;
    lVar16 = lVar23 + 0x220;
    lVar18 = lVar24 + (long)(int)param_3 * 0x6d0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar4 = uVar26;
      if (uVar19 <= uVar26) {
        uVar4 = 0;
      }
      if (*(char *)(*(long *)(param_1 + 0x228) + (ulong)uVar4 * 0x2c) != '\0') {
        pbVar28 = (byte *)(*(long *)(param_1 + 0x228) + (ulong)uVar4 * 0x2c + 4);
        uVar19 = *(uint *)(lVar18 + 0x28) >> (ulong)(*pbVar28 & 0x1f);
        uVar4 = *(uint *)(lVar18 + 0x2c) >> (ulong)(*pbVar28 & 0x1f);
        lVar27 = *(long *)PTR_DAT_04bbd510;
        uVar30 = *(undefined4 *)(param_1 + 0x240);
        if (uVar19 < 2) {
          uVar19 = 1;
        }
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        pcStack_78 = "volume mask - layer";
        local_80 = puVar2;
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar14 == 0) {
          local_6c = nn::os::GetCurrentCoreNumber();
        }
        else {
          local_6c = (int)lVar14 + -1;
        }
        uVar15 = FUN_03948e10(lVar27,param_2,lVar27 + (long)local_6c * 0x290 + 0x10,&local_80,uVar30
                              ,1,uVar19,uVar4,1,0,1,0,1,0,0,0);
        uVar5 = uVar26;
        if (*(uint *)(lVar17 + 0x210) <= uVar26) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(lVar18 + 0x218) + (ulong)uVar5 * 8) = uVar15;
        uVar5 = uVar26;
        if (*(uint *)(lVar17 + 0x200) <= uVar26) {
          uVar5 = 0;
        }
        uVar6 = uVar26;
        if (*(uint *)(lVar17 + 0x210) <= uVar26) {
          uVar6 = 0;
        }
        puVar29 = *(undefined4 **)(*(long *)(lVar18 + 0x218) + (ulong)uVar6 * 8);
        puVar25 = (undefined4 *)(*(long *)(lVar17 + 0x208) + (ulong)uVar5 * 0xe0);
        *puVar25 = *puVar29;
        puVar25[1] = puVar29[1];
        *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar29 + 2);
        *(undefined8 *)(puVar25 + 4) = *(undefined8 *)(puVar29 + 4);
        puVar25[6] = puVar29[6];
        puVar25[7] = puVar29[7];
        *(undefined8 *)(puVar25 + 8) = *(undefined8 *)(puVar29 + 8);
        *(undefined8 *)(puVar25 + 10) = *(undefined8 *)(puVar29 + 10);
        uVar15 = *(undefined8 *)(puVar29 + 0xc);
        uVar7 = *(undefined8 *)(puVar29 + 0xe);
        uVar21 = *(undefined8 *)(puVar29 + 0x10);
        *(undefined8 *)((long)puVar25 + 0x47) = *(undefined8 *)((long)puVar29 + 0x47);
        *(undefined8 *)(puVar25 + 0xe) = uVar7;
        *(undefined8 *)(puVar25 + 0x10) = uVar21;
        *(undefined8 *)(puVar25 + 0xc) = uVar15;
        FUN_038fd1e0(puVar25 + 0x14);
        FUN_038fd2f0(puVar25 + 0x14,puVar29 + 0x14);
        uVar30 = puVar29[0x26];
        *(undefined8 *)(puVar25 + 0x24) = *(undefined8 *)(puVar29 + 0x24);
        puVar3 = puVar25 + 0x35;
        puVar25[0x26] = uVar30;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar11) {
            *puVar3 = *puVar3 | 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (*(long *)(lVar16 + (ulong)*pbVar28 * 8) == 0) {
          lVar27 = *(long *)PTR_DAT_04bbd510;
          if (*(char *)(param_1 + 0x21e) == '\0') {
            local_80 = PTR_DAT_04bb2020 + 0x10;
            pcStack_78 = "volume mask - depth";
            bVar8 = *pbVar28;
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
            if (lVar14 == 0) {
              local_6c = nn::os::GetCurrentCoreNumber();
            }
            else {
              local_6c = (int)lVar14 + -1;
            }
            uVar15 = FUN_03948e10(lVar27,param_2,lVar27 + (long)local_6c * 0x290 + 0x10,&local_80,
                                  0x5a,1,uVar19,uVar4,1,0,1,lVar23 + 0x250 + (ulong)bVar8 * 0x18,1,0
                                  ,0,0);
            *(undefined8 *)(lVar16 + (ulong)*pbVar28 * 8) = uVar15;
          }
          else {
            local_80 = PTR_DAT_04bb2020 + 0x10;
            pcStack_78 = "volume mask - depth";
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
            if (lVar14 == 0) {
              local_6c = nn::os::GetCurrentCoreNumber();
            }
            else {
              local_6c = (int)lVar14 + -1;
            }
            uVar15 = FUN_03948e10(lVar27,param_2,lVar27 + (long)local_6c * 0x290 + 0x10,&local_80,
                                  0x5a,1,uVar19,uVar4,1,0,1,0,1,0,0,0);
            *(undefined8 *)(lVar16 + (ulong)*pbVar28 * 8) = uVar15;
            puVar25 = (undefined4 *)(lVar23 + 0x250 + (ulong)*pbVar28 * 0x18);
            *puVar25 = 0;
            *(undefined8 *)(puVar25 + 2) = 0;
            *(undefined8 *)(puVar25 + 4) = 0;
          }
        }
      }
      uVar19 = *(uint *)(param_1 + 0x220);
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < (int)uVar19);
  }
  uVar19 = *(uint *)(param_1 + 0x218);
  if (uVar19 != 0) {
    lVar23 = lVar24 + (long)(int)param_3 * 0x6d0;
    lVar17 = *(long *)(lVar23 + 0xa8);
    uVar12 = *(ushort *)(lVar17 + 0x30) >> (ulong)(uVar19 & 0x1f);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar9 = *(ushort *)(lVar17 + 0x32);
    uVar13 = uVar9 >> (ulong)(uVar19 & 0x1f);
    if (*(short *)(lVar17 + 0x3a) != 3) {
      uVar9 = 1;
    }
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    lVar17 = *(long *)PTR_DAT_04bbd510;
    if (*(int *)(lVar23 + 0x1c0) == 0) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "volume mask - shadow";
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar16 == 0) {
        local_6c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_6c = (int)lVar16 + -1;
      }
      uVar15 = 1;
      uVar30 = 1;
    }
    else {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "volume mask - shadow";
      uVar30 = *(undefined4 *)(lVar23 + 0x1c0);
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar16 == 0) {
        local_6c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_6c = (int)lVar16 + -1;
      }
      uVar15 = 4;
    }
    uVar15 = FUN_03948e10(lVar17,param_2,lVar17 + (long)local_6c * 0x290 + 0x10,&local_80,0x5a,
                          uVar15,uVar12,uVar9,1,0,uVar30,0,1,0,0,0);
    *(undefined8 *)(lVar24 + (long)(int)param_3 * 0x6d0 + 0x2e0) = uVar15;
    lVar17 = lVar24 + (long)(int)param_3 * 0x6d0;
    puVar25 = *(undefined4 **)(lVar17 + 0x2e0);
    *(undefined4 *)(lVar17 + 0x2e8) = *puVar25;
    *(undefined4 *)(lVar17 + 0x2ec) = puVar25[1];
    *(undefined8 *)(lVar17 + 0x2f0) = *(undefined8 *)(puVar25 + 2);
    *(undefined8 *)(lVar17 + 0x2f8) = *(undefined8 *)(puVar25 + 4);
    *(undefined4 *)(lVar17 + 0x300) = puVar25[6];
    *(undefined4 *)(lVar17 + 0x304) = puVar25[7];
    *(undefined8 *)(lVar17 + 0x308) = *(undefined8 *)(puVar25 + 8);
    *(undefined8 *)(lVar17 + 0x310) = *(undefined8 *)(puVar25 + 10);
    uVar21 = *(undefined8 *)(puVar25 + 0x10);
    uVar15 = *(undefined8 *)(puVar25 + 0xc);
    uVar7 = *(undefined8 *)(puVar25 + 0xe);
    *(undefined8 *)(lVar17 + 0x32f) = *(undefined8 *)((long)puVar25 + 0x47);
    *(undefined8 *)(lVar17 + 0x328) = uVar21;
    *(undefined8 *)(lVar17 + 800) = uVar7;
    *(undefined8 *)(lVar17 + 0x318) = uVar15;
    FUN_038fd1e0(lVar17 + 0x338);
    FUN_038fd2f0(lVar17 + 0x338,puVar25 + 0x14);
    uVar30 = puVar25[0x26];
    *(undefined8 *)(lVar17 + 0x378) = *(undefined8 *)(puVar25 + 0x24);
    puVar3 = (uint *)(lVar17 + 0x3bc);
    *(undefined4 *)(lVar17 + 0x380) = uVar30;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = *puVar3 | 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar17 = lVar24 + (long)(int)param_3 * 0x6d0;
    *(byte *)(lVar17 + 0x3c0) = *(byte *)(lVar17 + 0x3c0) | 4;
    *(ushort *)(lVar17 + 0x3b6) = *(ushort *)(lVar17 + 0x3b6) | 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = *puVar3 & 0xffffffef | 0x10;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar8 = *(byte *)(lVar17 + 0x3c0);
    *(undefined1 *)(lVar24 + (long)(int)param_3 * 0x6d0 + 0x3b3) =
         *(undefined1 *)(*(long *)(lVar23 + 0xa8) + 0xcb);
    *(byte *)(lVar17 + 0x3c0) = bVar8 | 4;
    *(ushort *)(lVar17 + 0x3b6) = *(ushort *)(lVar17 + 0x3b6) | 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = *puVar3 & 0xffffffef | 0x10;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  return;
}

