
void FUN_03a33750(long param_1,uint *param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  size_t __size;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_478;
  undefined1 *puStack_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar9 = *param_2;
  if (0 < (int)uVar9) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    __size = (ulong)uVar9 * 0x60;
    if (lVar15 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03a338a0;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (pvVar5 != (void *)0x0) {
      lVar15 = (ulong)uVar9 * 0x60;
      uVar13 = lVar15 - 0x30;
      uVar1 = ((uint)(uVar13 / 0x30) & 0x7ffffff) + 1;
      uVar14 = (ulong)uVar1 & 3;
      pvVar7 = pvVar5;
      if ((uVar1 & 3) != 0) {
        do {
          *(undefined8 *)((long)pvVar7 + 0x18) = 0;
          *(undefined8 *)((long)pvVar7 + 0x20) = 0;
          uVar14 = uVar14 - 1;
          *(undefined4 *)((long)pvVar7 + 0x28) = 0x3f800000;
          pvVar7 = (void *)((long)pvVar7 + 0x30);
        } while (uVar14 != 0);
      }
      if (0x8f < uVar13) {
        do {
          *(undefined8 *)((long)pvVar7 + 0x18) = 0;
          *(undefined8 *)((long)pvVar7 + 0x20) = 0;
          *(undefined4 *)((long)pvVar7 + 0x28) = 0x3f800000;
          *(undefined4 *)((long)pvVar7 + 0x58) = 0x3f800000;
          *(undefined4 *)((long)pvVar7 + 0x88) = 0x3f800000;
          *(undefined4 *)((long)pvVar7 + 0xb8) = 0x3f800000;
          *(undefined8 *)((long)pvVar7 + 0x48) = 0;
          *(undefined8 *)((long)pvVar7 + 0x50) = 0;
          *(undefined8 *)((long)pvVar7 + 0x78) = 0;
          *(undefined8 *)((long)pvVar7 + 0x80) = 0;
          *(undefined8 *)((long)pvVar7 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar7 + 0xb0) = 0;
          pvVar7 = (void *)((long)pvVar7 + 0xc0);
        } while (pvVar7 != (void *)((long)pvVar5 + lVar15));
      }
      *(uint *)(param_1 + 0x2e8) = uVar9;
      *(void **)(param_1 + 0x2f0) = pvVar5;
      *(undefined4 *)(param_1 + 0x2ec) = 2;
    }
  }
LAB_03a338a0:
  uVar9 = param_2[1];
  if (0 < (int)uVar9) {
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      pvVar5 = malloc((ulong)uVar9 * 0x3c);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03a33910;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)uVar9 * 0x3c,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(uint *)(param_1 + 0x2f8) = uVar9;
      *(void **)(param_1 + 0x300) = pvVar5;
    }
  }
LAB_03a33910:
  uVar9 = DAT_04c4ba68;
  uVar14 = (ulong)DAT_04c4ba68;
  if (0 < (int)DAT_04c4ba68) {
    lVar15 = *(long *)puVar2;
    uVar13 = uVar14 * 0x220 | 8;
    if (lVar15 == 0) {
      puVar6 = malloc(uVar13);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03a33af8;
      }
      puVar6 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar13,8);
    }
    if (puVar6 != (ulong *)0x0) {
      lVar15 = 0;
      *puVar6 = uVar14;
      do {
        puVar10 = (undefined8 *)((long)puVar6 + lVar15 + 8);
        *puVar10 = 0;
        plVar4 = (long *)((long)puVar6 + lVar15 + 0x100);
        *plVar4 = (long)puVar6 + lVar15 + 0x108;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0xf8);
        *puVar11 = plVar4;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xf0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0xe8);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xe0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0xd8);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xd0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 200);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xc0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0xb8);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xb0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0xa8);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0xa0);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x98);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x90);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x88);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x80);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x78);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x70);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x68);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x60);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x58);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x50);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x48);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x40);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x38);
        *puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar6 + lVar15 + 0x30);
        *puVar12 = puVar11;
        puVar11 = (undefined8 *)((long)puVar6 + lVar15 + 0x28);
        *puVar11 = puVar12;
        *(undefined8 *)((long)puVar6 + lVar15 + 0x10) = 0;
        *(undefined8 **)((long)puVar6 + lVar15 + 0x18) = puVar11;
        *(long *)((long)puVar6 + lVar15 + 0x108) = (long)puVar6 + lVar15 + 0x110;
        *(long *)((long)puVar6 + lVar15 + 0x110) = (long)puVar6 + lVar15 + 0x118;
        *(undefined8 **)((long)puVar6 + lVar15 + 0x20) = puVar11;
        lVar3 = (long)puVar6 + lVar15 + 0x128;
        *(long *)((long)puVar6 + lVar15 + 0x118) = (long)puVar6 + lVar15 + 0x120;
        *(undefined8 *)((long)puVar6 + lVar15 + 0x120) = 0;
        if (lVar3 != 0) {
          *(long *)((long)puVar6 + lVar15 + 0x10) = lVar3;
          *(undefined4 *)puVar10 = 0;
          *(undefined4 *)((long)puVar6 + lVar15 + 0xc) = 0x20;
        }
        lVar15 = lVar15 + 0x220;
      } while (uVar14 * 0x220 != lVar15);
      *(uint *)(param_1 + 0x308) = uVar9;
      *(ulong **)(param_1 + 0x310) = puVar6 + 1;
    }
  }
LAB_03a33af8:
  *(undefined1 *)(param_1 + 0x548) = 0;
  *(undefined1 **)(param_1 + 0x2a4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2ac) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x288) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a0) = 7;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined1 **)(param_1 + 0x2d4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2dc) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x2b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d0) = 7;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  if (*param_2 != 0) {
    uVar9 = 0;
    do {
      lVar15 = (long)(int)uVar9;
      if (*(int *)(param_1 + 0x2ec) == 0 || *(uint *)(param_1 + 0x2e8) <= uVar9) {
        lVar15 = 0;
      }
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x2f0) + lVar15 * 0x30);
      *(undefined4 *)(puVar10 + 2) = 0xffffffff;
      puVar10[4] = &DAT_3f8000003f800000;
      puVar10[5] = 0x3f800000;
      puVar10[3] = 0x3f80000000000007;
      *puVar10 = 0xffffffffffffffff;
      puVar10[1] = 0xffffffffffffffff;
      uVar1 = uVar9 + 1;
      lVar15 = (long)(int)(uVar9 + *(uint *)(param_1 + 0x2e8));
      if (*(uint *)(param_1 + 0x2ec) < 2 || *(uint *)(param_1 + 0x2e8) <= uVar9) {
        lVar15 = 0;
      }
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x2f0) + lVar15 * 0x30);
      puVar10[4] = &DAT_3f8000003f800000;
      puVar10[5] = 0x3f800000;
      *(undefined4 *)(puVar10 + 2) = 0xffffffff;
      *puVar10 = 0xffffffffffffffff;
      puVar10[1] = 0xffffffffffffffff;
      puVar10[3] = 0x3f80000000000007;
      uVar9 = uVar1;
    } while (uVar1 < *param_2);
  }
  if (param_4 != 0) {
    local_65 = 0;
    local_468 = 0x400;
    puStack_470 = local_464;
    local_464[0] = 0;
    local_478 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_04069d51);
  }
  *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x270) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0xa0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4f8);
  }
  *(undefined8 *)(param_1 + 0x550) = uVar8;
  param_1 = param_1 + 0x558;
  FUN_0390e390(param_1,1,param_3);
  puVar2 = PTR_DAT_04bbd7e8;
  FUN_0390e4c0(param_1,0,*(long *)PTR_DAT_04bbd7e8 + 0x5c0,0);
  FUN_0390e4c0(param_1,1,*(long *)puVar2 + 0x5c0,1);
  FUN_0390e640(param_1);
  return;
}

