
void FUN_03ecf190(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar4 = PTR_DAT_04bb2698;
  plVar7 = (long *)param_2[1];
  if (plVar7 != (long *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      pvVar12 = malloc(1);
      *(void **)(param_1 + 0xb0) = pvVar12;
LAB_03ecf240:
      puVar10 = malloc(0x10);
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,1,8);
      lVar17 = *(long *)puVar4;
      *(undefined8 *)(param_1 + 0xb0) = uVar8;
      if (lVar17 == 0) goto LAB_03ecf240;
      plVar7 = (long *)param_2[1];
      if (plVar7 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar17 + 8);
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined4 *)((long)puVar10 + 4) = 300;
    *(undefined8 **)(param_1 + 0xb8) = puVar10;
  }
  *(int *)(param_1 + 200) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)((long)param_2 + 0x14);
  if (((DAT_05b05180 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05b05180), iVar6 != 0)) {
    __cxa_guard_release(&DAT_05b05180);
  }
  *(undefined ***)(param_1 + 0xa8) = &PTR_PTR_04c56b60;
  uVar14 = *(uint *)((long)param_2 + 0x1c);
  uVar19 = (ulong)uVar14;
  if (0 < (int)uVar14) {
    lVar17 = *(long *)puVar4;
    if (lVar17 == 0) {
      puVar11 = malloc(uVar19 << 5);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar17 + 8);
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03ecf378;
      }
      puVar11 = (undefined4 *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar19 << 5,8);
    }
    if (puVar11 != (undefined4 *)0x0) {
      uVar16 = uVar19 & 3;
      puVar15 = puVar11;
      if ((uVar14 & 3) != 0) {
        do {
          *puVar15 = 0;
          uVar16 = uVar16 - 1;
          *(undefined8 *)(puVar15 + 2) = 0;
          puVar15[4] = 0;
          puVar15 = puVar15 + 8;
        } while (uVar16 != 0);
      }
      if (2 < (uVar19 - 1 & 0x7ffffffffffffff)) {
        do {
          *puVar15 = 0;
          *(undefined8 *)(puVar15 + 2) = 0;
          puVar15[4] = 0;
          puVar15[8] = 0;
          *(undefined8 *)(puVar15 + 10) = 0;
          puVar15[0xc] = 0;
          puVar15[0x10] = 0;
          *(undefined8 *)(puVar15 + 0x12) = 0;
          puVar15[0x14] = 0;
          puVar15[0x18] = 0;
          *(undefined8 *)(puVar15 + 0x1a) = 0;
          puVar15[0x1c] = 0;
          puVar15 = puVar15 + 0x20;
        } while (puVar15 != puVar11 + uVar19 * 8);
      }
      *(uint *)(param_1 + 0x128) = uVar14;
      *(undefined4 **)(param_1 + 0x130) = puVar11;
    }
  }
LAB_03ecf378:
  uVar14 = *(uint *)(param_2 + 3);
  if ((int)uVar14 < 1) goto LAB_03ecf450;
  lVar17 = *(long *)puVar4;
  if (lVar17 == 0) {
    pvVar12 = malloc((ulong)uVar14 << 4);
joined_r0x03ecf540:
    if (pvVar12 != (void *)0x0) {
      *(uint *)(param_1 + 0xf8) = uVar14;
      *(void **)(param_1 + 0x100) = pvVar12;
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 != (long *)0x0) {
LAB_03ecf3c4:
      pvVar12 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar14 << 4,8);
      goto joined_r0x03ecf540;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar17 + 8);
    if (lVar9 != 0) {
      plVar7 = (long *)(lVar9 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ecf3c4;
  }
  uVar14 = *(uint *)(param_2 + 3);
  if (0 < (int)uVar14) {
    lVar17 = *(long *)puVar4;
    if (lVar17 == 0) {
      pvVar12 = malloc((ulong)uVar14 << 4);
    }
    else {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar17 + 8);
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03ecf450;
      }
      pvVar12 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar14 << 4,8);
    }
    if (pvVar12 != (void *)0x0) {
      *(uint *)(param_1 + 0x110) = uVar14;
      *(void **)(param_1 + 0x118) = pvVar12;
    }
  }
LAB_03ecf450:
  puVar5 = PTR_DAT_04bb3350;
  uVar14 = *(uint *)(param_1 + 0x128);
  if ((0 < (int)uVar14) && (0 < (int)param_2[4])) {
    uVar18 = 0;
    do {
      uVar3 = *(uint *)(param_2 + 4);
      uVar2 = uVar18;
      if (uVar14 <= uVar18) {
        uVar2 = 0;
      }
      if (0 < (int)uVar3) {
        lVar17 = *(long *)(param_1 + 0x130);
        lVar9 = *(long *)puVar4;
        if (lVar9 == 0) {
          pvVar12 = malloc((ulong)uVar3 << 4);
        }
        else {
          plVar7 = (long *)*param_2;
          if (plVar7 == (long *)0x0) {
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            plVar7 = (long *)(lVar9 + 8);
            if (lVar13 != 0) {
              plVar7 = (long *)(lVar13 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_03ecf480;
          }
          pvVar12 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar3 << 4,8);
        }
        if (pvVar12 != (void *)0x0) {
          puVar1 = (uint *)(lVar17 + (ulong)uVar2 * 0x20);
          *puVar1 = uVar3;
          *(void **)(puVar1 + 2) = pvVar12;
        }
      }
LAB_03ecf480:
      uVar14 = *(uint *)(param_1 + 0x128);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)uVar14);
  }
  return;
}

