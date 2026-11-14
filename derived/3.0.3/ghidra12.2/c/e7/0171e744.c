
void FUN_0171e744(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__s;
  long lVar8;
  
  *param_1 = &PTR_FUN_049bf690;
  puVar3 = DAT_0524a598;
  if (DAT_0524a590 == param_1) {
    DAT_0524a590 = (undefined8 *)0x0;
    *DAT_0524a598 = &PTR_LAB_049bf6b0;
    puVar2 = PTR_DAT_04bb2698;
    if (puVar3[0x3c] != 0) {
      pvVar7 = (void *)(puVar3[0x3c] + -8);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      puVar3[0x3c] = 0;
      *(undefined4 *)(puVar3 + 0x3b) = 0;
    }
    pvVar7 = (void *)puVar3[0x3e];
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      puVar3[0x3d] = 0;
      puVar3[0x3e] = 0;
    }
    *(undefined1 *)((long)puVar3 + 0x1f9) = 0;
    FUN_017206f8(puVar3);
    *puVar3 = &PTR_LAB_049bf708;
    FUN_017206f8(puVar3);
    __s = (undefined8 *)puVar3[2];
    *puVar3 = &PTR_FUN_04b5e7f8;
    if (__s != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(puVar3 + 3) < 1) {
        iVar1 = *(int *)(puVar3 + 3) + -1;
      }
      memset(__s,0,(long)iVar1);
      *(undefined1 *)((long)__s + (long)iVar1) = 0;
    }
    (**(code **)(puVar3[1] + 0x18))(puVar3 + 1);
    uVar4 = FUN_006bd550(puVar3[2],0);
    *(undefined4 *)(puVar3 + 0x14) = uVar4;
    puVar3[0x17] = 0;
    DAT_0524a598 = (undefined8 *)0x0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
  }
  lVar6 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

