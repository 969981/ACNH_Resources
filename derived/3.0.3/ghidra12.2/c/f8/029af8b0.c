
/* WARNING: Removing unreachable block (ram,0x029afa6c) */
/* WARNING: Removing unreachable block (ram,0x029afc4c) */
/* WARNING: Removing unreachable block (ram,0x029afa98) */
/* WARNING: Removing unreachable block (ram,0x029afaa8) */

void FUN_029af8b0(long param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  undefined *local_120;
  undefined1 local_118;
  int local_114;
  undefined *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined *local_f8;
  int local_f0;
  undefined **local_e8;
  undefined1 local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined6 local_c8;
  undefined2 uStack_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_bb [3];
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined **local_b0;
  undefined **local_a8;
  undefined1 *local_a0;
  undefined1 local_90 [3];
  undefined1 uStack_8d;
  uint uStack_8c;
  undefined8 uStack_88;
  
  lVar12 = *(long *)PTR_DAT_04bb26a8;
  uVar2 = *(uint *)(FUN_0011e5e0 + lVar12);
  if ((uVar2 == 0xffffffff) || (*(long *)(lVar12 + 0x11e610) == 0)) {
    bVar5 = true;
    sVar4 = *(short *)(param_1 + 0x98);
  }
  else {
    bVar5 = false;
    if (*(uint *)(lVar12 + 0x11e608) <= uVar2) {
      uVar2 = 0;
    }
    uVar2 = *(uint *)(*(long *)(lVar12 + 0x11e610) + (long)(int)uVar2 * 0x80 + 8);
    local_e8 = (undefined **)CONCAT44(local_e8._4_4_,uVar2);
    pbVar1 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60) + (ulong)uVar2 * 0x50;
    if (0x32 < uVar2) {
      pbVar1 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60);
    }
    *(byte *)(param_1 + 0x9c) = *pbVar1 & 1;
    sVar4 = *(short *)(param_1 + 0x98);
  }
  if (sVar4 != 0) {
    *(short *)(param_1 + 0x98) = sVar4 + -1;
  }
  nn::os::LockMutex((MutexType *)(lVar12 + 0x89710));
  uVar13 = *(undefined8 *)(lVar12 + 0x896e8);
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0x89710));
  local_b8 = (undefined2)((ulong)uVar13 >> 0x30);
  uStack_b6 = (undefined1)((ulong)uVar13 >> 8);
  local_d0 = 1;
  uStack_b5 = (undefined1)((ulong)uVar13 >> 0x10);
  uStack_b4 = (undefined1)((ulong)uVar13 >> 0x18);
  uStack_b3 = (undefined1)((ulong)uVar13 >> 0x20);
  uStack_b2 = (undefined1)((ulong)uVar13 >> 0x28);
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = &PTR_LAB_04a978b8;
  local_c8 = 0;
  uStack_c2 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_bb[0] = 0;
  if (bVar5) {
    *(undefined2 *)(param_1 + 0x9a) = 0;
    cVar3 = param_2[2];
    goto joined_r0x029afa14;
  }
  if ((*param_2 == '\0') || (*(char *)(param_1 + 0x9a) != '\0')) {
    cVar3 = param_2[2];
    goto joined_r0x029afa14;
  }
  puVar14 = (undefined8 *)(param_1 + 0x88);
  *puVar14 = 0x4220000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  puVar10 = PTR_DAT_04bc43f8;
  if (param_2[1] != '\0') {
    local_f8 = PTR_DAT_04bc43f8 + 0x10;
    _local_90 = CONCAT44(uStack_8c,1);
    local_f0 = DAT_05636e5c;
    if (DAT_05636e5c != 0) {
      _local_90 = (ulong)uStack_8c << 0x20;
      lVar12 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar12 == 0) {
        local_118 = PTR_DAT_04bbc570[8];
        local_114 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        uStack_108 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_100 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
LAB_029afc08:
        local_110 = PTR_DAT_04bb2010 + 0x10;
        local_120 = PTR_DAT_04bc4608 + 0x10;
        local_fc = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      }
      else {
        if (*(long *)(lVar12 + 0x150) == 0) {
          uStack_108 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_118 = PTR_DAT_04bbc570[8];
          local_114 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          local_100 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          goto LAB_029afc08;
        }
        local_120 = PTR_DAT_04bc4608 + 0x10;
        local_110 = PTR_DAT_04bb2010 + 0x10;
        local_118 = PTR_DAT_04bbc570[8];
        local_114 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        uStack_108 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_100 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_fc = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        if (DAT_05636e5c != 0) {
          local_a8 = &local_f8;
          local_b0 = &PTR_FUN_04a9b150;
          local_a0 = (undefined1 *)&local_120;
          plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x150) + 0x10))();
          iVar6 = (**(code **)(*plVar8 + 0x18))();
          if (0 < iVar6) {
            iVar18 = 0;
            do {
              FUN_01360490(local_90,*(undefined8 *)(lVar12 + 0x150),iVar18);
              uVar9 = (*(code *)*local_b0)(&local_b0,local_90);
              if ((uVar9 & 1) != 0) break;
              bVar5 = iVar6 + -1 != iVar18;
              iVar18 = iVar18 + 1;
            } while (bVar5);
          }
        }
      }
      if (local_114 == 0) {
        local_b0 = (undefined **)(puVar10 + 0x10);
        _local_90 = CONCAT44(uStack_8c,4);
        local_a8 = (undefined **)CONCAT44(local_a8._4_4_,DAT_05636e68);
        if (DAT_05636e68 != 0) {
          FUN_02b5dea0(local_90,&local_b0,0);
          if (uStack_88._4_4_ == 0) {
            uVar9 = FUN_029afed0(param_1,&local_f8);
            if (((uVar9 & 1) == 0) && (uVar9 = FUN_029afed0(param_1,&local_b0), (uVar9 & 1) != 0)) {
              *(undefined4 *)(param_1 + 0x94) = 1;
            }
          }
          else {
            uVar9 = FUN_02a8f1dc(local_90,puVar14);
            if ((uVar9 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x8c) = 0x41f00000;
              *(undefined4 *)(param_1 + 0x94) = 1;
              *(undefined1 *)(param_1 + 0x9b) = 1;
              *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + 20.0;
              *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + -10.0;
            }
          }
        }
      }
      else {
        uVar9 = FUN_02a8f1dc(&local_120,puVar14);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x9b) = 1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x9a) = 1;
  cVar3 = param_2[2];
joined_r0x029afa14:
  if ((cVar3 == '\0') || (local_d8 = param_1 + 0x88, *(char *)(param_1 + 0x9c) == '\0')) {
    *(undefined1 *)(param_1 + 0x9d) = 0;
    uVar7 = FUN_006bd550(&DAT_0407d594,0);
    lVar12 = *(long *)PTR_DAT_04bb26a8;
    plVar8 = (long *)(lVar12 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar12 + 0xb3b58));
    if (*(int *)(lVar12 + 0xb3b88) < *(int *)(lVar12 + 0xb3ba0)) {
      puVar14 = *(undefined8 **)(lVar12 + 0xb3b90);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar12 + 0xb3b90) = *puVar14;
      }
      *(undefined1 *)((long)puVar14 + 2) = 0;
      *(undefined2 *)puVar14 = 0x100;
      *(undefined4 *)((long)puVar14 + 4) = uVar7;
      *(undefined4 *)(puVar14 + 1) = 0x3f800000;
      plVar16 = puVar14 + 2;
      *plVar16 = 0;
      puVar14[3] = 0;
      lVar17 = *plVar8;
      *plVar8 = (long)plVar16;
      puVar14[3] = plVar8;
      *plVar16 = lVar17;
      if (lVar17 != 0) {
        *(long **)(lVar17 + 8) = plVar16;
      }
      *(int *)(lVar12 + 0xb3b88) = *(int *)(lVar12 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0xb3b58));
    puVar15 = local_bb;
  }
  else {
    puVar15 = (undefined1 *)(param_1 + 0x9d);
  }
  puVar10 = *(undefined **)(param_1 + 0x80);
  *puVar15 = 1;
  local_c0 = *(undefined4 *)(param_1 + 0x94);
  local_120 = puVar10;
  if (((ulong)puVar10 & 0xffff) == 0) {
    uVar11 = 0;
  }
  else {
    _local_90 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_120);
    _local_90 = _local_90 + 0xe10;
    puVar10 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)local_90);
    uVar11 = SUB82(puVar10,0);
  }
  lVar12 = _local_90;
  uStack_8c._3_1_ = SUB81(lVar12,7);
  _local_90 = (uint7)CONCAT14((char)((ulong)puVar10 >> 0x20),
                              CONCAT13((char)((ulong)puVar10 >> 0x18),
                                       CONCAT12((char)((ulong)puVar10 >> 0x10),uVar11)));
  if (*(char *)(param_1 + 0x9e) != '\0') {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_90);
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
    if ((lVar12 <= lVar17) &&
       (lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8), lVar17 == lVar12)) {
      local_bc = 1;
      *(undefined2 *)(param_1 + 0x98) = 0x1e0;
    }
  }
  lVar12 = FUN_00a8255c(local_90,&local_b8);
  *(bool *)(param_1 + 0x9e) = lVar12 == 1;
  if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) {
    local_c8 = (undefined6)(param_1 + 0x78);
    uStack_c2 = (undefined2)((ulong)(param_1 + 0x78) >> 0x30);
  }
  uStack_88 = &local_e8;
  _local_90 = 0;
  FUN_03838950(param_1,local_90);
  *(ulong *)(param_1 + 0x80) =
       CONCAT17(uStack_b1,
                CONCAT16(uStack_b2,
                         CONCAT15(uStack_b3,
                                  CONCAT14(uStack_b4,
                                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8))))));
  return;
}

