
undefined8 * FUN_02192440(int *param_1,uint param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  if ((int)param_2 < 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)0x0;
    if (((int)param_2 <= *param_1) && (*param_1 < param_1[1])) {
      puVar11 = *(undefined8 **)(param_1 + 4);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar11;
      }
      *puVar11 = *param_3;
      uVar8 = param_3[1];
      uVar10 = param_3[2];
      uVar9 = param_3[4];
      puVar11[3] = param_3[3];
      puVar11[4] = uVar9;
      puVar11[1] = uVar8;
      puVar11[2] = uVar10;
      uVar9 = param_3[7];
      uVar8 = param_3[5];
      uVar10 = param_3[6];
      *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(param_3 + 8);
      puVar11[6] = uVar10;
      puVar11[7] = uVar9;
      puVar11[5] = uVar8;
      *(undefined4 *)((long)puVar11 + 0x44) = *(undefined4 *)((long)param_3 + 0x44);
      puVar11[9] = param_3[9];
      uVar8 = param_3[10];
      uVar10 = param_3[0xb];
      uVar9 = param_3[0xd];
      puVar11[0xc] = param_3[0xc];
      puVar11[0xd] = uVar9;
      puVar11[10] = uVar8;
      puVar11[0xb] = uVar10;
      *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(param_3 + 0xe);
      pvVar1 = (void *)((long)puVar11 + 0x124);
      puVar2 = PTR_DAT_04bb2e18 + 0x10;
      puVar11[0xf] = PTR_DAT_04bbc1a0 + 0x10;
      puVar11[0x10] = puVar2;
      *(undefined4 *)(puVar11 + 0x11) = *(undefined4 *)(param_3 + 0x11);
      *(undefined4 *)((long)puVar11 + 0x8c) = *(undefined4 *)((long)param_3 + 0x8c);
      puVar6 = PTR_DAT_04bb2010;
      puVar11[0x12] = puVar2;
      puVar11[0x10] = puVar6 + 0x10;
      *(undefined4 *)(puVar11 + 0x13) = *(undefined4 *)(param_3 + 0x13);
      uVar4 = *(undefined4 *)((long)param_3 + 0x9c);
      puVar11[0x12] = puVar6 + 0x10;
      *(undefined4 *)((long)puVar11 + 0x9c) = uVar4;
      uVar8 = param_3[0x14];
      *(undefined4 *)(puVar11 + 0x15) = *(undefined4 *)(param_3 + 0x15);
      puVar11[0x14] = uVar8;
      *(undefined4 *)((long)puVar11 + 0xac) = *(undefined4 *)((long)param_3 + 0xac);
      *(undefined2 *)(puVar11 + 0x16) = *(undefined2 *)(param_3 + 0x16);
      *(undefined1 *)((long)puVar11 + 0xb2) = *(undefined1 *)((long)param_3 + 0xb2);
      *(undefined1 *)((long)puVar11 + 0xb3) = *(undefined1 *)((long)param_3 + 0xb3);
      *(undefined4 *)((long)puVar11 + 0xb4) = *(undefined4 *)((long)param_3 + 0xb4);
      puVar11[0x17] = param_3[0x17];
      uVar9 = param_3[0x1a];
      uVar8 = param_3[0x18];
      uVar10 = param_3[0x19];
      *(undefined1 *)(puVar11 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
      puVar11[0x19] = uVar10;
      puVar11[0x1a] = uVar9;
      puVar11[0x18] = uVar8;
      *(undefined2 *)((long)puVar11 + 0xdc) = *(undefined2 *)((long)param_3 + 0xdc);
      *(undefined1 *)((long)puVar11 + 0xde) = *(undefined1 *)((long)param_3 + 0xde);
      *(undefined1 *)((long)puVar11 + 0xdf) = *(undefined1 *)((long)param_3 + 0xdf);
      *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      uVar8 = *(undefined8 *)((long)param_3 + 0xe4);
      *(undefined8 *)((long)puVar11 + 0xec) = *(undefined8 *)((long)param_3 + 0xec);
      *(undefined8 *)((long)puVar11 + 0xe4) = uVar8;
      uVar8 = *(undefined8 *)((long)param_3 + 0xfc);
      uVar10 = *(undefined8 *)((long)param_3 + 0x104);
      uVar4 = *(undefined4 *)((long)param_3 + 0x10c);
      *(undefined8 *)((long)puVar11 + 0xf4) = *(undefined8 *)((long)param_3 + 0xf4);
      *(undefined4 *)((long)puVar11 + 0x10c) = uVar4;
      *(undefined8 *)((long)puVar11 + 0x104) = uVar10;
      *(undefined8 *)((long)puVar11 + 0xfc) = uVar8;
      *(undefined4 *)(puVar11 + 0x24) = 0x20;
      puVar2 = PTR_DAT_04bb2a08;
      *(undefined1 *)((long)puVar11 + 0x143) = 0;
      puVar11[0x22] = puVar2 + 0x10;
      puVar11[0x23] = pvVar1;
      (**(code **)(param_3[0x22] + 0x18))(param_3 + 0x22);
      pvVar12 = (void *)param_3[0x23];
      if (pvVar1 != pvVar12) {
        (**(code **)(param_3[0x22] + 0x18))(param_3 + 0x22);
        lVar7 = 0;
        do {
          if (*(char *)(param_3[0x23] + lVar7) == '\0') goto LAB_02192698;
          lVar3 = param_3[0x23] + lVar7;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02192698;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02192698;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02192698:
        iVar5 = (int)lVar7;
        if (*(int *)(puVar11 + 0x24) <= (int)lVar7) {
          iVar5 = *(int *)(puVar11 + 0x24) + -1;
        }
        memcpy(pvVar1,pvVar12,(long)iVar5);
        *(undefined1 *)((long)pvVar1 + (long)iVar5) = 0;
      }
      puVar6 = PTR_DAT_04bb2028;
      pvVar1 = (void *)((long)puVar11 + 0x15c);
      *(undefined1 *)((long)puVar11 + 0x17b) = 0;
      puVar11[0x29] = puVar2 + 0x10;
      puVar11[0x2a] = pvVar1;
      puVar11[0x22] = puVar6 + 0x10;
      *(undefined4 *)(puVar11 + 0x2b) = 0x20;
      (**(code **)(param_3[0x29] + 0x18))(param_3 + 0x29);
      pvVar12 = (void *)param_3[0x2a];
      if (pvVar1 != pvVar12) {
        (**(code **)(param_3[0x29] + 0x18))(param_3 + 0x29);
        lVar7 = 0;
        do {
          if (*(char *)(param_3[0x2a] + lVar7) == '\0') goto LAB_0219275c;
          lVar3 = param_3[0x2a] + lVar7;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_0219275c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_0219275c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_0219275c:
        iVar5 = (int)lVar7;
        if (*(int *)(puVar11 + 0x2b) <= (int)lVar7) {
          iVar5 = *(int *)(puVar11 + 0x2b) + -1;
        }
        memcpy(pvVar1,pvVar12,(long)iVar5);
        *(undefined1 *)((long)pvVar1 + (long)iVar5) = 0;
      }
      puVar11[0x29] = puVar6 + 0x10;
      puVar11[0x30] = param_3[0x30];
      uVar8 = param_3[0x31];
      uVar10 = param_3[0x32];
      uVar9 = param_3[0x34];
      puVar11[0x33] = param_3[0x33];
      puVar11[0x34] = uVar9;
      puVar11[0x31] = uVar8;
      puVar11[0x32] = uVar10;
      iVar5 = *param_1;
      if (((int)param_2 <= iVar5) && (iVar5 < param_1[1])) {
        if (iVar5 - param_2 != 0 && (int)param_2 <= iVar5) {
          memmove((void *)(*(long *)(param_1 + 2) + (ulong)(param_2 + 1) * 8),
                  (void *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8),
                  (long)(int)((iVar5 - param_2) * 8));
        }
        *(undefined8 **)(*(long *)(param_1 + 2) + (ulong)param_2 * 8) = puVar11;
        *param_1 = *param_1 + 1;
      }
    }
  }
  return puVar11;
}

