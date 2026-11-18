
void FUN_03286c9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  FUN_03286f10();
  puVar5 = (undefined8 *)param_1[0xb1];
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = puVar5[1];
      lVar3 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar5);
      plVar4 = (long *)param_1[0xae];
      goto joined_r0x03286d38;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar5);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
    }
  }
  plVar4 = (long *)param_1[0xae];
joined_r0x03286d38:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if ((long *)param_1[0xa9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa9] + 8))();
  }
  if ((long *)param_1[0xa3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa3] + 8))();
  }
  if ((long *)param_1[0x9d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9d] + 8))();
  }
  puVar5 = param_1 + 0x91;
  FUN_032c6840(puVar5);
  plVar4 = (long *)param_1[0x91];
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = param_1[0x93];
    lVar3 = param_1[0x92];
    param_1[0x93] = 0;
    *puVar5 = 0;
    param_1[0x92] = 0;
    if ((undefined8 *)*plVar4 == puVar5) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
  }
  puVar1 = param_1 + 0x86;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *puVar5 = 0;
  FUN_032c6840(puVar1);
  plVar4 = (long *)param_1[0x86];
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = param_1[0x88];
    lVar3 = param_1[0x87];
    param_1[0x88] = 0;
    *puVar1 = 0;
    param_1[0x87] = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
  }
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *puVar1 = 0;
  if ((long *)param_1[0x85] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x85] + 0x18))();
  }
  if (param_1[0x84] != 0) {
    FUN_0328b958();
  }
  FUN_032c1b04(param_1 + 0x40);
  FUN_032ae0c8(param_1 + 6);
  *param_1 = &PTR_FUN_04b17890;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar5 = param_1 + 1;
  plVar4 = (long *)*puVar5;
  if (plVar4 != (long *)0x0) {
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    param_1[3] = 0;
    *puVar5 = 0;
    param_1[2] = 0;
    if ((undefined8 *)*plVar4 == puVar5) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    plVar4 = (long *)*puVar5;
    if (plVar4 != (long *)0x0) {
      lVar2 = param_1[2];
      lVar3 = param_1[3];
      param_1[3] = 0;
      *puVar5 = 0;
      param_1[2] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
  }
  *puVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

