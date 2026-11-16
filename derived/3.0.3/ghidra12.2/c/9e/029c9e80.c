
undefined8 FUN_029c9e80(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  void *__dest;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined *local_90;
  void *local_88;
  undefined *local_80;
  void *pvStack_78;
  
  puVar7 = PTR_DAT_04bb2020;
  uVar17 = *(undefined4 *)(param_2 + 4);
  plVar11 = (long *)(param_1 + 0x24f18);
  pvVar4 = *(void **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *param_2;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_90 = puVar1;
  local_88 = pvVar4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar15 = *plVar11;
  pvStack_78 = pvVar4;
  local_80 = puVar1;
  while (lVar15 != 0) {
    iVar8 = FUN_029ca720(&local_80,lVar15 + 0x20);
    if (iVar8 < 0) {
      plVar12 = (long *)(lVar15 + 8);
    }
    else {
      if (iVar8 == 0) {
        lVar15 = *(long *)(lVar15 + 0x30);
        if (lVar15 != 0) goto LAB_029ca140;
        break;
      }
      plVar12 = (long *)(lVar15 + 0x10);
    }
    lVar15 = *plVar12;
  }
  uVar16 = 0;
  plVar12 = *(long **)(param_1 + 0x24a40);
  if (*(int *)(param_1 + 0x24a48) < 1) {
    plVar12 = (long *)0x0;
  }
  if ((plVar12 != (long *)0x0) && (plVar12 + -1 != (long *)0x0)) {
    lVar15 = plVar12[-1];
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(param_1 + 0x24a48) = *(int *)(param_1 + 0x24a48) + -1;
    plVar12[-1] = *(long *)(param_1 + 0x24a50);
    *(long **)(param_1 + 0x24a50) = plVar12 + -1;
    if (lVar15 != 0) {
      __dest = *(void **)(lVar15 + 8);
      (**(code **)(local_90 + 0x18))(&local_90);
      pvVar4 = local_88;
      if (__dest != local_88) {
        (**(code **)(local_90 + 0x18))(&local_90);
        lVar10 = 0;
        do {
          if (*(char *)((long)local_88 + lVar10) == '\0') goto LAB_029ca004;
          if (*(char *)((long)local_88 + lVar10 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_029ca004;
          }
          if (*(char *)((long)local_88 + lVar10 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_029ca004;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_029ca004:
        iVar8 = (int)lVar10;
        if (*(int *)(lVar15 + 0x10) <= (int)lVar10) {
          iVar8 = *(int *)(lVar15 + 0x10) + -1;
        }
        memcpy(__dest,pvVar4,(long)iVar8);
        *(undefined1 *)((long)__dest + (long)iVar8) = 0;
      }
      plVar12 = *(long **)(lVar15 + 0xa0);
      while (plVar12 != (long *)(lVar15 + 0x98)) {
        plVar5 = (long *)plVar12[1];
        plVar13 = plVar5;
        if (*plVar12 != 0) {
          *(long **)(*plVar12 + 8) = plVar5;
          plVar13 = (long *)plVar12[1];
        }
        if (plVar13 != (long *)0x0) {
          *plVar13 = *plVar12;
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        *(int *)(lVar15 + 0xa8) = *(int *)(lVar15 + 0xa8) + -1;
        plVar12[-5] = *(long *)(lVar15 + 0xb0);
        *(long **)(lVar15 + 0xb0) = plVar12 + -5;
        plVar12 = plVar5;
      }
      if (*(int *)(param_1 + 0x24f30) < *(int *)(param_1 + 0x24f34)) {
        puVar9 = *(undefined8 **)(param_1 + 0x24f20);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x24f20) = *puVar9;
        }
        puVar1 = PTR_DAT_04bb2120;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[6] = lVar15;
        puVar9[7] = plVar11;
        puVar9[4] = puVar7 + 0x10;
        puVar9[5] = puVar1;
        *puVar9 = &PTR_LAB_04a98450;
        puVar9[1] = 0;
        puVar9[5] = *(undefined8 *)(lVar15 + 8);
        *(int *)(param_1 + 0x24f30) = *(int *)(param_1 + 0x24f30) + 1;
        lVar10 = FUN_029caa84(plVar11,*plVar11);
        *plVar11 = lVar10;
        *(undefined8 *)(lVar10 + 0x18) = 1;
      }
      else {
        pvStack_78 = *(void **)(lVar15 + 8);
        local_80 = puVar7 + 0x10;
        lVar10 = *plVar11;
        while (lVar10 != 0) {
          iVar8 = FUN_029ca720(&local_80,lVar10 + 0x20);
          if (iVar8 < 0) {
            plVar11 = (long *)(lVar10 + 8);
          }
          else {
            if (iVar8 == 0) {
              *(long *)(lVar10 + 0x30) = lVar15;
              break;
            }
            plVar11 = (long *)(lVar10 + 0x10);
          }
          lVar10 = *plVar11;
        }
      }
LAB_029ca140:
      if (*(int *)(lVar15 + 0xa8) < *(int *)(lVar15 + 0xc0)) {
        puVar9 = *(undefined8 **)(lVar15 + 0xb0);
        plVar11 = (long *)(lVar15 + 0x98);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar15 + 0xb0) = *puVar9;
        }
        *(undefined1 *)puVar9 = uVar6;
        *(undefined4 *)((long)puVar9 + 4) = uVar17;
        *(undefined1 *)((long)puVar9 + 1) = 0xff;
        puVar9[4] = 0;
        puVar9[6] = 0;
        puVar9[1] = 0x3f800000;
        puVar9[2] = lVar14;
        *(int *)(puVar9 + 3) = iVar2;
        *(undefined4 *)((long)puVar9 + 0x1c) = uVar3;
        plVar12 = puVar9 + 5;
        *plVar12 = 0;
        lVar14 = *plVar11;
        *plVar11 = (long)plVar12;
        puVar9[6] = plVar11;
        *plVar12 = lVar14;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar12;
        }
        uVar16 = 1;
        *(int *)(lVar15 + 0xa8) = *(int *)(lVar15 + 0xa8) + 1;
        goto LAB_029ca1e4;
      }
      if ((lVar14 != 0) && (iVar2 == *(int *)(lVar14 + 0x10))) {
        FUN_03b45ec0(0,0,lVar14);
      }
    }
    uVar16 = 0;
  }
LAB_029ca1e4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar16;
}

