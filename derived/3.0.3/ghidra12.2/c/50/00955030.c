
/* WARNING: Removing unreachable block (ram,0x0095673c) */

void FUN_00955030(long param_1)

{
  bool bVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  size_t sVar14;
  uint *puVar15;
  undefined *puVar16;
  char *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  uint *puVar25;
  int *piVar26;
  char cVar27;
  undefined1 uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined1 uVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  undefined4 *puVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  long *plVar40;
  void *pvVar41;
  int iVar42;
  undefined8 *puVar43;
  ulong uVar44;
  undefined1 *puVar45;
  long lVar46;
  undefined1 *puVar47;
  undefined8 local_2a0;
  undefined1 *local_298;
  int local_290;
  undefined1 local_28c [127];
  undefined1 local_20d;
  undefined8 local_208;
  undefined1 local_200;
  undefined *local_1f8;
  byte local_1f0;
  undefined4 local_1ec;
  long local_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  undefined *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_105;
  undefined *local_80;
  undefined1 *local_78;
  undefined8 local_70 [2];
  
  if (*(int *)(*(long *)PTR_DAT_04bb2110 + 8) == 0) {
    plVar40 = (long *)0x0;
  }
  else {
    plVar40 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  }
  pMVar2 = (MutexType *)(plVar40 + 0x4d);
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  local_190 = s_FldUnit_pbc_04929c38;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  puVar4 = PTR_PTR_04bb2238;
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xa8,&local_198,PTR_PTR_04bb2238);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitCliff_pbc_04929c45;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xf8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitFall_pbc_04929c57;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x148,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRiver_pbc_04929c68;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x198,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadStone_pbc_04929c7a;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x1e8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadSoil_pbc_04929c90;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x238,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadBrick_pbc_04929ca5;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x288,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadDarkSoil_pbc_04929cbb;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x2d8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadFanPattern_pbc_04929cd4;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x328,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadSand_pbc_04929cef;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x378,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadTile_pbc_04929d04;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x3c8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_FldUnitRoadWood_pbc_04929d19;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x418,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  puVar3 = PTR_DAT_04bb5bd0;
  uVar44 = 0;
  lVar46 = *(long *)PTR_DAT_04bb5008;
  do {
    puVar5 = PTR_PTR_04bb2238;
    if ((int)*(uint *)(lVar46 + 0x5b8) < 1) {
      if (((*(long *)(lVar46 + 0x4a8) == 0) ||
          (puVar25 = *(uint **)(*(long *)(lVar46 + 0x4a8) + 8), puVar25 == (uint *)0x0)) ||
         (*puVar25 <= uVar44)) break;
      if (((*(uint *)(lVar46 + 0x4c0) <= uVar44) ||
          (*(char *)(*(long *)(lVar46 + 0x4c8) + uVar44) != '\0')) &&
         ((puVar25[1] != 0 && ((ushort)puVar25[2] != 0)))) {
        iVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 + iVar20)
                          + (long)puVar25);
        goto joined_r0x00955554;
      }
    }
    else {
      if (*(uint *)(lVar46 + 0x5b8) <= uVar44) break;
      uVar34 = uVar44 & 0xffffffff;
      if (*(uint *)(lVar46 + 0x5a8) <= uVar44) {
        uVar34 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar46 + 0x5b0) + uVar34 * 8);
joined_r0x00955554:
      if (puVar25 != (uint *)0x0) {
        uVar30 = *puVar25;
        if (uVar30 != 0) {
          cVar27 = *PTR_DAT_04bb5bc8;
          do {
            if (cVar27 == '\0') {
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              cVar27 = '\x01';
              *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              uVar30 = *puVar25;
              *PTR_DAT_04bb5bc8 = 1;
            }
            else {
              uVar18 = *(uint *)(puVar3 + 0x40);
              if (-1 < (int)uVar18) {
                lVar31 = (ulong)uVar18 + (long)puVar25;
                goto LAB_00955374;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)uVar30;
            lVar31 = 0;
            if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_00955374;
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
            lVar31 = 0;
            if (lVar35 == 0) goto LAB_00955374;
            uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
            *(undefined4 *)(puVar3 + 0x40) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar26 = (int *)(lVar35 + 4);
            while (piVar26[-1] != 0x39b5a93d) {
              piVar26 = piVar26 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_00955370;
            }
            iVar20 = 0;
            if (*piVar26 != -1) {
              iVar20 = *piVar26;
            }
            *(int *)(puVar3 + 0x40) = iVar20;
            uVar30 = *puVar25;
            if (uVar30 == 0) break;
          } while( true );
        }
LAB_00955370:
        lVar31 = 0;
LAB_00955374:
        lVar35 = *(long *)PTR_PTR_04bb5bc0;
        if (lVar31 != 0) {
          lVar35 = lVar31;
        }
        FUN_006e9528(&local_198,"%s_pbc",lVar35);
        uVar34 = uVar44 & 0xffffffff;
        lVar31 = *(long *)(param_1 + 0x4f0);
        if (*(uint *)(param_1 + 0x4e8) <= uVar44) {
          uVar34 = 0;
        }
        nn::os::LockMutex(pMVar2);
        (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,puVar4);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    uVar44 = uVar44 + 1;
  } while( true );
  lVar31 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    iVar20 = *(int *)(lVar46 + 0x5b8);
    if (iVar20 < 1) {
      iVar20 = 0;
      if (*(long *)(lVar46 + 0x4a8) != 0) {
        piVar26 = *(int **)(*(long *)(lVar46 + 0x4a8) + 8);
        iVar20 = 0;
        if (piVar26 != (int *)0x0) {
          iVar20 = *piVar26;
        }
      }
    }
    uVar30 = (int)lVar31 + iVar20;
    lVar35 = *(long *)(param_1 + 0x4f0);
    if (*(uint *)(param_1 + 0x4e8) <= uVar30) {
      uVar30 = 0;
    }
    local_190 = (&PTR_s_StrcPlaneA00_pbc_04929ee0)[lVar31];
    local_198 = puVar3;
    nn::os::LockMutex(pMVar2);
    (**(code **)(*plVar40 + 0x30))(plVar40,lVar35 + (long)(int)uVar30 * 0x50,&local_198,puVar5);
    nn::os::UnlockMutex(pMVar2);
    puVar4 = PTR_DAT_04bb5be8;
    lVar31 = lVar31 + 1;
  } while (lVar31 != 0xd);
  uVar44 = 0;
  lVar46 = *(long *)PTR_DAT_04bb5008;
  do {
    if ((int)*(uint *)(lVar46 + 0x9b8) < 1) {
      if (((*(long *)(lVar46 + 0x8a8) == 0) ||
          (puVar25 = *(uint **)(*(long *)(lVar46 + 0x8a8) + 8), puVar25 == (uint *)0x0)) ||
         (*puVar25 <= uVar44)) break;
      if ((((*(uint *)(lVar46 + 0x8c0) <= uVar44) ||
           (*(char *)(*(long *)(lVar46 + 0x8c8) + uVar44) != '\0')) && (puVar25[1] != 0)) &&
         ((ushort)puVar25[2] != 0)) {
        iVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 + iVar20)
                          + (long)puVar25);
        goto joined_r0x00955820;
      }
    }
    else {
      if (*(uint *)(lVar46 + 0x9b8) <= uVar44) break;
      uVar34 = uVar44 & 0xffffffff;
      if (*(uint *)(lVar46 + 0x9a8) <= uVar44) {
        uVar34 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar46 + 0x9b0) + uVar34 * 8);
joined_r0x00955820:
      if (puVar25 != (uint *)0x0) {
        uVar30 = *puVar25;
        if (uVar30 != 0) {
          cVar27 = *PTR_DAT_04bb5be0;
          do {
            if (cVar27 == '\0') {
              *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              cVar27 = '\x01';
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              uVar30 = *puVar25;
              *PTR_DAT_04bb5be0 = 1;
            }
            else {
              uVar18 = *(uint *)(puVar4 + 0x18);
              if (-1 < (int)uVar18) {
                lVar31 = (ulong)uVar18 + (long)puVar25;
                goto LAB_00955644;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)uVar30;
            lVar31 = 0;
            if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_00955644;
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
            lVar31 = 0;
            if (lVar35 == 0) goto LAB_00955644;
            uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
            *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar26 = (int *)(lVar35 + 4);
            while (piVar26[-1] != 0x39b5a93d) {
              piVar26 = piVar26 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_00955640;
            }
            iVar20 = 0;
            if (*piVar26 != -1) {
              iVar20 = *piVar26;
            }
            *(int *)(puVar4 + 0x18) = iVar20;
            uVar30 = *puVar25;
            if (uVar30 == 0) break;
          } while( true );
        }
LAB_00955640:
        lVar31 = 0;
LAB_00955644:
        lVar35 = *(long *)PTR_PTR_04bb5bd8;
        if (lVar31 != 0) {
          lVar35 = lVar31;
        }
        FUN_006e9528(&local_198,"%s_pbc",lVar35);
        uVar34 = uVar44 & 0xffffffff;
        lVar31 = *(long *)(param_1 + 0x500);
        if (*(uint *)(param_1 + 0x4f8) <= uVar44) {
          uVar34 = 0;
        }
        nn::os::LockMutex(pMVar2);
        (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,PTR_PTR_04bb2238);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    uVar44 = uVar44 + 1;
  } while( true );
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  local_190 = s_RoomTentA00_pbc_04929f48;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  puVar4 = PTR_PTR_04bb2238;
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x548,&local_198,PTR_PTR_04bb2238);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomTentB00_pbc_04929f59;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x598,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomTentB01_pbc_04929f6a;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x5e8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomTentB02_pbc_04929f7b;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x638,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsUp_pbc_04929f8c;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x688,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsDown_pbc_04929fa1;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x6d8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsBoth_pbc_04929fb8;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x728,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsNml_pbc_04929fcf;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x778,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsNmlUp_pbc_04929fe5;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x7c8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor4x4_pbc_04929ffd;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x818,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor4x6_pbc_0492a012;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x868,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor4x8_pbc_0492a027;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x8b8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor4x10_pbc_0492a03c;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x908,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor6x4_pbc_0492a052;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x958,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor6x6_pbc_0492a067;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x9a8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor6x8_pbc_0492a07c;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0x9f8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor6x10_pbc_0492a091;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xa48,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor8x4_pbc_0492a0a7;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xa98,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor8x6_pbc_0492a0bc;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xae8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor8x8_pbc_0492a0d1;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xb38,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor8x10_pbc_0492a0e6;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xb88,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor10x4_pbc_0492a0fc;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xbd8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor10x6_pbc_0492a112;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xc28,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor10x8_pbc_0492a128;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xc78,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlFloor10x10_pbc_0492a13e;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xcc8,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  local_190 = s_RoomMdlStairsNmlDown_pbc_0492a155;
  local_198 = puVar3;
  nn::os::LockMutex(pMVar2);
  (**(code **)(*plVar40 + 0x30))(plVar40,param_1 + 0xd18,&local_198,puVar4);
  nn::os::UnlockMutex(pMVar2);
  puVar3 = PTR_DAT_04bb5c00;
  uVar44 = 0;
  lVar46 = *(long *)PTR_DAT_04bb5008;
  do {
    puVar5 = PTR_DAT_04bb5c18;
    if ((int)*(uint *)(lVar46 + 0x11b8) < 1) {
      if (((*(long *)(lVar46 + 0x10a8) == 0) ||
          (puVar25 = *(uint **)(*(long *)(lVar46 + 0x10a8) + 8), puVar25 == (uint *)0x0)) ||
         (*puVar25 <= uVar44)) break;
      if (((*(uint *)(lVar46 + 0x10c0) <= uVar44) ||
          (*(char *)(*(long *)(lVar46 + 0x10c8) + uVar44) != '\0')) &&
         ((puVar25[1] != 0 && ((ushort)puVar25[2] != 0)))) {
        iVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 + iVar20)
                          + (long)puVar25);
        goto joined_r0x00956078;
      }
    }
    else {
      if (*(uint *)(lVar46 + 0x11b8) <= uVar44) break;
      uVar34 = uVar44 & 0xffffffff;
      if (*(uint *)(lVar46 + 0x11a8) <= uVar44) {
        uVar34 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar46 + 0x11b0) + uVar34 * 8);
joined_r0x00956078:
      if (puVar25 != (uint *)0x0) {
        uVar30 = *puVar25;
        if (uVar30 != 0) {
          cVar27 = *PTR_DAT_04bb5bf8;
          do {
            if (cVar27 == '\0') {
              *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              cVar27 = '\x01';
              uVar30 = *puVar25;
              *PTR_DAT_04bb5bf8 = 1;
            }
            else {
              uVar18 = *(uint *)(puVar3 + 0xc);
              if (-1 < (int)uVar18) {
                lVar31 = (ulong)uVar18 + (long)puVar25;
                goto LAB_00955e94;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)uVar30;
            lVar31 = 0;
            if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_00955e94;
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
            lVar31 = 0;
            if (lVar35 == 0) goto LAB_00955e94;
            uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
            *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar26 = (int *)(lVar35 + 4);
            while (piVar26[-1] != 0x68cf5938) {
              piVar26 = piVar26 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_00955e90;
            }
            iVar20 = 0;
            if (*piVar26 != -1) {
              iVar20 = *piVar26;
            }
            *(int *)(puVar3 + 0xc) = iVar20;
            uVar30 = *puVar25;
            if (uVar30 == 0) break;
          } while( true );
        }
LAB_00955e90:
        lVar31 = 0;
LAB_00955e94:
        lVar35 = *(long *)PTR_PTR_04bb5bf0;
        if (lVar31 != 0) {
          lVar35 = lVar31;
        }
        FUN_006e9528(&local_198,"%s_pbc",lVar35);
        uVar34 = uVar44 & 0xffffffff;
        lVar31 = *(long *)(param_1 + 0xd70);
        if (*(uint *)(param_1 + 0xd68) <= uVar44) {
          uVar34 = 0;
        }
        nn::os::LockMutex(pMVar2);
        (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,puVar4);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    uVar44 = uVar44 + 1;
  } while( true );
  uVar44 = 0;
  lVar46 = *(long *)PTR_DAT_04bb5008;
  do {
    puVar3 = PTR_DAT_04bb5c30;
    if ((int)*(uint *)(lVar46 + 0x13b8) < 1) {
      if (((*(long *)(lVar46 + 0x12a8) == 0) ||
          (puVar25 = *(uint **)(*(long *)(lVar46 + 0x12a8) + 8), puVar25 == (uint *)0x0)) ||
         (*puVar25 <= uVar44)) break;
      if (((*(uint *)(lVar46 + 0x12c0) <= uVar44) ||
          (*(char *)(*(long *)(lVar46 + 0x12c8) + uVar44) != '\0')) &&
         ((puVar25[1] != 0 && ((ushort)puVar25[2] != 0)))) {
        iVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 + iVar20)
                          + (long)puVar25);
        goto joined_r0x00956290;
      }
    }
    else {
      if (*(uint *)(lVar46 + 0x13b8) <= uVar44) break;
      uVar34 = uVar44 & 0xffffffff;
      if (*(uint *)(lVar46 + 0x13a8) <= uVar44) {
        uVar34 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar46 + 0x13b0) + uVar34 * 8);
joined_r0x00956290:
      if (puVar25 != (uint *)0x0) {
        uVar30 = *puVar25;
        if (uVar30 != 0) {
          cVar27 = *PTR_DAT_04bb5c10;
          do {
            if (cVar27 == '\0') {
              cVar27 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              uVar30 = *puVar25;
              *PTR_DAT_04bb5c10 = 1;
            }
            else {
              uVar18 = *(uint *)(puVar5 + 0xc);
              if (-1 < (int)uVar18) {
                lVar31 = (ulong)uVar18 + (long)puVar25;
                goto LAB_009560b4;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)uVar30;
            lVar31 = 0;
            if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_009560b4;
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
            lVar31 = 0;
            if (lVar35 == 0) goto LAB_009560b4;
            uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
            *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar26 = (int *)(lVar35 + 4);
            while (piVar26[-1] != 0x39b5a93d) {
              piVar26 = piVar26 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_009560b0;
            }
            iVar20 = 0;
            if (*piVar26 != -1) {
              iVar20 = *piVar26;
            }
            *(int *)(puVar5 + 0xc) = iVar20;
            uVar30 = *puVar25;
            if (uVar30 == 0) break;
          } while( true );
        }
LAB_009560b0:
        lVar31 = 0;
LAB_009560b4:
        lVar35 = *(long *)PTR_PTR_04bb5c08;
        if (lVar31 != 0) {
          lVar35 = lVar31;
        }
        FUN_006e9528(&local_198,"%s_pbc",lVar35);
        uVar34 = uVar44 & 0xffffffff;
        lVar31 = *(long *)(param_1 + 0xd80);
        if (*(uint *)(param_1 + 0xd78) <= uVar44) {
          uVar34 = 0;
        }
        nn::os::LockMutex(pMVar2);
        (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,PTR_PTR_04bb2238);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    uVar44 = uVar44 + 1;
  } while( true );
  lVar46 = *(long *)PTR_DAT_04bb5c90;
  iVar20 = *(int *)(param_1 + 0xd88);
  if (0 < iVar20) {
    uVar44 = 0;
    do {
      if ((int)*(uint *)(lVar46 + 0x260) < 1) {
        if ((((*(long *)(lVar46 + 0x150) != 0) &&
             (puVar25 = *(uint **)(*(long *)(lVar46 + 0x150) + 8), puVar25 != (uint *)0x0)) &&
            ((*(uint *)(lVar46 + 0x168) <= uVar44 ||
             (*(char *)(*(long *)(lVar46 + 0x170) + uVar44) != '\0')))) &&
           (((uVar44 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
          iVar42 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            iVar42 = 0x1c;
          }
          puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 +
                                    iVar42) + (long)puVar25);
          goto joined_r0x009564b0;
        }
      }
      else if (uVar44 < *(uint *)(lVar46 + 0x260)) {
        uVar34 = uVar44;
        if (*(uint *)(lVar46 + 0x250) <= uVar44) {
          uVar34 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar46 + 600) + uVar34 * 8);
joined_r0x009564b0:
        if (puVar25 != (uint *)0x0) {
          uVar30 = *puVar25;
          if (uVar30 != 0) {
            cVar27 = *PTR_DAT_04bb5c28;
            do {
              if (cVar27 == '\0') {
                cVar27 = '\x01';
                *PTR_DAT_04bb5c28 = 1;
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                uVar30 = *puVar25;
              }
              else {
                uVar18 = *(uint *)(puVar3 + 4);
                if (-1 < (int)uVar18) {
                  lVar31 = (ulong)uVar18 + (long)puVar25;
                  goto LAB_009562d8;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar15 = (uint *)(ulong)uVar30;
              lVar31 = 0;
              if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_009562d8;
              lVar31 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
                lVar31 = 0x1c;
              }
              lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
              lVar31 = 0;
              if (lVar35 == 0) goto LAB_009562d8;
              uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
              *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
              if (uVar34 == 0) break;
              piVar26 = (int *)(lVar35 + 4);
              while (piVar26[-1] != 0x39b5a93d) {
                piVar26 = piVar26 + 2;
                uVar34 = uVar34 - 1;
                if (uVar34 == 0) goto LAB_009562d4;
              }
              iVar20 = 0;
              if (*piVar26 != -1) {
                iVar20 = *piVar26;
              }
              *(int *)(puVar3 + 4) = iVar20;
              uVar30 = *puVar25;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_009562d4:
          lVar31 = 0;
LAB_009562d8:
          lVar35 = *(long *)PTR_PTR_04bb5c20;
          if (lVar31 != 0) {
            lVar35 = lVar31;
          }
          FUN_006e9528(&local_198,"%s_pbc",lVar35);
          lVar31 = *(long *)(param_1 + 0xd90);
          uVar34 = uVar44;
          if (*(uint *)(param_1 + 0xd88) <= uVar44) {
            uVar34 = 0;
          }
          nn::os::LockMutex(pMVar2);
          (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,PTR_PTR_04bb2238)
          ;
          nn::os::UnlockMutex(pMVar2);
          iVar20 = *(int *)(param_1 + 0xd88);
        }
      }
      uVar44 = uVar44 + 1;
    } while ((long)uVar44 < (long)iVar20);
    lVar46 = *(long *)PTR_DAT_04bb5c90;
  }
  puVar4 = PTR_DAT_04bb5c48;
  uVar44 = 0;
  puVar3 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if ((int)*(uint *)(lVar46 + 0x660) < 1) {
      if (((*(long *)(lVar46 + 0x550) == 0) ||
          (puVar25 = *(uint **)(*(long *)(lVar46 + 0x550) + 8), puVar25 == (uint *)0x0)) ||
         (*puVar25 <= uVar44)) break;
      if ((((*(uint *)(lVar46 + 0x568) <= uVar44) ||
           (*(char *)(*(long *)(lVar46 + 0x570) + uVar44) != '\0')) && (puVar25[1] != 0)) &&
         ((ushort)puVar25[2] != 0)) {
        iVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * (int)uVar44 + (uint)(ushort)puVar25[2] * 8 + iVar20)
                          + (long)puVar25);
        goto joined_r0x00956708;
      }
    }
    else {
      if (*(uint *)(lVar46 + 0x660) <= uVar44) break;
      uVar34 = uVar44 & 0xffffffff;
      if (*(uint *)(lVar46 + 0x650) <= uVar44) {
        uVar34 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar46 + 0x658) + uVar34 * 8);
joined_r0x00956708:
      if (puVar25 != (uint *)0x0) {
        local_105 = 0;
        uVar34 = (ulong)local_188 >> 0x20;
        local_188 = CONCAT44((uint)uVar34 & 0xffffff00,0x80);
        uVar30 = *puVar25;
        if (uVar30 != 0) {
          cVar27 = *PTR_DAT_04bb5c40;
          do {
            if (cVar27 == '\0') {
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              cVar27 = '\x01';
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              uVar30 = *puVar25;
              *PTR_DAT_04bb5c40 = 1;
            }
            else {
              uVar18 = *(uint *)(puVar4 + 0x1c);
              if (-1 < (int)uVar18) {
                lVar31 = (ulong)uVar18 + (long)puVar25;
                goto LAB_00956504;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)uVar30;
            lVar31 = 0;
            if ((puVar15 == (uint *)0x0) || (lVar31 = 0, puVar25 == puVar15)) goto LAB_00956504;
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar35 = (long)puVar25 + (lVar31 - (long)puVar15);
            lVar31 = 0;
            if (lVar35 == 0) goto LAB_00956504;
            uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
            *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar26 = (int *)(lVar35 + 4);
            while (piVar26[-1] != -0x2077eca7) {
              piVar26 = piVar26 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_00956500;
            }
            iVar20 = 0;
            if (*piVar26 != -1) {
              iVar20 = *piVar26;
            }
            *(int *)(puVar4 + 0x1c) = iVar20;
            uVar30 = *puVar25;
            if (uVar30 == 0) break;
          } while( true );
        }
LAB_00956500:
        lVar31 = 0;
LAB_00956504:
        lVar35 = *(long *)PTR_PTR_04bb5c38;
        if (lVar31 != 0) {
          lVar35 = lVar31;
        }
        local_198 = puVar3;
        local_190 = (char *)((long)&local_188 + 4);
        FUN_038d1270(&local_198,"%s_pbc",lVar35);
        uVar34 = uVar44 & 0xffffffff;
        lVar31 = *(long *)(param_1 + 0xda0);
        if (*(uint *)(param_1 + 0xd98) <= uVar44) {
          uVar34 = 0;
        }
        nn::os::LockMutex(pMVar2);
        (**(code **)(*plVar40 + 0x30))(plVar40,lVar31 + uVar34 * 0x50,&local_198,PTR_PTR_04bb2238);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    uVar44 = uVar44 + 1;
  } while( true );
  local_198 = (undefined *)CONCAT44(local_198._4_4_,6);
  lVar46 = *(long *)PTR_DAT_04bc0500;
  uVar30 = *(uint *)(lVar46 + 0xc4);
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  puVar3 = PTR_DAT_04bb37e0;
  plVar23 = (long *)PTR_DAT_04bb2698;
  if (uVar30 != 0) {
    uVar44 = 0;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (((*(int *)(lVar46 + 0xc0) == 0) || ((int)uVar44 < 0)) ||
         (*(int *)(lVar46 + 0xc4) <= (int)uVar44)) {
        uVar13 = *(undefined2 *)puVar3;
        uVar28 = puVar3[2];
        uVar32 = puVar3[3];
        uVar19 = *(undefined4 *)(puVar3 + 4);
        local_2a0 = *(undefined **)puVar3;
      }
      else {
        local_2a0 = (undefined *)
                    (ulong)(ushort)**(undefined4 **)(*(long *)(lVar46 + 200) + uVar44 * 8);
        FUN_0277d4ac(&local_2a0);
        uVar28 = local_2a0._2_1_;
        uVar32 = local_2a0._3_1_;
        uVar19 = local_2a0._4_4_;
        uVar13 = (undefined2)local_2a0;
      }
      puVar5 = PTR_DAT_04bb43c0;
      local_190 = (char *)CONCAT44(uVar19,CONCAT13(uVar32,CONCAT12(uVar28,uVar13)));
      lVar31 = *(long *)PTR_DAT_04bb43c0;
      local_188 = 0;
      local_198 = puVar4;
      uVar18 = FUN_0277d6c4(&local_190);
      if (*(long *)puVar5 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_2a0);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
             ((puVar25 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8),
              puVar25 != (uint *)0x0 && (uVar18 = *puVar25, uVar18 != 0)))) {
            cVar27 = *PTR_DAT_04bbfe88;
            do {
              if (cVar27 == '\0') {
                cVar27 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar18 = *puVar25;
              }
              else {
                uVar29 = *(uint *)(PTR_DAT_04bbfe90 + 0x170);
                if (-1 < (int)uVar29) {
                  if (((char *)((ulong)uVar29 + (long)puVar25) != (char *)0x0) &&
                     (*(char *)((ulong)uVar29 + (long)puVar25) != '\0')) {
                    uVar19 = FUN_0277d6c4(&local_2a0);
                    uVar18 = *(uint *)(param_1 + 0xdd8);
                    if (*(uint *)(param_1 + 0xdb8) <= uVar18) {
                      uVar18 = 0;
                    }
                    *(undefined4 *)(*(long *)(param_1 + 0xdc0) + (long)(int)uVar18 * 4) = uVar19;
                    uVar18 = *(uint *)(param_1 + 0xdd8);
                    uVar29 = *(uint *)(param_1 + 0xdb8);
                    iVar20 = uVar18 + 1;
                    *(int *)(param_1 + 0xdd8) = iVar20;
                    if ((int)uVar29 <= iVar20) goto LAB_009569dc;
                  }
                  break;
                }
                if (uVar29 != 0xffffffff) break;
              }
              puVar15 = (uint *)(ulong)uVar18;
              if ((puVar15 == (uint *)0x0) || (puVar25 == puVar15)) break;
              lVar31 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
                lVar31 = 0x1c;
              }
              lVar31 = (long)puVar25 + (lVar31 - (long)puVar15);
              if (lVar31 == 0) break;
              uVar34 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
              *(undefined4 *)(PTR_DAT_04bbfe90 + 0x170) = 0xfffffffe;
              if (uVar34 == 0) break;
              piVar26 = (int *)(lVar31 + 4);
              while (piVar26[-1] != -0x5b24697b) {
                piVar26 = piVar26 + 2;
                uVar34 = uVar34 - 1;
                if (uVar34 == 0) goto LAB_00956774;
              }
              iVar20 = 0;
              if (*piVar26 != -1) {
                iVar20 = *piVar26;
              }
              *(int *)(PTR_DAT_04bbfe90 + 0x170) = iVar20;
              uVar18 = *puVar25;
              if (uVar18 == 0) break;
            } while( true );
          }
        }
      }
LAB_00956774:
      uVar44 = uVar44 + 1;
    } while (uVar44 != uVar30);
    iVar20 = *(int *)(param_1 + 0xdd8);
    uVar18 = iVar20 - 1;
    uVar29 = *(uint *)(param_1 + 0xdb8);
LAB_009569dc:
    uVar44 = (ulong)uVar18;
    if ((uVar18 < uVar29) && (0 < (int)uVar18)) {
      piVar26 = *(int **)(param_1 + 0xdc0);
      uVar30 = uVar18 + 1;
      uVar37 = (ulong)(uVar30 >> 1);
      uVar34 = uVar37;
      do {
        uVar29 = (int)uVar37 * 2;
        iVar20 = piVar26[uVar34 - 1 & 0xffffffff];
        if ((int)uVar30 < (int)uVar29) {
          uVar33 = (uint)uVar34;
        }
        else {
          uVar39 = uVar34 & 0xffffffff;
          do {
            if ((int)uVar18 < (int)uVar29) {
              uVar38 = uVar29;
            }
            else {
              uVar38 = uVar29 | (piVar26 + (int)uVar29)[-1] < piVar26[(int)uVar29];
            }
            uVar33 = (uint)uVar39;
            if (piVar26[(int)(uVar38 - 1)] <= iVar20) break;
            piVar26[(int)((uint)uVar39 - 1)] = piVar26[(int)(uVar38 - 1)];
            uVar29 = uVar38 * 2;
            uVar39 = (ulong)uVar38;
            uVar33 = uVar38;
          } while ((int)uVar29 <= (int)uVar30);
        }
        uVar37 = (ulong)((int)uVar37 - 1);
        piVar26[(int)(uVar33 - 1)] = iVar20;
        bVar1 = 1 < (long)uVar34;
        uVar34 = uVar34 - 1;
      } while (bVar1);
      iVar20 = piVar26[uVar44];
      piVar26[uVar44] = *piVar26;
      if (2 < (int)uVar30) {
        do {
          uVar33 = (uint)uVar44;
          uVar18 = 2;
          uVar29 = 1;
          do {
            if ((int)uVar18 < (int)uVar33) {
              uVar38 = uVar18 | (piVar26 + (int)uVar18)[-1] < piVar26[(int)uVar18];
            }
            else {
              uVar38 = uVar18;
            }
            lVar46 = (long)(int)(uVar29 - 1);
            if (piVar26[(int)(uVar38 - 1)] <= iVar20) goto LAB_00956ab0;
            piVar26[lVar46] = piVar26[(int)(uVar38 - 1)];
            uVar18 = uVar38 * 2;
            uVar29 = uVar38;
          } while ((int)uVar18 < (int)uVar30);
          lVar46 = (long)(int)(uVar38 - 1);
LAB_00956ab0:
          uVar44 = uVar44 - 1;
          piVar26[lVar46] = iVar20;
          iVar20 = piVar26[uVar44 & 0xffffffff];
          piVar26[uVar44 & 0xffffffff] = *piVar26;
          uVar30 = uVar33;
        } while (2 < (int)uVar33);
      }
      *piVar26 = iVar20;
      iVar20 = *(int *)(param_1 + 0xdd8);
    }
    if (0 < iVar20) {
      uVar30 = 0;
      do {
        uVar18 = uVar30;
        if (*(uint *)(param_1 + 0xe10) <= uVar30) {
          uVar18 = 0;
        }
        puVar43 = (undefined8 *)(*(long *)(param_1 + 0xe18) + (ulong)uVar18 * 0x28 + 0x20);
        pvVar41 = (void *)*puVar43;
        if (pvVar41 != (void *)0x0) {
          if (*plVar23 == 0) {
            free(pvVar41);
          }
          else {
            plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
            }
          }
          *puVar43 = 0;
          iVar20 = *(int *)(param_1 + 0xdd8);
        }
        uVar30 = uVar30 + 1;
      } while ((int)uVar30 < iVar20);
      if (0 < iVar20) {
        uVar30 = 0;
        puVar3 = PTR_DAT_04bb2d88 + 0x10;
        puVar4 = PTR_DAT_04bc0510 + 0x10;
        puVar5 = PTR_DAT_04bdf0c8 + 0x10;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        puVar7 = PTR_DAT_04bdf1d8 + 0x10;
        puVar8 = PTR_DAT_04bb4448 + 0x10;
        puVar9 = PTR_DAT_04bb2870 + 0x10;
        do {
          local_105 = 0;
          local_188 = CONCAT35(local_188._5_3_,0x80);
          uVar18 = uVar30;
          if (*(uint *)(param_1 + 0xdb8) <= uVar30) {
            uVar18 = 0;
          }
          local_19c = 0;
          local_1a0 = *(uint *)(*(long *)(param_1 + 0xdc0) + (ulong)uVar18 * 4) & 0xffff;
          local_198 = puVar3;
          local_190 = (char *)((long)&local_188 + 4);
          FUN_0277d4ac(&local_1a0);
          puVar16 = PTR_DAT_04bb43c0;
          local_1a8 = 0;
          local_1b0 = (char *)CONCAT44(local_19c,local_1a0);
          lVar46 = *(long *)PTR_DAT_04bb43c0;
          local_1b8 = puVar4;
          uVar18 = FUN_0277d6c4(&local_1b0);
          if (*(long *)puVar16 != 0) {
            lVar46 = *(long *)(lVar46 + 0x57e58);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar46 + 0x1f8);
            if ((uVar18 < *(uint *)(lVar46 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar46 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
              lVar46 = *(long *)PTR_DAT_04bc0428;
              uVar18 = FUN_0277d6c4(&local_1a0);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar46 + 0x1f8);
              if (uVar18 < *(uint *)(lVar46 + 0x1d8)) {
                lVar46 = *(long *)(*(long *)(lVar46 + 0x1e0) + (long)(int)uVar18 * 8);
                if (lVar46 != 0) {
                  local_1a8 = lVar46;
                }
              }
            }
          }
          FUN_01adf970(&local_2a0,&local_1b8);
          pcVar10 = local_190;
          (**(code **)(local_198 + 0x18))(&local_198);
          lVar46 = 0;
          do {
            if (local_190[lVar46] == '\0') goto LAB_00956df4;
            if (local_190[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00956df4;
            }
            if (local_190[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00956df4;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00956df4:
          uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          lVar46 = 0;
          do {
            if (local_298[lVar46] == '\0') goto LAB_00956e54;
            if (local_298[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00956e54;
            }
            if (local_298[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00956e54;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00956e54:
          uVar29 = (uint)lVar46;
          if ((int)((int)local_188 - uVar18) <= (int)(uint)lVar46) {
            uVar29 = (int)local_188 + ~uVar18;
          }
          if (0 < (int)uVar29) {
            (**(code **)(local_2a0 + 0x18))(&local_2a0);
            memcpy(pcVar10 + uVar18,local_298,(ulong)uVar29);
            pcVar10[(int)(uVar29 + uVar18)] = '\0';
          }
          pcVar10 = local_190;
          local_298 = &DAT_040b50da;
          local_2a0 = puVar6;
          (**(code **)(local_198 + 0x18))(&local_198);
          lVar46 = 0;
          do {
            if (local_190[lVar46] == '\0') goto LAB_00956f14;
            if (local_190[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00956f14;
            }
            if (local_190[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00956f14;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00956f14:
          uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          lVar46 = 0;
          do {
            if (local_298[lVar46] == '\0') goto LAB_00956f74;
            if (local_298[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00956f74;
            }
            if (local_298[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00956f74;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00956f74:
          uVar29 = (uint)lVar46;
          if ((int)((int)local_188 - uVar18) <= (int)(uint)lVar46) {
            uVar29 = (int)local_188 + ~uVar18;
          }
          if (0 < (int)uVar29) {
            (**(code **)(local_2a0 + 0x18))(&local_2a0);
            memcpy(pcVar10 + uVar18,local_298,(ulong)uVar29);
            pcVar10[(int)(uVar29 + uVar18)] = '\0';
          }
          local_208 = 0;
          local_200 = 0;
          local_1ec = 0;
          local_1c8 = 0;
          local_1f0 = 1;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1e8 = 0;
          local_1c0 = 0xffffffff;
          local_1f8 = puVar5;
          puStack_1e0 = puVar7;
          nn::os::LockMutex(pMVar2);
          (**(code **)(*plVar40 + 0x30))(plVar40,&local_208,&local_198,PTR_PTR_04bb2238);
          nn::os::UnlockMutex(pMVar2);
          local_20d = 0;
          local_290 = 0x80;
          local_28c[0] = 0;
          local_2a0 = PTR_DAT_04bb2d88 + 0x10;
          local_298 = local_28c;
          FUN_01adf970(&local_80,&local_1b8);
          puVar45 = local_298;
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          plVar23 = (long *)PTR_DAT_04bb2698;
          lVar46 = 0;
          do {
            if (local_298[lVar46] == '\0') goto LAB_009570b4;
            if (local_298[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_009570b4;
            }
            if (local_298[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_009570b4;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_009570b4:
          uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_80 + 0x18))(&local_80);
          lVar46 = 0;
          do {
            if (local_78[lVar46] == '\0') goto LAB_00957124;
            if (local_78[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00957124;
            }
            if (local_78[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00957124;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00957124:
          uVar29 = (uint)lVar46;
          if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
            uVar29 = local_290 + ~uVar18;
          }
          if (0 < (int)uVar29) {
            (**(code **)(local_80 + 0x18))(&local_80);
            memcpy(puVar45 + uVar18,local_78,(ulong)uVar29);
            puVar45[(int)(uVar29 + uVar18)] = 0;
          }
          puVar45 = local_298;
          local_80 = PTR_DAT_04bb2020 + 0x10;
          local_78 = &DAT_0405c04e;
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          lVar46 = 0;
          do {
            if (local_298[lVar46] == '\0') goto LAB_009571e4;
            if (local_298[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_009571e4;
            }
            if (local_298[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_009571e4;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_009571e4:
          uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_80 + 0x18))(&local_80);
          lVar46 = 0;
          do {
            if (local_78[lVar46] == '\0') goto LAB_00957244;
            if (local_78[lVar46 + 1] == '\0') {
              lVar46 = lVar46 + 1;
              goto LAB_00957244;
            }
            if (local_78[lVar46 + 2] == '\0') {
              lVar46 = lVar46 + 2;
              goto LAB_00957244;
            }
            lVar46 = lVar46 + 3;
          } while (lVar46 != 0x80001);
          lVar46 = 0;
LAB_00957244:
          uVar29 = (uint)lVar46;
          if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
            uVar29 = local_290 + ~uVar18;
          }
          if (0 < (int)uVar29) {
            (**(code **)(local_80 + 0x18))(&local_80);
            memcpy(puVar45 + uVar18,local_78,(ulong)uVar29);
            puVar45[(int)(uVar29 + uVar18)] = 0;
          }
          uVar18 = uVar30;
          if (*(uint *)(param_1 + 0xdc8) <= uVar30) {
            uVar18 = 0;
          }
          lVar46 = *(long *)(param_1 + 0xdd0) + (ulong)uVar18 * 0x98;
          puVar47 = *(undefined1 **)(lVar46 + 8);
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          puVar45 = local_298;
          if (puVar47 != local_298) {
            (**(code **)(local_2a0 + 0x18))(&local_2a0);
            lVar31 = 0;
            do {
              if (local_298[lVar31] == '\0') goto LAB_0095731c;
              if (local_298[lVar31 + 1] == '\0') {
                lVar31 = lVar31 + 1;
                goto LAB_0095731c;
              }
              if (local_298[lVar31 + 2] == '\0') {
                lVar31 = lVar31 + 2;
                goto LAB_0095731c;
              }
              lVar31 = lVar31 + 3;
            } while (lVar31 != 0x80001);
            lVar31 = 0;
LAB_0095731c:
            iVar42 = *(int *)(lVar46 + 0x10);
            iVar20 = (int)lVar31;
            if (iVar42 <= (int)lVar31) {
              iVar20 = iVar42 + -1;
            }
            memcpy(puVar47,puVar45,(long)iVar20);
            puVar47[iVar20] = 0;
          }
          if ((local_1f0 >> 1 & 1) != 0) {
            uVar44 = FUN_03f2d924(&local_1f8);
            if ((uVar44 & 1) != 0) {
              puVar43 = (undefined8 *)FUN_03f2d7f0(&local_1f8);
              if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar20 != 0)) {
                *(undefined **)PTR_DAT_04bb4be0 = puVar8;
                __cxa_guard_release(PTR_DAT_04bb4be8);
              }
              if (puVar43 != (undefined8 *)0x0) {
                uVar44 = (**(code **)*puVar43)(puVar43,PTR_DAT_04bb4be0);
                if ((uVar44 & 1) != 0) {
                  puVar43 = (undefined8 *)puVar43[6];
                  if (puVar43 != (undefined8 *)0x0) {
                    uVar18 = uVar30;
                    if (*(uint *)(param_1 + 0xdc8) <= uVar30) {
                      uVar18 = 0;
                    }
                    plVar22 = (long *)(*(long *)(param_1 + 0xdd0) + (ulong)uVar18 * 0x98);
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    local_78 = (undefined1 *)plVar22[1];
                    local_70[0] = 0;
                    plVar22 = (long *)*puVar43;
                    local_80 = PTR_DAT_04bb2020 + 0x10;
                    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
                       (iVar20 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar20 != 0)) {
                      *(undefined **)PTR_DAT_04bb2860 = puVar9;
                      __cxa_guard_release(PTR_DAT_04bb2868);
                    }
                    uVar44 = (**(code **)*plVar22)(plVar22,PTR_DAT_04bb2860);
                    if ((uVar44 & 1) == 0) {
                      plVar22 = (long *)0x0;
                    }
                    puVar43 = (undefined8 *)
                              (**(code **)(*plVar22 + 0x30))(plVar22,&local_80,local_70);
                    if (puVar43 != (undefined8 *)0x0) {
                      uVar18 = uVar30;
                      if (*(uint *)(param_1 + 0xe10) <= uVar30) {
                        uVar18 = 0;
                      }
                      lVar46 = *(long *)(param_1 + 0xe18) + (ulong)uVar18 * 0x28;
                      uVar11 = *puVar43;
                      uVar12 = puVar43[1];
                      *(undefined4 *)(lVar46 + 0x18) = *(undefined4 *)(puVar43 + 2);
                      *(undefined8 *)(lVar46 + 8) = uVar11;
                      *(undefined8 *)(lVar46 + 0x10) = uVar12;
                      lVar46 = *plVar23;
                      sVar14 = (ulong)(uint)(*(int *)(puVar43 + 1) * *(int *)((long)puVar43 + 4)) <<
                               2;
                      if (lVar46 == 0) {
                        pvVar41 = malloc(sVar14);
                      }
                      else {
                        plVar23 = *(long **)(param_1 + 0xe08);
                        if (plVar23 == (long *)0x0) {
                          lVar31 = nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                          plVar23 = (long *)(lVar46 + 8);
                          if (lVar31 != 0) {
                            plVar23 = (long *)(lVar31 + 0xa8);
                          }
                          plVar23 = (long *)*plVar23;
                          pvVar41 = (void *)0x0;
                          if (plVar23 == (long *)0x0) goto LAB_009574bc;
                        }
                        pvVar41 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,sVar14,8);
                      }
LAB_009574bc:
                      uVar18 = uVar30;
                      if (*(uint *)(param_1 + 0xe10) <= uVar30) {
                        uVar18 = 0;
                      }
                      *(void **)(*(long *)(param_1 + 0xe18) + (ulong)uVar18 * 0x28 + 0x20) = pvVar41
                      ;
                      if (*(int *)(puVar43 + 1) * *(int *)((long)puVar43 + 4) != 0) {
                        lVar46 = 0;
                        uVar18 = uVar30;
                        if (*(uint *)(param_1 + 0xe10) <= uVar30) {
                          uVar18 = 0;
                        }
                        lVar31 = *(long *)(*(long *)(param_1 + 0xe18) + (ulong)uVar18 * 0x28 + 0x20)
                        ;
                        puVar36 = (undefined4 *)((long)puVar43 + 0x44);
                        do {
                          *(undefined4 *)(lVar31 + lVar46 * 4) = *puVar36;
                          lVar46 = lVar46 + 1;
                          puVar36 = puVar36 + 0xd;
                        } while ((uint)lVar46 <
                                 (uint)(*(int *)(puVar43 + 1) * *(int *)((long)puVar43 + 4)));
                      }
                      nn::os::LockMutex(pMVar2);
                      (**(code **)(*plVar40 + 0x38))(plVar40,&local_208);
                      nn::os::UnlockMutex(pMVar2);
                      plVar23 = (long *)PTR_DAT_04bb2698;
                    }
                  }
                }
              }
            }
          }
          if ((local_1f0 >> 1 & 1) != 0) {
            local_1f0 = local_1f0 & 0xf8 | 4;
            if (local_1d0 == 0) {
              if (local_1e8 != 0) goto LAB_00957598;
            }
            else {
              FUN_03f45838(&puStack_1e0);
              if (local_1e8 == 0) {
                local_1ec = 0xe;
              }
              else {
LAB_00957598:
                if (*(long *)PTR_DAT_04bb49b8 != 0) {
                  FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,&local_1f8);
                }
              }
            }
          }
          FUN_03f457c4(&puStack_1e0);
          uVar30 = uVar30 + 1;
        } while ((int)uVar30 < *(int *)(param_1 + 0xdd8));
      }
    }
  }
  uVar30 = *(uint *)(param_1 + 0xe20);
  if (0 < (int)uVar30) {
    uVar18 = 0;
    do {
      lVar46 = *(long *)(param_1 + 0xe28);
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0x20);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
        lVar46 = *(long *)(param_1 + 0xe28);
      }
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0x48);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
        lVar46 = *(long *)(param_1 + 0xe28);
      }
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0x70);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
        lVar46 = *(long *)(param_1 + 0xe28);
      }
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0x98);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
        lVar46 = *(long *)(param_1 + 0xe28);
      }
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0xc0);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
        lVar46 = *(long *)(param_1 + 0xe28);
      }
      uVar29 = uVar18;
      if (uVar30 <= uVar18) {
        uVar29 = 0;
      }
      puVar43 = (undefined8 *)(lVar46 + (ulong)uVar29 * 0xf0 + 0xe8);
      pvVar41 = (void *)*puVar43;
      if (pvVar41 != (void *)0x0) {
        if (*plVar23 == 0) {
          free(pvVar41);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*plVar23,pvVar41);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar41);
          }
        }
        *puVar43 = 0;
        uVar30 = *(uint *)(param_1 + 0xe20);
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)uVar30);
  }
  iVar20 = *(int *)(*(long *)PTR_DAT_04bb46d0 + 0x1c8);
  if ((0 < iVar20) ||
     (((lVar46 = *(long *)(*(long *)PTR_DAT_04bb46d0 + 0xb8), lVar46 != 0 &&
       (piVar26 = *(int **)(lVar46 + 8), piVar26 != (int *)0x0)) && (iVar20 = *piVar26, 0 < iVar20))
     )) {
    iVar42 = 0;
    pcVar10 = (char *)((long)&local_188 + 4);
    uVar30 = 0;
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    puVar4 = PTR_DAT_04bdf0c8 + 0x10;
    puVar5 = PTR_DAT_04bdf1d8 + 0x10;
    puVar6 = PTR_DAT_04bb2020 + 0x10;
    puVar7 = PTR_DAT_04bb4448 + 0x10;
    puVar8 = PTR_DAT_04bb2e90 + 0x10;
    puVar9 = PTR_DAT_04bb2870 + 0x10;
    plVar23 = (long *)PTR_DAT_04bb46d0;
    do {
      uVar18 = FUN_017bfae0(*plVar23,iVar42);
      uVar44 = FUN_017c0910(*plVar23,uVar18);
      if ((uVar44 & 1) != 0) {
        uVar29 = uVar30;
        if (*(uint *)(param_1 + 0xde0) <= uVar30) {
          uVar29 = 0;
        }
        *(short *)(*(long *)(param_1 + 0xde8) + (long)(int)uVar29 * 2) = (short)uVar18;
        lVar46 = *plVar23;
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar46 + 0x200);
        if ((uVar18 < *(uint *)(lVar46 + 0x1e0)) &&
           (puVar25 = *(uint **)(*(long *)(lVar46 + 0x1e8) + (long)(int)uVar18 * 8),
           puVar25 != (uint *)0x0)) {
          uVar18 = *puVar25;
          if (uVar18 != 0) {
            cVar27 = *PTR_DAT_04bb5c58;
            do {
              puVar16 = PTR_DAT_04bb5c60;
              if (cVar27 == '\0') {
                cVar27 = '\x01';
                *(undefined8 *)PTR_DAT_04bb5c60 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                uVar18 = *puVar25;
                *PTR_DAT_04bb5c58 = 1;
              }
              else {
                uVar29 = *(uint *)(PTR_DAT_04bb5c60 + 0x2c);
                if (-1 < (int)uVar29) {
                  puVar47 = (undefined1 *)((ulong)uVar29 + (long)puVar25);
                  goto LAB_00957a74;
                }
                if (uVar29 != 0xffffffff) break;
              }
              puVar15 = (uint *)(ulong)uVar18;
              puVar47 = (undefined1 *)0x0;
              if ((puVar15 == (uint *)0x0) || (puVar47 = (undefined1 *)0x0, puVar25 == puVar15))
              goto LAB_00957a74;
              lVar46 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
                lVar46 = 0x1c;
              }
              lVar46 = (long)puVar25 + (lVar46 - (long)puVar15);
              puVar47 = (undefined1 *)0x0;
              if (lVar46 == 0) goto LAB_00957a74;
              uVar44 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
              *(undefined4 *)(PTR_DAT_04bb5c60 + 0x2c) = 0xfffffffe;
              if (uVar44 == 0) break;
              piVar26 = (int *)(lVar46 + 4);
              while (piVar26[-1] != 0x4b9c4229) {
                piVar26 = piVar26 + 2;
                uVar44 = uVar44 - 1;
                if (uVar44 == 0) goto LAB_00957a70;
              }
              iVar21 = 0;
              if (*piVar26 != -1) {
                iVar21 = *piVar26;
              }
              *(int *)(PTR_DAT_04bb5c60 + 0x2c) = iVar21;
              uVar18 = *puVar25;
              if (uVar18 == 0) break;
            } while( true );
          }
LAB_00957a70:
          puVar47 = (undefined1 *)0x0;
LAB_00957a74:
          puVar45 = *(undefined1 **)PTR_PTR_04bb5c50;
          if (puVar47 != (undefined1 *)0x0) {
            puVar45 = puVar47;
          }
        }
        else {
          puVar45 = (undefined1 *)0x0;
        }
        lVar46 = 0;
        local_188 = CONCAT35(local_188._5_3_,0x80);
        local_105 = 0;
        local_198 = puVar3;
        local_190 = pcVar10;
        do {
          if (*(char *)((long)&local_188 + lVar46 + 4) == '\0') goto LAB_00957af0;
          if (*(char *)((long)&local_188 + lVar46 + 5) == '\0') {
            lVar46 = lVar46 + 1;
            goto LAB_00957af0;
          }
          if (*(char *)((long)&local_188 + lVar46 + 6) == '\0') {
            lVar46 = lVar46 + 2;
            goto LAB_00957af0;
          }
          lVar46 = lVar46 + 3;
        } while (lVar46 != 0x80001);
        lVar46 = 0;
LAB_00957af0:
        uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
        lVar46 = 0;
        do {
          if (puVar45[lVar46] == '\0') goto LAB_00957b3c;
          if (puVar45[lVar46 + 1] == '\0') {
            lVar46 = lVar46 + 1;
            goto LAB_00957b3c;
          }
          if (puVar45[lVar46 + 2] == '\0') {
            lVar46 = lVar46 + 2;
            goto LAB_00957b3c;
          }
          lVar46 = lVar46 + 3;
        } while (lVar46 != 0x80001);
        lVar46 = 0;
LAB_00957b3c:
        uVar29 = (uint)lVar46;
        if ((int)(0x80 - uVar18) <= (int)(uint)lVar46) {
          uVar29 = 0x7f - uVar18;
        }
        if (0 < (int)uVar29) {
          memcpy(pcVar10 + uVar18,puVar45,(ulong)uVar29);
          pcVar17 = local_190;
          pcVar10[(int)(uVar29 + uVar18)] = '\0';
          if (*local_190 != '\0') {
            local_298 = &DAT_040b50da;
            local_2a0 = puVar6;
            (**(code **)(local_198 + 0x18))(&local_198);
            lVar46 = 0;
            do {
              if (local_190[lVar46] == '\0') goto LAB_00957c04;
              if (local_190[lVar46 + 1] == '\0') {
                lVar46 = lVar46 + 1;
                goto LAB_00957c04;
              }
              if (local_190[lVar46 + 2] == '\0') {
                lVar46 = lVar46 + 2;
                goto LAB_00957c04;
              }
              lVar46 = lVar46 + 3;
            } while (lVar46 != 0x80001);
            lVar46 = 0;
LAB_00957c04:
            uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
            (**(code **)(local_2a0 + 0x18))(&local_2a0);
            lVar46 = 0;
            do {
              if (local_298[lVar46] == '\0') goto LAB_00957c5c;
              if (local_298[lVar46 + 1] == '\0') {
                lVar46 = lVar46 + 1;
                goto LAB_00957c5c;
              }
              if (local_298[lVar46 + 2] == '\0') {
                lVar46 = lVar46 + 2;
                goto LAB_00957c5c;
              }
              lVar46 = lVar46 + 3;
            } while (lVar46 != 0x80001);
            lVar46 = 0;
LAB_00957c5c:
            uVar29 = (uint)lVar46;
            if ((int)((int)local_188 - uVar18) <= (int)(uint)lVar46) {
              uVar29 = (int)local_188 + ~uVar18;
            }
            if (0 < (int)uVar29) {
              (**(code **)(local_2a0 + 0x18))(&local_2a0);
              memcpy(pcVar17 + uVar18,local_298,(ulong)uVar29);
              pcVar17[(int)(uVar29 + uVar18)] = '\0';
            }
            local_208 = 0;
            local_200 = 0;
            local_1ec = 0;
            local_1f0 = 1;
            local_1e8 = 0;
            local_1d8 = 0;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0xffffffff;
            local_1f8 = puVar4;
            puStack_1e0 = puVar5;
            nn::os::LockMutex(pMVar2);
            (**(code **)(*plVar40 + 0x30))(plVar40,&local_208,&local_198,PTR_PTR_04bb2238);
            nn::os::UnlockMutex(pMVar2);
            if (((local_1f0 >> 1 & 1) != 0) &&
               (uVar44 = FUN_03f2d924(&local_1f8), (uVar44 & 1) != 0)) {
              puVar43 = (undefined8 *)FUN_03f2d7f0(&local_1f8);
              if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar21 != 0)) {
                *(undefined **)PTR_DAT_04bb4be0 = puVar7;
                __cxa_guard_release(PTR_DAT_04bb4be8);
              }
              if (((puVar43 != (undefined8 *)0x0) &&
                  (uVar44 = (**(code **)*puVar43)(puVar43,PTR_DAT_04bb4be0), (uVar44 & 1) != 0)) &&
                 (puVar43 = (undefined8 *)puVar43[6], puVar43 != (undefined8 *)0x0)) {
                uVar44 = 0;
                do {
                  local_20d = 0;
                  local_290 = 0x80;
                  local_298 = local_28c;
                  if (local_28c != puVar45) {
                    lVar46 = 0;
                    do {
                      if (puVar45[lVar46] == '\0') {
LAB_00957df8:
                        iVar21 = (int)lVar46;
joined_r0x00957dfc:
                        if (0x7f < iVar21) {
                          iVar21 = 0x7f;
                        }
                        goto LAB_00957e04;
                      }
                      if (puVar45[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_00957df8;
                      }
                      if (puVar45[lVar46 + 2] == '\0') {
                        iVar21 = (int)lVar46 + 2;
                        goto joined_r0x00957dfc;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    iVar21 = 0;
LAB_00957e04:
                    local_2a0 = puVar8;
                    memcpy(local_28c,puVar45,(long)iVar21);
                    local_28c[iVar21] = 0;
                  }
                  puVar47 = local_298;
                  local_2a0 = PTR_DAT_04bb2d88 + 0x10;
                  if (uVar44 < 4) {
                    lVar46 = 0;
                    local_1b0 = &DAT_040b5039;
                    local_298[(long)local_290 + -1] = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_00957f8c;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_00957f8c;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_00957f8c;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_00957f8c:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    (**(code **)(PTR_DAT_04bb2020 + 0x28))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_00957fec;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_00957fec;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_00957fec;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_00957fec:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                    puVar47 = local_298;
                    local_1b0 = (&PTR_DAT_0492a260)[uVar44];
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    (**(code **)(local_2a0 + 0x18))(&local_2a0);
                    lVar46 = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_009580ac;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_009580ac;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_009580ac;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_009580ac:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    (**(code **)(local_1b8 + 0x18))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_0095810c;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_0095810c;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_0095810c;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_0095810c:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                    puVar47 = local_298;
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    local_1b0 = &DAT_0405c04e;
                    (**(code **)(local_2a0 + 0x18))(&local_2a0);
                    lVar46 = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_009581cc;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_009581cc;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_009581cc;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_009581cc:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    (**(code **)(local_1b8 + 0x18))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_0095822c;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_0095822c;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_0095822c;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_0095822c:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                  }
                  else if (uVar44 == 4) {
                    lVar46 = 0;
                    local_1b0 = &DAT_0405c04e;
                    local_298[(long)local_290 + -1] = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_00958294;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_00958294;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_00958294;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_00958294:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    (**(code **)(PTR_DAT_04bb2020 + 0x28))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_0095834c;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_0095834c;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_0095834c;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_0095834c:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                  }
                  else {
                    lVar46 = 0;
                    local_1b0 = "_Scale";
                    local_298[(long)local_290 + -1] = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_009582ec;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_009582ec;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_009582ec;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_009582ec:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    (**(code **)(PTR_DAT_04bb2020 + 0x28))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_009583a0;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_009583a0;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_009583a0;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_009583a0:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                    puVar47 = local_298;
                    local_1b8 = PTR_DAT_04bb2020 + 0x10;
                    local_1b0 = &DAT_0405c04e;
                    (**(code **)(local_2a0 + 0x18))(&local_2a0);
                    lVar46 = 0;
                    do {
                      if (local_298[lVar46] == '\0') goto LAB_0095845c;
                      if (local_298[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_0095845c;
                      }
                      if (local_298[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_0095845c;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_0095845c:
                    uVar18 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                    (**(code **)(local_1b8 + 0x18))(&local_1b8);
                    lVar46 = 0;
                    do {
                      if (local_1b0[lVar46] == '\0') goto LAB_009584bc;
                      if (local_1b0[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_009584bc;
                      }
                      if (local_1b0[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_009584bc;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_009584bc:
                    uVar29 = (uint)lVar46;
                    if ((int)(local_290 - uVar18) <= (int)(uint)lVar46) {
                      uVar29 = local_290 + ~uVar18;
                    }
                    if (0 < (int)uVar29) {
                      (**(code **)(local_1b8 + 0x18))(&local_1b8);
                      memcpy(puVar47 + uVar18,local_1b0,(ulong)uVar29);
                      puVar47[(int)(uVar29 + uVar18)] = 0;
                    }
                  }
                  local_80 = (undefined *)0x0;
                  plVar23 = (long *)*puVar43;
                  (**(code **)(local_2a0 + 0x18))(&local_2a0);
                  local_1b8 = PTR_DAT_04bb2020 + 0x10;
                  local_1b0 = local_298;
                  if (((*PTR_DAT_04bb2868 & 1) == 0) &&
                     (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar21 != 0)) {
                    *(undefined **)PTR_DAT_04bb2860 = puVar9;
                    __cxa_guard_release(PTR_DAT_04bb2868);
                  }
                  uVar34 = (**(code **)*plVar23)(plVar23,PTR_DAT_04bb2860);
                  if ((uVar34 & 1) == 0) {
                    plVar23 = (long *)0x0;
                  }
                  puVar24 = (undefined8 *)
                            (**(code **)(*plVar23 + 0x30))(plVar23,&local_1b8,&local_80);
                  if (puVar24 != (undefined8 *)0x0) {
                    uVar18 = uVar30;
                    if (*(uint *)(param_1 + 0xe20) <= uVar30) {
                      uVar18 = 0;
                    }
                    lVar46 = *(long *)(param_1 + 0xe28) + (long)(int)uVar18 * 0xf0 + uVar44 * 0x28;
                    uVar11 = *puVar24;
                    uVar12 = puVar24[1];
                    *(undefined4 *)(lVar46 + 0x18) = *(undefined4 *)(puVar24 + 2);
                    *(undefined8 *)(lVar46 + 8) = uVar11;
                    *(undefined8 *)(lVar46 + 0x10) = uVar12;
                    sVar14 = (ulong)(uint)(*(int *)(puVar24 + 1) * *(int *)((long)puVar24 + 4)) << 2
                    ;
                    lVar46 = *(long *)PTR_DAT_04bb2698;
                    if (lVar46 == 0) {
                      pvVar41 = malloc(sVar14);
                    }
                    else {
                      plVar23 = *(long **)(param_1 + 0xe08);
                      if (plVar23 == (long *)0x0) {
                        lVar31 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar23 = (long *)(lVar46 + 8);
                        if (lVar31 != 0) {
                          plVar23 = (long *)(lVar31 + 0xa8);
                        }
                        plVar23 = (long *)*plVar23;
                        pvVar41 = (void *)0x0;
                        if (plVar23 == (long *)0x0) goto LAB_00958638;
                      }
                      pvVar41 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,sVar14,8);
                    }
LAB_00958638:
                    uVar18 = uVar30;
                    if (*(uint *)(param_1 + 0xe20) <= uVar30) {
                      uVar18 = 0;
                    }
                    *(void **)(*(long *)(param_1 + 0xe28) + (long)(int)uVar18 * 0xf0 + uVar44 * 0x28
                              + 0x20) = pvVar41;
                    if (*(int *)(puVar24 + 1) * *(int *)((long)puVar24 + 4) != 0) {
                      lVar46 = 0;
                      uVar18 = uVar30;
                      if (*(uint *)(param_1 + 0xe20) <= uVar30) {
                        uVar18 = 0;
                      }
                      lVar31 = *(long *)(*(long *)(param_1 + 0xe28) + (long)(int)uVar18 * 0xf0 +
                                         uVar44 * 0x28 + 0x20);
                      puVar36 = (undefined4 *)((long)puVar24 + 0x44);
                      do {
                        *(undefined4 *)(lVar31 + lVar46 * 4) = *puVar36;
                        lVar46 = lVar46 + 1;
                        puVar36 = puVar36 + 0xd;
                      } while ((uint)lVar46 <
                               (uint)(*(int *)(puVar24 + 1) * *(int *)((long)puVar24 + 4)));
                    }
                  }
                  uVar44 = uVar44 + 1;
                } while (uVar44 != 6);
                nn::os::LockMutex(pMVar2);
                (**(code **)(*plVar40 + 0x38))(plVar40,&local_208);
                nn::os::UnlockMutex(pMVar2);
                uVar30 = uVar30 + 1;
              }
            }
            plVar23 = (long *)PTR_DAT_04bb46d0;
            if ((local_1f0 >> 1 & 1) != 0) {
              local_1f0 = local_1f0 & 0xf8 | 4;
              if (local_1d0 == 0) {
                if (local_1e8 != 0) goto LAB_00958734;
              }
              else {
                FUN_03f45838(&puStack_1e0);
                if (local_1e8 == 0) {
                  local_1ec = 0xe;
                }
                else {
LAB_00958734:
                  if (*(long *)PTR_DAT_04bb49b8 != 0) {
                    FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,&local_1f8);
                  }
                }
              }
            }
            FUN_03f457c4(&puStack_1e0);
          }
        }
      }
      iVar42 = iVar42 + 1;
    } while (iVar42 != iVar20);
  }
  return;
}

