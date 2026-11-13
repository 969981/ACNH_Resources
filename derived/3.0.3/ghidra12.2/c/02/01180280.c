
undefined8 FUN_01180280(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long local_238 [32];
  undefined **local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  
  puVar3 = PTR_DAT_04bb2bc0;
  if ((*(long *)PTR_DAT_04bb27c0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb27c0 + 0x5e8) == 1)) {
    return 0;
  }
  local_dd = 0;
  local_120 = 0x40;
  local_c8 = 0x40;
  local_d0 = local_c4;
  local_128 = local_11c;
  local_11c[0] = 0;
  local_138 = &PTR_LAB_049836a0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_85 = 0;
  local_c4[0] = 0;
  local_80 = 0;
  local_78 = 0xff;
  local_d8 = local_130;
  FUN_01184fd0(&local_138,param_2);
  if (CONCAT71(uStack_6f,local_70) != 0) {
    *(undefined4 *)(CONCAT71(uStack_6f,local_70) + 8) = 1;
  }
  if ((**(char **)(param_2 + 8) == '\0') || ((*(byte *)(param_1 + 0xe060) & 1) != 0)) {
    if (CONCAT71(uStack_6f,local_70) == 0) {
      return 0;
    }
    *(undefined4 *)(CONCAT71(uStack_6f,local_70) + 8) = 2;
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x140));
  if ((int)local_80 != 1) {
    if (*(long *)(param_1 + 0x1da0) != 0) {
LAB_0118044c:
      uVar11 = 0;
      goto LAB_011806b0;
    }
    lVar6 = *(long *)(param_1 + 0x168);
    if (lVar6 != param_1 + 0x160) {
      lVar10 = lVar6 + -0xd0;
      uVar12 = 0;
      do {
        lVar6 = *(long *)(lVar6 + 8);
        uVar9 = uVar12;
        if (*(int *)(lVar10 + 0xb8) != 1) {
          if (*(int *)(lVar10 + 0xb8) <= (int)local_80) {
            if (CONCAT71(uStack_6f,local_70) != 0) {
              *(undefined4 *)(CONCAT71(uStack_6f,local_70) + 8) = 2;
            }
            goto LAB_0118044c;
          }
          if ((int)local_80 < *(int *)(lVar10 + 0xb8)) {
            uVar9 = (ulong)((uint)uVar12 + 1);
            if (0x1f < (uint)uVar12) {
              uVar12 = 0;
            }
            local_238[uVar12] = lVar10;
          }
        }
        lVar10 = lVar6 + -0xd0;
        uVar12 = uVar9;
      } while (lVar10 != param_1 + 0x90);
      if (0 < (int)uVar9) {
        uVar12 = 0;
        plVar14 = local_238;
        do {
          plVar7 = plVar14;
          if (0x1f < uVar12) {
            plVar7 = local_238;
          }
          puVar13 = (undefined8 *)*plVar7;
          plVar7 = puVar13 + 0x1a;
          if (*plVar7 != 0) {
            *(undefined8 *)(*plVar7 + 8) = puVar13[0x1b];
          }
          if ((long *)puVar13[0x1b] != (long *)0x0) {
            *(long *)puVar13[0x1b] = *plVar7;
          }
          *plVar7 = 0;
          puVar13[0x1b] = 0;
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
          (**(code **)*puVar13)(puVar13);
          uVar12 = uVar12 + 1;
          plVar14 = plVar14 + 1;
          *puVar13 = *(undefined8 *)(param_1 + 0x178);
          *(undefined8 **)(param_1 + 0x178) = puVar13;
        } while (uVar9 != uVar12);
      }
    }
  }
  if (*(int *)(param_1 + 0x170) < *(int *)(param_1 + 0x188)) {
    puVar13 = *(undefined8 **)(param_1 + 0x178);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = *puVar13;
    }
    puVar1 = (undefined1 *)((long)puVar13 + 0x1c);
    puVar13[2] = puVar1;
    *(undefined4 *)(puVar13 + 3) = 0x40;
    puVar4 = PTR_DAT_04bb2f70;
    *(undefined1 *)((long)puVar13 + 0x5b) = 0;
    plVar14 = (long *)(param_1 + 0x160);
    *puVar13 = &PTR_LAB_049836a0;
    puVar13[1] = puVar4 + 0x10;
    (**(code **)(local_130 + 0x18))(&local_130);
    puVar5 = local_128;
    if (puVar1 != local_128) {
      (**(code **)(local_130 + 0x18))(&local_130);
      lVar6 = 0;
      do {
        if (local_128[lVar6] == '\0') goto LAB_0118056c;
        if (local_128[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0118056c;
        }
        if (local_128[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0118056c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0118056c:
      iVar2 = (int)lVar6;
      if (*(int *)(puVar13 + 3) <= (int)lVar6) {
        iVar2 = *(int *)(puVar13 + 3) + -1;
      }
      memcpy(puVar1,puVar5,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    puVar1 = (undefined1 *)((long)puVar13 + 0x74);
    *(undefined1 *)((long)puVar13 + 0xb3) = 0;
    puVar13[1] = puVar3 + 0x10;
    *(undefined4 *)(puVar13 + 0xe) = 0x40;
    puVar13[0xc] = puVar4 + 0x10;
    puVar13[0xd] = puVar1;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    puVar5 = local_d0;
    if (puVar1 != local_d0) {
      (**(code **)(local_d8 + 0x18))(&local_d8);
      lVar6 = 0;
      do {
        if (local_d0[lVar6] == '\0') goto LAB_0118062c;
        if (local_d0[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0118062c;
        }
        if (local_d0[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0118062c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0118062c:
      iVar2 = (int)lVar6;
      if (*(int *)(puVar13 + 0xe) <= (int)lVar6) {
        iVar2 = *(int *)(puVar13 + 0xe) + -1;
      }
      memcpy(puVar1,puVar5,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    plVar7 = puVar13 + 0x1a;
    *plVar7 = 0;
    puVar13[0xc] = puVar3 + 0x10;
    puVar13[0x1b] = 0;
    puVar13[0x17] = local_80;
    bVar8 = local_78;
    if (7 < local_78) {
      bVar8 = 0xff;
    }
    *(byte *)(puVar13 + 0x18) = bVar8;
    puVar13[0x19] = CONCAT71(uStack_6f,local_70);
    *(ulong *)((long)puVar13 + 0xc1) = CONCAT17(local_70,uStack_77);
    lVar6 = *plVar14;
    *plVar14 = (long)plVar7;
    *plVar7 = lVar6;
    puVar13[0x1b] = plVar14;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
    }
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  }
  uVar11 = 1;
LAB_011806b0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x140));
  return uVar11;
}

