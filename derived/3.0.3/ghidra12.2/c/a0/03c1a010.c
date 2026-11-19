
void FUN_03c1a010(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  
  *(undefined4 *)(param_1 + 10) = 0x41200000;
  puVar4 = PTR_DAT_04bb2f80;
  *param_1 = &PTR_LAB_04b7d8d0;
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  uVar11 = *(undefined8 *)(puVar4 + 0x20);
  uVar1 = *(undefined8 *)(puVar4 + 0x28);
  param_1[6] = *(undefined8 *)(puVar4 + 0x18);
  param_1[7] = uVar11;
  puVar5 = PTR_DAT_04bb41a0;
  uVar11 = *(undefined8 *)puVar4;
  uVar2 = *(undefined8 *)(puVar4 + 8);
  param_1[8] = uVar1;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[4] = uVar2;
  param_1[5] = uVar10;
  param_1[2] = puVar5 + 0x10;
  param_1[3] = uVar11;
  puVar4 = PTR_DAT_04bbd858;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  param_1[0xe] = puVar4 + 0x10;
  puVar4 = PTR_DAT_04bd0ea8;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xfc) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)PTR_DAT_04bd0eb0;
  puVar4 = PTR_DAT_04bd0eb8;
  *(undefined4 *)(param_1 + 0x24) = 0x3faaaaab;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(int *)(param_1 + 1) = param_2;
  uVar13 = *(undefined4 *)puVar4;
  param_1[0x21] = 0x461c40003f800000;
  param_1[0x22] = 0x3ec3ef163f490fdb;
  param_1[0x23] = 0x3ed413cd3f6c835e;
  *(undefined4 *)((long)param_1 + 0x104) = uVar13;
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  if (param_2 == 0) {
    DAT_05aeca48 = 0;
    DAT_05aeca50 = 0;
    DAT_05aeca58 = 0;
    lVar12 = *(long *)PTR_DAT_04bb2698;
    DAT_05aeca40 = param_1;
    if (lVar12 == 0) {
      pvVar8 = malloc(0x2a300);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar12 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03c1a200;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2a300,0x100);
    }
    if (pvVar8 != (void *)0x0) {
      lVar12 = 0xe10;
      uVar10 = *(undefined8 *)PTR_DAT_04bb4bd0;
      uVar13 = *(undefined4 *)((long)PTR_DAT_04bb4bd0 + 8);
      uVar11 = *(undefined8 *)PTR_DAT_04bb3ea0;
      uVar3 = *(undefined4 *)((long)PTR_DAT_04bb3ea0 + 8);
      puVar9 = (undefined4 *)((long)pvVar8 + 0x2c);
      do {
        *(undefined8 *)(puVar9 + -0xb) = uVar10;
        lVar12 = lVar12 + -1;
        puVar9[-9] = uVar13;
        *(undefined8 *)(puVar9 + -8) = 0;
        puVar9[-6] = 0;
        *(undefined8 *)(puVar9 + -5) = uVar11;
        puVar9[-3] = uVar3;
        *(undefined8 *)(puVar9 + -2) = 0x3f80000042200000;
        *puVar9 = 0x461c4000;
        puVar9 = puVar9 + 0xc;
      } while (lVar12 != 0);
      DAT_05aeca60 = pvVar8;
    }
  }
LAB_03c1a200:
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  return;
}

