
undefined8 * FUN_021920b0(int *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  if (*param_1 < param_1[1]) {
    puVar11 = *(undefined8 **)(param_1 + 4);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar11;
    }
    *puVar11 = *param_2;
    uVar8 = param_2[1];
    uVar10 = param_2[2];
    uVar9 = param_2[4];
    puVar11[3] = param_2[3];
    puVar11[4] = uVar9;
    puVar11[1] = uVar8;
    puVar11[2] = uVar10;
    uVar9 = param_2[7];
    uVar8 = param_2[5];
    uVar10 = param_2[6];
    *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(param_2 + 8);
    puVar11[6] = uVar10;
    puVar11[7] = uVar9;
    puVar11[5] = uVar8;
    *(undefined4 *)((long)puVar11 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
    puVar11[9] = param_2[9];
    uVar8 = param_2[10];
    uVar10 = param_2[0xb];
    uVar9 = param_2[0xd];
    puVar11[0xc] = param_2[0xc];
    puVar11[0xd] = uVar9;
    puVar11[10] = uVar8;
    puVar11[0xb] = uVar10;
    *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    pvVar1 = (void *)((long)puVar11 + 0x124);
    puVar2 = PTR_DAT_04bb2e18 + 0x10;
    puVar11[0xf] = PTR_DAT_04bbc1a0 + 0x10;
    puVar11[0x10] = puVar2;
    *(undefined4 *)(puVar11 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)((long)puVar11 + 0x8c) = *(undefined4 *)((long)param_2 + 0x8c);
    puVar6 = PTR_DAT_04bb2010;
    puVar11[0x12] = puVar2;
    puVar11[0x10] = puVar6 + 0x10;
    *(undefined4 *)(puVar11 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar5 = *(undefined4 *)((long)param_2 + 0x9c);
    puVar11[0x12] = puVar6 + 0x10;
    *(undefined4 *)((long)puVar11 + 0x9c) = uVar5;
    uVar8 = param_2[0x14];
    *(undefined4 *)(puVar11 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    puVar11[0x14] = uVar8;
    *(undefined4 *)((long)puVar11 + 0xac) = *(undefined4 *)((long)param_2 + 0xac);
    *(undefined2 *)(puVar11 + 0x16) = *(undefined2 *)(param_2 + 0x16);
    *(undefined1 *)((long)puVar11 + 0xb2) = *(undefined1 *)((long)param_2 + 0xb2);
    *(undefined1 *)((long)puVar11 + 0xb3) = *(undefined1 *)((long)param_2 + 0xb3);
    *(undefined4 *)((long)puVar11 + 0xb4) = *(undefined4 *)((long)param_2 + 0xb4);
    puVar11[0x17] = param_2[0x17];
    uVar9 = param_2[0x1a];
    uVar8 = param_2[0x18];
    uVar10 = param_2[0x19];
    *(undefined1 *)(puVar11 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    puVar11[0x19] = uVar10;
    puVar11[0x1a] = uVar9;
    puVar11[0x18] = uVar8;
    *(undefined2 *)((long)puVar11 + 0xdc) = *(undefined2 *)((long)param_2 + 0xdc);
    *(undefined1 *)((long)puVar11 + 0xde) = *(undefined1 *)((long)param_2 + 0xde);
    *(undefined1 *)((long)puVar11 + 0xdf) = *(undefined1 *)((long)param_2 + 0xdf);
    *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined8 *)((long)param_2 + 0xe4);
    *(undefined8 *)((long)puVar11 + 0xec) = *(undefined8 *)((long)param_2 + 0xec);
    *(undefined8 *)((long)puVar11 + 0xe4) = uVar8;
    uVar8 = *(undefined8 *)((long)param_2 + 0xf4);
    uVar10 = *(undefined8 *)((long)param_2 + 0xfc);
    uVar9 = *(undefined8 *)((long)param_2 + 0x104);
    uVar5 = *(undefined4 *)((long)param_2 + 0x10c);
    *(undefined4 *)(puVar11 + 0x24) = 0x20;
    *(undefined4 *)((long)puVar11 + 0x10c) = uVar5;
    *(undefined8 *)((long)puVar11 + 0x104) = uVar9;
    *(undefined8 *)((long)puVar11 + 0xfc) = uVar10;
    *(undefined8 *)((long)puVar11 + 0xf4) = uVar8;
    puVar2 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)puVar11 + 0x143) = 0;
    puVar11[0x22] = puVar2 + 0x10;
    puVar11[0x23] = pvVar1;
    (**(code **)(param_2[0x22] + 0x18))(param_2 + 0x22);
    pvVar12 = (void *)param_2[0x23];
    if (pvVar1 != pvVar12) {
      (**(code **)(param_2[0x22] + 0x18))(param_2 + 0x22);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[0x23] + lVar7) == '\0') goto LAB_021922f4;
        lVar3 = param_2[0x23] + lVar7;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_021922f4;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_021922f4;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_021922f4:
      iVar4 = (int)lVar7;
      if (*(int *)(puVar11 + 0x24) <= (int)lVar7) {
        iVar4 = *(int *)(puVar11 + 0x24) + -1;
      }
      memcpy(pvVar1,pvVar12,(long)iVar4);
      *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
    }
    puVar6 = PTR_DAT_04bb2028;
    pvVar1 = (void *)((long)puVar11 + 0x15c);
    *(undefined4 *)(puVar11 + 0x2b) = 0x20;
    *(undefined1 *)((long)puVar11 + 0x17b) = 0;
    puVar11[0x29] = puVar2 + 0x10;
    puVar11[0x2a] = pvVar1;
    puVar11[0x22] = puVar6 + 0x10;
    (**(code **)(param_2[0x29] + 0x18))(param_2 + 0x29);
    pvVar12 = (void *)param_2[0x2a];
    if (pvVar1 != pvVar12) {
      (**(code **)(param_2[0x29] + 0x18))(param_2 + 0x29);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[0x2a] + lVar7) == '\0') goto LAB_021923b0;
        lVar3 = param_2[0x2a] + lVar7;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_021923b0;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_021923b0;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_021923b0:
      iVar4 = (int)lVar7;
      if (*(int *)(puVar11 + 0x2b) <= (int)lVar7) {
        iVar4 = *(int *)(puVar11 + 0x2b) + -1;
      }
      memcpy(pvVar1,pvVar12,(long)iVar4);
      *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
    }
    puVar11[0x29] = puVar6 + 0x10;
    puVar11[0x30] = param_2[0x30];
    uVar8 = param_2[0x31];
    uVar10 = param_2[0x32];
    uVar9 = param_2[0x34];
    puVar11[0x33] = param_2[0x33];
    puVar11[0x34] = uVar9;
    puVar11[0x31] = uVar8;
    puVar11[0x32] = uVar10;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar11;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    puVar11 = (undefined8 *)0x0;
  }
  return puVar11;
}

