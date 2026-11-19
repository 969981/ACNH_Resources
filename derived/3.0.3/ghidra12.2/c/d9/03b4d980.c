
void FUN_03b4d980(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  size_t __size;
  undefined8 uVar6;
  void *pvVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 == 0) {
LAB_03b4dd3c:
    lVar11 = *(long *)puVar2;
    if (lVar11 != 0) {
LAB_03b4dd44:
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
LAB_03b4dd4c:
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar11 + 8);
        if (lVar12 != 0) {
          plVar4 = (long *)(lVar12 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          goto LAB_03b4de34;
        }
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x108,8);
      goto LAB_03b4de34;
    }
  }
  else {
    lVar11 = param_2;
    do {
      lVar12 = *(long *)puVar2;
      if (lVar12 == 0) {
        puVar5 = malloc(0x78);
      }
      else {
        plVar4 = param_3;
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar12 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          puVar5 = (undefined8 *)0x0;
          if (plVar4 == (long *)0x0) goto LAB_03b4da48;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x78,8);
      }
LAB_03b4da48:
      *puVar5 = &PTR_LAB_04b76438;
      puVar5[1] = 0;
      puVar5[4] = param_1;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[5] = 0x600000000;
      puVar5[6] = puVar5 + 7;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      lVar12 = *(long *)(param_1 + 0x20);
      plVar4 = (long *)((long)*(int *)(param_1 + 0x34) + (long)puVar5);
      *(long **)(param_1 + 0x20) = plVar4;
      *plVar4 = lVar12;
      plVar4[1] = param_1 + 0x20;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar4;
      }
      lVar11 = lVar11 + -1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    } while (lVar11 != 0);
    lVar11 = param_2;
    do {
      lVar12 = *(long *)puVar2;
      if (lVar12 == 0) {
        puVar5 = malloc(0x88);
      }
      else {
        plVar4 = param_3;
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar12 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            puVar5 = (undefined8 *)0x0;
            goto LAB_03b4db1c;
          }
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x88,8);
      }
LAB_03b4db1c:
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 0xd) = 0;
      *(undefined8 *)((long)puVar5 + 0x6c) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x74) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar12 = *(long *)puVar2;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      if (lVar12 == 0) {
        plVar4 = malloc(0x40);
      }
      else {
        plVar4 = param_3;
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar12 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
      }
      *plVar4 = (long)&PTR_LAB_04b76558;
      plVar4[1] = 0;
      plVar4[6] = 0;
      *(undefined4 *)(plVar4 + 7) = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *puVar5 = plVar4;
      __size = (**(code **)(*plVar4 + 0x10))(plVar4,48000,1);
      lVar12 = *(long *)puVar2;
      puVar5[2] = __size;
      if (lVar12 == 0) {
        pvVar7 = malloc(__size);
        puVar5[1] = pvVar7;
LAB_03b4dc50:
        pvVar7 = malloc(0x780);
      }
      else {
        plVar4 = param_3;
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar12 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 != (long *)0x0) goto LAB_03b4dc18;
          lVar12 = *(long *)puVar2;
          puVar5[1] = 0;
          if (lVar12 == 0) goto LAB_03b4dc50;
LAB_03b4dc70:
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar12 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          pvVar7 = (void *)0x0;
          if (plVar4 == (long *)0x0) goto LAB_03b4dcb0;
        }
        else {
LAB_03b4dc18:
          uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,__size,0x1000);
          lVar12 = *(long *)puVar2;
          puVar5[1] = uVar6;
          if (lVar12 == 0) goto LAB_03b4dc50;
          plVar4 = param_3;
          if (param_3 == (long *)0x0) goto LAB_03b4dc70;
        }
        pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x780,8);
      }
LAB_03b4dcb0:
      puVar5[3] = pvVar7;
      lVar12 = *(long *)(param_1 + 0x50);
      plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)puVar5);
      *(long **)(param_1 + 0x50) = plVar4;
      *plVar4 = lVar12;
      plVar4[1] = param_1 + 0x50;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar4;
      }
      lVar11 = lVar11 + -1;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    } while (lVar11 != 0);
    uVar1 = (int)param_2 * 4;
    if ((int)uVar1 < 1) goto LAB_03b4dd3c;
    lVar11 = *(long *)puVar2;
    if (lVar11 != 0) {
      plVar4 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03b4dd24:
        pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)uVar1 << 6,8);
        goto joined_r0x03b4dd98;
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar11 + 8);
      if (lVar12 != 0) {
        plVar4 = (long *)(lVar12 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_03b4dd24;
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) goto LAB_03b4de28;
      goto LAB_03b4dd4c;
    }
    pvVar7 = malloc((ulong)uVar1 << 6);
joined_r0x03b4dd98:
    if (pvVar7 == (void *)0x0) goto LAB_03b4dd3c;
    uVar9 = 0;
    *(void **)(param_1 + 0x10) = pvVar7;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (uVar1 - 4 != 0) {
      uVar9 = 0;
      piVar10 = (int *)((long)pvVar7 + 0x80);
      do {
        iVar8 = (int)uVar9;
        piVar10[-0x20] = iVar8 + 1;
        piVar10[-0x10] = iVar8 + 2;
        uVar9 = uVar9 + 4;
        *piVar10 = iVar8 + 3;
        piVar10[0x10] = (int)uVar9;
        piVar10 = piVar10 + 0x40;
      } while (uVar1 - 4 != uVar9);
    }
    lVar11 = 0;
    iVar8 = (int)uVar9;
    do {
      iVar8 = iVar8 + 1;
      *(int *)((long)pvVar7 + lVar11 + uVar9 * 0x40) = iVar8;
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != 0xc0);
    *(undefined4 *)((long)pvVar7 + (ulong)(uVar1 - 1) * 0x40) = 0xffffffff;
    lVar11 = *(long *)puVar2;
    if (lVar11 != 0) goto LAB_03b4dd44;
  }
LAB_03b4de28:
  plVar4 = malloc(0x108);
LAB_03b4de34:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "OpusDecoder";
  FUN_038e1f88(plVar4,&local_70,param_3,0x10,0,0x7fffffff,0x10000,0x20);
  *plVar4 = (long)&PTR_LAB_04b76490;
  *(long **)(param_1 + 8) = plVar4;
  (**(code **)(*plVar4 + 0x30))(plVar4);
  return;
}

