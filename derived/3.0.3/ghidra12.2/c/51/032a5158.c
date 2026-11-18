
void FUN_032a5158(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_04b199c8;
  FUN_032a564c();
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  if (param_1[0x14] != 0) {
    FUN_032a981c();
  }
  if (param_1[0x13] != 0) {
    FUN_032a981c();
  }
  if (param_1[0x12] != 0) {
    FUN_032a981c();
  }
  if (param_1[0x11] != 0) {
    FUN_032a981c();
  }
  if (param_1[0x10] != 0) {
    FUN_032a981c();
  }
  if (param_1[0xf] != 0) {
    FUN_032a981c();
  }
  if (param_1[0xe] != 0) {
    FUN_032a981c();
  }
  puVar3 = PTR_DAT_04bb2698;
  puVar5 = (undefined8 *)param_1[0xd];
  if (puVar5 == (undefined8 *)0x0) {
LAB_032a5278:
    puVar5 = (undefined8 *)param_1[0xc];
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_032a5278;
    }
    free(puVar5);
    puVar5 = (undefined8 *)param_1[0xc];
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  puVar5 = (undefined8 *)param_1[0xb];
  if (puVar5 == (undefined8 *)0x0) {
LAB_032a5388:
    puVar5 = (undefined8 *)param_1[10];
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_032a5388;
    }
    free(puVar5);
    puVar5 = (undefined8 *)param_1[10];
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  puVar5 = (undefined8 *)param_1[9];
  if (puVar5 == (undefined8 *)0x0) {
LAB_032a5498:
    puVar5 = (undefined8 *)param_1[8];
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_032a5498;
    }
    free(puVar5);
    puVar5 = (undefined8 *)param_1[8];
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar3 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  pvVar6 = (void *)param_1[7];
  if (pvVar6 != (void *)0x0) {
    FUN_032ae0c8(pvVar6);
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
      pvVar6 = (void *)param_1[6];
      goto joined_r0x032a5568;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
    }
  }
  pvVar6 = (void *)param_1[6];
joined_r0x032a5568:
  if (pvVar6 != (void *)0x0) {
    FUN_032c1b04(pvVar6);
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  pvVar6 = (void *)param_1[4];
  param_1[5] = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_032d0688(pvVar6);
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  puVar5 = param_1 + 1;
  plVar4 = (long *)*puVar5;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    param_1[3] = 0;
    *puVar5 = 0;
    param_1[2] = 0;
    if ((undefined8 *)*plVar4 == puVar5) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
  }
  *puVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

