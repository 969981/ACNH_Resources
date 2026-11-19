
void FUN_03970180(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined *local_480;
  long lStack_478;
  
  *(char *)(param_1 + 0x196) = (char)*(undefined4 *)(param_2 + 0x90);
  uVar16 = *(uint *)(param_2 + 0x8c);
  uVar18 = (ulong)uVar16;
  if ((int)uVar16 < 1) {
LAB_0397023c:
    uVar18 = (ulong)*(uint *)(param_1 + 0x20);
    if (0 < (int)*(uint *)(param_1 + 0x20)) goto LAB_03970248;
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      pvVar9 = malloc(uVar18 << 3);
    }
    else {
      plVar8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar17 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0397023c;
      }
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar18 << 3,8);
    }
    if (pvVar9 == (void *)0x0) goto LAB_0397023c;
    *(uint *)(param_1 + 0x20) = uVar16;
    *(void **)(param_1 + 0x28) = pvVar9;
LAB_03970248:
    sVar2 = uVar18 * 0x38 + 8;
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      puVar10 = malloc(sVar2);
joined_r0x039702bc:
      if (puVar10 != (ulong *)0x0) {
        uVar20 = uVar18 * 0x38 - 0x38;
        puVar12 = puVar10 + 1;
        *puVar10 = uVar18;
        puVar3 = PTR_DAT_04bd10c8;
        puVar4 = PTR_DAT_04bb2020;
        puVar14 = puVar12;
        if ((uVar20 / 0x38 & 1) == 0) {
          *(undefined4 *)(puVar10 + 4) = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          *(undefined4 *)(puVar10 + 7) = 0;
          puVar10[2] = (ulong)(puVar4 + 0x10);
          puVar10[3] = (ulong)&DAT_0407ebb1;
          puVar14 = puVar10 + 8;
          puVar10[1] = (ulong)(puVar3 + 0x10);
        }
        if (0x37 < uVar20) {
          puVar4 = PTR_DAT_04bb2020 + 0x10;
          puVar3 = PTR_DAT_04bd10c8 + 0x10;
          do {
            puVar14[1] = (ulong)puVar4;
            puVar14[2] = (ulong)&DAT_0407ebb1;
            *puVar14 = (ulong)puVar3;
            *(undefined4 *)(puVar14 + 3) = 0;
            *(undefined4 *)(puVar14 + 6) = 0;
            puVar14[7] = (ulong)puVar3;
            *(undefined4 *)(puVar14 + 10) = 0;
            *(undefined4 *)(puVar14 + 0xd) = 0;
            puVar14[4] = 0;
            puVar14[5] = 0;
            puVar14[8] = (ulong)puVar4;
            puVar14[9] = (ulong)&DAT_0407ebb1;
            puVar14[0xb] = 0;
            puVar14[0xc] = 0;
            puVar14 = puVar14 + 0xe;
          } while (puVar14 != puVar12 + uVar18 * 7);
        }
        *(int *)(param_1 + 0x30) = (int)uVar18;
        *(ulong **)(param_1 + 0x38) = puVar12;
      }
    }
    else {
      plVar8 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03970298:
        puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar2,8);
        goto joined_r0x039702bc;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar17 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_03970298;
    }
    uVar16 = *(uint *)(param_1 + 0x20);
    uVar18 = (ulong)uVar16;
    if (0 < (int)uVar16) {
      sVar2 = uVar18 * 0x38 + 8;
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        puVar10 = malloc(sVar2);
joined_r0x0397041c:
        if (puVar10 != (ulong *)0x0) {
          uVar20 = uVar18 * 0x38 - 0x38;
          puVar12 = puVar10 + 1;
          *puVar10 = uVar18;
          puVar3 = PTR_DAT_04bd10c8;
          puVar4 = PTR_DAT_04bb2020;
          puVar14 = puVar12;
          if ((uVar20 / 0x38 & 1) == 0) {
            *(undefined4 *)(puVar10 + 4) = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            *(undefined4 *)(puVar10 + 7) = 0;
            puVar10[2] = (ulong)(puVar4 + 0x10);
            puVar10[3] = (ulong)&DAT_0407ebb1;
            puVar14 = puVar10 + 8;
            puVar10[1] = (ulong)(puVar3 + 0x10);
          }
          if (0x37 < uVar20) {
            puVar4 = PTR_DAT_04bb2020 + 0x10;
            puVar3 = PTR_DAT_04bd10c8 + 0x10;
            do {
              puVar14[1] = (ulong)puVar4;
              puVar14[2] = (ulong)&DAT_0407ebb1;
              *puVar14 = (ulong)puVar3;
              *(undefined4 *)(puVar14 + 3) = 0;
              *(undefined4 *)(puVar14 + 6) = 0;
              puVar14[7] = (ulong)puVar3;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[8] = (ulong)puVar4;
              puVar14[9] = (ulong)&DAT_0407ebb1;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0;
              puVar14 = puVar14 + 0xe;
            } while (puVar14 != puVar12 + uVar18 * 7);
          }
          *(uint *)(param_1 + 0x40) = uVar16;
          *(ulong **)(param_1 + 0x48) = puVar12;
        }
      }
      else {
        plVar8 = param_3;
        if (param_3 != (long *)0x0) {
LAB_039703f8:
          puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar2,8);
          goto joined_r0x0397041c;
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar17 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_039703f8;
      }
      uVar16 = *(uint *)(param_1 + 0x20);
      uVar18 = (ulong)uVar16;
      if (0 < (int)uVar16) {
        sVar2 = uVar18 * 0x38 + 8;
        lVar17 = *(long *)PTR_DAT_04bb2698;
        if (lVar17 == 0) {
          puVar10 = malloc(sVar2);
        }
        else {
          plVar8 = param_3;
          if (param_3 == (long *)0x0) {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar8 = (long *)(lVar17 + 8);
            if (lVar7 != 0) {
              plVar8 = (long *)(lVar7 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_0397065c;
          }
          puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar2,8);
        }
        if (puVar10 != (ulong *)0x0) {
          uVar20 = uVar18 * 0x38 - 0x38;
          puVar12 = puVar10 + 1;
          *puVar10 = uVar18;
          puVar3 = PTR_DAT_04bd10c8;
          puVar4 = PTR_DAT_04bb2020;
          puVar14 = puVar12;
          if ((uVar20 / 0x38 & 1) == 0) {
            *(undefined4 *)(puVar10 + 4) = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            *(undefined4 *)(puVar10 + 7) = 0;
            puVar10[2] = (ulong)(puVar4 + 0x10);
            puVar10[3] = (ulong)&DAT_0407ebb1;
            puVar14 = puVar10 + 8;
            puVar10[1] = (ulong)(puVar3 + 0x10);
          }
          if (0x37 < uVar20) {
            puVar4 = PTR_DAT_04bb2020 + 0x10;
            puVar3 = PTR_DAT_04bd10c8 + 0x10;
            do {
              puVar14[1] = (ulong)puVar4;
              puVar14[2] = (ulong)&DAT_0407ebb1;
              *puVar14 = (ulong)puVar3;
              *(undefined4 *)(puVar14 + 3) = 0;
              *(undefined4 *)(puVar14 + 6) = 0;
              puVar14[7] = (ulong)puVar3;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[8] = (ulong)puVar4;
              puVar14[9] = (ulong)&DAT_0407ebb1;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0;
              puVar14 = puVar14 + 0xe;
            } while (puVar14 != puVar12 + uVar18 * 7);
          }
          *(uint *)(param_1 + 0x50) = uVar16;
          *(ulong **)(param_1 + 0x58) = puVar12;
        }
      }
    }
  }
LAB_0397065c:
  if ((*(long *)(param_2 + 0x98) != 0) && (*(int *)(param_2 + 0xa8) != 0)) {
    FUN_0396f1a0(param_1 + 0x60,*(long *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0),0x1000,
                 *(int *)(param_2 + 0xa8),param_3,param_4);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xb0);
  uVar16 = *(uint *)(param_2 + 0x88);
  if (0 < (int)uVar16) {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      pvVar9 = malloc((ulong)uVar16 << 3);
    }
    else {
      plVar8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar17 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03970700;
      }
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar16 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      *(uint *)(param_1 + 0x10) = uVar16;
      *(void **)(param_1 + 0x18) = pvVar9;
    }
  }
LAB_03970700:
  *(uint *)(param_1 + 400) =
       (*(uint *)(param_1 + 400) & 0xffff0000 |
       *(uint *)(param_1 + 400) & 0x7fef | (*(uint *)(param_2 + 0xac) >> 1 & 1) << 0xf) ^ 0x8010;
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 != 0) {
    uVar18 = 0;
    uVar20 = 0;
    lVar17 = *(long *)(param_1 + 0x18);
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar7 = *(long *)PTR_DAT_04bb2698;
      if (lVar7 == 0) {
        pvVar9 = malloc(0xc08);
      }
      else {
        plVar8 = param_3;
        if (param_3 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar7 + 8);
          if (lVar11 != 0) {
            plVar8 = (long *)(lVar11 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
        }
        pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0xc08,8);
      }
      FUN_0396b374();
      lVar7 = param_2 + 8 + uVar20 * 8;
      uVar5 = uVar20;
      lVar11 = param_2 + 0x48 + uVar20 * 8;
      if (7 < (uint)uVar18) {
        uVar5 = 0;
        lVar7 = param_2 + 8;
        lVar11 = param_2 + 0x48;
      }
      lStack_478 = (long)&DAT_041b3da8 +
                   (long)*(int *)((long)&DAT_041b3da8 +
                                 (-(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2));
      local_480 = puVar4;
      FUN_0396bcb0(pvVar9,uVar18 & 0xffffffff,&local_480,lVar7,lVar11,
                   *(undefined8 *)(param_2 + 0xb8 + uVar5 * 8),*(undefined4 *)(param_1 + 0x20),
                   *(undefined1 *)(param_1 + 0x196),param_3,*(undefined8 *)(param_2 + 0xf8));
      if (*(long *)(param_2 + 0x98) != 0) {
        *(long *)((long)pvVar9 + 0x678) = param_1 + 0x60;
      }
      iVar19 = (int)uVar20;
      uVar18 = uVar20 + 1;
      uVar20 = uVar18 & 0xffffffff;
      *(void **)(lVar17 + (long)iVar19 * 8) = pvVar9;
    } while (iVar6 != (int)uVar18);
  }
  uVar16 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar16) {
    uVar18 = (ulong)uVar16 & 3;
    if (uVar16 < 4) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      do {
        lVar17 = uVar20 * 8;
        uVar20 = uVar20 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar17) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar17 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar17 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar17 + 0x18) = 0;
      } while (((ulong)uVar16 & 0xfffffffc) != uVar20);
    }
    if ((uVar16 & 3) != 0) {
      lVar17 = uVar20 << 3;
      do {
        uVar18 = uVar18 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar17) = 0;
        lVar17 = lVar17 + 8;
      } while (uVar18 != 0);
    }
  }
  uVar18 = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  do {
    uVar16 = (uint)uVar18;
    if (uVar16 < 3) {
      iVar6 = *(int *)(param_1 + 0x20) + 2;
LAB_0397094c:
      FUN_03972570(param_1 + 0x1a8 + uVar18 * 200,iVar6,param_3);
    }
    else {
      if (uVar16 == 3) {
        iVar6 = *(int *)(param_1 + 0x20);
        goto LAB_0397094c;
      }
      if (uVar16 == 4) {
        lVar17 = *(long *)PTR_DAT_04bd1158;
        if ((lVar17 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
          (**(code **)(*(long *)(lVar17 + 8) + 0x18))((long *)(lVar17 + 8));
          FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon = DRAW",*(undefined8 *)(lVar17 + 0x10));
        }
        return;
      }
    }
    lVar17 = param_1 + 0x1a8 + (long)(int)uVar16 * 200;
    *(undefined4 *)(lVar17 + 0x74) = 5;
    uVar13 = *(uint *)(lVar17 + 0x90);
    if (0 < (int)uVar13) {
      uVar15 = 0;
      do {
        local_480 = (undefined *)CONCAT44(local_480._4_4_,uVar15);
        uVar1 = uVar15 + 1;
        if (uVar13 <= uVar15) {
          uVar15 = 0;
        }
        *(undefined4 *)(*(long *)(lVar17 + 0x98) + (long)(int)uVar15 * 4) = 0;
        uVar13 = *(uint *)(lVar17 + 0x90);
        uVar15 = uVar1;
      } while ((int)uVar1 < (int)uVar13);
    }
    *(undefined8 *)(lVar17 + 0xc0) = 0;
    uVar18 = (ulong)(uVar16 + 1);
    *(undefined4 *)(lVar17 + 0x18) = 0;
  } while( true );
}

