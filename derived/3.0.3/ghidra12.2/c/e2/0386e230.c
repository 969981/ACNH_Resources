
void FUN_0386e230(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong *puVar10;
  uint *puVar11;
  ulong *puVar12;
  ulong __size;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  if ((*(long *)(param_1 + 2) == 0) && ((uint *)param_3[2] != (uint *)0x0)) {
    uVar3 = *(uint *)param_3[2];
    if (0 < (int)uVar3) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar8 = malloc((ulong)uVar3 << 3);
joined_r0x0386e4c8:
        if (pvVar8 != (void *)0x0) {
          *param_1 = uVar3;
          *(void **)(param_1 + 2) = pvVar8;
        }
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar15 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) {
          pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar3 << 3,8);
          goto joined_r0x0386e4c8;
        }
      }
      uVar14 = 0;
      do {
        uVar2 = uVar14;
        if (*(uint *)param_3[2] <= uVar14) {
          uVar2 = 0;
        }
        uVar9 = (*(code *)**(undefined8 **)*param_3)
                          ((undefined8 *)*param_3,param_2,param_3[1],
                           *(long *)((uint *)param_3[2] + 2) + (ulong)uVar2 * 0x10);
        uVar2 = uVar14;
        if (*param_1 <= uVar14) {
          uVar2 = 0;
        }
        uVar14 = uVar14 + 1;
        *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8) = uVar9;
      } while (uVar3 != uVar14);
    }
  }
  if ((*(long *)(param_1 + 6) == 0) && ((uint *)param_3[3] != (uint *)0x0)) {
    uVar3 = *(uint *)param_3[3];
    if (0 < (int)uVar3) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar8 = malloc((ulong)uVar3 << 3);
joined_r0x0386e538:
        if (pvVar8 != (void *)0x0) {
          param_1[4] = uVar3;
          *(void **)(param_1 + 6) = pvVar8;
        }
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar15 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) {
          pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar3 << 3,8);
          goto joined_r0x0386e538;
        }
      }
      uVar14 = 0;
      do {
        uVar2 = uVar14;
        if (*(uint *)param_3[3] <= uVar14) {
          uVar2 = 0;
        }
        uVar9 = (**(code **)(*(long *)*param_3 + 8))
                          ((long *)*param_3,param_2,param_3[1],
                           *(long *)((uint *)param_3[3] + 2) + (ulong)uVar2 * 0x10);
        uVar2 = uVar14;
        if (param_1[4] <= uVar14) {
          uVar2 = 0;
        }
        uVar14 = uVar14 + 1;
        *(undefined8 *)(*(long *)(param_1 + 6) + (ulong)uVar2 * 8) = uVar9;
      } while (uVar3 != uVar14);
    }
  }
  if ((*(long *)(param_1 + 10) != 0) || (param_3[4] == 0)) goto LAB_0386e268;
  uVar3 = *(uint *)(param_3[4] + 4);
  if ((int)uVar3 < 1) goto LAB_0386e268;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar8 = malloc((ulong)uVar3 << 3);
joined_r0x0386e5a8:
    if (pvVar8 != (void *)0x0) {
      param_1[8] = uVar3;
      *(void **)(param_1 + 10) = pvVar8;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar15 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar3 << 3,8);
      goto joined_r0x0386e5a8;
    }
  }
  uVar14 = 0;
  do {
    puVar11 = (uint *)param_3[4];
    uVar2 = *puVar11;
    lVar15 = (long)(int)(uVar2 * uVar14);
    if (uVar2 == 0 || puVar11[1] <= uVar14) {
      lVar15 = 0;
    }
    lVar5 = (long)(int)(uVar2 * uVar14 + 1);
    if (uVar2 < 2 || puVar11[1] <= uVar14) {
      lVar5 = 0;
    }
    uVar9 = (**(code **)(*(long *)*param_3 + 0x10))
                      ((long *)*param_3,param_3[1],*(long *)(puVar11 + 2) + lVar15 * 0x10,
                       *(long *)(puVar11 + 2) + lVar5 * 0x10);
    uVar2 = uVar14;
    if (param_1[8] <= uVar14) {
      uVar2 = 0;
    }
    uVar14 = uVar14 + 1;
    *(undefined8 *)(*(long *)(param_1 + 10) + (ulong)uVar2 * 8) = uVar9;
  } while (uVar3 != uVar14);
LAB_0386e268:
  lVar15 = DAT_05ae7600;
  uVar3 = *(uint *)(param_3 + 5);
  uVar13 = (ulong)uVar3;
  if ((uVar3 != 0) && (0 < (int)uVar3)) {
    __size = uVar13 << 5 | 8;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(__size);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar15 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (puVar7 != (ulong *)0x0) {
      puVar10 = puVar7 + 1;
      *puVar7 = uVar13;
      puVar4 = PTR_DAT_04bc8e10;
      puVar12 = puVar10;
      if ((uVar3 & 1) != 0) {
        puVar1 = PTR_DAT_04bc8e10 + 0x10;
        *(undefined4 *)(puVar7 + 3) = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        puVar7[1] = (ulong)puVar1;
        puVar7[2] = 0xffffffffffffffff;
        puVar12 = puVar7 + 5;
      }
      if ((uVar13 - 1 & 0x7ffffffffffffff) != 0) {
        do {
          *puVar12 = (ulong)(puVar4 + 0x10);
          puVar12[1] = 0xffffffffffffffff;
          *(undefined4 *)(puVar12 + 2) = 0;
          *(undefined4 *)(puVar12 + 3) = 0;
          *(undefined4 *)(puVar12 + 6) = 0;
          *(undefined4 *)(puVar12 + 7) = 0;
          puVar12[4] = (ulong)(puVar4 + 0x10);
          puVar12[5] = 0xffffffffffffffff;
          puVar12 = puVar12 + 8;
        } while (puVar12 != puVar10 + uVar13 * 4);
      }
      param_1[0xc] = uVar3;
      *(ulong **)(param_1 + 0xe) = puVar10;
    }
  }
  return;
}

