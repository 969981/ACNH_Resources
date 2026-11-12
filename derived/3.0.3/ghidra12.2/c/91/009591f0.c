
void FUN_009591f0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  lVar10 = FUN_00952cb0();
  puVar8 = PTR_DAT_04bb4be8;
  puVar7 = PTR_DAT_04bb4be0;
  puVar4 = PTR_DAT_04bb2868;
  puVar6 = PTR_DAT_04bb2860;
  if (lVar10 == 0) {
    uVar13 = *(uint *)(param_1 + 0x4f8);
    if (0 < (int)uVar13) {
      uVar15 = 0;
      puVar1 = PTR_DAT_04bb4448 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar3 = PTR_DAT_04bb2870 + 0x10;
      do {
        uVar5 = uVar15;
        if (uVar13 <= uVar15) {
          uVar5 = 0;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x500) + (ulong)uVar5 * 0x50 + 0x18) >> 1 & 1) != 0) {
          uVar11 = FUN_03f2d924(*(long *)(param_1 + 0x500) + (ulong)uVar5 * 0x50 + 0x10);
          uVar13 = *(uint *)(param_1 + 0x4f8);
          if ((uVar11 & 1) != 0) {
            uVar5 = uVar15;
            if (uVar13 <= uVar15) {
              uVar5 = 0;
            }
            lVar10 = *(long *)(param_1 + 0x500) + (ulong)uVar5 * 0x50 + 0x10;
            FUN_03f2d924(lVar10);
            puVar12 = (undefined8 *)FUN_03f2d7f0(lVar10);
            if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
              *(undefined **)puVar7 = puVar1;
              __cxa_guard_release(puVar8);
            }
            (**(code **)*puVar12)(puVar12,puVar7);
            local_190 = (undefined *)0x0;
            plVar14 = *(long **)puVar12[6];
            (**(code **)(*param_2 + 0x18))(param_2);
            puStack_178 = (undefined1 *)param_2[1];
            local_180 = puVar2;
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              *(undefined **)puVar6 = puVar3;
              __cxa_guard_release(puVar4);
            }
            uVar11 = (**(code **)*plVar14)(plVar14,puVar6);
            if ((uVar11 & 1) == 0) {
              plVar14 = (long *)0x0;
            }
            lVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_180,&local_190);
            if (lVar10 != 0) {
              return;
            }
            uVar13 = *(uint *)(param_1 + 0x4f8);
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar13);
    }
    if ((*(byte *)(param_1 + 0x480) >> 1 & 1) != 0) {
      uVar11 = FUN_03f2d924(param_1 + 0x478);
      if ((uVar11 & 1) != 0) {
        puVar12 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x478);
        if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar9 != 0)) {
          *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4be8);
        }
        if (((puVar12 != (undefined8 *)0x0) &&
            (uVar11 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb4be0), (uVar11 & 1) != 0)) &&
           ((undefined8 *)puVar12[6] != (undefined8 *)0x0)) {
          local_190 = (undefined *)0x0;
          plVar14 = *(long **)puVar12[6];
          (**(code **)(*param_2 + 0x18))(param_2);
          puStack_178 = (undefined1 *)param_2[1];
          local_180 = PTR_DAT_04bb2020 + 0x10;
          if (((*PTR_DAT_04bb2868 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb2868);
          }
          uVar11 = (**(code **)*plVar14)(plVar14,PTR_DAT_04bb2860);
          if ((uVar11 & 1) == 0) {
            plVar14 = (long *)0x0;
          }
          lVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_180,&local_190);
          if (lVar10 != 0) {
            return;
          }
        }
      }
    }
    lVar10 = FUN_009534b0(param_1,param_2);
    if (((lVar10 == 0) && (lVar10 = FUN_009539a0(param_1,param_2), lVar10 == 0)) &&
       ((lVar10 = FUN_00953b80(param_1,param_2), lVar10 == 0 &&
        (((lVar10 = FUN_00953d60(param_1,param_2), lVar10 == 0 &&
          (lVar10 = FUN_00953f40(param_1,param_2), lVar10 == 0)) &&
         (lVar10 = FUN_00954120(param_1,param_2), puVar6 = PTR_DAT_04bb2020, lVar10 == 0)))))) {
      local_6d = 0;
      local_16c[0] = 0;
      local_170 = 0x100;
      puStack_178 = local_16c;
      local_180 = PTR_DAT_04bb21f8 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      puStack_188 = &DAT_040d993a;
      local_190 = puVar4;
      FUN_00958800(&local_180,&local_190,0xffffffff);
      FUN_00958800(&local_180,param_2,0xffffffff);
      puStack_188 = &DAT_040b5039;
      local_190 = puVar4;
      iVar9 = FUN_00959650(&local_180,&local_190);
      if (iVar9 != -1) {
        FUN_009597f0(&local_180,0x5f);
      }
      puStack_198 = &DAT_0407ec0b;
      local_1a0 = puVar4;
      iVar9 = FUN_00959650(&local_180,&local_1a0);
      if (iVar9 != -1) {
        FUN_009597f0(&local_180,0x2e);
      }
      local_1b0 = puVar6 + 0x10;
      puStack_1a8 = &DAT_0405c04e;
      FUN_00958800(&local_180,&local_1b0,0xffffffff);
      FUN_00954300(param_1,&local_180);
    }
  }
  return;
}

