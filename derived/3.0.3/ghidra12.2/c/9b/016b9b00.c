
void FUN_016b9b00(long *param_1,long *param_2,void *param_3,long param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  puVar6 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar8 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar12 = (long *)(lVar8 + 0x70);
      lVar11 = *plVar12;
      plVar3 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
      *plVar12 = (long)plVar3;
      *plVar3 = lVar11;
      plVar3[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar3;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[4] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = lVar8;
  lVar8 = param_2[6];
  *param_1 = (long)&PTR_LAB_049bb8b0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  *(int *)(param_1 + 8) = (int)lVar8;
  pcVar1 = (char *)((long)param_1 + 0x94);
  param_1[4] = (long)&PTR_LAB_049bb980;
  param_1[0x11] = (long)pcVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x20;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar5 = s_Item_Hotel_Theme_040ca1d3._8_8_;
  uVar4 = s_Item_Hotel_Theme_040ca1d3._0_8_;
  if (pcVar1 != "Item/Hotel/Theme") {
    *(undefined1 *)((long)param_1 + 0xa4) = 0;
    *(undefined8 *)pcVar1 = uVar4;
    *(undefined8 *)((long)param_1 + 0x9c) = uVar5;
  }
  puVar6 = PTR_DAT_04bb2028;
  pvVar9 = (void *)((long)param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x19) = 0x20;
  *(undefined1 *)((long)param_1 + 0xeb) = 0;
  param_1[0x10] = (long)(puVar6 + 0x10);
  param_1[0x17] = (long)&PTR_LAB_048fa8f8;
  param_1[0x18] = (long)pvVar9;
  if (pvVar9 != param_3) {
    lVar8 = 0;
    do {
      if (*(char *)((long)param_3 + lVar8) == '\0') goto LAB_016b9cbc;
      if (*(char *)((long)param_3 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_016b9cbc;
      }
      if (*(char *)((long)param_3 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_016b9cbc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_016b9cbc:
    iVar10 = (int)lVar8;
    if (0x1e < iVar10) {
      iVar10 = 0x1f;
    }
    memcpy(pvVar9,param_3,(long)iVar10);
    *(undefined1 *)((long)pvVar9 + (long)iVar10) = 0;
  }
  puVar2 = (undefined8 *)((long)param_1 + 0x10c);
  param_1[0x17] = (long)(puVar6 + 0x10);
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  param_1[0x20] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x21) = 0x100;
  *(undefined1 *)((long)param_1 + 0x20b) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar2 = (undefined8 *)((long)param_1 + 0x22c);
  *(undefined2 *)(param_1 + 0x42) = 0xfffe;
  puVar6 = PTR_DAT_04bb21f8;
  param_1[0x44] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x45) = 0x100;
  *(undefined1 *)((long)param_1 + 0x32b) = 0;
  param_1[0x1f] = (long)(puVar6 + 0x10);
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  param_1[0x43] = (long)(puVar6 + 0x10);
  param_1[0x66] = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(param_1 + 0x67,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xa8c) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x152) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xa94) = uVar7;
  *(uint *)(param_1 + 0x153) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar9 = (void *)(**(code **)(param_1[0x66] + 0x18))(param_1 + 0x66);
  memset(pvVar9,0,0x754);
  *(undefined4 *)(param_1 + 0x154) = 0;
  memcpy(param_1 + 0x67,(void *)(param_4 + 8),0x754);
  *(undefined4 *)(param_1 + 0x1e) = 200;
  return;
}

