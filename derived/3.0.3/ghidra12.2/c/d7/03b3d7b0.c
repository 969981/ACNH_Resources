
void FUN_03b3d7b0(long param_1,int *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  iVar6 = *param_2;
  if (0 < iVar6) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      pvVar5 = malloc((long)iVar6 << 3);
joined_r0x03b3da78:
      if (pvVar5 != (void *)0x0) {
        *(void **)(param_1 + 0x30) = pvVar5;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(int *)(param_1 + 0x2c) = iVar6;
      }
    }
    else {
      plVar4 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03b3d82c:
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)iVar6 << 3,8);
        goto joined_r0x03b3da78;
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_03b3d82c;
    }
    puVar2 = PTR_DAT_04bb3350;
    if (0 < *param_2) {
      iVar6 = 0;
      do {
        lVar7 = *(long *)puVar1;
        if (lVar7 == 0) {
          pvVar5 = malloc(0x248);
        }
        else {
          plVar4 = param_3;
          if (param_3 == (long *)0x0) {
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
            plVar4 = (long *)(lVar7 + 8);
            if (lVar3 != 0) {
              plVar4 = (long *)(lVar3 + 0xa8);
            }
            plVar4 = (long *)*plVar4;
          }
          pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x248,8);
        }
        FUN_03b42690();
        FUN_03b42a68(pvVar5,param_3);
        if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
          *(void **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = pvVar5;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *param_2);
    }
  }
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    plVar4 = malloc(0x30);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x30,8);
  }
  puVar2 = PTR_DAT_04bd22c0;
  *(undefined4 *)(plVar4 + 1) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[5] = (long)&PTR_PTR_04c4be30;
  *(long **)(param_1 + 0x58) = plVar4;
  FUN_03bc3530(plVar4,param_2[1],param_3,*(undefined8 *)(param_2 + 2));
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    plVar4 = malloc(0x60);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03b3da08;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x60,8);
  }
LAB_03b3da08:
  puVar1 = PTR_DAT_04bd22d0;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  FUN_038e18e4(plVar4 + 4);
  *(long **)(param_1 + 0x60) = plVar4;
  FUN_03bc3f70(plVar4,param_2[4],param_3);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x138;
  *(undefined4 *)(param_1 + 0x54) = 0x208;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}

