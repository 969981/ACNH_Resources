
void FUN_03bcf830(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  plVar4 = param_3;
  if (param_3 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
  }
  *(long **)(param_1 + 0x40) = plVar4;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 0) {
      do {
        if (iVar5 < 1) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = *(long **)(param_2 + 0x30);
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
        }
        lVar2 = 0;
        if (plVar4 != (long *)0x0) {
          lVar2 = (long)plVar4 - (long)*(int *)(param_2 + 0x3c);
        }
        plVar4 = (long *)(lVar2 + *(int *)(param_1 + 0x3c));
        lVar2 = *(long *)(param_1 + 0x28);
        *(long **)(param_1 + 0x28) = plVar4;
        *plVar4 = lVar2;
        plVar4[1] = param_1 + 0x28;
        if (lVar2 != 0) {
          *(long **)(lVar2 + 8) = plVar4;
        }
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        iVar5 = *(int *)(param_2 + 0x38);
      } while (iVar5 != 0);
    }
  }
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    goto joined_r0x03bcfb58;
  }
  lVar2 = *(long *)PTR_DAT_04bb2698;
  if (lVar2 == 0) {
    plVar4 = malloc(0x1a0);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar2 + 8);
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03bcfabc;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1a0,8);
  }
LAB_03bcfabc:
  puVar1 = PTR_DAT_04bd2350;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  FUN_003cc7ec(plVar4 + 3);
  *(undefined4 *)(plVar4 + 0x16) = 0;
  *(undefined1 *)((long)plVar4 + 0xbc) = 1;
  FUN_038e18e4(plVar4 + 0x18);
  *(undefined1 *)(plVar4 + 0x20) = 1;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0x100000001;
  plVar4[0x25] = (long)(plVar4 + 0x24);
  plVar4[0x26] = -0x100000000;
  plVar4[0x24] = (long)(plVar4 + 0x24);
  *(undefined8 *)((long)plVar4 + 0x104) = 0;
  *(undefined8 *)((long)plVar4 + 0x10c) = 0;
  *(undefined8 *)((long)plVar4 + 0x111) = 0;
  FUN_038e18e4(plVar4 + 0x27);
  puVar1 = PTR_DAT_04bd2358;
  plVar4[0x2f] = 0;
  *(undefined1 *)(plVar4 + 0x30) = 0;
  *(undefined4 *)((long)plVar4 + 0x184) = 0x11;
  *(undefined4 *)(plVar4 + 0x32) = 0;
  *(undefined1 *)(plVar4 + 0x33) = 1;
  *(undefined4 *)((long)plVar4 + 0x134) = 8;
  plVar4[0x31] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 8) = plVar4;
  *(undefined1 *)(param_1 + 0x49) = 1;
  lVar2 = *(long *)(param_1 + 0x18);
joined_r0x03bcfb58:
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR_DAT_04bb2698;
    if (lVar2 == 0) {
      pvVar3 = malloc(0x410);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar2 + 8);
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      pvVar3 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x410,8);
    }
    FUN_03bcb9e4();
    *(void **)(param_1 + 0x18) = pvVar3;
    *(undefined1 *)(param_1 + 0x4b) = 1;
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR_DAT_04bb2698;
    if (lVar2 == 0) {
      plVar4 = malloc(0x20);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar2 + 8);
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
    }
    puVar1 = PTR_DAT_04bd2328;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0x3f800000;
    *plVar4 = (long)(puVar1 + 0x10);
    *(long **)(param_1 + 0x10) = plVar4;
    *(undefined1 *)(param_1 + 0x4a) = 1;
    plVar4 = *(long **)(param_1 + 8);
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar2 = (long)*(int *)(param_1 + 0x3c);
      plVar4 = (long *)(*(long *)(param_1 + 0x30) - lVar2);
      do {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1,param_3);
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar2 + 8) - lVar2);
      } while (plVar4 != (long *)((param_1 + 0x28) - (long)*(int *)(param_1 + 0x3c)));
    }
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}

