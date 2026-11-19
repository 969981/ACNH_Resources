
void FUN_03b69fc0(long param_1,long *param_2,uint param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long *plVar10;
  void *pvVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  long lVar19;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  sVar18 = (size_t)(int)(param_3 << 0xf);
  if (lVar19 == 0) {
    pvVar11 = malloc(sVar18);
  }
  else {
    plVar10 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        pvVar11 = (void *)0x0;
        goto LAB_03b6a05c;
      }
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,0x1000);
  }
LAB_03b6a05c:
  *(void **)(param_1 + 0xf8) = pvVar11;
  nn::audio::AcquireMemoryPool
            ((AudioRendererConfig *)(*(long *)PTR_DAT_04bd1e70 + 0x98),
             (MemoryPoolType *)(param_1 + 0x100),pvVar11,sVar18);
  nn::audio::RequestAttachMemoryPool((MemoryPoolType *)(param_1 + 0x100));
  lVar19 = *(long *)puVar3;
  *(ulong *)(param_1 + 0xe8) = param_4 & 0xffffffffffffe000;
  sVar18 = (size_t)(int)((int)(param_4 & 0xffffffffffffe000) * param_3);
  if (lVar19 == 0) {
    pvVar11 = malloc(sVar18);
  }
  else {
    plVar10 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar11 = (void *)0x0;
      if (plVar10 == (long *)0x0) goto LAB_03b6a0f4;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,8);
  }
LAB_03b6a0f4:
  *(void **)(param_1 + 0xf0) = pvVar11;
  if (*(char *)(param_1 + 0x78) == '\0') {
    lVar19 = *(long *)puVar3;
    sVar18 = (ulong)param_5 << 1;
    *(uint *)(param_1 + 0x98) = param_5;
    if ((int)param_5 < 0) {
      sVar18 = 0xffffffffffffffff;
    }
    if (lVar19 == 0) {
      pvVar11 = malloc(sVar18);
    }
    else {
      plVar10 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar19 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        pvVar11 = (void *)0x0;
        if (plVar10 == (long *)0x0) goto LAB_03b6a184;
      }
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,8);
    }
LAB_03b6a184:
    *(void **)(param_1 + 0xa0) = pvVar11;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      lVar19 = 0;
      do {
        lVar9 = lVar19 + 1;
        *(short *)(*(long *)(param_1 + 0xa0) + lVar19 * 2) = (short)lVar9;
        lVar19 = lVar9;
      } while (lVar9 < *(int *)(param_1 + 0x98));
      pvVar11 = *(void **)(param_1 + 0xa0);
    }
    uVar17 = (ulong)(int)param_5;
    *(undefined2 *)((long)pvVar11 + (long)(int)param_5 * 2 + -2) = 0xffff;
    *(uint *)(param_1 + 0x7c) = param_5;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    *(undefined4 *)(param_1 + 0x80) = 0;
    lVar19 = *(long *)puVar3;
    sVar18 = (uVar17 + (long)(int)param_5 * 8) * 8;
    if (SUB168(auVar6 * ZEXT816(0x48),8) != 0) {
      sVar18 = 0xffffffffffffffff;
    }
    if (lVar19 == 0) {
      puVar12 = malloc(sVar18);
    }
    else {
      plVar10 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar19 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        puVar12 = (undefined1 *)0x0;
        if (plVar10 == (long *)0x0) goto joined_r0x03b6a254;
      }
      puVar12 = (undefined1 *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,8);
    }
joined_r0x03b6a254:
    if (param_5 != 0) {
      uVar15 = uVar17 * 0x48 - 0x48;
      uVar1 = ((uint)(uVar15 / 0x48) & 0x3ffffff) + 1;
      uVar16 = (ulong)uVar1 & 3;
      puVar14 = puVar12;
      if ((uVar1 & 3) != 0) {
        do {
          *puVar14 = 0;
          uVar16 = uVar16 - 1;
          *(undefined8 *)(puVar14 + 0x18) = 0;
          *(undefined2 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + 8) = 0;
          *(undefined8 *)(puVar14 + 0x10) = 0;
          *(undefined8 *)(puVar14 + 0x28) = 0;
          *(undefined8 *)(puVar14 + 0x30) = 0;
          *(undefined8 *)(puVar14 + 0x38) = 0;
          *(undefined8 *)(puVar14 + 0x40) = 0;
          puVar14 = puVar14 + 0x48;
        } while (uVar16 != 0);
      }
      if (0xd7 < uVar15) {
        do {
          *puVar14 = 0;
          *(undefined8 *)(puVar14 + 0x18) = 0;
          *(undefined2 *)(puVar14 + 0x20) = 0;
          puVar14[0x48] = 0;
          *(undefined8 *)(puVar14 + 0x60) = 0;
          *(undefined2 *)(puVar14 + 0x68) = 0;
          puVar14[0x90] = 0;
          *(undefined8 *)(puVar14 + 0xa8) = 0;
          *(undefined2 *)(puVar14 + 0xb0) = 0;
          puVar14[0xd8] = 0;
          *(undefined8 *)(puVar14 + 0xf0) = 0;
          *(undefined2 *)(puVar14 + 0xf8) = 0;
          *(undefined8 *)(puVar14 + 8) = 0;
          *(undefined8 *)(puVar14 + 0x10) = 0;
          *(undefined8 *)(puVar14 + 0x28) = 0;
          *(undefined8 *)(puVar14 + 0x30) = 0;
          *(undefined8 *)(puVar14 + 0x38) = 0;
          *(undefined8 *)(puVar14 + 0x40) = 0;
          *(undefined8 *)(puVar14 + 0x50) = 0;
          *(undefined8 *)(puVar14 + 0x58) = 0;
          *(undefined8 *)(puVar14 + 0x70) = 0;
          *(undefined8 *)(puVar14 + 0x78) = 0;
          *(undefined8 *)(puVar14 + 0x80) = 0;
          *(undefined8 *)(puVar14 + 0x88) = 0;
          *(undefined8 *)(puVar14 + 0x98) = 0;
          *(undefined8 *)(puVar14 + 0xa0) = 0;
          *(undefined8 *)(puVar14 + 0xb8) = 0;
          *(undefined8 *)(puVar14 + 0xc0) = 0;
          *(undefined8 *)(puVar14 + 200) = 0;
          *(undefined8 *)(puVar14 + 0xd0) = 0;
          *(undefined8 *)(puVar14 + 0xe0) = 0;
          *(undefined8 *)(puVar14 + 0xe8) = 0;
          *(undefined8 *)(puVar14 + 0x100) = 0;
          *(undefined8 *)(puVar14 + 0x108) = 0;
          *(undefined8 *)(puVar14 + 0x110) = 0;
          *(undefined8 *)(puVar14 + 0x118) = 0;
          puVar14 = puVar14 + 0x120;
        } while (puVar14 != puVar12 + uVar17 * 0x48);
      }
    }
    *(undefined1 **)(param_1 + 0x88) = puVar12;
    *(undefined1 *)(param_1 + 0x78) = 1;
    if (*(char *)(param_1 + 0x40) == '\0') goto LAB_03b6a340;
LAB_03b6a108:
    cVar5 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') goto LAB_03b6a108;
LAB_03b6a340:
    lVar19 = *(long *)puVar3;
    sVar18 = (ulong)param_3 << 1;
    *(uint *)(param_1 + 0x60) = param_3;
    if ((int)param_3 < 0) {
      sVar18 = 0xffffffffffffffff;
    }
    if (lVar19 == 0) {
      pvVar11 = malloc(sVar18);
    }
    else {
      plVar10 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar19 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        pvVar11 = (void *)0x0;
        if (plVar10 == (long *)0x0) goto LAB_03b6a3b0;
      }
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,8);
    }
LAB_03b6a3b0:
    *(void **)(param_1 + 0x68) = pvVar11;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar19 = 0;
      do {
        lVar9 = lVar19 + 1;
        *(short *)(*(long *)(param_1 + 0x68) + lVar19 * 2) = (short)lVar9;
        lVar19 = lVar9;
      } while (lVar9 < *(int *)(param_1 + 0x60));
      pvVar11 = *(void **)(param_1 + 0x68);
    }
    uVar17 = (ulong)(int)param_3;
    *(undefined2 *)((long)pvVar11 + (long)(int)param_3 * 2 + -2) = 0xffff;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    *(uint *)(param_1 + 0x50) = param_3;
    *(uint *)(param_1 + 0x54) = param_3;
    lVar19 = *(long *)puVar3;
    sVar18 = (-(ulong)(param_3 >> 0x1f) & 0xffffff0000000000 | (ulong)param_3 << 8) + uVar17 * -0x20
             | 8;
    if (SUB168(auVar7 * ZEXT816(0xe0),8) != 0) {
      sVar18 = 0xffffffffffffffff;
    }
    if (lVar19 == 0) {
      puVar13 = malloc(sVar18);
    }
    else {
      plVar10 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar19 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      puVar13 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,0x20);
    }
    *puVar13 = uVar17;
    if (param_3 != 0) {
      lVar19 = 0;
      do {
        lVar9 = lVar19 + 0xe0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x28) = 0;
        lVar2 = (long)puVar13 + lVar19 + 0x68;
        *(undefined4 *)((long)puVar13 + lVar19 + 0x30) = 0;
        *(long *)((long)puVar13 + lVar19 + 0x70) = lVar2;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x78) = 0xffffffff00000000;
        *(undefined2 *)((long)puVar13 + lVar19 + 0x38) = 0xffff;
        *(undefined4 *)((long)puVar13 + lVar19 + 0x50) = 0;
        *(undefined2 *)((long)puVar13 + lVar19 + 0x54) = 0;
        *(undefined4 *)((long)puVar13 + lVar19 + 0x58) = 0;
        *(undefined4 *)((long)puVar13 + lVar19 + 0xa8) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x90) = 0xffffffff00000000;
        *(undefined8 *)((long)puVar13 + lVar19 + 0xac) = 0xffffffff;
        *(undefined2 *)((long)puVar13 + lVar19 + 0xb4) = 0;
        *(undefined2 *)((long)puVar13 + lVar19 + 0xb8) = 0;
        *(undefined1 *)((long)puVar13 + lVar19 + 0xba) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0xbc) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0xc4) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0xcc) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0xd4) = 0;
        *(undefined4 *)((long)puVar13 + lVar19 + 0xdc) = 0;
        *(undefined2 *)((long)puVar13 + lVar19 + 0xe0) = 0xffff;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x60) = 0;
        *(long *)((long)puVar13 + lVar19 + 0x68) = lVar2;
        lVar2 = (long)puVar13 + lVar19 + 0x80;
        *(long *)((long)puVar13 + lVar19 + 0x80) = lVar2;
        *(long *)((long)puVar13 + lVar19 + 0x88) = lVar2;
        lVar2 = (long)puVar13 + lVar19 + 0x98;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x48) = 0;
        *(long *)((long)puVar13 + lVar19 + 0x98) = lVar2;
        *(long *)((long)puVar13 + lVar19 + 0xa0) = lVar2;
        *(undefined8 *)((long)puVar13 + lVar19 + 8) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x10) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x18) = 0;
        *(undefined8 *)((long)puVar13 + lVar19 + 0x20) = 0;
        lVar19 = lVar9;
      } while (uVar17 * 0xe0 != lVar9);
    }
    *(ulong **)(param_1 + 0x48) = puVar13 + 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    cVar5 = *(char *)(param_1 + 8);
  }
  if (cVar5 != '\0') goto LAB_03b6a724;
  lVar19 = *(long *)puVar3;
  sVar18 = (ulong)param_3 << 1;
  *(uint *)(param_1 + 0x28) = param_3;
  if ((int)param_3 < 0) {
    sVar18 = 0xffffffffffffffff;
  }
  if (lVar19 == 0) {
    pvVar11 = malloc(sVar18);
  }
  else {
    plVar10 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar11 = (void *)0x0;
      if (plVar10 == (long *)0x0) goto LAB_03b6a5b4;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar18,8);
  }
LAB_03b6a5b4:
  *(void **)(param_1 + 0x30) = pvVar11;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar19 = 0;
    do {
      lVar9 = lVar19 + 1;
      *(short *)(*(long *)(param_1 + 0x30) + lVar19 * 2) = (short)lVar9;
      lVar19 = lVar9;
    } while (lVar9 < *(int *)(param_1 + 0x28));
    pvVar11 = *(void **)(param_1 + 0x30);
  }
  *(undefined2 *)((long)pvVar11 + (long)(int)param_3 * 2 + -2) = 0xffff;
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = param_3;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (long)(int)param_3;
  lVar19 = *(long *)puVar3;
  sVar18 = (long)(int)param_3 * 0xd0 | 8;
  if (SUB168(auVar8 * ZEXT816(0xd0),8) != 0) {
    sVar18 = 0xffffffffffffffff;
  }
  if (lVar19 == 0) {
    puVar13 = malloc(sVar18);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        param_2 = (long *)(lVar9 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar13 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar18,0x20);
  }
  *puVar13 = (long)(int)param_3;
  if (param_3 != 0) {
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    lVar19 = 0;
    do {
      lVar9 = (long)puVar13 + lVar19 + 8;
      *(undefined4 *)((long)puVar13 + lVar19 + 0x18) = 0;
      *(undefined4 *)((long)puVar13 + lVar19 + 0x30) = 0x80;
      *(undefined1 *)((long)puVar13 + lVar19 + 0xb3) = 0;
      *(long *)((long)puVar13 + lVar19 + 8) = lVar9;
      *(long *)((long)puVar13 + lVar19 + 0x10) = lVar9;
      puVar4 = (undefined8 *)((long)puVar13 + lVar19 + 0x34);
      *(undefined8 **)((long)puVar13 + lVar19 + 0x28) = puVar4;
      if (puVar4 != &DAT_0407ebb1) {
        *(undefined1 *)puVar4 = 0;
      }
      lVar9 = lVar19 + 0xd0;
      *(undefined **)((long)puVar13 + lVar19 + 0x20) = puVar3;
      *(undefined8 *)((long)puVar13 + lVar19 + 0xb8) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar13 + lVar19 + 0xc0) = 0;
      *(undefined2 *)((long)puVar13 + lVar19 + 0xc2) = 0xffff;
      *(undefined4 *)((long)puVar13 + lVar19 + 0x1c) = 200;
      *(undefined8 *)((long)puVar13 + lVar19 + 200) = 0;
      *(undefined8 *)((long)puVar13 + lVar19 + 0xd0) = 0;
      lVar19 = lVar9;
    } while ((long)(int)param_3 * 0xd0 != lVar9);
  }
  *(ulong **)(param_1 + 0x10) = puVar13 + 1;
  *(undefined1 *)(param_1 + 8) = 1;
LAB_03b6a724:
  *(undefined2 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xc0;
  return;
}

