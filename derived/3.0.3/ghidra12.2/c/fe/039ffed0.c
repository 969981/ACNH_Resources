
void FUN_039ffed0(long *param_1,uint *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined4 *puVar17;
  long *plVar18;
  ulong *puVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  uint uVar27;
  undefined4 uVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  uint *puVar33;
  ulong uVar34;
  long lVar35;
  long *plVar36;
  ulong *puVar37;
  long *plVar38;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  int local_490;
  undefined8 local_48c;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 local_460;
  long *local_458;
  long local_450;
  long *local_448;
  int local_278;
  undefined1 local_6d;
  
  plVar18 = param_1 + 0xad6;
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    puVar15 = malloc(0x60c8);
    if (puVar15 == (undefined8 *)0x0) goto LAB_039fffe8;
LAB_039fff74:
    iVar11 = 0x204;
    puVar24 = puVar15 + 1;
    *puVar15 = 0x204;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    lVar35 = 0;
    do {
      lVar13 = lVar35 + 0x60;
      *(undefined8 *)((long)puVar15 + lVar35 + 0x28) = 5;
      *(undefined ***)((long)puVar15 + lVar35 + 8) = &PTR_LAB_04b6c140;
      *(undefined **)((long)puVar15 + lVar35 + 0x10) = puVar1;
      *(undefined4 *)((long)puVar15 + lVar35 + 0x30) = 0;
      *(undefined8 *)((long)puVar15 + lVar35 + 0x58) = 5;
      *(undefined4 *)((long)puVar15 + lVar35 + 0x60) = 0;
      *(undefined8 **)((long)puVar15 + lVar35 + 0x18) = &DAT_0407ebb1;
      *(undefined8 *)((long)puVar15 + lVar35 + 0x20) = 0;
      *(undefined ***)((long)puVar15 + lVar35 + 0x38) = &PTR_LAB_04b6c140;
      *(undefined **)((long)puVar15 + lVar35 + 0x40) = puVar1;
      *(undefined8 **)((long)puVar15 + lVar35 + 0x48) = &DAT_0407ebb1;
      *(undefined8 *)((long)puVar15 + lVar35 + 0x50) = 0;
      lVar35 = lVar13;
    } while (lVar13 != 0x60c0);
    *(int *)plVar18 = 0x204;
    param_1[0xad7] = (long)puVar24;
LAB_039ffff4:
    iVar12 = 0;
    do {
      puVar24[(long)iVar12 * 6 + 3] = param_1;
      iVar12 = iVar12 + 1;
    } while (iVar11 != iVar12);
    iVar11 = (int)*plVar18;
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar35 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_039fffe8;
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x60c8,8);
    if (puVar15 != (undefined8 *)0x0) goto LAB_039fff74;
LAB_039fffe8:
    iVar11 = (int)*plVar18;
    if (iVar11 != 0) {
      puVar24 = (undefined8 *)param_1[0xad7];
      goto LAB_039ffff4;
    }
    iVar11 = 0;
  }
  FUN_03972570(param_1 + 0xabd,iVar11,param_3);
  *(undefined4 *)((long)param_1 + 0x565c) = 5;
  uVar21 = *(uint *)(param_1 + 0xacf);
  if (0 < (int)uVar21) {
    uVar27 = 0;
    do {
      local_480._0_4_ = uVar27;
      uVar27 = (uint)local_480;
      if (uVar21 <= (uint)local_480) {
        uVar27 = 0;
      }
      *(undefined4 *)(param_1[0xad0] + (long)(int)uVar27 * 4) = 0;
      uVar21 = *(uint *)(param_1 + 0xacf);
      uVar27 = (uint)local_480 + 1;
    } while ((int)((uint)local_480 + 1) < (int)uVar21);
  }
  param_1[0xad5] = 0;
  *(undefined4 *)(param_1 + 0xac0) = 0;
  uVar21 = *(uint *)PTR_DAT_04bd0f28;
  if (uVar21 != 0) {
    if (uVar21 == 1) {
      uVar29 = 0;
    }
    else {
      uVar25 = 0;
      do {
        local_480._0_4_ = (uint)uVar25 + 1;
        uVar29 = uVar25 + 2;
        uVar34 = uVar25 & 0xffffffff;
        if (2 < (uint)uVar25) {
          uVar34 = 0;
        }
        *(undefined4 *)((long)param_1 + uVar34 * 4 + 0x5640) = 1;
        uVar25 = (ulong)(uint)local_480;
        if (2 < (uint)local_480) {
          uVar25 = 0;
        }
        *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x5640) = 1;
        uVar25 = uVar29;
      } while (((ulong)uVar21 & 0xfffffffe) != uVar29);
    }
    if ((uVar21 & 1) != 0) {
      local_480._0_4_ = (uint)uVar29;
      uVar29 = uVar29 & 0xffffffff;
      if (2 < (uint)local_480) {
        uVar29 = 0;
      }
      *(undefined4 *)((long)param_1 + uVar29 * 4 + 0x5640) = 1;
    }
  }
  lVar35 = param_1[0x23];
  memcpy(&local_690,(void *)(lVar35 + 0x38),0x204);
  local_698 = PTR_DAT_04bd1208 + 0x10;
  local_48c = CONCAT44(*param_2,(int)*(undefined8 *)(lVar35 + 0x23c));
  if (*(char *)(lVar35 + 0xb10) == '\0') {
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1878 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1878) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1880 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1880) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1888 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1888) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1890 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1890) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1728 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1728) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1730 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1730) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd16e0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd16e0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd16e8 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd16e8) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    cVar9 = *(char *)(lVar35 + 0xe50);
  }
  else {
    cVar9 = *(char *)(lVar35 + 0xe50);
  }
  if (cVar9 == '\0') {
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd1898 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd1898) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd18a0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd18a0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd14c8 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd14c8) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd14d0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd14d0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd14d8 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd14d8) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd14e0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd14e0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd18a8 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd18a8) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd18b0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd18b0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd18b8 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd18b8) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
    piVar23 = (int *)((long)&local_690 +
                     ((long)(short)**(ushort **)PTR_DAT_04bd18c0 & 0xffffffff) * 4);
    if (0x7f < **(ushort **)PTR_DAT_04bd18c0) {
      piVar23 = (int *)&local_690;
    }
    local_490 = local_490 - *piVar23;
    *piVar23 = 0;
  }
  puVar15 = (undefined8 *)param_1[0xab2];
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,param_1,&local_698);
  }
  uVar21 = *(uint *)PTR_DAT_04bd11d8;
  if (0 < (int)uVar21) {
    uVar25 = 0;
    piVar23 = (int *)&local_690;
    puVar33 = param_2 + 10;
    do {
      puVar6 = puVar33;
      piVar7 = piVar23;
      if (0x7f < uVar25) {
        puVar6 = param_2 + 10;
        piVar7 = (int *)&local_690;
      }
      iVar11 = *piVar7;
      uVar27 = *puVar6;
      piVar7 = piVar23;
      if ((uVar25 & 0xffffff80) != 0) {
        piVar7 = (int *)&local_690;
      }
      uVar25 = uVar25 + 1;
      puVar33 = puVar33 + 1;
      piVar23 = piVar23 + 1;
      local_490 = local_490 - *piVar7;
      *piVar7 = uVar27 + iVar11;
      local_490 = local_490 + uVar27 + iVar11;
    } while (uVar21 != uVar25);
  }
  plVar18 = param_1 + 0x9e1;
  FUN_0391f840(plVar18,&local_698,param_3);
  puVar1 = PTR_DAT_04bbdc28;
  uVar21 = *(uint *)(param_1 + 0x9e4);
  lVar35 = param_1[0x9e5];
  iVar11 = (int)**(short **)PTR_DAT_04bbdc40;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    lVar13 = 0;
    puVar2 = PTR_DAT_04bbd8c8 + 0x10;
    puVar3 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*PTR_DAT_04bbdc30 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bbdc30);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_04bbdc30);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar3;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b826f);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bbdc40;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bd1668;
  puVar1 = PTR_DAT_04bd1660;
  iVar11 = (int)**(short **)PTR_DAT_04bd1878;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1878) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    lVar13 = 0;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040f6ea7);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bd1878;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1878) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bd1678;
  puVar1 = PTR_DAT_04bd1670;
  iVar11 = (int)**(short **)PTR_DAT_04bd1888;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1888) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    lVar13 = 0;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040897db);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bd1888;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1888) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bbd8c0;
  puVar1 = PTR_DAT_04bbd8b8;
  iVar11 = (int)**(short **)PTR_DAT_04bbd930;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbd930) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    lVar13 = 0;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040e6c29);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bbd930;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbd930) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar1 = PTR_DAT_04bd1240;
  iVar11 = (int)**(short **)PTR_DAT_04bd1230;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1230) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    lVar13 = 0;
    puVar2 = PTR_DAT_04bbd8c8 + 0x10;
    puVar3 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*PTR_DAT_04bd1248 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bd1248);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_04bd1248);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar3;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_0405f15c);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bd1230;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1230) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar1 = PTR_DAT_04bbd8e0;
  iVar11 = (int)**(short **)PTR_DAT_04bbd938;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbd938) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    lVar13 = 0;
    puVar2 = PTR_DAT_04bbd8c8 + 0x10;
    puVar3 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*PTR_DAT_04bbd8e8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bbd8e8);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_04bbd8e8);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,puVar1);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar3;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040c23aa);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)PTR_DAT_04bbd938;
      if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bbd938) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bd1260;
  puVar1 = PTR_DAT_04bd1250;
  iVar11 = (int)**(short **)PTR_DAT_04bd1250;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1250) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    lVar13 = 0;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bd1258 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,PTR_DAT_04bd1258);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040ebd2c);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)puVar1;
      if (uVar21 <= (uint)(int)**(short **)puVar1) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bd1278;
  puVar1 = PTR_DAT_04bd1268;
  iVar11 = (int)**(short **)PTR_DAT_04bd1268;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1268) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    lVar13 = 0;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bd1270 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,PTR_DAT_04bd1270);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b2db4);
      }
      lVar13 = lVar13 + 1;
      uVar21 = *(uint *)(param_1 + 0x9e4);
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)puVar1;
      if (uVar21 <= (uint)(int)**(short **)puVar1) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar2 = PTR_DAT_04bd1298;
  puVar1 = PTR_DAT_04bd1288;
  iVar11 = (int)**(short **)PTR_DAT_04bd1288;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1288) {
    iVar11 = 0;
  }
  if (*(short *)(lVar35 + (long)iVar11 * 4 + 2) != 0) {
    lVar13 = 0;
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x9e7] +
                          (lVar13 + (ulong)*(ushort *)(lVar35 + (long)iVar11 * 4)) * 8);
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bd1290 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,PTR_DAT_04bd1290);
      }
      if (param_4 != 0) {
        local_6d = 0;
        local_470 = CONCAT35(local_470._5_3_,0x400);
        local_478 = (undefined *)((long)&local_470 + 4);
        local_480 = puVar4;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040d1a5a);
      }
      lVar13 = lVar13 + 1;
      lVar35 = param_1[0x9e5];
      iVar11 = (int)**(short **)puVar1;
      if (*(uint *)(param_1 + 0x9e4) <= (uint)(int)**(short **)puVar1) {
        iVar11 = 0;
      }
    } while ((uint)lVar13 < (uint)*(ushort *)(lVar35 + (long)iVar11 * 4 + 2));
  }
  puVar1 = PTR_DAT_04bb2f40;
  if (param_4 != 0) {
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    local_6d = 0;
    local_478 = (undefined *)((long)&local_470 + 4);
    local_470 = CONCAT35(local_470._5_3_,0x400);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040ad90b);
  }
  local_698 = PTR_DAT_04bd1218 + 0x10;
  local_690 = *(undefined8 *)(param_1[0x23] + 0xee0);
  plVar14 = param_1 + 0xa72;
  FUN_039e84f0(plVar14,&local_698,plVar18,param_3);
  lVar35 = 0;
  puVar2 = PTR_DAT_04bd11f8 + 0x10;
  do {
    lVar13 = *(long *)(param_1[0x23] + 0xef0) + 0x5bb50;
    if ((*(char *)(lVar13 + lVar35 * 0x160 + 0x48) != '\0') &&
       (piVar23 = (int *)(lVar13 + lVar35 * 0x160 + 0x68), *piVar23 != 0)) {
      uVar25 = 0;
      local_480._0_4_ = (uint)puVar2;
      local_480._4_4_ = (undefined4)((ulong)puVar2 >> 0x20);
      local_278 = 0;
      do {
        uVar29 = uVar25 << 2;
        uVar34 = uVar25 >> 0x1f;
        uVar21 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar21;
        *(undefined4 *)((long)&local_478 + (-uVar34 & 0xfffffffc00000000 | uVar29)) = 0;
      } while (uVar21 != 0x80);
      lVar13 = lVar13 + lVar35 * 0x160;
      iVar11 = *(int *)(lVar13 + 0x88);
      piVar7 = (int *)((long)&local_478 +
                      ((long)(short)**(ushort **)PTR_DAT_04bd1230 & 0xffffffff) * 4);
      if (0x7f < **(ushort **)PTR_DAT_04bd1230) {
        piVar7 = (int *)&local_478;
      }
      local_278 = local_278 - *piVar7;
      *piVar7 = iVar11;
      local_278 = local_278 + iVar11;
      iVar11 = *(int *)(lVar13 + 0xa8);
      piVar7 = (int *)((long)&local_478 +
                      ((long)(short)**(ushort **)PTR_DAT_04bbdc40 & 0xffffffff) * 4);
      if (0x7f < **(ushort **)PTR_DAT_04bbdc40) {
        piVar7 = (int *)&local_478;
      }
      local_278 = local_278 - *piVar7;
      *piVar7 = iVar11;
      local_278 = local_278 + iVar11;
      iVar11 = *(int *)(lVar13 + 200);
      piVar7 = (int *)((long)&local_478 +
                      ((long)(short)**(ushort **)PTR_DAT_04bbd930 & 0xffffffff) * 4);
      if (0x7f < **(ushort **)PTR_DAT_04bbd930) {
        piVar7 = (int *)&local_478;
      }
      local_278 = local_278 - *piVar7;
      *piVar7 = iVar11;
      local_278 = local_278 + iVar11;
      iVar11 = *(int *)(lVar13 + 0xe8);
      piVar7 = (int *)((long)&local_478 +
                      ((long)(short)**(ushort **)PTR_DAT_04bbd938 & 0xffffffff) * 4);
      if (0x7f < **(ushort **)PTR_DAT_04bbd938) {
        piVar7 = (int *)&local_478;
      }
      local_278 = local_278 - *piVar7;
      *piVar7 = iVar11;
      local_278 = local_278 + iVar11;
      local_480 = puVar2;
      FUN_039e8670(plVar14,lVar13 + 0x128,&local_480,*piVar23,param_3);
    }
    lVar35 = lVar35 + 1;
  } while (lVar35 != 8);
  if (0 < (int)param_1[0xab1]) {
    lVar13 = *(long *)(param_1[0xaae] + 0x2e0);
    lVar35 = *(long *)(lVar13 + 0x20);
    uVar22 = *(uint *)(lVar13 + 0x18);
    uVar27 = (uint)**(short **)PTR_DAT_04bd1230;
    uVar21 = uVar27;
    if (uVar22 <= (uint)(int)**(short **)PTR_DAT_04bd1230) {
      uVar21 = 0;
    }
    if (*(short *)(lVar35 + (long)(int)uVar21 * 4 + 2) != 0) {
      if (*(uint *)(param_1 + 0x9e4) <= uVar27) {
        uVar27 = 0;
      }
      if (*(short *)(param_1[0x9e5] + (long)(int)uVar27 * 4 + 2) == 0) {
        plVar36 = (long *)0x0;
      }
      else {
        plVar36 = *(long **)(param_1[0x9e7] +
                            (ulong)*(ushort *)(param_1[0x9e5] + (long)(int)uVar27 * 4) * 8);
      }
      if ((*PTR_DAT_04bd1248 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bd1248);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bd1240 = PTR_DAT_04bbd8c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd1248);
        }
      }
      if (plVar36 == (long *)0x0) {
        plVar36 = (long *)0x0;
      }
      else {
        uVar25 = (**(code **)(*plVar36 + 0x48))(plVar36,PTR_DAT_04bd1240);
        if ((uVar25 & 1) == 0) {
          plVar36 = (long *)0x0;
        }
      }
      FUN_03923830(lVar13,plVar36);
      uVar22 = *(uint *)(lVar13 + 0x18);
      lVar35 = *(long *)(lVar13 + 0x20);
    }
    uVar27 = (uint)**(short **)PTR_DAT_04bbdc40;
    uVar21 = uVar27;
    if (uVar22 <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
      uVar21 = 0;
    }
    if (*(short *)(lVar35 + (long)(int)uVar21 * 4 + 2) != 0) {
      if (*(uint *)(param_1 + 0x9e4) <= uVar27) {
        uVar27 = 0;
      }
      if (*(short *)(param_1[0x9e5] + (long)(int)uVar27 * 4 + 2) == 0) {
        plVar36 = (long *)0x0;
      }
      else {
        plVar36 = *(long **)(param_1[0x9e7] +
                            (ulong)*(ushort *)(param_1[0x9e5] + (long)(int)uVar27 * 4) * 8);
      }
      if ((*PTR_DAT_04bbdc30 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bbdc30);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbdc30);
        }
      }
      if (plVar36 == (long *)0x0) {
        plVar36 = (long *)0x0;
      }
      else {
        uVar25 = (**(code **)(*plVar36 + 0x48))(plVar36,PTR_DAT_04bbdc28);
        if ((uVar25 & 1) == 0) {
          plVar36 = (long *)0x0;
        }
      }
      FUN_03923830(lVar13,plVar36);
      uVar22 = *(uint *)(lVar13 + 0x18);
      lVar35 = *(long *)(lVar13 + 0x20);
    }
    uVar27 = (uint)**(short **)PTR_DAT_04bbd938;
    uVar21 = uVar27;
    if (uVar22 <= (uint)(int)**(short **)PTR_DAT_04bbd938) {
      uVar21 = 0;
    }
    if (*(short *)(lVar35 + (long)(int)uVar21 * 4 + 2) != 0) {
      if (*(uint *)(param_1 + 0x9e4) <= uVar27) {
        uVar27 = 0;
      }
      if (*(short *)(param_1[0x9e5] + (long)(int)uVar27 * 4 + 2) == 0) {
        plVar36 = (long *)0x0;
      }
      else {
        plVar36 = *(long **)(param_1[0x9e7] +
                            (ulong)*(ushort *)(param_1[0x9e5] + (long)(int)uVar27 * 4) * 8);
      }
      if ((*PTR_DAT_04bbd8e8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bbd8e8);
        if (iVar11 != 0) {
          *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbd8e8);
        }
      }
      if (plVar36 == (long *)0x0) {
        plVar36 = (long *)0x0;
      }
      else {
        uVar25 = (**(code **)(*plVar36 + 0x48))(plVar36,PTR_DAT_04bbd8e0);
        if ((uVar25 & 1) == 0) {
          plVar36 = (long *)0x0;
        }
      }
      FUN_03923830(lVar13,plVar36);
    }
  }
  if (param_4 != 0) {
    local_480 = puVar1 + 0x10;
    local_6d = 0;
    local_478 = (undefined *)((long)&local_470 + 4);
    local_470 = CONCAT35(local_470._5_3_,0x400);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b2dc1);
  }
  lVar35 = param_1[0x23];
  uVar28 = 0xffffffe7;
  if (*(char *)(lVar35 + 0x9f0) != '\0') {
    uVar28 = 0xffffffff;
  }
  FUN_03a0add0(param_1 + 0x9aa,param_1,uVar28,*(undefined4 *)(lVar35 + 0x1cc0),
               *(undefined4 *)(lVar35 + 0x1ce0),*(undefined4 *)(lVar35 + 0x1d00),*param_2,param_3,
               param_4);
  lVar35 = param_1[0x23];
  if (*(char *)(lVar35 + 0x9f0) != '\0') {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    if (lVar35 == 0) {
      pvVar16 = malloc(0x3ad8);
    }
    else {
      plVar36 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar36 = (long *)(lVar35 + 8);
        if (lVar13 != 0) {
          plVar36 = (long *)(lVar13 + 0xa8);
        }
        plVar36 = (long *)*plVar36;
      }
      pvVar16 = (void *)(**(code **)(*plVar36 + 0x30))(plVar36,0x3ad8,8);
    }
    FUN_03afbef4();
    param_1[0xab8] = (long)pvVar16;
    FUN_03afc3e0(pvVar16,*param_2,param_3);
    lVar13 = param_1[0x9cf];
    lVar35 = param_1[0xab8];
    *(long *)(lVar35 + 0x48) = lVar13 + 0x298;
    *(long *)(lVar35 + 0x50) = lVar13 + 0x2d8;
    if (param_4 != 0) {
      local_480 = puVar1 + 0x10;
      local_6d = 0;
      local_478 = (undefined *)((long)&local_470 + 4);
      local_470 = CONCAT35(local_470._5_3_,0x400);
      FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_04098eb9);
    }
    lVar35 = param_1[0x23];
  }
  if (*(char *)(lVar35 + 0xbf0) != '\0') {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    if (lVar35 == 0) {
      puVar17 = malloc(0xa8);
    }
    else {
      plVar36 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar36 = (long *)(lVar35 + 8);
        if (lVar13 != 0) {
          plVar36 = (long *)(lVar13 + 0xa8);
        }
        plVar36 = (long *)*plVar36;
        if (plVar36 == (long *)0x0) {
          puVar17 = (undefined4 *)0x0;
          goto LAB_03a01678;
        }
      }
      puVar17 = (undefined4 *)(**(code **)(*plVar36 + 0x30))(plVar36,0xa8,8);
    }
LAB_03a01678:
    puVar1 = PTR_DAT_04bd11b8;
    *puVar17 = 0xb;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined8 *)(puVar17 + 8) = 0;
    *(undefined8 *)(puVar17 + 10) = 0;
    *(undefined8 *)(puVar17 + 0xc) = 0;
    *(undefined8 *)(puVar17 + 0xe) = 0;
    *(undefined1 *)(puVar17 + 0x15) = 0;
    *(undefined8 *)(puVar17 + 0x22) = 0;
    puVar17[0x24] = 0;
    *(undefined8 *)(puVar17 + 0x10) = 0;
    *(undefined8 *)(puVar17 + 0x12) = 0;
    *(undefined8 *)(puVar17 + 4) = 0;
    *(undefined **)(puVar17 + 6) = puVar1 + 0x10;
    puVar17[0x14] = 0x10001;
    puVar17[0x28] = 0x3f800000;
    lVar35 = *(long *)PTR_DAT_04bd1158;
    *(undefined8 *)(puVar17 + 0x26) = 0;
    *(undefined1 *)(puVar17 + 0x29) = 0;
    if ((lVar35 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
      (**(code **)(*(long *)(lVar35 + 8) + 0x18))((long *)(lVar35 + 8));
      FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon=SYSTEM",*(undefined8 *)(lVar35 + 0x10));
    }
    param_1[0xab9] = (long)puVar17;
    FUN_03a0def0(puVar17,*param_2,*(undefined4 *)(param_1[0x23] + 0x1d20),param_3);
  }
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    plVar36 = malloc(0x328);
  }
  else {
    plVar36 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar36 = (long *)(lVar35 + 8);
      if (lVar13 != 0) {
        plVar36 = (long *)(lVar13 + 0xa8);
      }
      plVar36 = (long *)*plVar36;
      if (plVar36 == (long *)0x0) {
        plVar36 = (long *)0x0;
        goto LAB_03a017a0;
      }
    }
    plVar36 = (long *)(**(code **)(*plVar36 + 0x30))(plVar36,0x328,8);
  }
LAB_03a017a0:
  *plVar36 = (long)(PTR_DAT_04bd18d8 + 0x10);
  plVar36[1] = 0;
  FUN_03941294(plVar36 + 2);
  *(undefined4 *)(plVar36 + 0x49) = 0;
  puVar1 = PTR_DAT_04bd1940;
  plVar36[0x4a] = 0;
  plVar36[0x4c] = 0;
  plVar36[0x4d] = 0;
  plVar36[0x4e] = 0;
  plVar36[0x4f] = 0;
  plVar36[0x50] = 0;
  plVar36[0x51] = 0;
  *(undefined1 *)((long)plVar36 + 0x294) = 0;
  plVar36[0x59] = 0;
  *plVar36 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar36 + 0x52) = 0x10001;
  puVar1 = PTR_DAT_04bd0fb0 + 0x10;
  plVar36[0x61] = 0;
  *(undefined2 *)((long)plVar36 + 0x302) = 0;
  *(undefined1 *)(plVar36 + 0x60) = 0;
  plVar36[0x5f] = 0;
  plVar36[0x5e] = 0;
  plVar36[0x5d] = 0;
  plVar36[0x4b] = (long)puVar1;
  plVar36[0x5a] = 0x4000000001;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  plVar36[0x5c] = 0;
  plVar36[0x5b] = (long)puVar1;
  *(undefined4 *)(plVar36 + 0x62) = 0;
  *(undefined8 *)((long)plVar36 + 0x314) = 0;
  *(undefined8 *)((long)plVar36 + 0x31c) = 1;
  *(undefined1 *)((long)plVar36 + 0x324) = 5;
  param_1[0xaba] = (long)plVar36;
  local_480._0_4_ = *(undefined4 *)(param_1[0x23] + 0x2d50);
  local_480._4_4_ = *(undefined4 *)(param_1[0x23] + 0x2d70);
  local_478._0_4_ = *param_2;
  FUN_03a7b310(plVar36,&local_480,param_3,param_4);
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    pvVar16 = malloc(0x40);
joined_r0x03a01a68:
    if (pvVar16 != (void *)0x0) {
      param_1[0x24] = 0x800000000;
      param_1[0x25] = (long)pvVar16;
    }
  }
  else {
    plVar36 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a018d8:
      pvVar16 = (void *)(**(code **)(*plVar36 + 0x30))(plVar36,0x40,8);
      goto joined_r0x03a01a68;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar36 = (long *)(lVar35 + 8);
    if (lVar13 != 0) {
      plVar36 = (long *)(lVar13 + 0xa8);
    }
    plVar36 = (long *)*plVar36;
    if (plVar36 != (long *)0x0) goto LAB_03a018d8;
  }
  iVar11 = (int)param_1[0x24];
  plVar36 = param_1 + 0x26;
  iVar12 = *(int *)((long)param_1 + 0x124);
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = plVar36;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = param_1 + 0x1d8;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = param_1 + 0x8d6;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  plVar5 = param_1 + 0x2bf;
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = plVar5;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = param_1 + 0x5dd;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = param_1 + 0x580;
    iVar12 = *(int *)((long)param_1 + 0x124);
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 < iVar12) {
    *(long **)(param_1[0x25] + (long)iVar11 * 8) = param_1 + 0x63b;
    iVar11 = (int)param_1[0x24] + 1;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  if (iVar11 != 0) {
    plVar30 = (long *)param_1[0x25];
    uVar25 = (long)iVar11 & 3;
    plVar38 = plVar30;
    if (uVar25 != 0) {
      plVar26 = plVar30;
      do {
        plVar38 = plVar26 + 1;
        uVar25 = uVar25 - 1;
        *(long *)(*plVar26 + 8) = param_1[0x23];
        plVar26 = plVar38;
      } while (uVar25 != 0);
    }
    if (2 < ((long)iVar11 - 1U & 0x1fffffffffffffff)) {
      do {
        *(long *)(*plVar38 + 8) = param_1[0x23];
        *(long *)(plVar38[1] + 8) = param_1[0x23];
        *(long *)(plVar38[2] + 8) = param_1[0x23];
        plVar26 = plVar38 + 3;
        plVar38 = plVar38 + 4;
        *(long *)(*plVar26 + 8) = param_1[0x23];
      } while (plVar38 != plVar30 + iVar11);
    }
  }
  local_478._4_4_ = 0x40;
  local_480._4_4_ = 600;
  local_478._0_4_ = 0x40;
  local_480._0_4_ = *(undefined4 *)(param_1[0x23] + 0x1b40);
  local_470 = CONCAT44(local_470._4_4_,*param_2);
  FUN_03a53ba0(plVar36,&local_480,param_3,param_4);
  local_480._0_4_ = 0x100;
  local_480._4_4_ = 0x80;
  FUN_03a33750(param_1 + 0x1d8,&local_480,param_3,param_4);
  param_1[0x225] = (long)(param_1 + 0x1a5);
  local_468 = 0x20;
  local_460 = 1;
  local_470 = 0x3000000001;
  local_478 = PTR_DAT_04bd1418 + 0x10;
  local_480._0_4_ = *param_2;
  local_450 = 0;
  if (param_1[0xab8] != 0) {
    local_450 = param_1[0xab8] + 0x770;
  }
  local_458 = plVar18;
  local_448 = plVar14;
  FUN_03a7c7c0(param_1 + 0x8d6,&local_480,param_3,param_4);
  puVar2 = PTR_DAT_04bd1708;
  puVar1 = PTR_DAT_04bd1700;
  lVar35 = param_1[0x9e5];
  uVar21 = *(uint *)(param_1 + 0x9e4);
  iVar11 = (int)**(short **)PTR_DAT_04bd16e0;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd16e0) {
    iVar11 = 0;
  }
  uVar10 = *(ushort *)(lVar35 + (long)iVar11 * 4 + 2);
  if (uVar10 != 0) {
    lVar35 = 0;
    do {
      iVar11 = (int)**(short **)PTR_DAT_04bd16e0;
      if (*(uint *)(param_1 + 0x9e4) <= (uint)(int)**(short **)PTR_DAT_04bd16e0) {
        iVar11 = 0;
      }
      if ((uint)lVar35 < (uint)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4 + 2)) {
        plVar38 = *(long **)(param_1[0x9e7] +
                            (lVar35 + (ulong)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4)) * 8);
      }
      else {
        plVar38 = (long *)0x0;
      }
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined ***)puVar1 = &PTR_LAB_04b6c1e0;
          __cxa_guard_release(puVar2);
        }
      }
      uVar25 = (**(code **)(*plVar38 + 0x48))(plVar38,puVar1);
      lVar35 = lVar35 + 1;
      if ((uVar25 & 1) == 0) {
        plVar38 = (long *)0x0;
      }
      plVar38[0x23] = (long)plVar5;
    } while ((uint)uVar10 != (uint)lVar35);
    uVar21 = *(uint *)(param_1 + 0x9e4);
    lVar35 = param_1[0x9e5];
  }
  puVar2 = PTR_DAT_04bd1740;
  puVar1 = PTR_DAT_04bd1738;
  iVar11 = (int)**(short **)PTR_DAT_04bd1730;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd1730) {
    iVar11 = 0;
  }
  uVar10 = *(ushort *)(lVar35 + (long)iVar11 * 4 + 2);
  if (uVar10 != 0) {
    lVar35 = 0;
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    do {
      iVar11 = (int)**(short **)PTR_DAT_04bd1730;
      if (*(uint *)(param_1 + 0x9e4) <= (uint)(int)**(short **)PTR_DAT_04bd1730) {
        iVar11 = 0;
      }
      if ((uint)lVar35 < (uint)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4 + 2)) {
        plVar38 = *(long **)(param_1[0x9e7] +
                            (lVar35 + (ulong)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4)) * 8);
      }
      else {
        plVar38 = (long *)0x0;
      }
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined **)puVar1 = puVar3;
          __cxa_guard_release(puVar2);
        }
      }
      uVar25 = (**(code **)(*plVar38 + 0x48))(plVar38,puVar1);
      lVar35 = lVar35 + 1;
      if ((uVar25 & 1) == 0) {
        plVar38 = (long *)0x0;
      }
      plVar38[0x23] = (long)plVar5;
    } while ((uint)uVar10 != (uint)lVar35);
    uVar21 = *(uint *)(param_1 + 0x9e4);
    lVar35 = param_1[0x9e5];
  }
  puVar2 = PTR_DAT_04bd1720;
  puVar1 = PTR_DAT_04bd1718;
  iVar11 = (int)**(short **)PTR_DAT_04bd16e8;
  if (uVar21 <= (uint)(int)**(short **)PTR_DAT_04bd16e8) {
    iVar11 = 0;
  }
  uVar10 = *(ushort *)(lVar35 + (long)iVar11 * 4 + 2);
  if (uVar10 != 0) {
    lVar35 = 0;
    do {
      iVar11 = (int)**(short **)PTR_DAT_04bd16e8;
      if (*(uint *)(param_1 + 0x9e4) <= (uint)(int)**(short **)PTR_DAT_04bd16e8) {
        iVar11 = 0;
      }
      if ((uint)lVar35 < (uint)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4 + 2)) {
        plVar38 = *(long **)(param_1[0x9e7] +
                            (lVar35 + (ulong)*(ushort *)(param_1[0x9e5] + (long)iVar11 * 4)) * 8);
      }
      else {
        plVar38 = (long *)0x0;
      }
      if ((*puVar2 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar2);
        if (iVar11 != 0) {
          *(undefined ***)puVar1 = &PTR_LAB_04b6c1e0;
          __cxa_guard_release(puVar2);
        }
      }
      uVar25 = (**(code **)(*plVar38 + 0x48))(plVar38,puVar1);
      lVar35 = lVar35 + 1;
      if ((uVar25 & 1) == 0) {
        plVar38 = (long *)0x0;
      }
      plVar38[0x23] = (long)plVar5;
    } while ((uint)uVar10 != (uint)lVar35);
  }
  lVar35 = param_1[0x95a];
  if (lVar35 != 0) {
    *(undefined1 **)(lVar35 + 500) = &LAB_03a03bf0;
    *(undefined8 *)(lVar35 + 0x1fc) = 0;
    *(undefined8 *)(lVar35 + 0x1e4) = &PTR_LAB_04b6c168;
    *(long **)(lVar35 + 0x1ec) = param_1;
    *(undefined8 **)(lVar35 + 0x208) = (undefined8 *)(lVar35 + 0x1e4);
  }
  FUN_03aacd00(plVar5,*param_2,plVar18,plVar36,param_3,param_4);
  local_480._0_4_ = *param_2;
  local_480._4_4_ = *(undefined4 *)(param_1[0x23] + 0x1ac0);
  FUN_03a99e2c(param_1 + 0x580,&local_480,param_3,param_4);
  local_480._0_4_ = *param_2;
  FUN_03a61c00(param_1 + 0x5dd,&local_480,plVar18,param_3,param_4);
  local_480._0_4_ = *param_2;
  FUN_03a37090(param_1 + 0x63b,&local_480,param_3,param_4);
  uVar21 = *param_2;
  if ((int)uVar21 < 1) {
LAB_03a02100:
    uVar21 = *(uint *)(param_1 + 0x21);
    puVar37 = (ulong *)param_1[0x22];
  }
  else {
    uVar25 = (ulong)uVar21 * 0x430 | 8;
    lVar35 = *(long *)PTR_DAT_04bb2698;
    if (lVar35 == 0) {
      puVar19 = malloc(uVar25);
      puVar15 = (undefined8 *)PTR_DAT_04bb4bd0;
      puVar17 = (undefined4 *)PTR_DAT_04bd0ea8;
      puVar1 = PTR_DAT_04bd1838;
    }
    else {
      plVar18 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar35 + 8);
        if (lVar13 != 0) {
          plVar18 = (long *)(lVar13 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_03a02100;
      }
      puVar19 = (ulong *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar25,8);
      puVar15 = (undefined8 *)PTR_DAT_04bb4bd0;
      puVar17 = (undefined4 *)PTR_DAT_04bd0ea8;
      puVar1 = PTR_DAT_04bd1838;
    }
    PTR_DAT_04bb4bd0 = (undefined *)puVar15;
    PTR_DAT_04bd0ea8 = (undefined *)puVar17;
    PTR_DAT_04bd1838 = puVar1;
    if (puVar19 == (ulong *)0x0) goto LAB_03a02100;
    puVar37 = puVar19 + 1;
    *puVar19 = (ulong)uVar21;
    uVar28 = *puVar17;
    uVar8 = *(undefined4 *)(puVar15 + 1);
    uVar20 = *puVar15;
    puVar2 = PTR_DAT_04bd18e0 + 0x10;
    puVar3 = PTR_DAT_04bd0f08 + 0x10;
    lVar35 = 0;
    do {
      lVar13 = lVar35 + 0x430;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x10) = 0;
      *(undefined2 *)((long)puVar19 + lVar35 + 0x14) = 0xffff;
      *(undefined1 **)((long)puVar19 + lVar35 + 0x34c) = &DAT_3f8000003f800000;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x18) = 0;
      *(undefined1 **)((long)puVar19 + lVar35 + 0x354) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x20) = 0;
      *(undefined1 **)((long)puVar19 + lVar35 + 0x35c) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x318) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3c4) = 0x3f800000;
      *(undefined8 *)((long)puVar19 + lVar35 + 800) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3cc) = 0xff017000000000;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x328) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x330) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x338) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x340) = 0;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x348) = 0;
      *(undefined **)((long)puVar19 + lVar35 + 0x368) = puVar1 + 0x10;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x388) = 0;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x390) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x398) = 0;
      *(undefined1 **)((long)puVar19 + lVar35 + 0x3a0) = &DAT_3f8000003f800000;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x3b0) = uVar8;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3a8) = uVar20;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x3b4) = 0x3f800000;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x3c0) = uVar8;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3b8) = uVar20;
      *(undefined **)((long)puVar19 + lVar35 + 8) = puVar2;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3f0) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 1000) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3e0) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3d8) = 0;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x3f8) = 0xc47a0000447a0000;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x400) = 0x3e4ccccdc47a0000;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x408) = 0;
      *(undefined **)((long)puVar19 + lVar35 + 0x410) = puVar3;
      *(undefined4 *)((long)puVar19 + lVar35 + 0x428) = uVar28;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x42c) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x418) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar19 + lVar35 + 0x420) = 0xff7fffffff7fffff;
      lVar35 = lVar13;
    } while ((ulong)uVar21 * 0x430 != lVar13);
    *(uint *)(param_1 + 0x21) = uVar21;
    param_1[0x22] = (long)puVar37;
  }
  if (uVar21 != 0) {
    iVar11 = 0;
    uVar27 = 0;
    do {
      lVar35 = (long)(int)uVar27;
      FUN_03a4f220(puVar37 + lVar35 * 0x86,iVar11,(int)param_1[0xaaf],
                   (long)*(int *)(param_1[0x23] + 0x1b60),param_3,param_4);
      uVar27 = uVar27 + 1;
      (puVar37 + lVar35 * 0x86)[0x62] = (ulong)plVar14;
      iVar11 = iVar11 + 1;
    } while (uVar21 != uVar27);
  }
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    pvVar16 = malloc(0x360);
  }
  else {
    plVar18 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar35 + 8);
      if (lVar13 != 0) {
        plVar18 = (long *)(lVar13 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    pvVar16 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x360,8);
  }
  uVar21 = *param_2;
  FUN_03941294(pvVar16);
  *(uint *)((long)pvVar16 + 0x238) = uVar21;
  *(undefined8 *)((long)pvVar16 + 0x340) = 0;
  *(undefined8 *)((long)pvVar16 + 0x348) = 0;
  *(undefined8 *)((long)pvVar16 + 0x350) = 0;
  *(undefined8 *)((long)pvVar16 + 0x358) = 0;
  param_1[0xabb] = (long)pvVar16;
  FUN_03af0940(pvVar16,param_3,param_4);
  local_688 = 0;
  local_690 = CONCAT44(local_690._4_4_,0x1000001);
  local_698 = (undefined *)CONCAT44(*param_2,0x40);
  local_480 = PTR_DAT_04bb2020 + 0x10;
  local_478._0_4_ = (uint)*(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_478._4_4_ = (undefined4)((ulong)*(undefined8 *)(PTR_PTR_04bb2238 + 8) >> 0x20);
  lVar35 = FUN_039a7bd0(&local_480,&local_698,param_3);
  param_1[0x9df] = lVar35;
  FUN_039e9420(param_1,4,*param_2,param_3);
  *(char **)(param_1[0x1c] + 0x28) = "ModelScene(OcclusionQuery)";
  *(undefined1 *)(param_1[10] + 10) = 0;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 6) = *(ushort *)(param_1[10] + 6) | 2;
  iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar11) {
    iVar11 = 0;
    do {
      lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
      if (*(short *)(lVar35 + 0x16) == 0) {
        lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
        *(undefined1 *)(lVar35 + 0x18) = 0;
      }
      iVar11 = iVar11 + 1;
      iVar12 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar11 < iVar12);
  }
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,0);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) & 0x3fffffff | 0x40000000;
  *(char **)(param_1[0x1c] + (ulong)(1 < *(uint *)(param_1 + 0x1b)) * 0x38 + 0x28) =
       "ModelScene(Xlu)";
  *(undefined1 *)(param_1[10] + 0x16) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x12) = *(ushort *)(param_1[10] + 0x12) | 2;
  iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar11) {
    iVar11 = 0;
    do {
      lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
      if (*(short *)(lVar35 + 0x16) == 1) {
        lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
        *(undefined1 *)(lVar35 + 0x18) = 2;
      }
      iVar11 = iVar11 + 1;
      iVar12 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar11 < iVar12);
  }
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,1);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) | 0x3c000000;
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,1);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) & 0xffc0ffff | 0x3e0000;
  lVar35 = 0x70;
  if (*(uint *)(param_1 + 0x1b) < 3) {
    lVar35 = 0;
  }
  *(char **)(param_1[0x1c] + lVar35 + 0x28) = "ModelScene(GBufferPreShading)";
  *(undefined1 *)(param_1[10] + 0x22) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x1e) = *(ushort *)(param_1[10] + 0x1e) | 2;
  iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar11) {
    iVar11 = 0;
    do {
      lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
      if (*(short *)(lVar35 + 0x16) == 2) {
        lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
        *(undefined1 *)(lVar35 + 0x18) = 2;
      }
      iVar11 = iVar11 + 1;
      iVar12 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar11 < iVar12);
  }
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,2);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) & 0xfc3fffff | 0x2000000;
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,2);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) & 0xffc0ffff | 0x200000;
  lVar35 = 0xa8;
  if (*(uint *)(param_1 + 0x1b) < 4) {
    lVar35 = 0;
  }
  *(char **)(param_1[0x1c] + lVar35 + 0x28) = "ModelScene(GBufferPreShadingXlu)";
  *(undefined1 *)(param_1[10] + 0x2e) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x2a) = *(ushort *)(param_1[10] + 0x2a) | 2;
  iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar11) {
    iVar11 = 0;
    do {
      lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
      if (*(short *)(lVar35 + 0x16) == 3) {
        lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar11);
        *(undefined1 *)(lVar35 + 0x18) = 2;
      }
      iVar11 = iVar11 + 1;
      iVar12 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar11 < iVar12);
  }
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,3);
  *(uint *)(lVar35 + 0x10) = *(uint *)(lVar35 + 0x10) & 0xfc3fffff | 0x2000000;
  lVar35 = (**(code **)(*param_1 + 0x1e8))(param_1,3);
  *(uint *)(lVar35 + 0x10) =
       *(uint *)(lVar35 + 0x10) & 0xffc00000 | *(uint *)(lVar35 + 0x10) & 0xffff | 0x2a0000;
  if (*(char *)(param_1[0x23] + 0x1960) == '\0') {
    (**(code **)(*param_1 + 0x1c8))(param_1,2,0);
    (**(code **)(*param_1 + 0x1c8))(param_1,3,0);
  }
  else {
    *(uint *)(param_1[10] + 0x18) = *(uint *)(param_1[10] + 0x18) | 0x40000;
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
    *(ushort *)(param_1[10] + 0x1e) = *(ushort *)(param_1[10] + 0x1e) | 2;
    *(uint *)(param_1[10] + 0x18) = *(uint *)(param_1[10] + 0x18) | 0x80000;
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
    *(ushort *)(param_1[10] + 0x1e) = *(ushort *)(param_1[10] + 0x1e) | 2;
    *(uint *)(param_1[10] + 0x24) = *(uint *)(param_1[10] + 0x24) | 0x40000;
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
    *(ushort *)(param_1[10] + 0x2a) = *(ushort *)(param_1[10] + 0x2a) | 2;
    *(uint *)(param_1[10] + 0x24) = *(uint *)(param_1[10] + 0x24) | 0x80000;
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
    *(ushort *)(param_1[10] + 0x2a) = *(ushort *)(param_1[10] + 0x2a) | 2;
  }
  FUN_039a8a30(param_1[0x9df],param_1,0,param_3);
  local_480._0_4_ = 0;
  local_480._4_4_ = 0;
  local_478._0_4_ = 1;
  local_478._4_4_ = 0xffffffff;
  local_470 = 0;
  local_468._0_2_ = 0x101;
  lVar35 = FUN_039ffba0(*(undefined8 *)PTR_DAT_04bd1770,param_1[0x23] + 0x22e0);
  puVar1 = PTR_DAT_04bbda98;
  local_480._0_4_ = (uint)lVar35;
  local_480._4_4_ = (undefined4)((ulong)lVar35 >> 0x20);
  if (lVar35 == 0) goto LAB_03a02a6c;
  local_478._0_4_ = *param_2;
  local_468._0_2_ = 0;
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    plVar18 = malloc(0x2e8);
  }
  else {
    plVar18 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar35 + 8);
      if (lVar13 != 0) {
        plVar18 = (long *)(lVar13 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03a02848;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x2e8,8);
  }
LAB_03a02848:
  plVar18[4] = 0;
  plVar18[0x10] = (long)(puVar1 + 0x10);
  plVar18[0x14] = 0xffff00000000;
  *(undefined4 *)(plVar18 + 0x15) = 0xffff;
  plVar18[8] = 0;
  plVar18[9] = 0;
  *(undefined2 *)((long)plVar18 + 0xac) = 0x10;
  *(undefined4 *)((long)plVar18 + 0xae) = 0xff010000;
  *(undefined1 *)((long)plVar18 + 0xb2) = 0;
  plVar18[5] = 0;
  *(undefined8 *)((long)plVar18 + 0xb4) = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  plVar18[6] = 0;
  plVar18[7] = (long)(plVar18 + 5);
  plVar18[0x18] = (long)puVar2;
  plVar18[0x19] = (long)&DAT_040c7886;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  puVar2 = PTR_DAT_04bd17e0 + 0x10;
  puVar3 = PTR_DAT_04bd17e0 + 0x2f8;
  *(undefined4 *)((long)plVar18 + 0x164) = 0;
  *(undefined4 *)(plVar18 + 0x1e) = 0;
  *(undefined4 *)(plVar18 + 0x21) = 0;
  *(undefined1 *)(plVar18 + 0x2c) = 0;
  plVar18[0x2d] = 0;
  plVar18[0xc] = 0;
  plVar18[0xd] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  *plVar18 = (long)puVar2;
  plVar18[1] = 0;
  plVar18[0x1a] = (long)puVar3;
  plVar18[0x1b] = 0;
  plVar18[0x1f] = 0;
  plVar18[0x20] = 0;
  plVar18[0x22] = 0;
  plVar18[0x23] = 0;
  plVar18[0x24] = 0;
  plVar18[0x25] = 0;
  plVar18[0x26] = 0;
  plVar18[0x27] = 0;
  plVar18[0x28] = 0;
  plVar18[0x29] = 0;
  plVar18[0x2a] = 0;
  plVar18[0x2b] = 0;
  plVar18[0x2f] = 0;
  plVar18[0x30] = 0;
  plVar18[0x31] = (long)(PTR_DAT_04bd17e8 + 0x10);
  plVar18[0x35] = 0;
  plVar18[0x36] = 0;
  plVar18[0x37] = 0;
  FUN_003490b4(plVar18 + 0x38);
  plVar18[0x5c] = 0xff00020000;
  *(ushort *)((long)plVar18 + 0xac) = *(ushort *)((long)plVar18 + 0xac) | 6;
  param_1[0x9e0] = (long)plVar18;
  FUN_039d3d40(plVar18,&local_480,param_3);
  *(ushort *)(param_1[0x9e0] + 0xac) = *(ushort *)(param_1[0x9e0] + 0xac) & 0xfffd;
  plVar18 = (long *)param_1[0x9e0];
  iVar11 = (**(code **)(*plVar18 + 0xb8))(plVar18);
  if (0 < iVar11) {
    iVar12 = 0;
    do {
      (**(code **)(*plVar18 + 0x1c8))(plVar18,iVar12,0);
      iVar12 = iVar12 + 1;
    } while (iVar11 != iVar12);
  }
  FUN_039a8a30(param_1[0x9df],param_1[0x9e0],0,param_3);
  lVar35 = param_1[0x21];
  if ((int)lVar35 != 0) {
    lVar13 = param_1[0x22];
    iVar11 = 0;
    do {
      *(long *)(lVar13 + (long)iVar11 * 0x430 + 0x380) = param_1[0x9e0];
      iVar11 = iVar11 + 1;
    } while ((int)lVar35 != iVar11);
  }
  lVar35 = param_1[0x9e0];
  if ((param_1[0x959] != 0) && (*(char *)(param_1[0x8d7] + 0x530) != '\0')) {
    *(long *)(param_1[0x959] + 0x448) = lVar35;
    lVar35 = param_1[0x9e0];
  }
  if ((((param_1[0x632] != 0) && (lVar13 = param_1[0x5de], *(char *)(lVar13 + 0x14a0) != '\0')) &&
      (*(char *)(lVar13 + 0x610) != '\0')) && (0 < *(int *)(lVar13 + 0x14e0))) {
    lVar31 = 0;
    do {
      lVar32 = *(long *)(param_1[0x633] + lVar31 * 8);
      if (lVar32 != 0) {
        *(long *)(lVar32 + 0x380) = lVar35;
        lVar13 = param_1[0x5de];
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 < *(int *)(lVar13 + 0x14e0));
  }
LAB_03a02a6c:
  uVar21 = *(uint *)(param_1 + 0x8d4);
  uVar25 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    uVar29 = 0;
    do {
      if (uVar29 < (uVar25 & 0xffffffff)) {
        uVar20 = *(undefined8 *)(param_1[0x8d5] + uVar29 * 8);
      }
      else {
        uVar20 = 0;
      }
      FUN_039a8a30(param_1[0x9df],uVar20,0,param_3);
      uVar25 = (ulong)(int)*(uint *)(param_1 + 0x8d4);
      uVar29 = uVar29 + 1;
    } while ((long)uVar29 < (long)uVar25);
  }
  local_478._0_4_ = (uint)param_1;
  local_478._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
  local_480._0_4_ = 0x40c2603;
  local_480._4_4_ = 0;
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    plVar18 = malloc(0x100);
  }
  else {
    plVar18 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar35 + 8);
      if (lVar13 != 0) {
        plVar18 = (long *)(lVar13 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x100,8);
  }
  uVar21 = *param_2;
  plVar18[0x10] = (long)(puVar1 + 0x10);
  plVar18[4] = 0;
  plVar18[0x14] = 0xffff00000000;
  *(undefined4 *)(plVar18 + 0x15) = 0xffff;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[5] = 0;
  *(undefined2 *)((long)plVar18 + 0xac) = 0x10;
  *(undefined4 *)((long)plVar18 + 0xae) = 0xff010000;
  *(undefined1 *)((long)plVar18 + 0xb2) = 0;
  *(undefined8 *)((long)plVar18 + 0xb4) = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar18[6] = 0;
  plVar18[7] = (long)(plVar18 + 5);
  *(undefined4 *)(plVar18 + 0x1a) = 1;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  plVar18[0xd] = 0;
  puVar2 = PTR_DAT_04bd1870 + 0x10;
  *(undefined4 *)(plVar18 + 0x1b) = 0;
  *(uint *)(plVar18 + 0x1e) = uVar21;
  *(undefined4 *)((long)plVar18 + 0xf4) = 0;
  plVar18[0x1f] = 0;
  *plVar18 = (long)puVar2;
  plVar18[1] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x18] = (long)puVar1;
  plVar18[0x19] = (long)&DAT_0407ebb1;
  param_1[0xabc] = (long)plVar18;
  FUN_03b05d70(plVar18,param_3,&local_480);
  FUN_039a8a30(param_1[0x9df],param_1[0xabc],0,0);
  param_1[0xae9] = 0x42f00000;
  param_1[0xaea] = 0x42f00000;
  param_1[0xaeb] = 0x42f00000;
  param_1[0xaec] = 0x42f00000;
  if (param_4 != 0) {
    local_6d = 0;
    local_478 = (undefined *)((long)&local_470 + 4);
    local_470 = CONCAT35(local_470._5_3_,0x400);
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040bd3a1);
  }
  plVar18 = (long *)param_1[0xab2];
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))(plVar18,param_1,param_2);
  }
  if ((int)param_1[0x24] != 0) {
    lVar35 = (long)(int)param_1[0x24] << 3;
    puVar15 = (undefined8 *)param_1[0x25];
    do {
      (**(code **)(*(long *)*puVar15 + 0x38))((long *)*puVar15,param_1);
      lVar35 = lVar35 + -8;
      puVar15 = puVar15 + 1;
    } while (lVar35 != 0);
  }
  plVar18 = (long *)param_1[0xab2];
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x78))(plVar18,param_1);
  }
  lVar35 = param_1[0x9df];
  plVar18 = *(long **)(lVar35 + 0x70);
  if ((plVar18 != (long *)0x0) && (plVar18 != param_1)) {
    FUN_03a03df0(plVar18,lVar35);
  }
  *(long **)(lVar35 + 0x70) = param_1;
  FUN_03a03cf0(param_1,lVar35);
  uVar21 = *(uint *)(lVar35 + 0x20);
  if ((uint)*(ushort *)(lVar35 + 0x284) <= *(uint *)(lVar35 + 0x20)) {
    uVar21 = (uint)*(ushort *)(lVar35 + 0x284);
  }
  if (uVar21 != 0) {
    lVar13 = *(long *)(lVar35 + 0x28);
    uVar27 = 0;
    do {
      plVar18 = *(long **)(lVar13 + (long)(int)uVar27 * 0x38);
      (**(code **)(*plVar18 + 0x268))(plVar18,*(undefined8 *)(lVar35 + 0x70));
      uVar27 = uVar27 + 1;
    } while (uVar21 != uVar27);
  }
  return;
}

