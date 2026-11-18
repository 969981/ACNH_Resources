
void FUN_036f3be0(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *param_1 = (long)&PTR_FUN_04b45748;
  plVar1 = DAT_05ab9908;
  if (DAT_05ab9818 == param_1) {
    DAT_05ab9818 = (long *)0x0;
    DAT_05ab9908[300] = (long)&PTR_FUN_04b45768;
    puVar3 = PTR_DAT_04bb2698;
    DAT_05ab9874 = 0xffffffffffffffff;
    DAT_05ab9864 = 0xffffffffffffffff;
    DAT_05ab986c = 0xffffffffffffffff;
    pvVar9 = (void *)plVar1[0x146];
    DAT_05ab9860 = 1;
    plVar1[0x142] = 0;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x146] = 0;
      *(undefined4 *)(plVar1 + 0x145) = 0;
    }
    pvVar9 = (void *)plVar1[0x163];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x163] = 0;
      *(undefined4 *)(plVar1 + 0x162) = 0;
    }
    pvVar9 = (void *)plVar1[0x166];
    *(undefined4 *)(plVar1 + 0x164) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x166] = 0;
      *(undefined4 *)(plVar1 + 0x165) = 0;
    }
    puVar5 = PTR_DAT_04bcb440;
    puVar10 = (undefined8 *)plVar1[0x12e];
    plVar1[300] = (long)(PTR_DAT_04bcb440 + 0x10);
    if (puVar10 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x12f] < 1) {
        iVar2 = (int)plVar1[0x12f] + -1;
      }
      memset(puVar10,0,(long)iVar2);
      *(undefined1 *)((long)puVar10 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x12d] + 0x18))(plVar1 + 0x12d);
    uVar6 = FUN_006bd550(plVar1[0x12e],0);
    puVar4 = PTR_DAT_04bc2468;
    plVar1[0x141] = 0;
    plVar1[0x142] = 0;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bc2470;
    pvVar9 = (void *)plVar1[0x10b];
    *(undefined4 *)(plVar1 + 0x140) = uVar6;
    plVar1[0x143] = 0;
    plVar1[0xf1] = (long)&PTR_FUN_04b457c0;
    plVar1[0x107] = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x10b] = 0;
      *(undefined4 *)(plVar1 + 0x10a) = 0;
    }
    pvVar9 = (void *)plVar1[0x128];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x128] = 0;
      *(undefined4 *)(plVar1 + 0x127) = 0;
    }
    pvVar9 = (void *)plVar1[299];
    *(undefined4 *)(plVar1 + 0x129) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[299] = 0;
      *(undefined4 *)(plVar1 + 0x12a) = 0;
    }
    puVar10 = (undefined8 *)plVar1[0xf3];
    plVar1[0xf1] = (long)(puVar5 + 0x10);
    if (puVar10 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0xf4] < 1) {
        iVar2 = (int)plVar1[0xf4] + -1;
      }
      memset(puVar10,0,(long)iVar2);
      *(undefined1 *)((long)puVar10 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0xf2] + 0x18))(plVar1 + 0xf2);
    uVar6 = FUN_006bd550(plVar1[0xf3],0);
    pvVar9 = (void *)plVar1[0xd0];
    DAT_05ab98a0 = 1;
    plVar1[0x106] = 0;
    *(undefined4 *)(plVar1 + 0x105) = uVar6;
    plVar1[0x107] = 0;
    plVar1[0x108] = 0;
    plVar1[0xb6] = (long)&PTR_FUN_04b45818;
    DAT_05ab98b4 = 0xffffffff;
    plVar1[0xcc] = 0;
    DAT_05ab98a4 = 0xffffffffffffffff;
    DAT_05ab98ac = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0xd0] = 0;
      *(undefined4 *)(plVar1 + 0xcf) = 0;
    }
    pvVar9 = (void *)plVar1[0xed];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0xed] = 0;
      *(undefined4 *)(plVar1 + 0xec) = 0;
    }
    pvVar9 = (void *)plVar1[0xf0];
    *(undefined4 *)(plVar1 + 0xee) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0xf0] = 0;
      *(undefined4 *)(plVar1 + 0xef) = 0;
    }
    puVar10 = (undefined8 *)plVar1[0xb8];
    plVar1[0xb6] = (long)(puVar5 + 0x10);
    if (puVar10 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0xb9] < 1) {
        iVar2 = (int)plVar1[0xb9] + -1;
      }
      memset(puVar10,0,(long)iVar2);
      *(undefined1 *)((long)puVar10 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0xb7] + 0x18))(plVar1 + 0xb7);
    uVar6 = FUN_006bd550(plVar1[0xb8],0);
    puVar4 = PTR_DAT_04bc2548;
    plVar1[0xcb] = 0;
    plVar1[0xcc] = 0;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bc2550;
    pvVar9 = (void *)plVar1[0x95];
    plVar1[0xcd] = 0;
    *(undefined4 *)(plVar1 + 0xca) = uVar6;
    plVar1[0x7b] = (long)&PTR_FUN_04b45870;
    plVar1[0x91] = 0;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x95] = 0;
      *(undefined4 *)(plVar1 + 0x94) = 0;
    }
    pvVar9 = (void *)plVar1[0xb2];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0xb2] = 0;
      *(undefined4 *)(plVar1 + 0xb1) = 0;
    }
    pvVar9 = (void *)plVar1[0xb5];
    *(undefined4 *)(plVar1 + 0xb3) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0xb5] = 0;
      *(undefined4 *)(plVar1 + 0xb4) = 0;
    }
    puVar10 = (undefined8 *)plVar1[0x7d];
    plVar1[0x7b] = (long)(puVar5 + 0x10);
    if (puVar10 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x7e] < 1) {
        iVar2 = (int)plVar1[0x7e] + -1;
      }
      memset(puVar10,0,(long)iVar2);
      *(undefined1 *)((long)puVar10 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x7c] + 0x18))(plVar1 + 0x7c);
    uVar6 = FUN_006bd550(plVar1[0x7d],0);
    *(undefined4 *)(plVar1 + 0x8f) = uVar6;
    plVar1[0x90] = 0;
    plVar1[0x91] = 0;
    plVar1[0x92] = 0;
    FUN_03702d80(plVar1 + 0x3b);
    puVar4 = PTR_DAT_04bc2338;
    *plVar1 = (long)&PTR_FUN_04b45990;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bc2340;
    pvVar9 = (void *)plVar1[0x1a];
    plVar1[0x16] = 0;
    *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 0x38) = 0xffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x1a] = 0;
      *(undefined4 *)(plVar1 + 0x19) = 0;
    }
    pvVar9 = (void *)plVar1[0x37];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x37] = 0;
      *(undefined4 *)(plVar1 + 0x36) = 0;
    }
    pvVar9 = (void *)plVar1[0x3a];
    *(undefined4 *)(plVar1 + 0x38) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      plVar1[0x3a] = 0;
      *(undefined4 *)(plVar1 + 0x39) = 0;
    }
    puVar10 = (undefined8 *)plVar1[2];
    *plVar1 = (long)(puVar5 + 0x10);
    if (puVar10 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[3] < 1) {
        iVar2 = (int)plVar1[3] + -1;
      }
      memset(puVar10,0,(long)iVar2);
      *(undefined1 *)((long)puVar10 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[1] + 0x18))(plVar1 + 1);
    uVar6 = FUN_006bd550(plVar1[2],0);
    *(undefined4 *)(plVar1 + 0x14) = uVar6;
    plVar1[0x17] = 0;
    DAT_05ab9908 = (long *)0x0;
    plVar1[0x15] = 0;
    plVar1[0x16] = 0;
  }
  lVar8 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

