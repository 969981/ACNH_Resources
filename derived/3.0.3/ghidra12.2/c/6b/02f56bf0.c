
void FUN_02f56bf0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  byte bVar16;
  undefined *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  undefined2 local_a4;
  undefined4 local_a2;
  undefined1 uStack_9e;
  undefined3 uStack_9d;
  undefined4 local_98;
  undefined8 local_94;
  byte local_8c;
  undefined **local_88;
  ulong local_80 [3];
  undefined4 local_64;
  
  puVar14 = PTR_DAT_04bd0d40;
  local_80[1] = 0;
  local_80[2] = 0;
  local_88 = (undefined **)(PTR_DAT_04bd0d40 + 0x10);
  local_80[0] = 0;
  if (DAT_05ae7600 != 0) {
    uVar4 = FUN_038cb610(DAT_05ae7600,&local_88);
    local_80[0] = uVar4;
    if (uVar4 != 0) {
      if ((*(uint *)(uVar4 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = uVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(uVar4 + 0xb0));
      }
      plVar10 = (long *)(uVar4 + 0x70);
      lVar6 = *plVar10;
      iVar5 = *(int *)(uVar4 + 0x84);
      plVar1 = (long *)((long)local_80 + (long)iVar5 + -8);
      *plVar10 = (long)plVar1;
      *plVar1 = lVar6;
      *(long **)((long)local_80 + (long)iVar5) = plVar10;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(int *)(uVar4 + 0x80) = *(int *)(uVar4 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar13 = DAT_05373f28;
  local_88 = &PTR_FUN_04ae4a48;
  iVar5 = *(int *)(DAT_05373f28 + 0x108);
  if (iVar5 < 1) {
    nn::os::LockMutex((MutexType *)(DAT_05373f28 + 0xe8));
    *(undefined4 *)(lVar13 + 0x108) = 0;
    *(undefined4 *)(lVar13 + 0x78) = 0;
    if (*(long *)(lVar13 + 0x50) != lVar13 + 0x48) {
      lVar7 = (long)*(int *)(lVar13 + 0x5c);
      lVar6 = *(long *)(lVar13 + 0x50) - lVar7;
      lVar11 = (lVar13 + 0x48) - lVar7;
      if (0 < *(int *)(lVar13 + 0x7c)) {
        iVar5 = 0;
        do {
          if (iVar5 < *(int *)(lVar13 + 0x7c)) {
            *(long *)(*(long *)(lVar13 + 0x80) + (long)iVar5 * 8) = lVar6;
            iVar5 = *(int *)(lVar13 + 0x78) + 1;
            *(int *)(lVar13 + 0x78) = iVar5;
          }
          lVar6 = *(long *)(lVar6 + lVar7 + 8) + -lVar7;
        } while (lVar6 != lVar11);
        iVar5 = *(int *)(lVar13 + 0x108);
        goto LAB_02f56d70;
      }
      do {
        lVar6 = *(long *)(lVar6 + lVar7 + 8) + -lVar7;
      } while (lVar6 != lVar11);
    }
    iVar5 = 0;
  }
LAB_02f56d70:
  lVar6 = DAT_05373f28;
  *(int *)(lVar13 + 0x108) = iVar5 + 1;
  lVar13 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar13 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x78);
    if ((int)uVar2 < 1) {
      iVar5 = *(int *)(param_1 + 0x220);
      uVar15 = 0;
      if (iVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x228);
        iVar8 = 0;
        do {
          lVar7 = lVar6 + (long)iVar8 * 0x120;
          iVar8 = iVar8 + 1;
          *(undefined2 *)(lVar7 + 0xc) = 0;
          *(undefined2 *)(lVar7 + 0x22) = 0;
          *(undefined2 *)(lVar7 + 0x38) = 0;
          *(undefined2 *)(lVar7 + 0x100) = 0;
          *(undefined1 *)(lVar7 + 0xf8) = 0xff;
          *(undefined4 *)(lVar7 + 0xfc) = 0xffffffff;
          *(undefined8 *)(lVar7 + 0x108) = 0;
          *(undefined8 *)(lVar7 + 0xe0) = 0;
          *(undefined8 *)(lVar7 + 0xe8) = 0;
        } while (iVar5 != iVar8);
        uVar15 = 0;
      }
    }
    else {
      uVar15 = 0;
      do {
        uVar3 = *(uint *)(lVar6 + 0x78);
        if ((((int)uVar15 < (int)uVar3) && (CARRY4(uVar3,~uVar15))) &&
           (lVar7 = *(long *)(*(long *)(lVar6 + 0x80) + (long)(int)(uVar3 + ~uVar15) * 8),
           lVar7 != 0)) {
          uVar12 = *(undefined8 *)(lVar7 + 0x14);
          uVar3 = uVar15;
          if (*(uint *)(param_1 + 0x220) <= uVar15) {
            uVar3 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x228) + (ulong)uVar3 * 0x120;
          uVar9 = *(undefined8 *)(lVar7 + 0x1a);
          *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)(lVar7 + 0xc);
          *(undefined8 *)(lVar6 + 0x1a) = uVar9;
          *(undefined8 *)(lVar6 + 0x14) = uVar12;
          uVar12 = *(undefined8 *)(lVar7 + 0x22);
          uVar9 = *(undefined8 *)(lVar7 + 0x2a);
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
          *(undefined8 *)(lVar6 + 0x2a) = uVar9;
          *(undefined8 *)(lVar6 + 0x22) = uVar12;
          uVar12 = *(undefined8 *)(lVar7 + 0x38);
          uVar9 = *(undefined8 *)(lVar7 + 0x40);
          *(undefined8 *)(lVar6 + 0x46) = *(undefined8 *)(lVar7 + 0x46);
          *(undefined8 *)(lVar6 + 0x38) = uVar12;
          *(undefined8 *)(lVar6 + 0x40) = uVar9;
          memcpy((void *)(lVar6 + 0x5c),(void *)(lVar7 + 0x5c),0x82);
          *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar7 + 0x50);
          *(undefined4 *)(lVar6 + 0x54) = *(undefined4 *)(lVar7 + 0x54);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar7 + 0x58);
          *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar7 + 0xe0);
          *(undefined8 *)(lVar6 + 0xe8) = *(undefined8 *)(lVar7 + 0xe8);
          bVar16 = *(byte *)(lVar7 + 0xf8);
          if (7 < bVar16) {
            bVar16 = 0xff;
          }
          *(byte *)(lVar6 + 0xf8) = bVar16;
          *(undefined4 *)(lVar6 + 0xfc) = *(undefined4 *)(lVar7 + 0xfc);
          *(undefined2 *)(lVar6 + 0x100) = *(undefined2 *)(lVar7 + 0x100);
          *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(lVar7 + 0x108);
          lVar6 = DAT_05373f28;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
      puVar14 = PTR_DAT_04bd0d40;
      uVar15 = uVar2;
    }
    *(uint *)(param_1 + 0x278) = uVar15;
    local_98 = 0;
    local_94 = 0x60000000c;
    local_a4 = 0;
    local_b8 = PTR_DAT_04bc9c78 + 0x10;
    local_8c = *(byte *)(param_1 + 0x1f8);
    if (7 < local_8c) {
      local_8c = 0xff;
    }
    _local_a2 = CONCAT35(0x100,CONCAT14(*(undefined1 *)(param_1 + 0x280),0x1000001));
    local_b0 = uVar2;
    uStack_ac = uVar2;
    local_a8 = uVar2;
    FUN_03864290(lVar13,&local_b8);
    if ((int)uVar2 < 1) {
      local_64 = 0;
      if (1 < *(uint *)(lVar13 + 0x298)) {
        if (*(uint *)(lVar13 + 0x298) == 3) {
          if (*(int *)(lVar13 + 0x2e4) != 0) {
            FUN_03864b90(lVar13);
          }
        }
        else {
          *(undefined4 *)(lVar13 + 0x2e4) = 0;
          FUN_03ebb160(lVar13 + 0x290,3);
        }
      }
    }
    lVar6 = DAT_05373f28;
    *(undefined1 *)(param_1 + 0x280) = 0;
  }
  FUN_01d851d0(lVar6,&local_88);
  lVar13 = DAT_05373f28;
  local_88 = &PTR_FUN_04ae4a48;
  iVar5 = *(int *)(DAT_05373f28 + 0x108);
  iVar8 = iVar5 + -1;
  *(int *)(DAT_05373f28 + 0x108) = iVar8;
  if (iVar8 == 0 || iVar5 < 1) {
    *(undefined4 *)(lVar13 + 0x108) = 0;
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0xe8));
  }
  uVar4 = local_80[0];
  local_88 = (undefined **)(puVar14 + 0x10);
  if (1 < local_80[0]) {
    if ((*(uint *)(local_80[0] + 0xd0) & 1) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_80[0] + 0x90;
      nn::os::LockMutex((MutexType *)(local_80[0] + 0xb0));
    }
    lVar6 = (long)*(int *)(uVar4 + 0x84);
    plVar1 = (long *)((long)local_80 + lVar6 + -8);
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)((long)local_80 + lVar6);
    }
    if (*(long **)((long)local_80 + lVar6) != (long *)0x0) {
      **(long **)((long)local_80 + lVar6) = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)((long)local_80 + lVar6) = 0;
    *(int *)(uVar4 + 0x80) = *(int *)(uVar4 + 0x80) + -1;
    if (lVar13 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
    }
  }
  return;
}

