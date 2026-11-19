
void FUN_03ad2d00(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *__ptr;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined *local_480;
  undefined1 *puStack_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  FUN_003a0450(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30),0,0
              );
  plVar10 = *(long **)(param_1 + 0x28);
  if ((short)plVar10[8] != 0) {
    uVar13 = 0;
    plVar12 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 8);
    do {
      lVar14 = DAT_05ae7600;
      lVar1 = plVar10[2] + uVar13 * 0x100;
      uVar2 = *(ushort *)(lVar1 + 0xe8);
      uVar11 = (ulong)uVar2;
      if (DAT_05ae7600 == 0) {
        puVar4 = malloc(0x48);
      }
      else {
        plVar10 = param_2;
        if (param_2 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar3 != 0) {
            plVar10 = (long *)(lVar3 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            puVar4 = (undefined8 *)0x0;
            goto LAB_03ad2e20;
          }
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x48,8);
      }
LAB_03ad2e20:
      puVar4[7] = 0;
      puVar4[8] = 0;
      *puVar4 = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      FUN_038e18e4(puVar4);
      lVar14 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        pvVar5 = malloc(uVar11 << 3);
LAB_03ad2ea8:
        puVar4[8] = pvVar5;
        *(undefined8 **)(lVar1 + 200) = puVar4;
        lVar14 = *(long *)PTR_DAT_04bb2698;
        if (lVar14 == 0) goto LAB_03ad2f40;
        if (param_2 == (long *)0x0) {
LAB_03ad2ef4:
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar3 != 0) {
            plVar10 = (long *)(lVar3 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 != (long *)0x0) goto LAB_03ad2f20;
          __ptr = (undefined8 *)0x0;
        }
        else {
          plVar10 = param_2;
LAB_03ad2f20:
          __ptr = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0xec,8);
        }
      }
      else {
        plVar10 = param_2;
        if (param_2 != (long *)0x0) {
LAB_03ad2e88:
          pvVar5 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar11 << 3,8);
          goto LAB_03ad2ea8;
        }
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar14 + 8);
        if (lVar3 != 0) {
          plVar10 = (long *)(lVar3 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) goto LAB_03ad2e88;
        puVar4[8] = 0;
        *(undefined8 **)(lVar1 + 200) = puVar4;
        lVar14 = *(long *)PTR_DAT_04bb2698;
        if (lVar14 != 0) goto LAB_03ad2ef4;
LAB_03ad2f40:
        __ptr = malloc(0xec);
      }
      plVar16 = puVar4 + 8;
      *__ptr = 0xffffffffffffffff;
      *(undefined4 *)((long)__ptr + 0xc) = 0;
      __ptr[2] = 0xffffffffffffffff;
      __ptr[3] = 0xffffffffffffffff;
      __ptr[0x1c] = 0xffffffffffffffff;
      __ptr[4] = 0xffffffffffffffff;
      __ptr[5] = 0xffffffffffffffff;
      *(undefined4 *)(__ptr + 0x1d) = 0xffffffff;
      __ptr[6] = 0xffffffffffffffff;
      __ptr[7] = 0xffffffffffffffff;
      __ptr[8] = 0xffffffffffffffff;
      __ptr[9] = 0xffffffffffffffff;
      __ptr[10] = 0xffffffffffffffff;
      __ptr[0xb] = 0xffffffffffffffff;
      __ptr[0xc] = 0xffffffffffffffff;
      __ptr[0xd] = 0xffffffffffffffff;
      __ptr[0xe] = 0xffffffffffffffff;
      __ptr[0xf] = 0xffffffffffffffff;
      __ptr[0x10] = 0xffffffffffffffff;
      __ptr[0x11] = 0xffffffffffffffff;
      __ptr[0x12] = 0xffffffffffffffff;
      __ptr[0x13] = 0xffffffffffffffff;
      __ptr[0x14] = 0xffffffffffffffff;
      __ptr[0x15] = 0xffffffffffffffff;
      __ptr[0x16] = 0xffffffffffffffff;
      __ptr[0x17] = 0xffffffffffffffff;
      __ptr[0x18] = 0xffffffffffffffff;
      __ptr[0x19] = 0xffffffffffffffff;
      __ptr[0x1a] = 0xffffffffffffffff;
      __ptr[0x1b] = 0xffffffffffffffff;
      plVar10 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar11 * 0x30,8);
      if (uVar2 != 0) {
        uVar17 = 0;
        do {
          *(undefined8 *)(*plVar16 + uVar17 * 8) = 0;
          lVar14 = *(long *)(lVar1 + 0x88) + uVar17 * 0x40;
          plVar8 = plVar10 + uVar17 * 6;
          uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0x20) + *(long *)PTR_DAT_04bd0028);
          lVar3 = FUN_0034fbe4(uVar18,0);
          lVar6 = FUN_0034fbe4(uVar18,4);
          lVar7 = FUN_0034fbe4(uVar18,3);
          if (lVar3 == 0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            if (lVar6 != 0) goto LAB_03ad3060;
LAB_03ad3150:
            plVar8[2] = 0;
            plVar8[3] = 0;
            if (lVar7 != 0) goto LAB_03ad3074;
LAB_03ad3160:
            plVar8[4] = 0;
            plVar8[5] = 0;
          }
          else {
            *plVar8 = *(long *)(lVar3 + 8);
            plVar8[1] = *(long *)(lVar3 + 0x10);
            if (lVar6 == 0) goto LAB_03ad3150;
LAB_03ad3060:
            plVar8[2] = *(long *)(lVar6 + 8);
            plVar8[3] = *(long *)(lVar6 + 0x10);
            if (lVar7 == 0) goto LAB_03ad3160;
LAB_03ad3074:
            plVar8[4] = *(long *)(lVar7 + 8);
            plVar8[5] = *(long *)(lVar7 + 0x10);
          }
          if (uVar17 != 0) {
            lVar3 = 0;
            uVar15 = 0;
            plVar19 = plVar10;
            do {
              if ((((((*plVar8 == *plVar19 && plVar8[1] == plVar19[1]) && plVar8[2] == plVar19[2])
                    && plVar8[3] == plVar19[3]) && plVar8[4] == plVar19[4]) &&
                   plVar8[5] == plVar19[5]) &&
                 (uVar9 = FUN_039b7620(*(undefined8 *)(*plVar16 + uVar15 * 8),lVar1,
                                       *(long *)(lVar1 + 0x88) + lVar3,lVar14), (uVar9 & 1) != 0)) {
                *(undefined8 *)(*plVar16 + uVar17 * 8) = *(undefined8 *)(*plVar16 + uVar15 * 8);
                break;
              }
              uVar15 = uVar15 + 1;
              lVar3 = lVar3 + 0x40;
              plVar19 = plVar19 + 6;
            } while (uVar17 != uVar15);
          }
          if (*(long *)(*plVar16 + uVar17 * 8) == 0) {
            uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0x20) + *(long *)PTR_DAT_04bd0028);
            FUN_0034fbe4(uVar18,0);
            FUN_0034fbe4(uVar18,4);
            FUN_0034fbe4(uVar18,3);
            FUN_039b6f90(__ptr,lVar1,lVar14);
            *(undefined8 **)(*plVar16 + uVar17 * 8) = __ptr;
            lVar14 = DAT_05ae7600;
            if (DAT_05ae7600 == 0) {
              __ptr = malloc(0xec);
            }
            else {
              plVar8 = param_2;
              if (param_2 == (long *)0x0) {
                lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar8 = (long *)(lVar14 + 8);
                if (lVar3 != 0) {
                  plVar8 = (long *)(lVar3 + 0xa8);
                }
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) {
                  __ptr = (undefined8 *)0x0;
                  goto LAB_03ad3204;
                }
              }
              __ptr = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xec,8);
            }
LAB_03ad3204:
            *__ptr = 0xffffffffffffffff;
            *(undefined4 *)((long)__ptr + 0xc) = 0;
            __ptr[0x1c] = 0xffffffffffffffff;
            *(undefined4 *)(__ptr + 0x1d) = 0xffffffff;
            __ptr[2] = 0xffffffffffffffff;
            __ptr[3] = 0xffffffffffffffff;
            __ptr[4] = 0xffffffffffffffff;
            __ptr[5] = 0xffffffffffffffff;
            __ptr[6] = 0xffffffffffffffff;
            __ptr[7] = 0xffffffffffffffff;
            __ptr[8] = 0xffffffffffffffff;
            __ptr[9] = 0xffffffffffffffff;
            __ptr[10] = 0xffffffffffffffff;
            __ptr[0xb] = 0xffffffffffffffff;
            __ptr[0xc] = 0xffffffffffffffff;
            __ptr[0xd] = 0xffffffffffffffff;
            __ptr[0xe] = 0xffffffffffffffff;
            __ptr[0xf] = 0xffffffffffffffff;
            __ptr[0x10] = 0xffffffffffffffff;
            __ptr[0x11] = 0xffffffffffffffff;
            __ptr[0x12] = 0xffffffffffffffff;
            __ptr[0x13] = 0xffffffffffffffff;
            __ptr[0x14] = 0xffffffffffffffff;
            __ptr[0x15] = 0xffffffffffffffff;
            __ptr[0x16] = 0xffffffffffffffff;
            __ptr[0x17] = 0xffffffffffffffff;
            __ptr[0x18] = 0xffffffffffffffff;
            __ptr[0x19] = 0xffffffffffffffff;
            __ptr[0x1a] = 0xffffffffffffffff;
            __ptr[0x1b] = 0xffffffffffffffff;
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar11);
      }
      (**(code **)(*plVar12 + 0x38))(plVar12,plVar10);
      if (__ptr != (undefined8 *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar10 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
          }
        }
      }
      uVar13 = uVar13 + 1;
      plVar10 = *(long **)(param_1 + 0x28);
    } while (uVar13 < *(ushort *)(plVar10 + 8));
  }
  *(long *)(param_1 + 0x40) = *plVar10 + 2;
  if (param_3 != 0) {
    local_6d = 0;
    local_470 = 0x400;
    puStack_478 = local_46c;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor5");
  }
  return;
}

