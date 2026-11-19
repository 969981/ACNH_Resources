
void FUN_03aa7c80(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  undefined *local_70;
  byte *local_68;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = crc32b(0xffffffff,99,0x4c11db7);
  uVar4 = crc32b(uVar3,0x6f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar13 = crc32b(uVar4,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x10) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 8;
    *(long *)(param_2 + 0x10) = param_1 + 8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 **)(param_1 + 0x20) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x28) = 0x3f6666663f800000;
  uVar4 = crc32b(0xffffffff,0x62,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x75,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x66,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x66,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar13 = crc32b(uVar4,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x38) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x30;
    *(long *)(param_2 + 0x10) = param_1 + 0x30;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar4 = crc32b(0xffffffff,0x69,0x4c11db7);
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x62,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar5 = crc32b(uVar4,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar5,100,0x4c11db7);
  *(uint *)(param_1 + 0x58) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x50;
    *(long *)(param_2 + 0x10) = param_1 + 0x50;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  uVar5 = crc32b(0xffffffff,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar5,100,0x4c11db7);
  *(uint *)(param_1 + 0x78) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x70;
    *(long *)(param_2 + 0x10) = param_1 + 0x70;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  uVar5 = crc32b(0xffffffff,0x67,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar5,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x75,0x4c11db7);
  uVar13 = crc32b(uVar6,0x6d,0x4c11db7);
  *(uint *)(param_1 + 0x98) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x90;
    *(long *)(param_2 + 0x10) = param_1 + 0x90;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar5 = crc32b(uVar5,100,0x4c11db7);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 6;
  uVar5 = crc32b(uVar5,0x69,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x70,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar13 = crc32b(uVar5,0x6c,0x4c11db7);
  *(uint *)(param_1 + 0xb8) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0xb0;
    *(long *)(param_2 + 0x10) = param_1 + 0xb0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 200) = 0x3ea8f5c3;
  lVar10 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar12 = malloc(0x148);
    if (puVar12 == (undefined8 *)0x0) goto LAB_03aa80c8;
LAB_03aa800c:
    uVar5 = crc32b(0xffffffff,100,0x4c11db7);
    iVar15 = 8;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *puVar12 = 8;
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    uVar5 = crc32b(uVar5,0x66,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    puVar16 = puVar12 + 1;
    *puVar16 = &PTR_LAB_04b66448;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    uVar5 = crc32b(uVar5,0x75,0x4c11db7);
    puVar12[5] = 0x3f80000000000000;
    puVar12[6] = &PTR_LAB_04b66448;
    puVar12[0x28] = 0x3f80000000000000;
    uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
    puVar12[10] = 0x3f80000000000000;
    puVar12[0xb] = &PTR_LAB_04b66448;
    puVar12[0xf] = 0x3f80000000000000;
    puVar12[0x10] = &PTR_LAB_04b66448;
    uVar13 = crc32b(uVar5,0x74,0x4c11db7);
    puVar12[0x14] = 0x3f80000000000000;
    puVar12[0x15] = &PTR_LAB_04b66448;
    uVar13 = ~uVar13;
    puVar12[0x17] = 0;
    puVar12[0x18] = 0;
    *(uint *)(puVar12 + 2) = uVar13;
    *(uint *)(puVar12 + 7) = uVar13;
    *(uint *)(puVar12 + 0xc) = uVar13;
    *(uint *)(puVar12 + 0x11) = uVar13;
    *(uint *)(puVar12 + 0x16) = uVar13;
    *(uint *)(puVar12 + 0x1b) = uVar13;
    *(uint *)(puVar12 + 0x20) = uVar13;
    *(uint *)(puVar12 + 0x25) = uVar13;
    puVar12[0x19] = 0x3f80000000000000;
    puVar12[0x1a] = &PTR_LAB_04b66448;
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1e] = 0x3f80000000000000;
    puVar12[0x1f] = &PTR_LAB_04b66448;
    puVar12[0x21] = 0;
    puVar12[0x22] = 0;
    puVar12[0x23] = 0x3f80000000000000;
    puVar12[0x24] = &PTR_LAB_04b66448;
    puVar12[0x26] = 0;
    puVar12[0x27] = 0;
    *(undefined4 *)(param_1 + 0xd0) = 8;
    *(undefined8 **)(param_1 + 0xd8) = puVar16;
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar10 + 8);
      if (lVar11 != 0) {
        param_3 = (long *)(lVar11 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) goto LAB_03aa80c8;
    }
    puVar12 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x148,8);
    if (puVar12 != (undefined8 *)0x0) goto LAB_03aa800c;
LAB_03aa80c8:
    iVar15 = *(int *)(param_1 + 0xd0);
    if (iVar15 == 0) goto LAB_03aa81a0;
    puVar16 = *(undefined8 **)(param_1 + 0xd8);
  }
  puVar9 = PTR_DAT_04bb2020;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    iVar17 = (int)uVar18;
    puVar12 = puVar16 + (long)iVar17 * 5;
    local_68 = (byte *)((long)&DAT_041dffc4 +
                       (long)*(int *)((long)&DAT_041dffc4 +
                                     (-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2)));
    puVar12[2] = 0;
    local_70 = puVar1;
    (**(code **)(puVar9 + 0x28))(&local_70);
    uVar13 = (uint)*local_68;
    if (*local_68 != 0) {
      uVar14 = 0xffffffff;
      do {
        local_68 = local_68 + 1;
        uVar14 = crc32b(uVar14,uVar13,0x4c11db7);
        uVar13 = (uint)*local_68;
      } while (uVar13 != 0);
      uVar13 = ~uVar14;
    }
    *(uint *)(puVar12 + 1) = uVar13;
    if (param_2 != 0) {
      puVar7 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 0x10) != 0) {
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      }
      *puVar7 = puVar12;
      *(undefined8 **)(param_2 + 0x10) = puVar12;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    }
    puVar16[(long)iVar17 * 5 + 3] = &DAT_3f8000003f800000;
    puVar16[(long)iVar17 * 5 + 4] = &DAT_3f8000003f800000;
    uVar2 = uVar18 + 1;
    uVar18 = uVar2 & 0xffffffff;
  } while (iVar15 != (int)uVar2);
LAB_03aa81a0:
  uVar5 = crc32b(uVar4,0x68,0x4c11db7);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar5,0x6f,0x4c11db7);
  *(uint *)(param_1 + 0xe8) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0xe0;
    *(long *)(param_2 + 0x10) = param_1 + 0xe0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  uVar5 = crc32b(0xffffffff,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar5,0x77,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar6 = crc32b(uVar6,100,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar13 = crc32b(uVar6,0x68,0x4c11db7);
  *(uint *)(param_1 + 0x108) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x100;
    *(long *)(param_2 + 0x10) = param_1 + 0x100;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar5 = crc32b(uVar5,99,0x4c11db7);
  *(undefined4 *)(param_1 + 0x118) = 0x3f0f5c29;
  *(undefined8 *)(param_1 + 0x130) = 0;
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar13 = crc32b(uVar5,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x128) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x120;
    *(long *)(param_2 + 0x10) = param_1 + 0x120;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 **)(param_1 + 0x138) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x140) = &DAT_3f8000003f800000;
  uVar4 = crc32b(uVar4,99,0x4c11db7);
  uVar4 = crc32b(uVar4,0x68,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,100,0x4c11db7);
  uVar4 = crc32b(uVar4,0x69,0x4c11db7);
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x69,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar13 = crc32b(uVar4,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x150) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x148;
    *(long *)(param_2 + 0x10) = param_1 + 0x148;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x160) = 1;
  uVar3 = crc32b(uVar3,0x68,0x4c11db7);
  uVar3 = crc32b(uVar3,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
  uVar13 = crc32b(uVar3,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x170) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 0x168;
    *(long *)(param_2 + 0x10) = param_1 + 0x168;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(uVar13,0x5f,0x4c11db7);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0x3c23d70abc23d70a;
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  *(undefined4 *)(param_1 + 0x188) = 0x3cf5c28f;
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar3,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x198) = ~uVar13;
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar8 = param_1 + 400;
    *(long *)(param_2 + 0x10) = param_1 + 400;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0xc0333333;
  return;
}

