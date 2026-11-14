
void FUN_01ca7210(undefined4 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0xa2);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xa2) = 0;
    param_1[0xa0] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x9a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x9a) = 0;
    param_1[0x98] = 0;
  }
  iVar4 = param_1[0x9c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x9e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x9c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x9e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x9e) = 0;
    param_1[0x9c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x92);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x92) = 0;
    param_1[0x90] = 0;
  }
  iVar4 = param_1[0x94];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x96);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x94];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x96);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x96) = 0;
    param_1[0x94] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x8a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x8a) = 0;
    param_1[0x88] = 0;
  }
  iVar4 = param_1[0x8c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x8e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x8c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x8e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x8e) = 0;
    param_1[0x8c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x86);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x86) = 0;
    param_1[0x84] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x82);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x82) = 0;
    param_1[0x80] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x7e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x7e) = 0;
    param_1[0x7c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x7a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x7a) = 0;
    param_1[0x78] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x76);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x76) = 0;
    param_1[0x74] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x6e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x6e) = 0;
    param_1[0x6c] = 0;
  }
  iVar4 = param_1[0x70];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x72);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x70];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x72);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x72) = 0;
    param_1[0x70] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x6a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x6a) = 0;
    param_1[0x68] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x62);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x62) = 0;
    param_1[0x60] = 0;
  }
  iVar4 = param_1[100];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x66);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[100];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x66);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x66) = 0;
    param_1[100] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x5a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x5a) = 0;
    param_1[0x58] = 0;
  }
  iVar4 = param_1[0x5c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x5e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x5c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x5e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x5e) = 0;
    param_1[0x5c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x52);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x52) = 0;
    param_1[0x50] = 0;
  }
  iVar4 = param_1[0x54];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x56);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x54];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x56);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x56) = 0;
    param_1[0x54] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x4a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x4a) = 0;
    param_1[0x48] = 0;
  }
  iVar4 = param_1[0x4c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x4e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x4c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x4e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x4e) = 0;
    param_1[0x4c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x42);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x42) = 0;
    param_1[0x40] = 0;
  }
  iVar4 = param_1[0x44];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x46);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x44];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x46);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x46) = 0;
    param_1[0x44] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x3a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x3a) = 0;
    param_1[0x38] = 0;
  }
  iVar4 = param_1[0x3c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x3e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x3c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x3e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x3e) = 0;
    param_1[0x3c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x32);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x32) = 0;
    param_1[0x30] = 0;
  }
  iVar4 = param_1[0x34];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x36);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x34];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x36);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x36) = 0;
    param_1[0x34] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x2a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x2a) = 0;
    param_1[0x28] = 0;
  }
  iVar4 = param_1[0x2c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x2e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x2c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x2e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x2e) = 0;
    param_1[0x2c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x22);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x20] = 0;
  }
  iVar4 = param_1[0x24];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x26);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x24];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x26);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    param_1[0x24] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1a);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1a) = 0;
    param_1[0x18] = 0;
  }
  iVar4 = param_1[0x1c];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x1e);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x1c];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x1e);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1e) = 0;
    param_1[0x1c] = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x12);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x12) = 0;
    param_1[0x10] = 0;
  }
  iVar4 = param_1[0x14];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x16);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0x14];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0x16);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x16) = 0;
    param_1[0x14] = 0;
  }
  pvVar5 = *(void **)(param_1 + 10);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[8] = 0;
  }
  iVar4 = param_1[0xc];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0xe);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[0xc];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 0xe);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0xc] = 0;
  }
  pvVar5 = *(void **)(param_1 + 2);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  iVar4 = param_1[4];
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 6);
      lVar1 = lVar8 + lVar6;
      pvVar5 = *(void **)(lVar1 + 8);
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar8 + lVar6) = 0;
        iVar4 = param_1[4];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar4);
  }
  pvVar5 = *(void **)(param_1 + 6);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = 0;
  }
  return;
}

