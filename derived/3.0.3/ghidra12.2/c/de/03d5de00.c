
void FUN_03d5de00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  uVar15 = *(uint *)(param_1 + 0x200);
  if ((int)uVar15 < 1) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar9 = malloc((ulong)uVar15 << 3);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_03d5dea8;
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar15 << 3,8);
  }
  if (pvVar9 != (void *)0x0) {
    *(uint *)(param_1 + 0x230) = uVar15;
    *(void **)(param_1 + 0x238) = pvVar9;
  }
LAB_03d5dea8:
  if (0 < *(int *)(param_1 + 0x200)) {
    uVar15 = 0;
    puVar1 = PTR_DAT_04bc77b8 + 0x10;
    do {
      lVar13 = *(long *)puVar5;
      if (lVar13 == 0) {
        puVar10 = malloc(200);
      }
      else {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
        puVar10 = (undefined8 *)(lVar13 + 8);
        if (lVar7 != 0) {
          puVar10 = (undefined8 *)(lVar7 + 0xa8);
        }
        puVar10 = (undefined8 *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,200,8);
      }
      *(undefined1 *)((long)puVar10 + 0xbe) = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      uVar14 = 0;
      puVar10[0x18] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xb] = puVar1;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      puVar10[0xf] = puVar1;
      puVar10[0x13] = 0;
      puVar10[0x14] = 0;
      puVar10[0x13] = puVar1;
      puVar10[2] = 0xffffffff00000000;
      puVar10[3] = puVar1;
      puVar10[7] = puVar1;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 0x17) = 0xfffffffe;
      *(undefined2 *)((long)puVar10 + 0xbc) = 0x101;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0x15] = 0;
      puVar10[0x16] = 0;
      uVar3 = uVar15;
      if (*(uint *)(param_1 + 0x230) <= uVar15) {
        uVar3 = 0;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x238) + (ulong)uVar3 * 8) = puVar10;
      do {
        uVar3 = uVar15;
        if (*(uint *)(param_1 + 0x230) <= uVar15) {
          uVar3 = 0;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0x238) + (ulong)uVar3 * 8);
        plVar8 = (long *)(lVar13 + 0x18) + (ulong)uVar14 * 4;
        if (4 < uVar14) {
          plVar8 = (long *)(lVar13 + 0x18);
        }
        if ((*(long *)(lVar13 + 0xc0) == 0) ||
           (uVar11 = (**(code **)(*plVar8 + 8))(plVar8), (uVar11 & 1) == 0)) {
          *plVar8 = (long)&PTR_LAB_04b8fcd8;
          plVar8[1] = param_1;
          plVar8[2] = (long)FUN_03d5e190;
          plVar8[3] = 0;
        }
        else {
          plVar4 = *(long **)(lVar13 + 0xc0) + (ulong)uVar14 * 3;
          if (4 < uVar14) {
            plVar4 = *(long **)(lVar13 + 0xc0);
          }
          if ((int)plVar4[2] == 0) {
            lVar13 = *(long *)puVar5;
            if (lVar13 == 0) {
              puVar10 = malloc(0x30);
            }
            else {
              lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
              plVar12 = (long *)(lVar13 + 8);
              if (lVar7 != 0) {
                plVar12 = (long *)(lVar7 + 0xa8);
              }
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) {
                puVar10 = (undefined8 *)0x0;
              }
              else {
                puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x30,8);
              }
            }
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[3] = 0;
            puVar2 = PTR_DAT_04bc77b8 + 0x10;
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = puVar2;
            (**(code **)(*plVar8 + 0x10))(plVar8);
            plVar12 = (long *)((long)*(int *)((long)plVar4 + 0x14) + (long)puVar10);
            lVar13 = *plVar4;
            *plVar4 = (long)plVar12;
            *plVar12 = lVar13;
            plVar12[1] = (long)plVar4;
            if (lVar13 != 0) {
              *(long **)(lVar13 + 8) = plVar12;
            }
            *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
            *plVar8 = (long)&PTR_LAB_04b8fd00;
            plVar8[1] = (long)plVar4;
            lVar13 = *(long *)puVar5;
            if (lVar13 == 0) goto LAB_03d5e130;
LAB_03d5e034:
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
            puVar10 = (undefined8 *)(lVar13 + 8);
            if (lVar7 != 0) {
              puVar10 = (undefined8 *)(lVar7 + 0xa8);
            }
            puVar10 = (undefined8 *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x30,8)
            ;
          }
          else {
            lVar13 = *(long *)puVar5;
            if (lVar13 != 0) goto LAB_03d5e034;
LAB_03d5e130:
            puVar10 = malloc(0x30);
          }
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = &PTR_LAB_04b8fcd8;
          puVar10[3] = param_1;
          puVar10[4] = FUN_03d5e190;
          puVar10[5] = 0;
          lVar13 = *plVar4;
          plVar8 = (long *)((long)*(int *)((long)plVar4 + 0x14) + (long)puVar10);
          *plVar4 = (long)plVar8;
          *plVar8 = lVar13;
          plVar8[1] = (long)plVar4;
          if (lVar13 != 0) {
            *(long **)(lVar13 + 8) = plVar8;
          }
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 5);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0x200));
  }
  return;
}

