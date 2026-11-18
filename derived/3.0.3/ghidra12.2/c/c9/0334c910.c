
void FUN_0334c910(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04bb2698;
  lVar6 = param_1[0x7a];
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + -8);
    if (*plVar8 != 0) {
      lVar10 = *plVar8 * 0x58;
      do {
        puVar2 = (undefined8 *)(lVar6 + -0x58 + lVar10);
        FUN_032c6840(puVar2);
        plVar7 = (long *)*puVar2;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[3] = 0;
        if (plVar7 != (long *)0x0) {
          lVar3 = puVar2[1];
          lVar4 = puVar2[2];
          puVar2[2] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          if (puVar2 == (undefined8 *)*plVar7) {
            *plVar7 = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = lVar3;
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x10) = lVar4;
          }
        }
        lVar10 = lVar10 + -0x58;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
      } while (lVar10 != 0);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar8);
      }
    }
    param_1[0x7a] = 0;
    *(undefined4 *)(param_1 + 0x79) = 0;
  }
  pvVar9 = (void *)param_1[0x271];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar5,pvVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
      }
    }
    param_1[0x271] = 0;
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  FUN_038fd0e0(param_1 + 0x4e0);
  param_1[0x4d5] = 0;
  FUN_038fd0e0(param_1 + 0x4c6);
  puVar2 = param_1 + 0x4ab;
  param_1[0x4bb] = 0;
  param_1[0x49c] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x4b2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b2] + 8))();
  }
  plVar8 = (long *)param_1[0x4ab];
  param_1[0x4b0] = 0;
  param_1[0x4ae] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x4ad];
    lVar10 = param_1[0x4ac];
    param_1[0x4ad] = 0;
    *puVar2 = 0;
    param_1[0x4ac] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x4ac] = 0;
  param_1[0x4ad] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x4a4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a4] + 8))();
  }
  plVar8 = (long *)param_1[0x49d];
  param_1[0x4a2] = 0;
  puVar2 = param_1 + 0x49d;
  param_1[0x4a0] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x49f];
    lVar10 = param_1[0x49e];
    param_1[0x49f] = 0;
    *puVar2 = 0;
    param_1[0x49e] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x49e] = 0;
  param_1[0x49f] = 0;
  *puVar2 = 0;
  puVar2 = param_1 + 0x48e;
  param_1[0x47f] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x495] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x495] + 8))();
  }
  plVar8 = (long *)param_1[0x48e];
  param_1[0x493] = 0;
  param_1[0x491] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x490];
    lVar10 = param_1[0x48f];
    param_1[0x490] = 0;
    *puVar2 = 0;
    param_1[0x48f] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x48f] = 0;
  param_1[0x490] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x487] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x487] + 8))();
  }
  plVar8 = (long *)param_1[0x480];
  param_1[0x485] = 0;
  puVar2 = param_1 + 0x480;
  param_1[0x483] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x482];
    lVar10 = param_1[0x481];
    param_1[0x482] = 0;
    *puVar2 = 0;
    param_1[0x481] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  *puVar2 = 0;
  puVar2 = param_1 + 0x471;
  param_1[0x462] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x478] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x478] + 8))();
  }
  plVar8 = (long *)param_1[0x471];
  param_1[0x476] = 0;
  param_1[0x474] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x473];
    lVar10 = param_1[0x472];
    param_1[0x473] = 0;
    *puVar2 = 0;
    param_1[0x472] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x46a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x46a] + 8))();
  }
  plVar8 = (long *)param_1[0x463];
  param_1[0x468] = 0;
  puVar2 = param_1 + 0x463;
  param_1[0x466] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x465];
    lVar10 = param_1[0x464];
    param_1[0x465] = 0;
    *puVar2 = 0;
    param_1[0x464] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x464] = 0;
  param_1[0x465] = 0;
  *puVar2 = 0;
  puVar2 = param_1 + 0x454;
  param_1[0x445] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x45b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x45b] + 8))();
  }
  plVar8 = (long *)param_1[0x454];
  param_1[0x459] = 0;
  param_1[0x457] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x456];
    lVar10 = param_1[0x455];
    param_1[0x456] = 0;
    *puVar2 = 0;
    param_1[0x455] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x455] = 0;
  param_1[0x456] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x44d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x44d] + 8))();
  }
  plVar8 = (long *)param_1[0x446];
  param_1[1099] = 0;
  puVar2 = param_1 + 0x446;
  param_1[0x449] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x448];
    lVar10 = param_1[0x447];
    param_1[0x448] = 0;
    *puVar2 = 0;
    param_1[0x447] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  *puVar2 = 0;
  puVar2 = param_1 + 0x437;
  param_1[0x428] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x43e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43e] + 8))();
  }
  plVar8 = (long *)param_1[0x437];
  param_1[0x43c] = 0;
  param_1[0x43a] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x439];
    lVar10 = param_1[0x438];
    param_1[0x439] = 0;
    *puVar2 = 0;
    param_1[0x438] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x438] = 0;
  param_1[0x439] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x430] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x430] + 8))();
  }
  plVar8 = (long *)param_1[0x429];
  param_1[0x42e] = 0;
  puVar2 = param_1 + 0x429;
  param_1[0x42c] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x42b];
    lVar10 = param_1[0x42a];
    param_1[0x42b] = 0;
    *puVar2 = 0;
    param_1[0x42a] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x42a] = 0;
  param_1[0x42b] = 0;
  *puVar2 = 0;
  puVar2 = param_1 + 0x41a;
  param_1[0x40b] = &PTR_LAB_04b1fba0;
  if ((long *)param_1[0x421] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x421] + 8))();
  }
  plVar8 = (long *)param_1[0x41a];
  param_1[0x41f] = 0;
  param_1[0x41d] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x41c];
    lVar10 = param_1[0x41b];
    param_1[0x41c] = 0;
    *puVar2 = 0;
    param_1[0x41b] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  param_1[0x41b] = 0;
  param_1[0x41c] = 0;
  *puVar2 = 0;
  if ((long *)param_1[0x413] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x413] + 8))();
  }
  plVar8 = (long *)param_1[0x40c];
  param_1[0x411] = 0;
  puVar2 = param_1 + 0x40c;
  param_1[0x40f] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x40e];
    lVar10 = param_1[0x40d];
    param_1[0x40e] = 0;
    *puVar2 = 0;
    param_1[0x40d] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  pvVar9 = (void *)param_1[0x26a];
  param_1[0x40d] = 0;
  param_1[0x40e] = 0;
  *puVar2 = 0;
  param_1[899] = &PTR___cxa_pure_virtual_04b1fe30;
  param_1[0x409] = 0;
  param_1[0x2fb] = &PTR___cxa_pure_virtual_04b1fe30;
  param_1[0x381] = 0;
  param_1[0x273] = &PTR___cxa_pure_virtual_04b1fe30;
  param_1[0x2f9] = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_032c1b04(pvVar9);
    if (*(long *)puVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar5,pvVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
      }
    }
  }
  param_1[0x25d] = 0;
  thunk_FUN_0035008c(param_1 + 0x24f);
  puVar2 = param_1 + 0x7b;
  param_1[0x86] = 0;
  FUN_032c6840(puVar2);
  plVar8 = (long *)param_1[0x7b];
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x7d];
    lVar10 = param_1[0x7c];
    param_1[0x7d] = 0;
    *puVar2 = 0;
    param_1[0x7c] = 0;
    if ((undefined8 *)*plVar8 == puVar2) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  puVar1 = param_1 + 0x6e;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *puVar2 = 0;
  FUN_032c6840(puVar1);
  plVar8 = (long *)param_1[0x6e];
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  if (plVar8 != (long *)0x0) {
    lVar6 = param_1[0x70];
    lVar10 = param_1[0x6f];
    param_1[0x70] = 0;
    *puVar1 = 0;
    param_1[0x6f] = 0;
    if ((undefined8 *)*plVar8 == puVar1) {
      *plVar8 = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar10;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar6;
    }
  }
  pvVar9 = (void *)param_1[0x6d];
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *puVar1 = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_03359a7c(pvVar9);
    if (*(long *)puVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar5,pvVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
      }
    }
  }
  pvVar9 = (void *)param_1[0x60];
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_032d0688(pvVar9);
    if (*(long *)puVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar5,pvVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
      }
    }
  }
  param_1[0x47] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 8))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 8))();
  }
  if ((long *)param_1[0x4b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b] + 8))();
  }
  param_1[0x32] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 8))();
  }
  if ((long *)param_1[0x3c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c] + 8))();
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 8))();
  }
  param_1[0x1d] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 8))();
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  param_1[8] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  *param_1 = &PTR_LAB_04b1f920;
  param_1[1] = 0;
  return;
}

