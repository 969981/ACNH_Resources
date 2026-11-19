
void FUN_03831470(byte *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined **local_60;
  byte *pbStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar6 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar4;
  }
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))(*(long **)(param_1 + 0xb8),0);
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))(*(long **)(param_1 + 0xb0),0);
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
  }
  pvVar5 = *(void **)(param_1 + 0x30);
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  if (pvVar5 == (void *)0x0) goto LAB_038315a8;
  pbStack_58 = param_1 + 0x20;
  local_50 = &LAB_03831e58;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b5d2a8;
  if (*(long *)pbStack_58 == 0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
LAB_03831568:
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  else {
    FUN_03831e70(*(long *)pbStack_58,&local_60);
    pvVar5 = *(void **)(param_1 + 0x30);
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if (pvVar5 != (void *)0x0) goto LAB_03831568;
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
LAB_038315a8:
  FUN_038330d0(param_1 + 0x40);
  if (lVar6 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar6;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_03f2a9b0(param_1 + 0x360);
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_03bcafb0(*(undefined8 *)(DAT_05aebb78 + 0x78));
    pvVar5 = *(void **)(param_1 + 8);
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  *param_1 = *param_1 | 1;
  return;
}

