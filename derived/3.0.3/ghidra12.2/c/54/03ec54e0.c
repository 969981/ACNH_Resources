
void FUN_03ec54e0(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  size_t __size;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  uVar5 = (**(code **)(*(long *)param_2[1] + 0x58))();
  lVar14 = DAT_05ae7600;
  uVar3 = (uint)uVar5;
  if ((int)uVar3 < 1) {
    return;
  }
  __size = (uVar5 & 0xffffffff) << 4;
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(__size);
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_03ec5638;
    }
    puVar8 = (undefined4 *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
  }
  if (puVar8 != (undefined4 *)0x0) {
    uVar13 = uVar5 & 3;
    puVar11 = puVar8;
    if (uVar13 != 0) {
      do {
        *puVar11 = 0;
        uVar13 = uVar13 - 1;
        *(undefined8 *)(puVar11 + 2) = 0;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
    }
    if (2 < ((uVar5 & 0xffffffff) - 1 & 0xfffffffffffffff)) {
      do {
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + 2) = 0;
        puVar11[4] = 0;
        *(undefined8 *)(puVar11 + 6) = 0;
        puVar11[8] = 0;
        *(undefined8 *)(puVar11 + 10) = 0;
        puVar11[0xc] = 0;
        *(undefined8 *)(puVar11 + 0xe) = 0;
        puVar11 = puVar11 + 0x10;
      } while (puVar11 != puVar8 + (uVar5 & 0xffffffff) * 4);
    }
    *(undefined4 **)(param_1 + 0x10) = puVar8;
    *(uint *)(param_1 + 8) = uVar3;
  }
LAB_03ec5638:
  uVar15 = 0;
  do {
    lVar14 = *(long *)(param_1 + 0x10);
    uVar10 = uVar15;
    if (*(uint *)(param_1 + 8) <= uVar15) {
      uVar10 = 0;
    }
    uVar4 = (**(code **)(*(long *)param_2[1] + 0x60))((long *)param_2[1],uVar15);
    if (0 < (int)uVar4) {
      puVar1 = (uint *)(lVar14 + (ulong)uVar10 * 0x10);
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar9 = malloc((ulong)uVar4 * 0x28);
joined_r0x03ec5758:
        if (pvVar9 != (void *)0x0) {
          *puVar1 = uVar4;
          *(void **)(puVar1 + 2) = pvVar9;
        }
      }
      else {
        plVar6 = (long *)*param_2;
        if (plVar6 != (long *)0x0) {
LAB_03ec56e4:
          pvVar9 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar4 * 0x28,8);
          goto joined_r0x03ec5758;
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar14 + 8);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) goto LAB_03ec56e4;
      }
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        if (*puVar1 <= uVar10) {
          uVar2 = 0;
        }
        uVar10 = uVar10 + 1;
        puVar12 = (undefined8 *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 0x28);
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined8 *)((long)puVar12 + 0xc) = 0;
        *(undefined8 *)((long)puVar12 + 0x14) = 0x3f80000000000000;
        *(undefined1 **)((long)puVar12 + 0x1c) = &DAT_3f8000003f800000;
        *(undefined4 *)((long)puVar12 + 0x24) = 0x3f800000;
      } while (uVar4 != uVar10);
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar3) {
      return;
    }
  } while( true );
}

