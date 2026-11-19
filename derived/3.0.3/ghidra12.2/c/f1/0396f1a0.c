
void FUN_0396f1a0(long param_1,long param_2,long param_3,uint param_4,byte param_5,long *param_6)

{
  size_t __size;
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong *puVar14;
  int *piVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  ulong uVar29;
  long local_70 [2];
  
  *(byte *)(param_1 + 0x110) = param_5;
  plVar13 = (long *)PTR_DAT_04bb2698;
  uVar29 = param_2 + 3U & 0xfffffffffffffffc;
  lVar16 = uVar29 * param_5;
  if (param_3 != 0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    if (lVar26 == 0) {
      pvVar11 = malloc(param_3 * 3);
    }
    else {
      plVar10 = param_6;
      if (param_6 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar26 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        pvVar11 = (void *)0x0;
        if (plVar10 == (long *)0x0) goto LAB_0396f254;
      }
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,param_3 * 3,8);
    }
LAB_0396f254:
    *(void **)(param_1 + 0x78) = pvVar11;
  }
  if (lVar16 * 3 == 0) goto LAB_0396f804;
  plVar10 = param_6;
  if (param_6 == (long *)0x0) {
    lVar9 = *plVar13;
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar9 + 8);
    if (lVar26 != 0) {
      plVar10 = (long *)(lVar26 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
  }
  lVar26 = param_1 + 8;
  *(long *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  if (lVar16 * 0xc0000000 == 0) {
    uVar12 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar26,plVar10,lVar16 * 0xc0000000 >> 0x1e,4,1);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined2 *)(param_1 + 0x32) = 1;
  lVar16 = (**(code **)PTR_DAT_04bb2cd8)(uVar12);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10) - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  uVar19 = *(ulong *)(param_1 + 0x18);
  if (0 < (int)(uVar19 >> 2)) {
    uVar21 = uVar19 >> 2 & 0xffffffff;
    uVar19 = uVar19 >> 2 & 3;
    if (uVar21 - 1 < 3) {
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      puVar17 = (undefined4 *)(lVar9 + lVar16 + 8);
      do {
        lVar20 = lVar20 + -4;
        puVar17[-2] = 0xbeef2929;
        puVar17[-1] = 0xbeef2929;
        *puVar17 = 0xbeef2929;
        puVar17[1] = 0xbeef2929;
        puVar17 = puVar17 + 4;
      } while (uVar19 - uVar21 != lVar20);
      lVar20 = -lVar20;
    }
    if (uVar19 != 0) {
      puVar17 = (undefined4 *)(lVar16 + lVar9 + lVar20 * 4);
      do {
        uVar19 = uVar19 - 1;
        *puVar17 = 0xbeef2929;
        puVar17 = puVar17 + 1;
      } while (uVar19 != 0);
    }
  }
  bVar3 = *(byte *)(param_1 + 0x110);
  local_70[0] = 0;
  local_70[1] = 0;
  uVar28 = (undefined4)uVar29;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = uVar28;
  if (bVar3 != 0) {
    lVar9 = ((ulong)bVar3 + (ulong)(uint)bVar3 * 2) * 8;
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      puVar14 = malloc(lVar9 + 8U);
    }
    else {
      plVar13 = param_6;
      if (param_6 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar16 + 8);
        if (lVar20 != 0) {
          plVar13 = (long *)(lVar20 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0396f454;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,lVar9 + 8U,8);
    }
    if (puVar14 != (ulong *)0x0) {
      uVar4 = (int)lVar9 - 0x18;
      *puVar14 = (ulong)bVar3;
      memset(puVar14 + 1,0,
             lVar9 - (ulong)(ushort)((short)uVar4 + (short)((uVar4 & 0xffff) / 0x18) * -0x18));
      *(uint *)(param_1 + 0x88) = (uint)bVar3;
      *(ulong **)(param_1 + 0x90) = puVar14 + 1;
    }
  }
LAB_0396f454:
  lVar16 = param_1 + 0x40;
  uVar27 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = uVar27;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == 0) {
    uVar19 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x90);
    uVar19 = 0;
    iVar18 = 0;
    do {
      lVar20 = lVar26;
      if ((int)uVar19 != 0) {
        lVar20 = lVar16;
      }
      if (*(long *)(lVar20 + 0x20) == 0) {
        iVar22 = 0;
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 == 0) goto LAB_0396f50c;
LAB_0396f484:
        iVar24 = *(int *)(lVar23 + 0x104);
      }
      else {
        iVar22 = *(int *)(lVar20 + 8) - *(int *)(*(long *)(lVar20 + 0x20) + 0x10);
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 != 0) goto LAB_0396f484;
LAB_0396f50c:
        iVar24 = 0;
      }
      lVar25 = local_70[uVar19];
      piVar15 = (int *)(lVar9 + (long)iVar18 * 0x18);
      *piVar15 = iVar22 + ((uint)lVar25 & 0xfffffffc);
      piVar15[1] = iVar24;
      *(long *)(piVar15 + 2) = lVar23;
      *(long *)(piVar15 + 4) = lVar20;
      local_70[uVar19] = lVar25 + uVar29;
      bVar8 = false;
      bVar7 = true;
      if ((int)uVar19 == 0) {
        iVar22 = (int)(*(ulong *)(param_1 + 0x50) >> 2);
        bVar8 = iVar22 < 0;
        bVar7 = iVar22 == 0;
      }
      iVar18 = iVar18 + 1;
      uVar19 = (ulong)(!bVar7 && !bVar8);
    } while (iVar2 != iVar18);
  }
  bVar3 = *(byte *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = uVar28;
  if (bVar3 != 0) {
    lVar9 = ((ulong)bVar3 + (ulong)(uint)bVar3 * 2) * 8;
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      puVar14 = malloc(lVar9 + 8U);
    }
    else {
      plVar13 = param_6;
      if (param_6 == (long *)0x0) {
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0396f5d0;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,lVar9 + 8U,8);
    }
    if (puVar14 != (ulong *)0x0) {
      uVar4 = (int)lVar9 - 0x18;
      *puVar14 = (ulong)bVar3;
      memset(puVar14 + 1,0,
             lVar9 - (ulong)(ushort)((short)uVar4 + (short)((uVar4 & 0xffff) / 0x18) * -0x18));
      *(uint *)(param_1 + 0xb0) = (uint)bVar3;
      *(ulong **)(param_1 + 0xb8) = puVar14 + 1;
    }
  }
LAB_0396f5d0:
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = uVar27;
  *(long *)(param_1 + 200) = *(long *)(param_1 + 0x78) + param_3;
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0xb8);
    iVar18 = 0;
    do {
      lVar20 = lVar26;
      if ((int)uVar19 != 0) {
        lVar20 = lVar16;
      }
      if (*(long *)(lVar20 + 0x20) == 0) {
        iVar22 = 0;
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 == 0) goto LAB_0396f680;
LAB_0396f600:
        iVar24 = *(int *)(lVar23 + 0x104);
      }
      else {
        iVar22 = *(int *)(lVar20 + 8) - *(int *)(*(long *)(lVar20 + 0x20) + 0x10);
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 != 0) goto LAB_0396f600;
LAB_0396f680:
        iVar24 = 0;
      }
      lVar25 = local_70[uVar19];
      piVar15 = (int *)(lVar9 + (long)iVar18 * 0x18);
      *piVar15 = iVar22 + ((uint)lVar25 & 0xfffffffc);
      piVar15[1] = iVar24;
      *(long *)(piVar15 + 2) = lVar23;
      *(long *)(piVar15 + 4) = lVar20;
      uVar21 = *(ulong *)(param_1 + 0x50);
      local_70[uVar19] = lVar25 + uVar29;
      bVar8 = false;
      bVar7 = true;
      if ((int)uVar19 != 1) {
        iVar22 = (int)(uVar21 >> 2);
        bVar8 = iVar22 < 0;
        bVar7 = iVar22 == 0;
      }
      iVar18 = iVar18 + 1;
      uVar19 = (ulong)(!bVar7 && !bVar8);
    } while (iVar2 != iVar18);
  }
  bVar3 = *(byte *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = uVar28;
  if (bVar3 != 0) {
    lVar9 = ((ulong)bVar3 + (ulong)(uint)bVar3 * 2) * 8;
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      puVar14 = malloc(lVar9 + 8U);
    }
    else {
      plVar13 = param_6;
      if (param_6 == (long *)0x0) {
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0396f73c;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,lVar9 + 8U,8);
    }
    if (puVar14 != (ulong *)0x0) {
      uVar4 = (int)lVar9 - 0x18;
      *puVar14 = (ulong)bVar3;
      memset(puVar14 + 1,0,
             lVar9 - (ulong)(ushort)((short)uVar4 + (short)((uVar4 & 0xffff) / 0x18) * -0x18));
      *(uint *)(param_1 + 0xd8) = (uint)bVar3;
      *(ulong **)(param_1 + 0xe0) = puVar14 + 1;
    }
  }
LAB_0396f73c:
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = uVar27;
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0x78) + param_3 * 2;
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0xe0);
    iVar18 = 0;
    do {
      lVar20 = lVar26;
      if ((int)uVar19 != 0) {
        lVar20 = lVar16;
      }
      if (*(long *)(lVar20 + 0x20) == 0) {
        iVar22 = 0;
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 == 0) goto LAB_0396f7f0;
LAB_0396f770:
        iVar24 = *(int *)(lVar23 + 0x104);
      }
      else {
        iVar22 = *(int *)(lVar20 + 8) - *(int *)(*(long *)(lVar20 + 0x20) + 0x10);
        lVar23 = *(long *)(lVar20 + 0x18);
        if (lVar23 != 0) goto LAB_0396f770;
LAB_0396f7f0:
        iVar24 = 0;
      }
      lVar25 = local_70[uVar19];
      piVar15 = (int *)(lVar9 + (long)iVar18 * 0x18);
      *piVar15 = iVar22 + ((uint)lVar25 & 0xfffffffc);
      piVar15[1] = iVar24;
      *(long *)(piVar15 + 2) = lVar23;
      *(long *)(piVar15 + 4) = lVar20;
      uVar21 = *(ulong *)(param_1 + 0x50);
      local_70[uVar19] = lVar25 + uVar29;
      bVar8 = false;
      bVar7 = true;
      if ((int)uVar19 != 1) {
        iVar22 = (int)(uVar21 >> 2);
        bVar8 = iVar22 < 0;
        bVar7 = iVar22 == 0;
      }
      iVar18 = iVar18 + 1;
      uVar19 = (ulong)(!bVar7 && !bVar8);
    } while (iVar2 != iVar18);
  }
  plVar13 = (long *)PTR_DAT_04bb2698;
LAB_0396f804:
  if (0 < (int)param_4) {
    lVar16 = *plVar13;
    __size = (ulong)param_4 * 0x398 + 8;
    if (lVar16 == 0) {
      puVar14 = malloc(__size);
      puVar5 = PTR_DAT_04bb21f8;
      puVar6 = PTR_DAT_04bd13d8;
    }
    else {
      if (param_6 == (long *)0x0) {
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar16 + 8);
        if (lVar26 != 0) {
          puVar1 = (undefined8 *)(lVar26 + 0xa8);
        }
        param_6 = (long *)*puVar1;
        if (param_6 == (long *)0x0) {
          return;
        }
      }
      puVar14 = (ulong *)(**(code **)(*param_6 + 0x30))(param_6,__size,8);
      puVar5 = PTR_DAT_04bb21f8;
      puVar6 = PTR_DAT_04bd13d8;
    }
    PTR_DAT_04bb21f8 = puVar5;
    PTR_DAT_04bd13d8 = puVar6;
    if (puVar14 != (ulong *)0x0) {
      *puVar14 = (ulong)param_4;
      lVar16 = 0;
      do {
        *(undefined8 *)((long)puVar14 + lVar16 + 0x250) = 0x200;
        *(undefined8 *)((long)puVar14 + lVar16 + 600) = 0;
        *(undefined1 *)((long)puVar14 + lVar16 + 0x260) = 0;
        *(undefined4 *)((long)puVar14 + lVar16 + 0x264) = 0;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x268) = 0;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x38) = 0;
        *(long *)((long)puVar14 + lVar16 + 0x40) = (long)puVar14 + lVar16 + 0x48;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x18) = 0;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x20) = 0;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x28) = 0;
        *(char **)((long)puVar14 + lVar16 + 0x30) = "untitled";
        *(undefined **)((long)puVar14 + lVar16 + 8) = puVar6 + 0x10;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x10) = 0;
        uVar12 = nn::os::GetSystemTick();
        *(undefined8 *)((long)puVar14 + lVar16 + 0x270) = uVar12;
        uVar12 = nn::os::GetSystemTick();
        lVar26 = lVar16 + 0x398;
        *(undefined1 *)((long)puVar14 + lVar16 + 0x280) = 0;
        *(undefined8 *)((long)puVar14 + lVar16 + 0x278) = uVar12;
        *(long *)((long)puVar14 + lVar16 + 0x290) = (long)puVar14 + lVar16 + 0x29c;
        *(undefined4 *)((long)puVar14 + lVar16 + 0x298) = 0x100;
        *(undefined1 *)((long)puVar14 + lVar16 + 0x39b) = 0;
        *(undefined1 *)((long)puVar14 + lVar16 + 0x29c) = 0;
        *(undefined **)((long)puVar14 + lVar16 + 0x288) = puVar5 + 0x10;
        lVar16 = lVar26;
      } while ((ulong)param_4 * 0x398 != lVar26);
      *(uint *)(param_1 + 0x100) = param_4;
      *(ulong **)(param_1 + 0x108) = puVar14 + 1;
    }
  }
  return;
}

