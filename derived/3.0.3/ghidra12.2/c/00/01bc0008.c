
void FUN_01bc0008(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_LAB_04a3b808;
  param_1[6] = PTR_DAT_04bb2e00 + 0x10;
  if (param_1[0x22] != 0) {
    param_1[7] = 0;
    param_1[9] = 0xffffffff;
    param_1[10] = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)((long)param_1 + 0x44) = 0;
    *(undefined1 *)param_1[0xd] = 0;
    *(undefined1 *)param_1[0x18] = 0;
    pvVar3 = (void *)param_1[0x22];
    if (pvVar3 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    param_1[0x22] = 0;
  }
  puVar1 = PTR_DAT_04bb2df8;
  puVar4 = (undefined4 *)param_1[5];
  *param_1 = &PTR_LAB_04a3b7d0;
  param_1[6] = puVar1 + 0x10;
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  if ((*(byte *)(puVar4 + 4) >> 1 & 1) != 0) {
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf8 | 4;
    if (*(long *)(puVar4 + 0xc) == 0) {
      if (*(long *)(puVar4 + 6) != 0) goto LAB_01bc0110;
    }
    else {
      FUN_03f45838(puVar4 + 8);
      if (*(long *)(puVar4 + 6) == 0) {
        puVar4[5] = 0xe;
      }
      else {
LAB_01bc0110:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,puVar4 + 2);
        }
      }
    }
  }
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x12] = 0;
  **(undefined1 **)(puVar4 + 0x16) = 0;
  **(undefined1 **)(puVar4 + 0x2c) = 0;
  pvVar3 = (void *)param_1[5];
  if (pvVar3 == (void *)0x0) goto LAB_01bc01e4;
  if ((*(byte *)((long)pvVar3 + 0x10) >> 1 & 1) != 0) {
    *(byte *)((long)pvVar3 + 0x10) = *(byte *)((long)pvVar3 + 0x10) & 0xf8 | 4;
    if (*(long *)((long)pvVar3 + 0x30) == 0) {
      if (*(long *)((long)pvVar3 + 0x18) != 0) goto LAB_01bc018c;
    }
    else {
      FUN_03f45838((long)pvVar3 + 0x20);
      if (*(long *)((long)pvVar3 + 0x18) == 0) {
        *(undefined4 *)((long)pvVar3 + 0x14) = 0xe;
      }
      else {
LAB_01bc018c:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,(long)pvVar3 + 8);
        }
      }
    }
  }
  FUN_03f457c4((long)pvVar3 + 0x20);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(pvVar3);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
LAB_01bc01e4:
  param_1[5] = 0;
  return;
}

