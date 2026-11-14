
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01d70ad0(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  size_t sVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  
  FUN_01d707f4();
  lVar15 = DAT_05ae7600;
  iVar1 = *(int *)(DAT_053807b0 + 0x4c);
  sVar11 = (long)(int)param_2 * 0x1878;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)(int)param_2;
  if (SUB168(auVar4 * ZEXT816(0x1878),8) != 0) {
    sVar11 = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(sVar11);
LAB_01d70b98:
    if ((param_2 != 0) && (puVar8 != (undefined8 *)0x0)) {
      puVar14 = puVar8;
      do {
        *puVar14 = 0;
        *(undefined1 *)(puVar14 + 0xd8) = 0;
        *(undefined1 *)(puVar14 + 0xd9) = 0;
        memset(puVar14 + 0xda,0,0x491);
        memset(puVar14 + 0x16d,0,0xd09);
        puVar14 = puVar14 + 0x30f;
      } while (puVar14 != puVar8 + (long)(int)param_2 * 0x30f);
    }
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    if (*(long *)PTR_DAT_04bb2698 == 0) goto LAB_01d70c34;
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (param_3 != (long *)0x0) {
      plVar7 = param_3;
LAB_01d70c94:
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
      if (puVar8 == (undefined8 *)0x0) goto LAB_01d70d88;
      goto LAB_01d70cb0;
    }
LAB_01d70c68:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar15 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01d70c94;
  }
  else {
    plVar7 = param_3;
    if (param_3 != (long *)0x0) {
LAB_01d70b78:
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
      goto LAB_01d70b98;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar15 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01d70b78;
    *(undefined8 *)(param_1 + 0x48) = 0;
    lVar15 = DAT_05ae7600;
    if (DAT_05ae7600 != 0) goto LAB_01d70c68;
LAB_01d70c34:
    puVar8 = malloc(sVar11);
    if (puVar8 != (undefined8 *)0x0) {
LAB_01d70cb0:
      if (param_2 != 0) {
        puVar14 = puVar8;
        do {
          *puVar14 = 0;
          *(undefined1 *)(puVar14 + 0xd8) = 0;
          *(undefined1 *)(puVar14 + 0xd9) = 0;
          memset(puVar14 + 0xda,0,0x491);
          memset(puVar14 + 0x16d,0,0xd09);
          puVar14 = puVar14 + 0x30f;
        } while (puVar14 != puVar8 + (long)(int)param_2 * 0x30f);
      }
      *(undefined8 **)(param_1 + 0x50) = puVar8;
      lVar15 = DAT_05ae7600;
      if ((*(long *)(param_1 + 0x48) == 0) || ((int)param_2 < 1)) goto LAB_01d70d8c;
      sVar11 = (size_t)(int)(param_2 << 3);
      if (DAT_05ae7600 == 0) {
        pvVar9 = malloc(sVar11);
      }
      else {
        plVar7 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar15 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_01d70d8c;
        }
        pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
      }
      if (pvVar9 == (void *)0x0) goto LAB_01d70d8c;
      *(void **)(param_1 + 0x30) = pvVar9;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(uint *)(param_1 + 0x2c) = param_2;
      if (*(long *)(param_1 + 0x40) != 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      }
      lVar15 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar8 = calloc(1,0x10);
        *(undefined8 **)(param_1 + 0x40) = puVar8;
LAB_01d70e78:
        pvVar9 = malloc(sVar11);
      }
      else {
        plVar7 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar15 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 != (long *)0x0) goto LAB_01d70e28;
          puVar8 = (undefined8 *)0x0;
          _DAT_00000008 = 0;
          uRam0000000000000000 = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
          lVar15 = DAT_05ae7600;
          if (DAT_05ae7600 == 0) goto LAB_01d70e78;
LAB_01d70eac:
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar15 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_01d70d8c;
        }
        else {
LAB_01d70e28:
          puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
          lVar15 = *(long *)PTR_DAT_04bb2698;
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined8 **)(param_1 + 0x40) = puVar8;
          if (lVar15 == 0) goto LAB_01d70e78;
          if (param_3 == (long *)0x0) goto LAB_01d70eac;
          plVar7 = param_3;
        }
        pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
      }
      if (pvVar9 != (void *)0x0) {
        *(undefined4 *)puVar8 = 0;
        *(uint *)((long)puVar8 + 4) = param_2;
        puVar5 = PTR_DAT_04bb2698;
        sVar11 = (ulong)param_2 << 3;
        puVar8[1] = pvVar9;
        lVar15 = *(long *)puVar5;
        if (lVar15 == 0) {
          pvVar9 = malloc(sVar11);
        }
        else {
          plVar7 = param_3;
          if (param_3 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar7 = (long *)(lVar15 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_01d70d8c;
          }
          pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
        }
        if (pvVar9 != (void *)0x0) {
          *(uint *)(param_1 + 0x58) = param_2;
          *(void **)(param_1 + 0x60) = pvVar9;
          lVar15 = DAT_05ae7600;
          if (DAT_05ae7600 == 0) {
            pvVar9 = malloc(sVar11);
          }
          else {
            plVar7 = param_3;
            if (param_3 == (long *)0x0) {
              lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar7 = (long *)(lVar15 + 8);
              if (lVar6 != 0) {
                plVar7 = (long *)(lVar6 + 0xa8);
              }
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_01d70d8c;
            }
            pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
          }
          if (pvVar9 != (void *)0x0) {
            *(void **)(param_1 + 0x70) = pvVar9;
            *(uint *)(param_1 + 0x68) = param_2;
            iVar3 = 0;
            if (iVar1 != 0) {
              iVar3 = (int)param_2 / iVar1;
            }
            uVar10 = FUN_03856d98(param_1 + 0x78,iVar3 + 2,param_3);
            if (((uVar10 & 1) != 0) &&
               (uVar10 = FUN_03856d98(param_1 + 0x88,iVar3 + 2,param_3), (uVar10 & 1) != 0)) {
              lVar15 = 0;
              uVar10 = (ulong)param_2;
              do {
                if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
                  *(long *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) =
                       *(long *)(param_1 + 0x48) + lVar15;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                piVar13 = *(int **)(param_1 + 0x40);
                if ((piVar13 != (int *)0x0) && (*piVar13 < piVar13[1])) {
                  *(long *)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) =
                       *(long *)(param_1 + 0x50) + lVar15;
                  *piVar13 = *piVar13 + 1;
                }
                uVar10 = uVar10 - 1;
                lVar15 = lVar15 + 0x1878;
              } while (uVar10 != 0);
              uVar2 = *(uint *)(param_1 + 0x58);
              if (0 < (int)uVar2) {
                uVar10 = (ulong)uVar2 & 3;
                if (uVar2 < 4) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  do {
                    lVar15 = uVar12 * 8;
                    uVar12 = uVar12 + 4;
                    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar15) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar15 + 8) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar15 + 0x10) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar15 + 0x18) = 0;
                  } while (((ulong)uVar2 & 0xfffffffc) != uVar12);
                }
                if ((uVar2 & 3) != 0) {
                  lVar15 = uVar12 << 3;
                  do {
                    uVar10 = uVar10 - 1;
                    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar15) = 0;
                    lVar15 = lVar15 + 8;
                  } while (uVar10 != 0);
                }
              }
              uVar2 = *(uint *)(param_1 + 0x68);
              if (0 < (int)uVar2) {
                uVar10 = (ulong)uVar2 & 3;
                if (uVar2 < 4) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  do {
                    lVar15 = uVar12 * 8;
                    uVar12 = uVar12 + 4;
                    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar15) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar15 + 8) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar15 + 0x10) = 0;
                    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar15 + 0x18) = 0;
                  } while (((ulong)uVar2 & 0xfffffffc) != uVar12);
                }
                if ((uVar2 & 3) != 0) {
                  lVar15 = uVar12 << 3;
                  do {
                    uVar10 = uVar10 - 1;
                    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar15) = 0;
                    lVar15 = lVar15 + 8;
                  } while (uVar10 != 0);
                }
              }
              *(uint *)(param_1 + 0xa0) = param_2;
              return 1;
            }
          }
        }
      }
      goto LAB_01d70d8c;
    }
  }
LAB_01d70d88:
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_01d70d8c:
  FUN_01d707f4(param_1);
  return 0;
}

