
undefined8 FUN_038414f0(byte *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  uVar5 = DAT_05aec208;
  uVar7 = *(undefined8 *)PTR_DAT_04bb49b0;
  FUN_03bebdd0(uVar7,0x1b,*param_2);
  FUN_03bebdd0(uVar5,0x1b,*param_2);
  FUN_03bebf70(uVar7,0);
  FUN_03bebf70(uVar7,1,param_1 + 0x78);
  FUN_03bebf70(uVar7,2,param_1 + 0x158);
  FUN_03bebf70(uVar7,3,param_1 + 0x1c8);
  FUN_03bebf70(uVar7,4,param_1 + 0x238);
  uVar9 = *(uint *)(param_1 + 0x310);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x318);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_03841620;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x318) + (long)*(int *)(param_1 + 0x310) * 0x10 + 8) = 0;
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
LAB_03841620:
  uVar9 = *(uint *)(param_1 + 0x3a8);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x3b0);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_0384168c;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)*(int *)(param_1 + 0x3a8) * 0x10 + 8) = 0;
  *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
LAB_0384168c:
  uVar9 = *(uint *)(param_1 + 0x440);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x448);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_038416fc;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x448) + (long)*(int *)(param_1 + 0x440) * 0x10 + 8) = 0;
  *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
LAB_038416fc:
  uVar9 = *(uint *)(param_1 + 0x310);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x318);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_03841770;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x318) + (long)*(int *)(param_1 + 0x310) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
LAB_03841770:
  uVar9 = *(uint *)(param_1 + 0x3a8);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x3b0);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_038417f0;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)*(int *)(param_1 + 0x3a8) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
LAB_038417f0:
  uVar9 = *(uint *)(param_1 + 0x440);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x448);
  if (0 < (int)uVar9) {
    puVar14 = puVar11;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_03841860;
      uVar10 = uVar10 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar10 != 0);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x448) + (long)*(int *)(param_1 + 0x440) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
LAB_03841860:
  FUN_03bebf70(uVar7,5,param_1 + 0x2a8);
  FUN_03bebf70(uVar7,6,param_1 + 0x340);
  FUN_03bebf70(uVar7,7,param_1 + 0x3d8);
  FUN_03bebf70(uVar5,0,param_1 + 8);
  FUN_03bebf70(uVar5,1,param_1 + 0x78);
  FUN_03bebf70(uVar5,2,param_1 + 0xe8);
  FUN_03bebf70(uVar5,0x18,param_1 + 0xff8);
  puVar4 = PTR_DAT_04bb62f8;
  uVar9 = 0;
  do {
    while (uVar9 < 8) {
      uVar2 = *(uint *)(param_1 + 0x4d8);
      uVar10 = (ulong)uVar2;
      puVar14 = *(undefined8 **)(param_1 + 0x4e0);
      pcVar8 = *(char **)(puVar4 + (ulong)uVar9 * 8 + 0x38);
      puVar11 = puVar14;
      if (0 < (int)uVar2) {
        do {
          iVar6 = strcmp((char *)*puVar11,pcVar8);
          if (iVar6 == 0) goto LAB_03841918;
          uVar10 = uVar10 - 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar14[(long)(int)uVar2 * 2] = pcVar8;
      *(uint *)(*(long *)(param_1 + 0x4e0) + (long)*(int *)(param_1 + 0x4d8) * 0x10 + 8) = uVar9;
      *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
LAB_03841918:
      uVar9 = uVar9 + 1;
      if (uVar9 == 8) goto LAB_038419d4;
    }
    uVar2 = *(uint *)(param_1 + 0x4d8);
    uVar10 = (ulong)uVar2;
    puVar11 = *(undefined8 **)(param_1 + 0x4e0);
    if (0 < (int)uVar2) {
      do {
        if (*(char *)*puVar11 == '\0') goto LAB_03841984;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 != 0);
    }
    (*(undefined8 **)(param_1 + 0x4e0))[(long)(int)uVar2 * 2] = &DAT_0407ebb1;
    *(uint *)(*(long *)(param_1 + 0x4e0) + (long)*(int *)(param_1 + 0x4d8) * 0x10 + 8) = uVar9;
    *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
LAB_03841984:
    bVar1 = (int)uVar9 < 7;
    uVar9 = uVar9 + 1;
  } while (bVar1);
LAB_038419d4:
  FUN_03bebf70(uVar7,8,param_1 + 0x470);
  FUN_03bebf70(uVar5,8,param_1 + 0x470);
  FUN_03bebf70(uVar7,9,param_1 + 0x568);
  FUN_03bebf70(uVar5,9,param_1 + 0x568);
  FUN_03bebf70(uVar7,10,param_1 + 0x5e0);
  FUN_03bebf70(uVar5,10,param_1 + 0x5e0);
  uVar9 = 0;
  do {
    while (uVar9 < 4) {
      uVar2 = *(uint *)(param_1 + 0x6b8);
      uVar10 = (ulong)uVar2;
      puVar14 = *(undefined8 **)(param_1 + 0x6c0);
      pcVar8 = (&PTR_DAT_04b5dae0)[uVar9];
      puVar11 = puVar14;
      if (0 < (int)uVar2) {
        do {
          iVar6 = strcmp((char *)*puVar11,pcVar8);
          if (iVar6 == 0) goto LAB_03841a88;
          uVar10 = uVar10 - 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar14[(long)(int)uVar2 * 2] = pcVar8;
      *(uint *)(*(long *)(param_1 + 0x6c0) + (long)*(int *)(param_1 + 0x6b8) * 0x10 + 8) = uVar9;
      *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
LAB_03841a88:
      uVar9 = uVar9 + 1;
      if (uVar9 == 4) goto LAB_03841b44;
    }
    uVar2 = *(uint *)(param_1 + 0x6b8);
    uVar10 = (ulong)uVar2;
    puVar11 = *(undefined8 **)(param_1 + 0x6c0);
    if (0 < (int)uVar2) {
      do {
        if (*(char *)*puVar11 == '\0') goto LAB_03841af4;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 != 0);
    }
    (*(undefined8 **)(param_1 + 0x6c0))[(long)(int)uVar2 * 2] = &DAT_0407ebb1;
    *(uint *)(*(long *)(param_1 + 0x6c0) + (long)*(int *)(param_1 + 0x6b8) * 0x10 + 8) = uVar9;
    *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
LAB_03841af4:
    bVar1 = (int)uVar9 < 3;
    uVar9 = uVar9 + 1;
  } while (bVar1);
LAB_03841b44:
  FUN_03bebf70(uVar7,0xb,param_1 + 0x650);
  FUN_03bebf70(uVar5,0xb,param_1 + 0x650);
  uVar9 = *(uint *)(param_1 + 0x770);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x778);
  if (0 < (int)uVar9) {
    lVar12 = 0;
    do {
      iVar6 = strcmp(*(char **)((long)puVar11 + lVar12),&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_03841be0;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 * 0x10 != lVar12);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x778) + (long)*(int *)(param_1 + 0x770) * 0x10 + 8) = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x778);
  uVar10 = (ulong)(*(int *)(param_1 + 0x770) + 1U);
  *(uint *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + 1U;
LAB_03841be0:
  if (0 < (int)uVar10) {
    puVar14 = puVar11;
    uVar13 = uVar10;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_03841c4c;
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar13 != 0);
  }
  *(undefined **)((long)puVar11 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) =
       &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x778) + (long)*(int *)(param_1 + 0x770) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + 1;
LAB_03841c4c:
  FUN_03bebf70(uVar7,0xc,param_1 + 0x708);
  FUN_03bebf70(uVar5,0xc,param_1 + 0x708);
  uVar9 = *(uint *)(param_1 + 0x808);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x810);
  if (0 < (int)uVar9) {
    lVar12 = 0;
    do {
      iVar6 = strcmp(*(char **)((long)puVar11 + lVar12),&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_03841ce0;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 * 0x10 != lVar12);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x810) + (long)*(int *)(param_1 + 0x808) * 0x10 + 8) = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x810);
  uVar10 = (ulong)(*(int *)(param_1 + 0x808) + 1U);
  *(uint *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + 1U;
LAB_03841ce0:
  if (0 < (int)uVar10) {
    puVar14 = puVar11;
    uVar13 = uVar10;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_03841d4c;
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar13 != 0);
  }
  *(undefined **)((long)puVar11 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) =
       &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x810) + (long)*(int *)(param_1 + 0x808) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + 1;
LAB_03841d4c:
  FUN_03bebf70(uVar7,0xd,param_1 + 0x7a0);
  FUN_03bebf70(uVar5,0xd,param_1 + 0x7a0);
  FUN_03bebf70(uVar7,0xe,param_1 + 0x838);
  FUN_03bebf70(uVar5,0xe,param_1 + 0x838);
  FUN_03bebf70(uVar7,0xf,param_1 + 0x8a8);
  FUN_03bebf70(uVar5,0xf,param_1 + 0x8a8);
  FUN_03bebf70(uVar7,0x10,param_1 + 0x918);
  FUN_03bebf70(uVar5,0x10,param_1 + 0x918);
  FUN_03bebf70(uVar7,0x11,param_1 + 0x988);
  FUN_03bebf70(uVar5,0x11,param_1 + 0x988);
  FUN_03bebf70(uVar7,0x12,param_1 + 0x9f8);
  FUN_03bebf70(uVar5,0x12,param_1 + 0x9f8);
  FUN_03bebf70(uVar7,0x13,param_1 + 0xa68);
  FUN_03bebf70(uVar5,0x13,param_1 + 0xa68);
  FUN_03bebf70(uVar7,0x14,param_1 + 0xad8);
  FUN_03bebf70(uVar5,0x14,param_1 + 0xad8);
  FUN_03bebf70(uVar7,0x15,param_1 + 0xb48);
  FUN_03bebf70(uVar5,0x15,param_1 + 0xb48);
  uVar9 = *(uint *)(param_1 + 0xc20);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0xc28);
  if (0 < (int)uVar9) {
    lVar12 = 0;
    do {
      iVar6 = strcmp(*(char **)((long)puVar11 + lVar12),&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_03841f20;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 * 0x10 != lVar12);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0xc28) + (long)*(int *)(param_1 + 0xc20) * 0x10 + 8) = 0;
  puVar11 = *(undefined8 **)(param_1 + 0xc28);
  uVar10 = (ulong)(*(int *)(param_1 + 0xc20) + 1U);
  *(uint *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) + 1U;
LAB_03841f20:
  if (0 < (int)uVar10) {
    puVar14 = puVar11;
    uVar13 = uVar10;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_03841f8c;
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar13 != 0);
  }
  *(undefined **)((long)puVar11 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) =
       &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0xc28) + (long)*(int *)(param_1 + 0xc20) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) + 1;
LAB_03841f8c:
  FUN_03bebf70(uVar7,0x16,param_1 + 3000);
  FUN_03bebf70(uVar5,0x16,param_1 + 3000);
  uVar9 = 0;
  do {
    while (uVar9 < 0x33) {
      uVar2 = *(uint *)(param_1 + 0xcb8);
      uVar10 = (ulong)uVar2;
      puVar14 = *(undefined8 **)(param_1 + 0xcc0);
      pcVar8 = (&PTR_DAT_04b5dee0)[uVar9];
      puVar11 = puVar14;
      if (0 < (int)uVar2) {
        do {
          iVar6 = strcmp((char *)*puVar11,pcVar8);
          if (iVar6 == 0) goto LAB_03841fec;
          uVar10 = uVar10 - 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar14[(long)(int)uVar2 * 2] = pcVar8;
      *(uint *)(*(long *)(param_1 + 0xcc0) + (long)*(int *)(param_1 + 0xcb8) * 0x10 + 8) = uVar9;
      *(int *)(param_1 + 0xcb8) = *(int *)(param_1 + 0xcb8) + 1;
LAB_03841fec:
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x33) goto LAB_038420b0;
    }
    uVar2 = *(uint *)(param_1 + 0xcb8);
    uVar10 = (ulong)uVar2;
    puVar11 = *(undefined8 **)(param_1 + 0xcc0);
    if (0 < (int)uVar2) {
      do {
        if (*(char *)*puVar11 == '\0') goto LAB_03842060;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 != 0);
    }
    (*(undefined8 **)(param_1 + 0xcc0))[(long)(int)uVar2 * 2] = &DAT_0407ebb1;
    *(uint *)(*(long *)(param_1 + 0xcc0) + (long)*(int *)(param_1 + 0xcb8) * 0x10 + 8) = uVar9;
    *(int *)(param_1 + 0xcb8) = *(int *)(param_1 + 0xcb8) + 1;
LAB_03842060:
    bVar1 = (int)uVar9 < 0x32;
    uVar9 = uVar9 + 1;
  } while (bVar1);
LAB_038420b0:
  FUN_03bebf70(uVar7,0x17,param_1 + 0xc50);
  uVar9 = *(uint *)(param_1 + 0x10d0);
  uVar10 = (ulong)uVar9;
  puVar11 = *(undefined8 **)(param_1 + 0x10d8);
  if (0 < (int)uVar9) {
    lVar12 = 0;
    do {
      iVar6 = strcmp(*(char **)((long)puVar11 + lVar12),&DAT_04b5dab8);
      if (iVar6 == 0) goto LAB_03842140;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 * 0x10 != lVar12);
  }
  puVar11[(long)(int)uVar9 * 2] = &DAT_04b5dab8;
  *(undefined4 *)(*(long *)(param_1 + 0x10d8) + (long)*(int *)(param_1 + 0x10d0) * 0x10 + 8) = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x10d8);
  uVar10 = (ulong)(*(int *)(param_1 + 0x10d0) + 1U);
  *(uint *)(param_1 + 0x10d0) = *(int *)(param_1 + 0x10d0) + 1U;
LAB_03842140:
  if (0 < (int)uVar10) {
    puVar14 = puVar11;
    uVar13 = uVar10;
    do {
      iVar6 = strcmp((char *)*puVar14,&DAT_04b5dabb);
      if (iVar6 == 0) goto LAB_038421ac;
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 2;
    } while (uVar13 != 0);
  }
  *(undefined **)((long)puVar11 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) =
       &DAT_04b5dabb;
  *(undefined4 *)(*(long *)(param_1 + 0x10d8) + (long)*(int *)(param_1 + 0x10d0) * 0x10 + 8) = 1;
  *(int *)(param_1 + 0x10d0) = *(int *)(param_1 + 0x10d0) + 1;
LAB_038421ac:
  FUN_03bebf70(uVar7,0x19,param_1 + 0x1068);
  FUN_03bebf70(uVar5,0x19,param_1 + 0x1068);
  uVar9 = 0xffffffff;
  do {
    while (uVar2 = uVar9 + 1, 8 < uVar2) {
      uVar3 = *(uint *)(param_1 + 0x1168);
      uVar10 = (ulong)uVar3;
      puVar11 = *(undefined8 **)(param_1 + 0x1170);
      if (0 < (int)uVar3) {
        do {
          if (*(char *)*puVar11 == '\0') goto LAB_03842280;
          uVar10 = uVar10 - 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
      }
      (*(undefined8 **)(param_1 + 0x1170))[(long)(int)uVar3 * 2] = &DAT_0407ebb1;
      *(uint *)(*(long *)(param_1 + 0x1170) + (long)*(int *)(param_1 + 0x1168) * 0x10 + 8) = uVar9;
      *(int *)(param_1 + 0x1168) = *(int *)(param_1 + 0x1168) + 1;
LAB_03842280:
      bVar1 = 7 < (int)uVar9;
      uVar9 = uVar2;
      if (bVar1) goto LAB_038422d0;
    }
    uVar3 = *(uint *)(param_1 + 0x1168);
    uVar10 = (ulong)uVar3;
    puVar14 = *(undefined8 **)(param_1 + 0x1170);
    pcVar8 = (&PTR_DAT_04b5e138)[uVar2];
    puVar11 = puVar14;
    if (0 < (int)uVar3) {
      do {
        iVar6 = strcmp((char *)*puVar11,pcVar8);
        if (iVar6 == 0) goto LAB_03842208;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar14[(long)(int)uVar3 * 2] = pcVar8;
    *(uint *)(*(long *)(param_1 + 0x1170) + (long)*(int *)(param_1 + 0x1168) * 0x10 + 8) = uVar9;
    *(int *)(param_1 + 0x1168) = *(int *)(param_1 + 0x1168) + 1;
LAB_03842208:
    uVar9 = uVar2;
  } while (uVar2 != 8);
LAB_038422d0:
  FUN_03bebf70(uVar7,0x1a,param_1 + 0x1100);
  FUN_03bec100(uVar7);
  FUN_03bec100(uVar5);
  param_1[0x5d8] = 0;
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  param_1[0x5dc] = 0;
  *param_1 = *param_1 | 1;
  return 1;
}

