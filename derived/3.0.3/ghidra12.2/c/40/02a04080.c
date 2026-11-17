
uint FUN_02a04080(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  size_t __size;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  plVar6 = *(long **)(param_2 + 0x18);
  param_1[3] = (long)plVar6;
  param_1[4] = *(long *)(param_2 + 0x20);
  (**(code **)(*plVar6 + 0x78))();
  puVar4 = PTR_DAT_04bb2698;
  lVar14 = (long)*(int *)(param_2 + 0xc) * (long)*(int *)(param_2 + 8);
  uVar13 = (uint)lVar14;
  uVar5 = uVar13 - 1;
  if (0 < (int)uVar13) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    __size = lVar14 * 0x18;
    if (lVar15 == 0) {
      pvVar7 = malloc(__size);
    }
    else {
      plVar6 = (long *)param_1[3];
      if (plVar6 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar15 + 8);
        if (lVar14 != 0) {
          plVar6 = (long *)(lVar14 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_02a041ac;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[8] = (long)pvVar7;
      if (1 < uVar13) {
        if (uVar5 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          plVar6 = (long *)((long)pvVar7 + 0x18);
          do {
            uVar16 = uVar16 + 2;
            plVar6[-3] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 3);
            plVar6 = plVar6 + 6;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar16);
        }
        if ((uVar5 & 1) != 0) {
          plVar6 = (long *)((long)pvVar7 + uVar16 * 0x18);
          *plVar6 = (long)(plVar6 + 3);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar5 * 3) * 8) = 0;
      param_1[9] = (long)pvVar7;
      *(uint *)(param_1 + 10) = uVar13;
    }
  }
LAB_02a041ac:
  if (0 < (int)param_1[10]) {
    iVar12 = 0;
    plVar6 = param_1 + 5;
    do {
      lVar14 = (**(code **)(*(long *)param_1[4] + 0x20))((long *)param_1[4],param_1[3]);
      if (lVar14 != 0) {
        plVar9 = (long *)param_1[8];
        if (plVar9 != (long *)0x0) {
          param_1[8] = *plVar9;
        }
        plVar9[2] = 0;
        *plVar9 = 0;
        plVar10 = plVar9 + 1;
        *plVar10 = 0;
        lVar15 = *plVar6;
        *plVar6 = (long)plVar10;
        plVar9[2] = (long)plVar6;
        *plVar10 = lVar15;
        if (lVar15 != 0) {
          *(long **)(lVar15 + 8) = plVar10;
        }
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        *plVar9 = lVar14;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)param_1[10]);
  }
  uVar5 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar5) {
    lVar14 = *(long *)puVar4;
    if (lVar14 == 0) {
      pvVar7 = malloc((ulong)uVar5 << 3);
    }
    else {
      plVar6 = (long *)param_1[3];
      if (plVar6 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar14 + 8);
        if (lVar15 != 0) {
          plVar6 = (long *)(lVar15 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_02a042a4;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar5 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[0xb] = (long)pvVar7;
      *(undefined8 *)((long)param_1 + 100) = 0;
      *(uint *)(param_1 + 0xc) = uVar5;
    }
  }
LAB_02a042a4:
  if (0 < (int)param_1[0xc]) {
    iVar12 = 0;
    do {
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        pvVar7 = malloc(0x30);
      }
      else {
        plVar6 = (long *)param_1[3];
        if (plVar6 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar14 + 8);
          if (lVar15 != 0) {
            plVar6 = (long *)(lVar15 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
        }
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x30,8);
      }
      *(undefined4 *)((long)pvVar7 + 0x10) = 0;
      *(long *)((long)pvVar7 + 0x18) = 0;
      *(void **)pvVar7 = pvVar7;
      *(void **)((long)pvVar7 + 8) = pvVar7;
      *(undefined8 *)((long)pvVar7 + 0x20) = 0;
      *(undefined4 *)((long)pvVar7 + 0x28) = 0;
      uVar5 = *(uint *)(param_2 + 8);
      uVar13 = uVar5 - 1;
      uVar16 = (ulong)uVar13;
      if (0 < (int)uVar5) {
        lVar14 = *(long *)puVar4;
        if (lVar14 == 0) {
          pvVar8 = malloc((long)(int)uVar5 * 0x18);
        }
        else {
          plVar6 = (long *)param_1[3];
          if (plVar6 == (long *)0x0) {
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar14 + 8);
            if (lVar15 != 0) {
              plVar6 = (long *)(lVar15 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_02a04460;
          }
          pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)(int)uVar5 * 0x18,8);
        }
        if (pvVar8 != (void *)0x0) {
          *(long *)((long)pvVar7 + 0x18) = (long)pvVar8;
          if (1 < uVar5) {
            if (uVar16 - 1 < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              puVar11 = (undefined8 *)((long)pvVar8 + 0x30);
              do {
                puVar11[-3] = puVar11;
                puVar11[3] = puVar11 + 6;
                lVar14 = lVar14 + -4;
                puVar11[-6] = puVar11 + -3;
                *puVar11 = puVar11 + 3;
                puVar11 = puVar11 + 0xc;
              } while (-lVar14 != (uVar16 & 0xfffffffc));
              lVar14 = -lVar14;
            }
            if ((uVar13 & 3) != 0) {
              uVar16 = uVar16 & 3;
              puVar11 = (undefined8 *)((long)pvVar8 + lVar14 * 0x18);
              do {
                *puVar11 = puVar11 + 3;
                uVar16 = uVar16 - 1;
                puVar11 = puVar11 + 3;
              } while (uVar16 != 0);
            }
          }
          *(undefined8 *)((long)pvVar8 + (long)(int)(uVar13 * 3) * 8) = 0;
          *(void **)((long)pvVar7 + 0x20) = pvVar8;
          *(uint *)((long)pvVar7 + 0x28) = uVar5;
        }
      }
LAB_02a04460:
      iVar1 = (int)param_1[0xd];
      iVar3 = (int)param_1[0xc];
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0xd) = iVar1 + 1;
        iVar1 = *(int *)((long)param_1 + 100) + iVar1;
        iVar2 = 0;
        if (iVar3 <= iVar1) {
          iVar2 = iVar3;
        }
        *(void **)(param_1[0xb] + (long)(iVar1 - iVar2) * 8) = pvVar7;
        iVar3 = (int)param_1[0xc];
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar3);
  }
  FUN_02a03270(param_1 + 0xe,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               param_1[3]);
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  (**(code **)(*(long *)param_1[3] + 0x78))();
  *(undefined1 *)(param_1 + 1) = 1;
  return uVar5 & 1;
}

