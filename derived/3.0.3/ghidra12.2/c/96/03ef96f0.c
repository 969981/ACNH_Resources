
undefined8 FUN_03ef96f0(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  size_t __size;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *__s;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong __size_00;
  uint uVar14;
  long lVar15;
  
  uVar3 = *(uint *)(param_2 + 8);
  __size_00 = (ulong)uVar3;
  *(long *)(param_1 + 8) = param_2;
  puVar6 = PTR_DAT_04bb2698;
  if ((int)uVar3 < 1) {
LAB_03ef99f0:
    uVar12 = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x100;
  }
  else {
    __size = __size_00 * 0x1c;
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar11 = malloc(__size);
LAB_03ef979c:
      bVar7 = puVar11 == (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = __size - 0x1c >> 2;
        puVar13 = puVar11;
        if ((SUB164(auVar4 * ZEXT816(0x4924924924924925),8) >> 1 & 1) == 0) {
          puVar11[2] = 0;
          *(undefined4 *)(puVar11 + 3) = 0;
          uVar12 = DAT_041e93ec;
          *puVar11 = DAT_041e93e4;
          puVar11[1] = uVar12;
          puVar13 = (undefined8 *)((long)puVar11 + 0x1c);
        }
        if (0x1b < __size - 0x1c) {
          uVar12 = *(undefined8 *)PTR_DAT_04bd0da0;
          uVar2 = *(undefined8 *)(PTR_DAT_04bd0da0 + 8);
          do {
            *puVar13 = uVar12;
            puVar13[1] = uVar2;
            puVar13[2] = 0;
            *(undefined4 *)(puVar13 + 3) = 0;
            *(undefined8 *)((long)puVar13 + 0x1c) = uVar12;
            *(undefined8 *)((long)puVar13 + 0x24) = uVar2;
            *(undefined8 *)((long)puVar13 + 0x2c) = 0;
            *(undefined4 *)((long)puVar13 + 0x34) = 0;
            puVar13 = puVar13 + 7;
          } while (puVar13 != (undefined8 *)((long)puVar11 + __size));
        }
        *(uint *)(param_1 + 0x10) = uVar3;
        *(undefined8 **)(param_1 + 0x18) = puVar11;
      }
      lVar15 = *(long *)puVar6;
      if (lVar15 == 0) goto LAB_03ef9884;
      if (param_3 != (long *)0x0) {
        plVar10 = param_3;
LAB_03ef986c:
        puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
        goto LAB_03ef988c;
      }
LAB_03ef9840:
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ef986c;
      lVar15 = *(long *)puVar6;
      bVar8 = true;
      if (lVar15 != 0) goto LAB_03ef992c;
LAB_03ef9a00:
      __s = malloc(__size_00);
joined_r0x03ef9a0c:
      if (__s != (void *)0x0) {
        memset(__s,0,__size_00);
        *(uint *)(param_1 + 0x30) = uVar3;
        *(void **)(param_1 + 0x38) = __s;
        if ((bool)(bVar7 | bVar8)) {
          return 0;
        }
        uVar14 = 0;
        do {
          uVar1 = uVar14;
          if (*(uint *)(param_1 + 0x10) <= uVar14) {
            uVar1 = 0;
          }
          FUN_03ef8788(*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x1c,
                       uVar14);
          uVar1 = uVar14;
          if (*(uint *)(param_1 + 0x30) <= uVar14) {
            uVar1 = 0;
          }
          uVar14 = uVar14 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x38) + (ulong)uVar1) = 2;
        } while (uVar3 != uVar14);
        goto LAB_03ef99f0;
      }
    }
    else {
      plVar10 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03ef977c:
        puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
        goto LAB_03ef979c;
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ef977c;
      lVar15 = *(long *)puVar6;
      bVar7 = true;
      if (lVar15 != 0) goto LAB_03ef9840;
LAB_03ef9884:
      puVar11 = malloc(__size);
LAB_03ef988c:
      bVar8 = puVar11 == (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = __size - 0x1c >> 2;
        puVar13 = puVar11;
        if ((SUB164(auVar5 * ZEXT816(0x4924924924924925),8) >> 1 & 1) == 0) {
          puVar11[2] = 0;
          *(undefined4 *)(puVar11 + 3) = 0;
          uVar12 = DAT_041e93ec;
          *puVar11 = DAT_041e93e4;
          puVar11[1] = uVar12;
          puVar13 = (undefined8 *)((long)puVar11 + 0x1c);
        }
        if (0x1b < __size - 0x1c) {
          uVar12 = *(undefined8 *)PTR_DAT_04bd0da0;
          uVar2 = *(undefined8 *)(PTR_DAT_04bd0da0 + 8);
          do {
            *puVar13 = uVar12;
            puVar13[1] = uVar2;
            puVar13[2] = 0;
            *(undefined4 *)(puVar13 + 3) = 0;
            *(undefined8 *)((long)puVar13 + 0x1c) = uVar12;
            *(undefined8 *)((long)puVar13 + 0x24) = uVar2;
            *(undefined8 *)((long)puVar13 + 0x2c) = 0;
            *(undefined4 *)((long)puVar13 + 0x34) = 0;
            puVar13 = puVar13 + 7;
          } while (puVar13 != (undefined8 *)((long)puVar11 + __size));
        }
        *(uint *)(param_1 + 0x20) = uVar3;
        *(undefined8 **)(param_1 + 0x28) = puVar11;
      }
      lVar15 = *(long *)puVar6;
      if (lVar15 == 0) goto LAB_03ef9a00;
      if (param_3 != (long *)0x0) {
LAB_03ef9958:
        __s = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size_00,8);
        goto joined_r0x03ef9a0c;
      }
LAB_03ef992c:
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar11 = (undefined8 *)(lVar15 + 8);
      if (lVar9 != 0) {
        puVar11 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_3 = (long *)*puVar11;
      if (param_3 != (long *)0x0) goto LAB_03ef9958;
    }
    uVar12 = 0;
  }
  return uVar12;
}

