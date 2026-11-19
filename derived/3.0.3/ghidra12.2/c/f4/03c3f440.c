
undefined8 FUN_03c3f440(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  void *__src;
  long lVar13;
  ulong uVar14;
  long lVar15;
  void *__dest;
  char *pcVar16;
  char *__src_00;
  long lVar17;
  
  if (param_3 == 0) {
    lVar17 = 1;
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = param_3;
  }
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x33c);
  plVar7 = DAT_05aed668;
  lVar9 = *(long *)PTR_DAT_04bb26e0;
  *(undefined1 *)(lVar9 + 0x340) = 1;
  *(undefined4 *)(lVar9 + 0x344) = 0;
  *(undefined8 *)(lVar9 + 0x32c) = 0;
  *(undefined4 *)(lVar9 + 0x333) = 0;
  *(undefined8 *)(lVar9 + 0x338) = 0x1d;
  DAT_05aec998 = 1;
  DAT_05aec99c = 1;
  uVar10 = (**(code **)(*plVar7 + 0x90))
                     (plVar7,*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x340));
  if ((uVar10 & 1) != 0) {
    *(undefined4 *)(*(long *)PTR_DAT_04bb2708 + 0x32c) = 0;
  }
  *(int *)(*(long *)PTR_DAT_04bb2660 + 0x2444) = *(int *)(*(long *)PTR_DAT_04bb2660 + 0x2444) + 1;
  *(undefined4 *)(*(long *)PTR_DAT_04bb26f0 + 0x32c) = 0;
  (**(code **)(**(long **)PTR_DAT_04bb26c0 + 0x48))();
  lVar9 = *(long *)PTR_DAT_04bb26e8;
  uVar3 = *(uint *)(lVar9 + 0x460);
  if (0 < (int)uVar3) {
    uVar10 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar15 = uVar14 * 4;
        uVar14 = uVar14 + 4;
        *(undefined4 *)(*(long *)(lVar9 + 0x468) + lVar15) = 0;
        *(undefined4 *)(*(long *)(lVar9 + 0x468) + lVar15 + 4) = 0;
        *(undefined4 *)(*(long *)(lVar9 + 0x468) + lVar15 + 8) = 0;
        *(undefined4 *)(*(long *)(lVar9 + 0x468) + lVar15 + 0xc) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar14);
    }
    if ((uVar3 & 3) != 0) {
      lVar15 = uVar14 << 2;
      do {
        uVar10 = uVar10 - 1;
        *(undefined4 *)(*(long *)(lVar9 + 0x468) + lVar15) = 0;
        lVar15 = lVar15 + 4;
      } while (uVar10 != 0);
    }
  }
  uVar3 = *(uint *)(lVar9 + 0x478);
  if (0 < (int)uVar3) {
    uVar10 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar15 = uVar14 * 8;
        uVar14 = uVar14 + 4;
        *(undefined8 *)(*(long *)(lVar9 + 0x480) + lVar15) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x480) + lVar15 + 8) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x480) + lVar15 + 0x10) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x480) + lVar15 + 0x18) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar14);
    }
    if ((uVar3 & 3) != 0) {
      lVar15 = uVar14 << 3;
      do {
        uVar10 = uVar10 - 1;
        *(undefined8 *)(*(long *)(lVar9 + 0x480) + lVar15) = 0;
        lVar15 = lVar15 + 8;
      } while (uVar10 != 0);
    }
  }
  uVar3 = *(uint *)(lVar9 + 0x488);
  if (0 < (int)uVar3) {
    uVar10 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar15 = uVar14 * 8;
        uVar14 = uVar14 + 4;
        *(undefined8 *)(*(long *)(lVar9 + 0x490) + lVar15) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x490) + lVar15 + 8) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x490) + lVar15 + 0x10) = 0;
        *(undefined8 *)(*(long *)(lVar9 + 0x490) + lVar15 + 0x18) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar14);
    }
    if ((uVar3 & 3) != 0) {
      lVar15 = uVar14 << 3;
      do {
        uVar10 = uVar10 - 1;
        *(undefined8 *)(*(long *)(lVar9 + 0x490) + lVar15) = 0;
        lVar15 = lVar15 + 8;
      } while (uVar10 != 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x6f0);
  bVar8 = FUN_03eb7030(lVar9);
  *(undefined4 *)(lVar9 + 0xc) = 0;
  iVar4 = *(int *)(lVar9 + 0x14);
  *(byte *)(lVar9 + 4) = bVar8 & 1;
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  iVar5 = *(int *)(lVar9 + 0x14);
  uVar2 = puVar11[3];
  uVar3 = *puVar11 ^ *puVar11 << 0xb;
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
  puVar11[2] = uVar2;
  puVar11[3] = uVar3;
  *(int *)(lVar9 + 0x10) = iVar4 + (int)((ulong)uVar3 * (ulong)(uint)(iVar5 / 10) >> 0x20);
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
  lVar9 = *(long *)PTR_DAT_04bb2718;
  *(undefined4 *)PTR_DAT_04bd4580 = 1000;
  puVar6 = PTR_DAT_04bb26b8;
  uVar10 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0xa8))();
  if (((uVar10 & 1) != 0) && (lVar9 = *(long *)(*(long *)(lVar9 + 0x400) + 0x10), lVar9 != 0)) {
    *(undefined1 *)(lVar9 + 0x3e) = 1;
  }
  (**(code **)(**(long **)puVar6 + 0xf0))();
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 200))();
  if (*(long **)PTR_DAT_04bb26c8 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04bb26c8 + 0x70))();
  }
  (**(code **)(*DAT_05aed668 + 0x20))(DAT_05aed668,*(undefined4 *)(param_1 + 0x338));
  lVar9 = (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,param_2);
  __src = *(void **)(lVar9 + 0x10);
  __dest = *(void **)(param_1 + 0x580);
  if (__dest != __src) {
    lVar15 = 0;
    do {
      if (*(char *)((long)__src + lVar15) == '\0') goto LAB_03c3f87c;
      if (*(char *)((long)__src + lVar15 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03c3f87c;
      }
      if (*(char *)((long)__src + lVar15 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03c3f87c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03c3f87c:
    iVar4 = (int)lVar15;
    if (*(int *)(param_1 + 0x588) <= (int)lVar15) {
      iVar4 = *(int *)(param_1 + 0x588) + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  lVar15 = param_1 + 0x348;
  pcVar16 = *(char **)(param_1 + 0x468);
  (**(code **)(*(long *)(param_1 + 0x348) + 0x18))(lVar15);
  __src_00 = *(char **)(param_1 + 0x350);
  if (pcVar16 != __src_00) {
    (**(code **)(*(long *)(param_1 + 0x348) + 0x18))(lVar15);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x350) + lVar13) == '\0') goto LAB_03c3f91c;
      lVar1 = *(long *)(param_1 + 0x350) + lVar13;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03c3f91c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_03c3f91c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03c3f91c:
    iVar4 = (int)lVar13;
    if (*(int *)(param_1 + 0x470) <= (int)lVar13) {
      iVar4 = *(int *)(param_1 + 0x470) + -1;
    }
    memcpy(pcVar16,__src_00,(long)iVar4);
    pcVar16[iVar4] = '\0';
    pcVar16 = *(char **)(param_1 + 0x350);
  }
  if (*pcVar16 != '\0') {
    pcVar16 = *(char **)(param_1 + 0x580);
    if (*pcVar16 != '\0') {
      (**(code **)(*(long *)(param_1 + 0x578) + 0x18))(param_1 + 0x578);
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x580) + lVar13) == '\0') goto LAB_03c3f9bc;
        lVar1 = *(long *)(param_1 + 0x580) + lVar13;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03c3f9bc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_03c3f9bc;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_03c3f9bc:
      uVar2 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
      uVar3 = *(int *)(param_1 + 0x588) + ~uVar2;
      if (1 < (int)(*(int *)(param_1 + 0x588) - uVar2)) {
        uVar3 = 1;
      }
      if (0 < (int)uVar3) {
        memcpy(pcVar16 + uVar2,&DAT_0408f28c,(ulong)uVar3);
        pcVar16[(ulong)uVar3 + (ulong)uVar2] = '\0';
      }
    }
    (**(code **)(*(long *)(param_1 + 0x348) + 0x18))(lVar15);
    FUN_038d13f0(param_1 + 0x578,&DAT_0409e973,*(undefined8 *)(param_1 + 0x350));
  }
  uVar12 = (**(code **)(lVar9 + 8))(param_2,param_3);
  *(undefined2 *)(param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  if (lVar17 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar17;
  }
  return uVar12;
}

