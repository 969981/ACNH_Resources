
void FUN_0095b030(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined *local_180;
  char *pcStack_178;
  
  puVar4 = PTR_DAT_04bb2110;
  *(undefined1 *)(param_1 + 0x4b8) = 1;
  puVar2 = PTR_DAT_04bb5c78;
  if (*(int *)(*(long *)puVar4 + 8) == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)**(undefined8 **)(*(long *)puVar4 + 0x10);
  }
  uVar19 = 0;
  pMVar1 = (MutexType *)(plVar16 + 0x4d);
  lVar17 = *(long *)PTR_DAT_04bb5008;
  do {
    puVar4 = PTR_DAT_04bb2020;
    uVar6 = *(uint *)(lVar17 + 0x17b8);
    if ((int)uVar6 < 1) {
      uVar13 = 0;
      if (*(long *)(lVar17 + 0x16a8) != 0) {
        puVar10 = *(uint **)(*(long *)(lVar17 + 0x16a8) + 8);
        uVar13 = 0;
        if (puVar10 != (uint *)0x0) {
          uVar13 = (ulong)*puVar10;
        }
      }
      if (uVar13 <= uVar19) break;
      if (0 < (int)uVar6) goto LAB_0095b164;
      if ((((*(long *)(lVar17 + 0x16a8) != 0) &&
           (puVar10 = *(uint **)(*(long *)(lVar17 + 0x16a8) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(lVar17 + 0x16c0) <= uVar19 ||
           (*(char *)(*(long *)(lVar17 + 0x16c8) + uVar19) != '\0')))) &&
         (((uVar19 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * (int)uVar19 + (uint)(ushort)puVar10[2] * 8 + iVar12)
                          + (long)puVar10);
        if (puVar10 == (uint *)0x0) goto LAB_0095b124;
        goto LAB_0095b188;
      }
    }
    else {
      if (uVar6 <= uVar19) break;
LAB_0095b164:
      if (uVar19 < uVar6) {
        uVar13 = uVar19 & 0xffffffff;
        if (*(uint *)(lVar17 + 0x17a8) <= uVar19) {
          uVar13 = 0;
        }
        puVar10 = *(uint **)(*(long *)(lVar17 + 0x17b0) + uVar13 * 8);
        if (puVar10 != (uint *)0x0) {
LAB_0095b188:
          if (*puVar10 != 0) {
            cVar11 = *PTR_DAT_04bb5c70;
            do {
              puVar4 = PTR_DAT_04bb5c70;
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *puVar4 = 1;
              }
              else {
                uVar6 = *(uint *)(puVar2 + 0x14);
                if (-1 < (int)uVar6) {
                  lVar8 = (ulong)uVar6 + (long)puVar10;
                  goto LAB_0095b0b4;
                }
                if (uVar6 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar10;
              lVar8 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_0095b0b4;
              lVar8 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar5 = (long)puVar10 + (lVar8 - (long)puVar14);
              if (lVar5 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
              *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
              lVar8 = 0;
              if (uVar13 == 0) goto LAB_0095b0b4;
              piVar15 = (int *)(lVar5 + 4);
              while (piVar15[-1] != 0x39b5a93d) {
                piVar15 = piVar15 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) {
                  lVar8 = 0;
                  goto LAB_0095b0b4;
                }
              }
              iVar12 = 0;
              if (*piVar15 != -1) {
                iVar12 = *piVar15;
              }
              *(int *)(puVar2 + 0x14) = iVar12;
            } while (*puVar10 != 0);
          }
          lVar8 = 0;
LAB_0095b0b4:
          lVar5 = *(long *)PTR_PTR_04bb5c68;
          if (lVar8 != 0) {
            lVar5 = lVar8;
          }
          FUN_006e9528(&local_180,"%s_pbc",lVar5);
          uVar13 = uVar19 & 0xffffffff;
          lVar8 = *(long *)(param_1 + 0xdb0);
          if (*(uint *)(param_1 + 0xda8) <= uVar19) {
            uVar13 = 0;
          }
          nn::os::LockMutex(pMVar1);
          (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + uVar13 * 0x50,&local_180,PTR_PTR_04bb2238);
          nn::os::UnlockMutex(pMVar1);
        }
      }
    }
LAB_0095b124:
    uVar19 = uVar19 + 1;
  } while( true );
  if (*(long *)(param_1 + 0x4e0) != 0) goto LAB_0095b550;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  pcStack_178 = &DAT_040d9943;
  plVar7 = (long *)FUN_038c6d48(0x770,&local_180,0,8,1,0);
  *(long **)(param_1 + 0x4e0) = plVar7;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar9 = malloc(0x378);
joined_r0x0095b8b8:
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar9 + 2) = 0;
      *(undefined4 *)((long)puVar9 + 0x24) = 0;
      puVar9[1] = 0;
      puVar2 = PTR_DAT_04bdf0c8;
      *puVar9 = 0xb;
      puVar3 = PTR_DAT_04bdf1d8;
      *(undefined1 *)(puVar9 + 4) = 1;
      puVar2 = puVar2 + 0x10;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar3 = puVar3 + 0x10;
      puVar9[3] = puVar2;
      puVar9[9] = 0;
      puVar9[0xb] = 0;
      *(undefined1 *)(puVar9 + 0xc) = 0;
      puVar9[0xd] = puVar2;
      *(undefined4 *)(puVar9 + 10) = 0xffffffff;
      *(undefined1 *)(puVar9 + 0xe) = 1;
      *(undefined4 *)((long)puVar9 + 0x74) = 0;
      puVar9[0x11] = 0;
      *(undefined4 *)(puVar9 + 0x14) = 0xffffffff;
      puVar9[0x15] = 0;
      *(undefined1 *)(puVar9 + 0x16) = 0;
      puVar9[0x17] = puVar2;
      *(undefined1 *)(puVar9 + 0x18) = 1;
      *(undefined4 *)((long)puVar9 + 0xc4) = 0;
      puVar9[0x1d] = 0;
      *(undefined4 *)(puVar9 + 0x1e) = 0xffffffff;
      puVar9[0x1f] = 0;
      *(undefined1 *)(puVar9 + 0x20) = 0;
      puVar9[0x21] = puVar2;
      *(undefined1 *)(puVar9 + 0x22) = 1;
      *(undefined4 *)((long)puVar9 + 0x114) = 0;
      puVar9[0x25] = 0;
      *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
      puVar9[0x29] = 0;
      *(undefined1 *)(puVar9 + 0x2a) = 0;
      puVar9[0x2b] = puVar2;
      *(undefined1 *)(puVar9 + 0x2c) = 1;
      *(undefined4 *)((long)puVar9 + 0x164) = 0;
      puVar9[0x31] = 0;
      *(undefined4 *)(puVar9 + 0x32) = 0xffffffff;
      puVar9[0x33] = 0;
      *(undefined1 *)(puVar9 + 0x34) = 0;
      puVar9[0x35] = puVar2;
      *(undefined1 *)(puVar9 + 0x36) = 1;
      *(undefined4 *)((long)puVar9 + 0x1b4) = 0;
      puVar9[0x39] = 0;
      *(undefined4 *)(puVar9 + 0x3c) = 0xffffffff;
      puVar9[0x3d] = 0;
      *(undefined1 *)(puVar9 + 0x3e) = 0;
      puVar9[0x3f] = puVar2;
      *(undefined1 *)(puVar9 + 0x40) = 1;
      *(undefined4 *)((long)puVar9 + 0x204) = 0;
      puVar9[0x41] = 0;
      puVar9[0x42] = puVar3;
      puVar9[0x45] = 0;
      puVar9[0x44] = 0;
      puVar9[0x43] = 0;
      *(undefined4 *)(puVar9 + 0x46) = 0xffffffff;
      puVar9[0x47] = 0;
      *(undefined1 *)(puVar9 + 0x48) = 0;
      puVar9[0x49] = puVar2;
      *(undefined1 *)(puVar9 + 0x4a) = 1;
      *(undefined4 *)((long)puVar9 + 0x254) = 0;
      puVar9[0x4b] = 0;
      puVar9[0x4c] = puVar3;
      puVar9[0x4f] = 0;
      puVar9[0x4e] = 0;
      puVar9[0x4d] = 0;
      *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
      puVar9[0x51] = 0;
      *(undefined1 *)(puVar9 + 0x52) = 0;
      puVar9[0x53] = puVar2;
      *(undefined1 *)(puVar9 + 0x54) = 1;
      *(undefined4 *)((long)puVar9 + 0x2a4) = 0;
      puVar9[0x55] = 0;
      puVar9[0x56] = puVar3;
      puVar9[0x59] = 0;
      puVar9[0x58] = 0;
      puVar9[0x57] = 0;
      *(undefined4 *)(puVar9 + 0x5a) = 0xffffffff;
      puVar9[0x5b] = 0;
      *(undefined1 *)(puVar9 + 0x5c) = 0;
      puVar9[0x5d] = puVar2;
      *(undefined1 *)(puVar9 + 0x5e) = 1;
      *(undefined4 *)((long)puVar9 + 0x2f4) = 0;
      puVar9[0x5f] = 0;
      puVar9[0x60] = puVar3;
      puVar9[99] = 0;
      puVar9[0x62] = 0;
      puVar9[0x61] = 0;
      *(undefined4 *)(puVar9 + 100) = 0xffffffff;
      puVar9[0x65] = 0;
      *(undefined1 *)(puVar9 + 0x66) = 0;
      puVar9[0x67] = puVar2;
      *(undefined1 *)(puVar9 + 0x68) = 1;
      *(undefined4 *)((long)puVar9 + 0x344) = 0;
      puVar9[0x69] = 0;
      puVar9[0x6a] = puVar3;
      puVar9[0x6d] = 0;
      puVar9[0x6c] = 0;
      puVar9[0x6b] = 0;
      *(undefined4 *)(puVar9 + 0x6e) = 0xffffffff;
      puVar9[5] = 0;
      puVar9[6] = puVar3;
      puVar9[0xf] = 0;
      puVar9[0x10] = puVar3;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x19] = 0;
      puVar9[0x1a] = puVar3;
      puVar9[0x1b] = 0;
      puVar9[0x1c] = 0;
      puVar9[0x23] = 0;
      puVar9[0x24] = puVar3;
      puVar9[0x26] = 0;
      puVar9[0x27] = 0;
      puVar9[0x2d] = 0;
      puVar9[0x2e] = puVar3;
      puVar9[0x2f] = 0;
      puVar9[0x30] = 0;
      puVar9[0x37] = 0;
      puVar9[0x38] = puVar3;
      puVar9[0x3a] = 0;
      puVar9[0x3b] = 0;
      *(undefined4 *)(param_1 + 0x4c0) = 0xb;
      *(undefined8 **)(param_1 + 0x4c8) = puVar9 + 1;
    }
  }
  else {
    if (plVar7 != (long *)0x0) {
LAB_0095b340:
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x378,8);
      goto joined_r0x0095b8b8;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar17 + 8);
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0095b340;
  }
  (**(code **)(**(long **)(param_1 + 0x4e0) + 0x28))();
LAB_0095b550:
  uVar18 = *(undefined8 *)(param_1 + 0x4c8);
  puVar4 = puVar4 + 0x10;
  pcStack_178 = s_StrcWherearenAirportA00_pbc_0492a290;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  puVar2 = PTR_PTR_04bb2238;
  (**(code **)(*plVar16 + 0x30))(plVar16,uVar18,&local_180,PTR_PTR_04bb2238);
  nn::os::UnlockMutex(pMVar1);
  uVar6 = *(uint *)(param_1 + 0x4c0);
  lVar17 = *(long *)(param_1 + 0x4c8);
  pcStack_178 = s_StrcWherearenCafeWoodDeckA00_pbc_0492a2ae;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar17 + (ulong)(1 < uVar6) * 0x50,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0xa0;
  if (*(uint *)(param_1 + 0x4c0) < 3) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenDJBooth_pbc_0492a2d1;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0xf0;
  if (*(uint *)(param_1 + 0x4c0) < 4) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenRockArch_pbc_0492a2ec;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0x140;
  if (*(uint *)(param_1 + 0x4c0) < 5) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenYaguraBefore_pbc_0492a308;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 400;
  if (*(uint *)(param_1 + 0x4c0) < 6) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenYagura00_pbc_0492a328;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0x1e0;
  if (*(uint *)(param_1 + 0x4c0) < 7) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenYagura01_pbc_0492a344;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0x230;
  if (*(uint *)(param_1 + 0x4c0) < 8) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenYagura02_pbc_0492a360;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0x280;
  if (*(uint *)(param_1 + 0x4c0) < 9) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenYagura03_pbc_0492a37c;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 0x2d0;
  if (*(uint *)(param_1 + 0x4c0) < 10) {
    lVar17 = 0;
  }
  pcStack_178 = s_WherearenObjRuinsFloor_pbc_0492a398;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar17 = 800;
  if (*(uint *)(param_1 + 0x4c0) < 0xb) {
    lVar17 = 0;
  }
  pcStack_178 = s_StrcWherearenBoatA00_pbc_0492a3b5;
  local_180 = puVar4;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar16 + 0x30))(plVar16,lVar8 + lVar17,&local_180,puVar2);
  nn::os::UnlockMutex(pMVar1);
  return;
}

