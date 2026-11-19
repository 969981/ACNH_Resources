
void FUN_03969170(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  undefined *puVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  void *__src;
  void *__dest;
  long lVar21;
  uint uVar22;
  ulong __size;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_480 [1056];
  
  uVar14 = (**(code **)(*param_1 + 0x20))();
  plVar11 = (long *)PTR_DAT_04bb2698;
  if (0 < (int)uVar14) {
    uVar23 = (ulong)uVar14;
    lVar21 = *(long *)PTR_DAT_04bb2698;
    __size = uVar23 * 0x820 | 8;
    if (lVar21 == 0) {
      puVar17 = malloc(__size);
    }
    else {
      plVar16 = param_2;
      if (param_2 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar21 + 8);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_039692ec;
      }
      puVar17 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar18 = puVar17 + 1;
      *puVar17 = uVar23;
      puVar12 = PTR_DAT_04bd1158;
      puVar1 = PTR_DAT_04bd1400 + 0x10;
      puVar17 = puVar18;
      do {
        *puVar17 = (ulong)puVar1;
        *(undefined4 *)(puVar17 + 0x103) = 1;
        puVar17[1] = 0x10000000000;
        puVar17[2] = (ulong)(puVar17 + 3);
        lVar21 = *(long *)puVar12;
        if ((lVar21 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
          (**(code **)(*(long *)(lVar21 + 8) + 0x18))((long *)(lVar21 + 8));
          FUN_006e9454(auStack_480,&DAT_0406a3d7,"Icon = IN",*(undefined8 *)(lVar21 + 0x10));
        }
        puVar17 = puVar17 + 0x104;
      } while (puVar17 != puVar18 + uVar23 * 0x104);
      *(uint *)(param_1 + 0x16) = uVar14;
      param_1[0x17] = (long)puVar18;
      plVar11 = (long *)PTR_DAT_04bb2698;
      goto joined_r0x039692f0;
    }
  }
LAB_039692ec:
  uVar14 = *(uint *)(param_1 + 0x16);
joined_r0x039692f0:
  if (uVar14 != 0) {
    uVar22 = 0;
    do {
      (**(code **)(*param_1 + 0x28))(auStack_480,param_1,uVar22);
      uVar22 = uVar22 + 1;
    } while (uVar14 != uVar22);
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  plVar16 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 0x58);
  if (plVar16 != (long *)0x0) {
    if (*plVar11 == 0) {
      puVar19 = malloc(0x4e0);
    }
    else {
      puVar19 = (undefined4 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x4e0,8);
    }
    puVar12 = PTR_DAT_04bb41a0;
    *puVar19 = 0;
    puVar19[0x16] = 0;
    *(undefined **)(puVar19 + 2) = puVar12 + 0x10;
    puVar1 = PTR_DAT_04bb2f80;
    *(undefined8 *)(puVar19 + 0x17) = 0x3f800000;
    *(undefined8 *)(puVar19 + 0x2d) = 0;
    *(undefined8 *)(puVar19 + 0x2b) = 0;
    *(undefined8 *)(puVar19 + 0x2f) = 0x3f800000;
    *(undefined8 *)(puVar19 + 0x33) = 0;
    uVar3 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(puVar1 + 8);
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    uVar7 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar19 + 0x35) = 0;
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    uVar8 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined **)(puVar19 + 0x1a) = puVar12 + 0x10;
    *(undefined8 *)(puVar19 + 0x1c) = uVar3;
    *(undefined8 *)(puVar19 + 6) = uVar6;
    *(undefined8 *)(puVar19 + 8) = uVar4;
    puVar19[0x2a] = 0x41200000;
    *(undefined8 *)(puVar19 + 0x1e) = uVar6;
    *(undefined8 *)(puVar19 + 0x20) = uVar4;
    *(undefined8 *)(puVar19 + 10) = uVar7;
    *(undefined8 *)(puVar19 + 0xc) = uVar5;
    fVar13 = DAT_04c4bac0;
    puVar19[0x32] = DAT_04c4bac0;
    puVar20 = (undefined8 *)(puVar19 + 4);
    *puVar20 = uVar3;
    *(undefined8 *)(puVar19 + 0x22) = uVar7;
    *(undefined8 *)(puVar19 + 0x24) = uVar5;
    *(undefined8 *)(puVar19 + 0x26) = uVar8;
    *(undefined8 *)(puVar19 + 0x28) = 0;
    puVar19[0x3a] = fVar13 * 0.01;
    *(undefined8 *)(puVar19 + 0x3c) = 0x42340000;
    *(undefined8 *)(puVar19 + 0x3e) = 0x3fe38e3900000000;
    *(undefined1 *)((long)puVar19 + 0x111) = 1;
    puVar19[0x3b] = fVar13 * 1000.0;
    uVar9 = *(undefined4 *)PTR_DAT_04bd0ea8;
    uVar24 = *(undefined4 *)PTR_DAT_04bd0eb0;
    puVar19[0x65] = uVar9;
    puVar19[0x66] = uVar24;
    uVar25 = *(undefined4 *)PTR_DAT_04bd0eb8;
    puVar19[0x67] = uVar25;
    puVar1 = PTR_DAT_04bbd858;
    *(undefined8 *)(puVar19 + 0x6f) = 0;
    puVar19[0x6e] = 0x3faaaaab;
    *(undefined1 *)(puVar19 + 0x44) = 1;
    *(undefined1 *)((long)puVar19 + 0x1d1) = 1;
    puVar19[0x95] = uVar9;
    puVar19[0x96] = uVar24;
    *(undefined4 **)(puVar19 + 0x40) = puVar19 + 0x42;
    *(undefined **)(puVar19 + 0x42) = puVar1 + 0x10;
    *(undefined8 *)(puVar19 + 0x68) = 0x461c40003f800000;
    *(undefined8 *)(puVar19 + 0x6a) = 0x3ec3ef163f490fdb;
    *(undefined8 *)(puVar19 + 0x6c) = 0x3ed413cd3f6c835e;
    puVar1 = PTR_DAT_04bd0ed0;
    puVar19[0x97] = uVar25;
    *(undefined **)(puVar19 + 0x72) = puVar1 + 0x10;
    puVar1 = PTR_DAT_04bbd558;
    *(undefined8 *)(puVar19 + 0xa8) = 0;
    *(undefined8 *)(puVar19 + 0xaa) = 0;
    *(undefined8 *)(puVar19 + 0xac) = 0;
    *(undefined1 *)(puVar19 + 0xae) = 1;
    *(undefined1 *)(puVar19 + 0x74) = 1;
    *(undefined1 *)((long)puVar19 + 0x2c9) = 1;
    puVar19[0xd3] = uVar9;
    puVar19[0xd4] = uVar24;
    puVar19[0xd5] = uVar25;
    uVar3 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar19 + 0xa6) = *(undefined8 *)(puVar1 + 0x38);
    *(undefined8 *)(puVar19 + 0xa4) = uVar3;
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar19 + 0xa2) = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar19 + 0xa0) = uVar3;
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar19 + 0x9e) = *(undefined8 *)(puVar1 + 0x18);
    uVar4 = *(undefined8 *)puVar1;
    uVar5 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar19 + 0x9c) = uVar3;
    *(undefined8 *)(puVar19 + 0x9a) = uVar5;
    *(undefined8 *)(puVar19 + 0x98) = uVar4;
    puVar1 = PTR_DAT_04bd0ec0;
    *(undefined1 *)(puVar19 + 0xb2) = 1;
    *(undefined8 *)(puVar19 + 0xdc) = 0;
    *(undefined8 *)(puVar19 + 0xe6) = 0;
    puVar19[0xe8] = 0;
    *(undefined8 *)(puVar19 + 0xea) = 0;
    puVar19[0xec] = 0;
    puVar19[0xf1] = 0;
    *(undefined1 *)((long)puVar19 + 0x4db) = 0;
    *(undefined1 **)(puVar19 + 0xde) = &DAT_3f8000003f800000;
    *(undefined **)(puVar19 + 0xb0) = puVar1 + 0x10;
    *(undefined8 *)(puVar19 + 0xd6) = 0x3f80000000000000;
    *(undefined8 *)(puVar19 + 0xd8) = 0xbf0000003f000000;
    *(undefined8 *)(puVar19 + 0xda) = 0x3f000000bf000000;
    *(undefined8 *)(puVar19 + 0xe1) = 0x3dcccccd;
    puVar19[0xe0] = fVar13 * 0.1;
    *(undefined8 *)(puVar19 + 0xe3) = 0;
    *(undefined4 **)(puVar19 + 0xf4) = puVar19 + 0xf7;
    puVar19[0xf6] = 0x100;
    puVar19[0xe5] = fVar13 * 10.0;
    puVar19[0xf0] = fVar13 * 10.0;
    puVar1 = PTR_DAT_04bb21f8;
    *(undefined1 *)(puVar19 + 0xf7) = 0;
    *(undefined8 *)(puVar19 + 0xe) = uVar8;
    *(undefined8 *)(puVar19 + 0x10) = 0;
    puVar19[0xef] = 0;
    *(undefined **)(puVar19 + 0xf2) = puVar1 + 0x10;
    *(undefined8 *)(puVar19 + 0xed) = 0;
    *(undefined8 *)(puVar19 + 0x12) = 0x8000000000000000;
    *(undefined8 *)(puVar19 + 0x14) = 0xbf80000080000000;
    FUN_038e4634(puVar19 + 2,puVar20);
    *(undefined8 *)(puVar19 + 0x26) = *(undefined8 *)(puVar19 + 0xe);
    *(undefined8 *)(puVar19 + 0x24) = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)(puVar19 + 0x28) = *(undefined8 *)(puVar19 + 0x10);
    *(undefined8 *)(puVar19 + 0x2b) = *(undefined8 *)(puVar19 + 0x13);
    *(undefined8 *)(puVar19 + 0x1e) = *(undefined8 *)(puVar19 + 6);
    *(undefined8 *)(puVar19 + 0x1c) = *puVar20;
    *(undefined8 *)(puVar19 + 0x22) = *(undefined8 *)(puVar19 + 10);
    *(undefined8 *)(puVar19 + 0x20) = *(undefined8 *)(puVar19 + 8);
    puVar19[0x2a] = puVar19[0x12];
    *(undefined8 *)(puVar19 + 0x2d) = *(undefined8 *)(puVar19 + 0x15);
    lVar21 = *plVar11;
    puVar19[0x30] = puVar19[0x18];
    puVar19[0x2f] = puVar19[0x17];
    param_1[0x3f] = (long)puVar19;
    if (lVar21 == 0) {
      puVar20 = malloc(0x438);
    }
    else {
      puVar20 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x438,8);
    }
    if (puVar20 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar20 + 0x21b) = 0;
      *puVar20 = 2;
      *(undefined1 *)((long)puVar20 + 0x1c) = 0;
      puVar1 = PTR_DAT_04bb2d90;
      puVar20[2] = (undefined1 *)((long)puVar20 + 0x1c);
      puVar20[0x45] = (long)puVar20 + 0x234;
      *(undefined4 *)(puVar20 + 3) = 0x200;
      *(undefined4 *)(puVar20 + 0x46) = 0x200;
      *(undefined1 *)((long)puVar20 + 0x433) = 0;
      *(undefined1 *)((long)puVar20 + 0x234) = 0;
      puVar20[0x44] = puVar1 + 0x10;
      puVar20[1] = puVar1 + 0x10;
      puVar19[0xe8] = 2;
      *(undefined8 **)(puVar19 + 0xea) = puVar20 + 1;
    }
    FUN_039697a0(param_1,3);
    __dest = *(void **)(param_1[0x3f] + 0x3d0);
    __src = *(void **)(PTR_PTR_04bb2238 + 8);
    if (__dest != __src) {
      lVar21 = 0;
      do {
        if (*(char *)((long)__src + lVar21) == '\0') goto LAB_03969750;
        if (*(char *)((long)__src + lVar21 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03969750;
        }
        if (*(char *)((long)__src + lVar21 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03969750;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03969750:
      iVar10 = *(int *)(param_1[0x3f] + 0x3d8);
      iVar2 = (int)lVar21;
      if (iVar10 <= (int)lVar21) {
        iVar2 = iVar10 + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
  }
  return;
}

