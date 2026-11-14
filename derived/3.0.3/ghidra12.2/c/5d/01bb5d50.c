
void FUN_01bb5d50(long param_1,long *param_2,long param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  short *psVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  short *psVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  undefined *local_80;
  undefined *puStack_78;
  undefined4 local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined4 local_58;
  
  uVar5 = *(ushort *)(param_3 + 0xc);
  lVar18 = *param_4;
  uVar13 = (uint)uVar5;
  uVar17 = (uint)*(ushort *)(param_3 + 0xe);
  if (lVar18 == 0) {
    iVar8 = 9;
  }
  else {
    iVar8 = 9;
    lVar19 = lVar18;
    do {
      while( true ) {
        uVar3 = *(uint *)(lVar19 + 0x20);
        if ((uVar5 < uVar3) ||
           (((uVar3 == uVar5 && ((uint)*(ushort *)(param_3 + 0xe) < *(uint *)(lVar19 + 0x24))) &&
            (*(uint *)(lVar19 + 0x24) != 0xffffffff)))) break;
        if ((uVar13 <= uVar3) && (uVar17 <= *(uint *)(lVar19 + 0x24))) {
          iVar8 = *(int *)(lVar19 + 100);
          goto LAB_01bb5df4;
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if (lVar19 == 0) goto LAB_01bb5df4;
      }
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 != 0);
  }
LAB_01bb5df4:
  if (((*(char *)(param_1 + 0x278) == '\0') || (*(char *)(param_1 + 0x284) != '\0')) || (iVar8 == 9)
     ) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(param_1 + 0x280) == 9;
  }
  for (; lVar18 != 0; lVar18 = *(long *)(lVar18 + 8)) {
    while( true ) {
      uVar3 = *(uint *)(lVar18 + 0x20);
      if ((uVar13 < uVar3) ||
         (((uVar3 == uVar13 && (uVar17 < *(uint *)(lVar18 + 0x24))) &&
          (*(uint *)(lVar18 + 0x24) != 0xffffffff)))) break;
      if ((uVar13 <= uVar3) && (uVar17 <= *(uint *)(lVar18 + 0x24))) {
        bVar20 = *(byte *)(lVar18 + 0x60) >> 5 & 1;
        goto LAB_01bb5e94;
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 == 0) goto LAB_01bb5e90;
    }
  }
LAB_01bb5e90:
  bVar20 = 0;
LAB_01bb5e94:
  bVar1 = 0;
  if (*(char *)(param_1 + 0x27a) != '\0') {
    bVar1 = bVar20;
  }
  if (bVar7) {
    local_58 = 6;
    local_70 = 6;
    puStack_60 = PTR_DAT_04bc0b28 + (long)iVar8 * 0xc;
    puStack_78 = PTR_DAT_04bc0b28 + 0x6c;
    local_80 = PTR_DAT_04bb2de8 + 0x10;
    local_68 = local_80;
    psVar9 = (short *)FUN_006f4ff4(&local_68);
    if (*psVar9 == 0xf) {
      psVar14 = psVar9 + 3;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else if ((*psVar9 == 0xe) && ((psVar9[3] & 1U) == 0)) {
      psVar14 = (short *)((long)psVar9 + ((ulong)(ushort)psVar9[3] & 0xfffe) + 8);
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else {
      psVar9 = (short *)0x0;
      psVar14 = (short *)0x0;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    if (pvVar10 != (void *)0x0) {
      uVar15 = (long)psVar14 - (long)psVar9;
      uVar11 = (long)pvVar10 + (uVar15 & 0x1fffffffe);
      if (*(ulong *)(param_1 + 0x2a8) < uVar11) {
        *(undefined1 *)(param_1 + 0x2b0) = 0;
        if (*(long *)(param_1 + 0x290) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x200) = 2;
        }
      }
      else {
        memcpy(pvVar10,psVar9,uVar15 & 0xffffffff);
        *(ulong *)(param_1 + 0x2a0) = uVar11;
        *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (int)(uVar15 >> 1);
      }
    }
    lVar18 = (**(code **)(local_80 + 0x18))(&local_80);
    lVar19 = (**(code **)(local_80 + 0x18))(&local_80);
    if (((lVar19 != 0) && (uVar11 = (**(code **)(local_80 + 0x20))(&local_80), lVar18 != 0)) &&
       (*(int *)(param_1 + 0x1e8) < 9)) {
      uVar13 = *(int *)(param_1 + 0x1e8) + 1;
      *(uint *)(param_1 + 0x1e8) = uVar13;
      puVar6 = PTR_DAT_04bb2d80;
      plVar12 = (long *)(param_1 + 8) + (ulong)uVar13 * 6;
      if (9 < uVar13) {
        plVar12 = (long *)(param_1 + 8);
      }
      *plVar12 = lVar18;
      plVar12[1] = lVar19 + (uVar11 & 0xffffffff) * 2;
      plVar12[2] = (long)(puVar6 + 0x10);
    }
  }
  if (bVar20 != 0) {
    *(undefined1 *)(param_1 + 0x4b9) = 1;
    plVar12 = (long *)FUN_01bbfb84(param_3);
    if (((DAT_0533b168 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0533b168), iVar8 != 0)) {
      DAT_0533b150 = PTR_DAT_04bb2de8 + 0x10;
      DAT_0533b158 = &DAT_041780b4;
      DAT_0533b160 = 5;
      __cxa_guard_release(&DAT_0533b168);
    }
    psVar9 = (short *)(**(code **)(*plVar12 + 0x18))(plVar12);
    if (*psVar9 == 0xf) {
      psVar14 = psVar9 + 3;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else if ((*psVar9 == 0xe) && ((psVar9[3] & 1U) == 0)) {
      psVar14 = (short *)((long)psVar9 + ((ulong)(ushort)psVar9[3] & 0xfffe) + 8);
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else {
      psVar9 = (short *)0x0;
      psVar14 = (short *)0x0;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    if (pvVar10 != (void *)0x0) {
      uVar15 = (long)psVar14 - (long)psVar9;
      uVar11 = (long)pvVar10 + (uVar15 & 0x1fffffffe);
      if (*(ulong *)(param_1 + 0x2a8) < uVar11) {
        *(undefined1 *)(param_1 + 0x2b0) = 0;
        if (*(long *)(param_1 + 0x290) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x200) = 2;
        }
      }
      else {
        memcpy(pvVar10,psVar9,uVar15 & 0xffffffff);
        *(ulong *)(param_1 + 0x2a0) = uVar11;
        *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (int)(uVar15 >> 1);
      }
    }
    lVar18 = (**(code **)(DAT_0533b150 + 0x18))(&DAT_0533b150);
    lVar19 = (**(code **)(DAT_0533b150 + 0x18))(&DAT_0533b150);
    if (((lVar19 != 0) && (uVar11 = (**(code **)(DAT_0533b150 + 0x20))(&DAT_0533b150), lVar18 != 0))
       && (*(int *)(param_1 + 0x1e8) < 9)) {
      uVar13 = *(int *)(param_1 + 0x1e8) + 1;
      *(uint *)(param_1 + 0x1e8) = uVar13;
      puVar6 = PTR_DAT_04bb2d80;
      plVar12 = (long *)(param_1 + 8) + (ulong)uVar13 * 6;
      if (9 < uVar13) {
        plVar12 = (long *)(param_1 + 8);
      }
      *plVar12 = lVar18;
      plVar12[1] = lVar19 + (uVar11 & 0xffffffff) * 2;
      plVar12[2] = (long)(puVar6 + 0x10);
    }
  }
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + 0x4b8) = 1;
    if (((DAT_0533b068 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0533b068), iVar8 != 0)) {
      DAT_0533b050 = PTR_DAT_04bb2de8 + 0x10;
      DAT_0533b058 = &DAT_04178040;
      DAT_0533b060 = 5;
      __cxa_guard_release(&DAT_0533b068);
    }
    if (((DAT_0533b088 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0533b088), iVar8 != 0)) {
      DAT_0533b070 = PTR_DAT_04bb2de8 + 0x10;
      DAT_0533b078 = &DAT_0417804a;
      DAT_0533b080 = 5;
      __cxa_guard_release(&DAT_0533b088);
    }
    psVar9 = (short *)(**(code **)(DAT_0533b050 + 0x18))();
    if (*psVar9 == 0xf) {
      psVar14 = psVar9 + 3;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else if ((*psVar9 == 0xe) && ((psVar9[3] & 1U) == 0)) {
      psVar14 = (short *)((long)psVar9 + ((ulong)(ushort)psVar9[3] & 0xfffe) + 8);
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    else {
      psVar14 = (short *)0x0;
      psVar9 = (short *)0x0;
      pvVar10 = *(void **)(param_1 + 0x2a0);
    }
    if (pvVar10 != (void *)0x0) {
      uVar15 = (long)psVar14 - (long)psVar9;
      uVar11 = (long)pvVar10 + (uVar15 & 0x1fffffffe);
      if (*(ulong *)(param_1 + 0x2a8) < uVar11) {
        *(undefined1 *)(param_1 + 0x2b0) = 0;
        if (*(long *)(param_1 + 0x290) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x200) = 2;
        }
      }
      else {
        memcpy(pvVar10,psVar9,uVar15 & 0xffffffff);
        *(ulong *)(param_1 + 0x2a0) = uVar11;
        *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (int)(uVar15 >> 1);
      }
    }
    lVar18 = (**(code **)(DAT_0533b070 + 0x18))(&DAT_0533b070);
    lVar19 = (**(code **)(DAT_0533b070 + 0x18))(&DAT_0533b070);
    if (((lVar19 != 0) && (uVar11 = (**(code **)(DAT_0533b070 + 0x20))(&DAT_0533b070), lVar18 != 0))
       && (*(int *)(param_1 + 0x1e8) < 9)) {
      uVar13 = *(int *)(param_1 + 0x1e8) + 1;
      *(uint *)(param_1 + 0x1e8) = uVar13;
      puVar6 = PTR_DAT_04bb2d80;
      plVar12 = (long *)(param_1 + 8) + (ulong)uVar13 * 6;
      if (9 < uVar13) {
        plVar12 = (long *)(param_1 + 8);
      }
      *plVar12 = lVar18;
      plVar12[1] = lVar19 + (uVar11 & 0xffffffff) * 2;
      plVar12[2] = (long)(puVar6 + 0x10);
    }
  }
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar19 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar19 != 0) && (uVar11 = (**(code **)(*param_2 + 0x20))(param_2), lVar18 != 0)) &&
     (*(int *)(param_1 + 0x1e8) < 9)) {
    uVar13 = *(int *)(param_1 + 0x1e8) + 1;
    *(uint *)(param_1 + 0x1e8) = uVar13;
    puVar6 = PTR_DAT_04bb2d80;
    plVar12 = (long *)(param_1 + 8) + (ulong)uVar13 * 6;
    if (9 < uVar13) {
      plVar12 = (long *)(param_1 + 8);
    }
    *plVar12 = lVar18;
    plVar12[1] = lVar19 + (uVar11 & 0xffffffff) * 2;
    plVar12[2] = (long)(puVar6 + 0x10);
  }
  iVar8 = *(int *)(param_1 + 0x2c8);
  iVar4 = *(int *)(param_1 + 0x2c0);
  if (iVar8 < iVar4) {
    *(int *)(param_1 + 0x2c8) = iVar8 + 1;
    iVar8 = *(int *)(param_1 + 0x2c4) + iVar8;
    iVar2 = 0;
    if (iVar4 <= iVar8) {
      iVar2 = iVar4;
    }
    puVar16 = (undefined8 *)(*(long *)(param_1 + 0x2b8) + (long)(iVar8 - iVar2) * 0x30);
    *(undefined4 *)((long)puVar16 + 0xc) = 0;
    *(undefined2 *)(puVar16 + 2) = 0;
    *puVar16 = 0;
    *(undefined4 *)((long)puVar16 + 7) = 0;
    puVar16[3] = 0;
    puVar16[4] = 0;
    *(undefined8 *)((long)puVar16 + 0x25) = 0;
    *puVar16 = *(undefined8 *)(param_1 + 0x208);
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(param_1 + 0x210);
    *(undefined1 *)((long)puVar16 + 9) = *(undefined1 *)(param_1 + 0x211);
    *(undefined1 *)((long)puVar16 + 10) = *(undefined1 *)(param_1 + 0x212);
    *(undefined2 *)((long)puVar16 + 0xc) = *(undefined2 *)(param_1 + 0x214);
    *(undefined2 *)((long)puVar16 + 0xe) = *(undefined2 *)(param_1 + 0x216);
    *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(param_1 + 0x218);
    puVar16[3] = *(undefined8 *)(param_1 + 0x220);
    puVar16[4] = *(undefined8 *)(param_1 + 0x228);
    *(undefined4 *)(puVar16 + 5) = *(undefined4 *)(param_1 + 0x230);
    *(undefined1 *)((long)puVar16 + 0x2c) = *(undefined1 *)(param_1 + 0x234);
  }
  if (*(uint *)(param_1 + 0x1e8) < 10) {
    lVar18 = param_1 + (ulong)*(uint *)(param_1 + 0x1e8) * 0x30;
    *(undefined1 **)(lVar18 + 0x28) = &LAB_01bb654c;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined ***)(lVar18 + 0x18) = &PTR_LAB_04a3b780;
    *(long *)(lVar18 + 0x20) = param_1;
  }
  if (*(char *)(param_1 + 0x4ba) != '\0') {
    *(undefined2 *)(param_1 + 0x4ba) = 0x100;
  }
  return;
}

