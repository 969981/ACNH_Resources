
void FUN_01e8abe0(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  short sVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined8 local_25c0;
  undefined8 *local_25b8;
  long **local_25b0;
  long **local_25a8;
  long *local_25a0 [5];
  long alStack_2578 [990];
  undefined8 local_688;
  undefined8 local_660 [200];
  
  if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (sVar6 = *(short *)PTR_DAT_04bb6298, sVar6 != -1)) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 7 & 1) == 0) {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 6 & 1) == 0) {
        return;
      }
    }
    piVar1 = (int *)(param_1 + 0x12870);
    if (*piVar1 == 0) {
      lVar8 = 0xc6;
      local_25b0 = local_25a0;
      local_25a0[0] = alStack_2578;
      local_25c0 = 0;
      local_25b8 = (undefined8 *)0x0;
      plVar7 = local_25a0[0];
      do {
        lVar8 = lVar8 + -2;
        *plVar7 = (long)(plVar7 + 5);
        plVar7[5] = (long)(plVar7 + 10);
        plVar7 = plVar7 + 10;
      } while (lVar8 != 0);
      local_688 = 0;
      if (local_660 != (undefined8 *)0x0) {
        local_25c0 = 0xc800000000;
        local_25b8 = local_660;
      }
      local_25a8 = local_25b0;
      FUN_01521078(&local_25c0);
      if (0 < *piVar1) {
        lVar8 = 0;
        puVar12 = *(undefined8 **)(param_1 + 0x12880);
        do {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x12878) + lVar8 * 8);
          lVar8 = lVar8 + 1;
          *puVar9 = puVar12;
          *(undefined8 **)(param_1 + 0x12880) = puVar9;
          puVar12 = puVar9;
        } while (lVar8 < *piVar1);
      }
      *piVar1 = 0;
      if ((int)local_25c0 != 0) {
        iVar10 = 0;
        lVar8 = (long)(int)local_25c0 << 3;
        puVar2 = PTR_DAT_04bb2e18 + 0x10;
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        do {
          if (*(int *)(param_1 + 0x12874) <= iVar10) {
            return;
          }
          puVar13 = (undefined2 *)*local_25b8;
          if ((*(int *)(puVar13 + 0x10) != 0) && (*(uint *)(puVar13 + 0xe) < 2)) {
            puVar12 = *(undefined8 **)(param_1 + 0x12880);
            if (puVar12 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x12880) = *puVar12;
            }
            *(undefined2 *)puVar12 = *puVar13;
            *(undefined1 *)((long)puVar12 + 2) = *(undefined1 *)(puVar13 + 1);
            *(undefined1 *)((long)puVar12 + 3) = *(undefined1 *)((long)puVar13 + 3);
            uVar5 = *(undefined4 *)(puVar13 + 2);
            puVar12[1] = puVar2;
            *(undefined4 *)((long)puVar12 + 4) = uVar5;
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar13 + 8);
            uVar5 = *(undefined4 *)(puVar13 + 10);
            puVar12[1] = puVar3;
            *(undefined4 *)((long)puVar12 + 0x14) = uVar5;
            uVar11 = *(undefined8 *)(puVar13 + 0xc);
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar13 + 0x10);
            puVar12[3] = uVar11;
            iVar10 = *piVar1;
            if (iVar10 < *(int *)(param_1 + 0x12874)) {
              *(undefined8 **)(*(long *)(param_1 + 0x12878) + (long)iVar10 * 8) = puVar12;
              iVar10 = *piVar1 + 1;
              *piVar1 = iVar10;
            }
          }
          local_25b8 = local_25b8 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
  }
  return;
}

