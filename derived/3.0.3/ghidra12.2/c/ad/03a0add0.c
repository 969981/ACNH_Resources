
/* WARNING: Type propagation algorithm not settling */

void FUN_03a0add0(long param_1,undefined8 param_2,uint param_3,int param_4,int param_5,int param_6,
                 uint param_7,long *param_8,long param_9)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  size_t sVar19;
  long local_cb0;
  undefined8 local_ca8;
  long local_898;
  undefined8 local_890;
  undefined *local_480;
  undefined1 *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  *(undefined8 *)(param_1 + 0x118) = param_2;
  if (0 < param_4) {
    sVar19 = (size_t)(param_4 << 3);
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      pvVar8 = malloc(sVar19);
joined_r0x03a0aeac:
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x100) = pvVar8;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(int *)(param_1 + 0xfc) = param_4;
      }
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) goto LAB_03a0b008;
      if (param_8 == (long *)0x0) {
LAB_03a0aec8:
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar15 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a0af18;
      }
      else {
        plVar7 = param_8;
      }
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,8);
    }
    else {
      plVar7 = param_8;
      if (param_8 != (long *)0x0) {
LAB_03a0ae64:
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,8);
        goto joined_r0x03a0aeac;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_03a0ae64;
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 != 0) goto LAB_03a0aec8;
LAB_03a0b008:
      pvVar8 = malloc(sVar19);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0x110) = pvVar8;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(int *)(param_1 + 0x10c) = param_4;
    }
  }
LAB_03a0af18:
  if (0 < param_5) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      pvVar8 = malloc((long)(param_5 << 3));
    }
    else {
      plVar7 = param_8;
      if (param_8 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar15 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a0af90;
      }
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)(param_5 << 3),8);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0x138) = pvVar8;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(int *)(param_1 + 0x134) = param_5;
    }
  }
LAB_03a0af90:
  uVar18 = (ulong)*(ushort *)(param_1 + 0xec);
  if (uVar18 != 0) {
    uVar16 = uVar18 * 0x90 | 8;
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      plVar7 = malloc(uVar16);
      puVar2 = PTR_DAT_04bb2020;
    }
    else {
      plVar7 = param_8;
      if (param_8 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar15 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a0b088;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar16,8);
      puVar2 = PTR_DAT_04bb2020;
    }
    PTR_DAT_04bb2020 = puVar2;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 4;
      *plVar7 = uVar18 * 3;
      lVar15 = uVar18 * 0x90;
      do {
        plVar9[-2] = (long)(puVar2 + 0x10);
        plVar9[-1] = (long)&DAT_0407ebb1;
        lVar15 = lVar15 + -0x30;
        plVar9[-3] = (long)&PTR_LAB_04b6c218;
        plVar9[2] = 0;
        *plVar9 = 0;
        plVar9[1] = -0x100000000;
        plVar9 = plVar9 + 6;
      } while (lVar15 != 0);
      *(int *)(param_1 + 0xd8) = (int)(uVar18 * 3);
      *(long **)(param_1 + 0xe0) = plVar7 + 1;
    }
  }
LAB_03a0b088:
  FUN_03972570(param_1 + 8,*(int *)(param_1 + 0xd8) + param_7 * 7,param_8);
  *(undefined4 *)(param_1 + 0x7c) = 5;
  uVar11 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar11) {
    uVar12 = 0;
    do {
      local_480 = (undefined *)CONCAT44(local_480._4_4_,uVar12);
      uVar1 = uVar12 + 1;
      if (uVar11 <= uVar12) {
        uVar12 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar12 * 4) = 0;
      uVar11 = *(uint *)(param_1 + 0x98);
      uVar12 = uVar1;
    } while ((int)uVar1 < (int)uVar11);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar11 = *(uint *)PTR_DAT_04bd0f28;
  if (uVar11 != 0) {
    lVar15 = param_1 + 0x60;
    if (uVar11 == 1) {
      uVar16 = 0;
    }
    else {
      uVar18 = 0;
      do {
        uVar12 = (uint)uVar18 + 1;
        uVar16 = uVar18 + 2;
        uVar14 = uVar18 & 0xffffffff;
        local_480 = (undefined *)CONCAT44(local_480._4_4_,uVar12);
        if (2 < (uint)uVar18) {
          uVar14 = 0;
        }
        *(undefined4 *)(lVar15 + uVar14 * 4) = 1;
        uVar18 = (ulong)uVar12;
        if (2 < uVar12) {
          uVar18 = 0;
        }
        *(undefined4 *)(lVar15 + uVar18 * 4) = 1;
        uVar18 = uVar16;
      } while (((ulong)uVar11 & 0xfffffffe) != uVar16);
    }
    if ((uVar11 & 1) != 0) {
      local_480 = (undefined *)CONCAT44(local_480._4_4_,(uint)uVar16);
      uVar18 = uVar16 & 0xffffffff;
      if (2 < (uint)uVar16) {
        uVar18 = 0;
      }
      *(undefined4 *)(lVar15 + uVar18 * 4) = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  if (iVar4 != 0) {
    lVar15 = *(long *)(param_1 + 0xe0);
    iVar13 = 0;
    do {
      lVar6 = lVar15 + (long)iVar13 * 0x30;
      *(char **)(lVar6 + 0x10) = "ModelJobQueue::calc";
      *(long *)(lVar6 + 0x18) = param_1;
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
  }
  if (0 < (int)param_7) {
    sVar19 = (ulong)param_7 * 0x3d8 + 8;
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar10 = malloc(sVar19);
      puVar2 = PTR_DAT_04bb2020;
      puVar3 = PTR_DAT_04bd1840;
      puVar5 = PTR_DAT_04bd19e0;
    }
    else {
      plVar7 = param_8;
      if (param_8 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar15 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a0b390;
      }
      puVar10 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,8);
      puVar2 = PTR_DAT_04bb2020;
      puVar3 = PTR_DAT_04bd1840;
      puVar5 = PTR_DAT_04bd19e0;
    }
    PTR_DAT_04bb2020 = puVar2;
    PTR_DAT_04bd1840 = puVar3;
    PTR_DAT_04bd19e0 = puVar5;
    if (puVar10 != (ulong *)0x0) {
      puVar17 = puVar10 + 1;
      *puVar10 = (ulong)param_7;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
      lVar15 = 0;
      do {
        lVar6 = lVar15 + 0x3d8;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x200) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x1e0) = puVar3;
        *(undefined **)((long)puVar10 + lVar15 + 0x1e8) = puVar2;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x208) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x210) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x218) = 0;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x1f0) = &DAT_0407ebb1;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x1f8) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x21c) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x228) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x230) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x220) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x238) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x240) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x248) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x250) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 600) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x25c) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x268) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x270) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x260) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x278) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x280) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x298) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x290) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x288) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x29c) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x2a8) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x2b0) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x2a0) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x2b8) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x2c0) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x2c8) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x2d0) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x2d8) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x2dc) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x2e8) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x2f0) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x2e0) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x2f8) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x300) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x318) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x310) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x308) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x31c) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 800) = puVar5 + 0x10;
        *(undefined **)((long)puVar10 + lVar15 + 0x330) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x338) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x328) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x340) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x348) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x360) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x358) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x350) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x364) = 0;
        *(undefined **)((long)puVar10 + lVar15 + 0x370) = puVar2;
        *(undefined8 **)((long)puVar10 + lVar15 + 0x378) = &DAT_0407ebb1;
        *(undefined **)((long)puVar10 + lVar15 + 0x368) = puVar3;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x380) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x388) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x3a0) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x398) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x390) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x3a4) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x3c0) = 0;
        *(undefined4 *)((long)puVar10 + lVar15 + 0x3b8) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x3b0) = 0;
        *(undefined8 *)((long)puVar10 + lVar15 + 0x3a8) = 0;
        lVar15 = lVar6;
      } while ((ulong)param_7 * 0x3d8 != lVar6);
      *(uint *)(param_1 + 0x120) = param_7;
      *(ulong **)(param_1 + 0x128) = puVar17;
      goto LAB_03a0b398;
    }
  }
LAB_03a0b390:
  param_7 = *(uint *)(param_1 + 0x120);
  puVar17 = *(ulong **)(param_1 + 0x128);
LAB_03a0b398:
  if (param_7 != 0) {
    uVar11 = 0;
    uVar12 = param_6 + 7U & 0xfffffff8;
    sVar19 = (ulong)uVar12 << 3;
    if ((int)uVar12 < 0) {
      sVar19 = 0xffffffffffffffff;
    }
    do {
      *(undefined8 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 4) = 0;
      if ((param_3 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar8 = malloc(sVar19);
        }
        else {
          plVar7 = param_8;
          if (param_8 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            pvVar8 = (void *)0x0;
            if (plVar7 == (long *)0x0) goto LAB_03a0b494;
          }
          pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,0x40);
        }
LAB_03a0b494:
        puVar17[(long)(int)uVar11 * 0x7b + 0x40] = (ulong)pvVar8;
        puVar17[(long)(int)uVar11 * 0x7b + 0x41] = (ulong)pvVar8;
        *(uint *)(puVar17 + (long)(int)uVar11 * 0x7b + 0x42) = uVar12;
        *(undefined4 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 0x214) = 0;
      }
      if ((param_3 >> 1 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar8 = malloc(sVar19);
        }
        else {
          plVar7 = param_8;
          if (param_8 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            pvVar8 = (void *)0x0;
            if (plVar7 == (long *)0x0) goto LAB_03a0b508;
          }
          pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,0x40);
        }
LAB_03a0b508:
        puVar17[(long)(int)uVar11 * 0x7b + 0x48] = (ulong)pvVar8;
        puVar17[(long)(int)uVar11 * 0x7b + 0x49] = (ulong)pvVar8;
        *(uint *)(puVar17 + (long)(int)uVar11 * 0x7b + 0x4a) = uVar12;
        *(undefined4 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 0x254) = 0;
      }
      if ((param_3 >> 2 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar8 = malloc(sVar19);
        }
        else {
          plVar7 = param_8;
          if (param_8 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            pvVar8 = (void *)0x0;
            if (plVar7 == (long *)0x0) goto LAB_03a0b57c;
          }
          pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,0x40);
        }
LAB_03a0b57c:
        puVar17[(long)(int)uVar11 * 0x7b + 0x50] = (ulong)pvVar8;
        puVar17[(long)(int)uVar11 * 0x7b + 0x51] = (ulong)pvVar8;
        *(uint *)(puVar17 + (long)(int)uVar11 * 0x7b + 0x52) = uVar12;
        *(undefined4 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 0x294) = 0;
      }
      if ((param_3 >> 3 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar8 = malloc(sVar19);
        }
        else {
          plVar7 = param_8;
          if (param_8 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            pvVar8 = (void *)0x0;
            if (plVar7 == (long *)0x0) goto LAB_03a0b5f0;
          }
          pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,0x40);
        }
LAB_03a0b5f0:
        puVar17[(long)(int)uVar11 * 0x7b + 0x58] = (ulong)pvVar8;
        puVar17[(long)(int)uVar11 * 0x7b + 0x59] = (ulong)pvVar8;
        *(uint *)(puVar17 + (long)(int)uVar11 * 0x7b + 0x5a) = uVar12;
        *(undefined4 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 0x2d4) = 0;
      }
      if ((param_3 >> 4 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar8 = malloc(sVar19);
        }
        else {
          plVar7 = param_8;
          if (param_8 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              pvVar8 = (void *)0x0;
              goto LAB_03a0b3d8;
            }
          }
          pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar19,0x40);
        }
LAB_03a0b3d8:
        puVar17[(long)(int)uVar11 * 0x7b + 0x60] = (ulong)pvVar8;
        puVar17[(long)(int)uVar11 * 0x7b + 0x61] = (ulong)pvVar8;
        *(uint *)(puVar17 + (long)(int)uVar11 * 0x7b + 0x62) = uVar12;
        *(undefined4 *)((long)puVar17 + (long)(int)uVar11 * 0x3d8 + 0x314) = 0;
      }
      FUN_03b0c40c(puVar17 + (long)(int)uVar11 * 0x7b + 99,param_8);
      uVar11 = uVar11 + 1;
    } while (param_7 != uVar11);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0x100;
  *(undefined1 *)(param_1 + 0x150) = 1;
  if (param_9 != 0) {
    FUN_006e9454(&local_cb0,"%s_%s","scene","setting");
    local_6d = 0;
    local_478 = local_46c;
    local_470 = 0x400;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","scene",local_ca8);
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
  }
  return;
}

