
void FUN_03292080(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar5 = param_1[4];
  puVar1 = (undefined1 *)0x0;
  if (lVar5 != 0) {
    puVar1 = &LAB_032926f8;
  }
  if (puVar1 != (undefined1 *)0x0) {
    if (*(long *)(DAT_0572b998 + 0x3b0) == lVar5) {
      FUN_032af260(DAT_0572b998,1);
    }
    if (*(long *)(DAT_0572b998 + 0x3a8) == lVar5) {
      FUN_032af260(DAT_0572b998,0);
      lVar4 = *param_1;
      lVar5 = DAT_0572ba48;
      goto joined_r0x03292164;
    }
  }
  lVar4 = *param_1;
  lVar5 = DAT_0572ba48;
joined_r0x03292164:
  DAT_0572ba48 = lVar5;
  if (lVar4 != 0) {
    lVar4 = param_1[1];
    lVar2 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long **)(lVar5 + 8) == param_1) {
      *(long *)(lVar5 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar2;
    }
    FUN_0328fad0(lVar5);
    if ((*(uint *)((long)param_1 + 0x2c) & 1) == 0) {
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      *(byte *)(lVar5 + 0xd4) = *(byte *)(lVar5 + 0xd4) & 0xfd;
    }
  }
  pvVar6 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_032903a0(pvVar6);
    if (DAT_05ae7600 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  pvVar6 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_032ae0c8(pvVar6);
    if (DAT_05ae7600 == 0) {
      free(pvVar6);
      return;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03292200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      return;
    }
  }
  return;
}

