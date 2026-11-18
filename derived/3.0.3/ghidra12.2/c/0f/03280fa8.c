
void FUN_03280fa8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_04b17468;
  if ((long *)param_1[0xf5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5] + 8))();
  }
  if ((long *)param_1[0xef] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xef] + 8))();
  }
  FUN_032c1b04(param_1 + 0xa4);
  param_1[0xa3] = 0;
  FUN_03281ac0(param_1 + 0x9f);
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x9e];
  if (pvVar5 == (void *)0x0) {
LAB_03281040:
    pvVar5 = (void *)param_1[0x9d];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_03281040;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x9d];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x9c];
  if (pvVar5 == (void *)0x0) {
LAB_032810c8:
    pvVar5 = (void *)param_1[0x9b];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_032810c8;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x9b];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x9a];
  if (pvVar5 == (void *)0x0) {
LAB_03281150:
    pvVar5 = (void *)param_1[0x99];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_03281150;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x99];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x98];
  if (pvVar5 == (void *)0x0) {
LAB_032811d8:
    pvVar5 = (void *)param_1[0x97];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_032811d8;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x97];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x96];
  if (pvVar5 == (void *)0x0) {
LAB_03281260:
    pvVar5 = (void *)param_1[0x95];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_03281260;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x95];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x94];
  if (pvVar5 == (void *)0x0) {
LAB_032812e8:
    puVar6 = (undefined8 *)param_1[0x93];
  }
  else {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
      goto LAB_032812e8;
    }
    free(pvVar5);
    puVar6 = (undefined8 *)param_1[0x93];
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x92];
  if (puVar6 == (undefined8 *)0x0) {
LAB_032813f8:
    puVar6 = (undefined8 *)param_1[0x91];
  }
  else {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
      goto LAB_032813f8;
    }
    free(puVar6);
    puVar6 = (undefined8 *)param_1[0x91];
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x90];
  if (puVar6 == (undefined8 *)0x0) {
LAB_03281508:
    puVar6 = (undefined8 *)param_1[0x8f];
  }
  else {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
      goto LAB_03281508;
    }
    free(puVar6);
    puVar6 = (undefined8 *)param_1[0x8f];
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x8e];
  if (puVar6 == (undefined8 *)0x0) {
LAB_03281618:
    puVar6 = (undefined8 *)param_1[0x8d];
  }
  else {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
      goto LAB_03281618;
    }
    free(puVar6);
    puVar6 = (undefined8 *)param_1[0x8d];
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x8c];
  if (puVar6 == (undefined8 *)0x0) {
LAB_03281728:
    puVar6 = (undefined8 *)param_1[0x8b];
  }
  else {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
      goto LAB_03281728;
    }
    free(puVar6);
    puVar6 = (undefined8 *)param_1[0x8b];
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x8a];
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
      puVar6 = (undefined8 *)param_1[0x89];
      goto joined_r0x0328183c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
    }
  }
  puVar6 = (undefined8 *)param_1[0x89];
joined_r0x0328183c:
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar2 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = puVar6[1];
      lVar4 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar2 == puVar6) {
        *plVar2 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar6);
      }
    }
  }
  puVar6 = param_1 + 0x7e;
  FUN_032c6840(puVar6);
  plVar2 = (long *)param_1[0x7e];
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = param_1[0x80];
    lVar4 = param_1[0x7f];
    param_1[0x80] = 0;
    *puVar6 = 0;
    param_1[0x7f] = 0;
    if ((undefined8 *)*plVar2 == puVar6) {
      *plVar2 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
  }
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x5b] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x6b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6b] + 8))();
  }
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 8))();
  }
  if ((long *)param_1[0x5f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5f] + 8))();
  }
  param_1[0x46] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 8))();
  }
  if ((long *)param_1[0x50] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x50] + 8))();
  }
  if ((long *)param_1[0x4a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a] + 8))();
  }
  param_1[0x31] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
  }
  if ((long *)param_1[0x3b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3b] + 8))();
  }
  if ((long *)param_1[0x35] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x35] + 8))();
  }
  param_1[0x1c] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 8))();
  }
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
  }
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
  }
  param_1[7] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  if ((long *)param_1[0xb] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03281aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xb] + 8))();
  return;
}

