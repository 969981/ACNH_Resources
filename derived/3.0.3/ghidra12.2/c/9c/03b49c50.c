
void FUN_03b49c50(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_03bc0270();
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 8))();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03bc6cc0();
    pvVar10 = *(void **)(param_1 + 0x38);
    if (pvVar10 != (void *)0x0) {
      FUN_03bc6cc0(pvVar10);
      FUN_038e1a84((long)pvVar10 + 0x60);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x118);
  if (plVar5 != (long *)0x0) {
    if ((long *)plVar5[0x1d] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[0x1d] + 8))();
      plVar5[0x1d] = 0;
    }
    plVar6 = plVar5 + 4;
    plVar1 = (long *)plVar5[5];
    while (plVar1 != plVar6) {
      plVar9 = (long *)plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = plVar9;
    }
    plVar5[4] = (long)plVar6;
    plVar5[5] = (long)plVar6;
    plVar6 = plVar5 + 1;
    *(undefined4 *)(plVar5 + 6) = 0;
    plVar1 = (long *)plVar5[2];
    while (plVar1 != plVar6) {
      plVar9 = (long *)plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = plVar9;
    }
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[1] = (long)plVar6;
    plVar5[2] = (long)plVar6;
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 0x20))();
      *plVar5 = 0;
    }
    FUN_03b7e3fc(plVar5);
    plVar5 = *(long **)(param_1 + 0x118);
    if (plVar5 != (long *)0x0) {
      if ((long *)plVar5[0x1d] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[0x1d] + 8))();
        plVar5[0x1d] = 0;
      }
      plVar6 = plVar5 + 4;
      plVar1 = (long *)plVar5[5];
      while (plVar1 != plVar6) {
        plVar9 = (long *)plVar1[1];
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1 = plVar9;
      }
      plVar5[4] = (long)plVar6;
      plVar5[5] = (long)plVar6;
      plVar6 = plVar5 + 1;
      *(undefined4 *)(plVar5 + 6) = 0;
      plVar1 = (long *)plVar5[2];
      while (plVar1 != plVar6) {
        plVar9 = (long *)plVar1[1];
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1 = plVar9;
      }
      *(undefined4 *)(plVar5 + 3) = 0;
      plVar5[1] = (long)plVar6;
      plVar5[2] = (long)plVar6;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
        *plVar5 = 0;
      }
      FUN_03b7e3fc(plVar5);
      FUN_038e1a84(plVar5 + 7);
      if (*(long *)puVar3 == 0) {
        free(plVar5);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_03b7b670();
    pvVar10 = *(void **)(param_1 + 0x130);
    if (pvVar10 != (void *)0x0) {
      FUN_03b7b670(pvVar10);
      FUN_038e1a84((long)pvVar10 + 0x18);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_03baf700();
    pvVar10 = *(void **)(param_1 + 0x28);
    if (pvVar10 != (void *)0x0) {
      FUN_03baf700(pvVar10);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  pvVar10 = *(void **)(param_1 + 8);
  if (pvVar10 != (void *)0x0) {
    FUN_03b3d580(pvVar10);
    FUN_038e1a84((long)pvVar10 + 0xe8);
    FUN_038e1a84((long)pvVar10 + 0xa8);
    FUN_038e1a84((long)pvVar10 + 0x68);
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  pvVar10 = *(void **)(param_1 + 0x10);
  if (pvVar10 != (void *)0x0) {
    if (*(long **)((long)pvVar10 + 8) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar10 + 8) + 0x20))();
      *(undefined8 *)((long)pvVar10 + 8) = 0;
    }
    if (*(char *)((long)pvVar10 + 0x78) != '\0') {
      nn::os::DestroySystemEvent((SystemEventType *)((long)pvVar10 + 0x50));
    }
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  puVar11 = DAT_05aec0a8;
  if (DAT_05aec0a8 != (undefined8 *)0x0) {
    DAT_05aec0a8 = (undefined8 *)0x0;
    (**(code **)*puVar11)();
    if (DAT_05aec0b0 != (long *)0x0) {
      (**(code **)(*DAT_05aec0b0 + 8))();
    }
    DAT_05aec0b0 = (long *)0x0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x58);
  if (puVar11 != (undefined8 *)0x0) {
    nn::os::LockMutex((MutexType *)(puVar11 + 7));
    puVar2 = (undefined8 *)puVar11[1];
    while (puVar2 != puVar11) {
      puVar8 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar8;
    }
    *(undefined4 *)(puVar11 + 2) = 0;
    *puVar11 = puVar11;
    puVar11[1] = puVar11;
    if ((*(char *)(puVar11 + 0xb) != '\0') && (DAT_05aebc00 == '\0')) {
      FUN_003ca198();
      FUN_003ca474();
    }
    nn::os::UnlockMutex((MutexType *)(puVar11 + 7));
    FUN_038e1a84(puVar11 + 3);
    if (*(long *)puVar3 == 0) {
      free(puVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,puVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x48);
  if (puVar11 != (undefined8 *)0x0) {
    pvVar10 = (void *)*puVar11;
    if (pvVar10 == (void *)0x0) {
LAB_03b4a164:
      if (*(long *)puVar3 == 0) {
        free(puVar11);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,puVar11);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
        }
      }
    }
    else {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
      *puVar11 = 0;
      puVar11 = *(undefined8 **)(param_1 + 0x48);
      if (puVar11 != (undefined8 *)0x0) {
        pvVar10 = (void *)*puVar11;
        if (pvVar10 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar10);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
            }
          }
          *puVar11 = 0;
        }
        goto LAB_03b4a164;
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03baa770();
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0);
    if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd0) + 8))();
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 8))();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 8))();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long **)(param_1 + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x180) + 8))();
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x30);
  if (puVar11 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar11[1];
    while (puVar2 != puVar11) {
      puVar8 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar8;
    }
    *(undefined4 *)(puVar11 + 2) = 0;
    *puVar11 = puVar11;
    puVar11[1] = puVar11;
    if ((long *)puVar11[0x10] != (long *)0x0) {
      (**(code **)(*(long *)puVar11[0x10] + 8))();
      puVar11[0x10] = 0;
    }
    FUN_038e1a84(puVar11 + 6);
    if (*(long *)puVar3 == 0) {
      free(puVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,puVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  pvVar10 = *(void **)(param_1 + 0x80);
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 8))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  puVar4 = PTR_DAT_04bd1e70;
  pvVar10 = *(void **)(param_1 + 0x70);
  if (pvVar10 != (void *)0x0) {
    lVar14 = 8;
    do {
      if (*(long *)((long)pvVar10 + lVar14) != 0) {
        uVar12 = (ulong)*(uint *)(*(long *)((long)pvVar10 + lVar14) + 0x10);
        if (DAT_05aebc00 == '\0') {
          uVar7 = FUN_03b38a74();
          FUN_003b6364(uVar7,uVar12,0);
        }
        else {
          *(undefined8 *)(*(long *)(*(long *)puVar4 + 0x168) + uVar12 * 8 + 8) = 0;
        }
        (**(code **)**(undefined8 **)((long)pvVar10 + lVar14))();
        *(undefined8 *)((long)pvVar10 + lVar14) = 0;
      }
      lVar14 = lVar14 + 8;
    } while (lVar14 != 0x108);
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 8))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (DAT_05aebc00 != '\0') {
    FUN_03b50cb0(*(undefined8 *)puVar4);
    FUN_03b4f2f8();
    plVar5 = *(long **)(param_1 + 0x88);
    DAT_05aebc00 = '\0';
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,0);
      (**(code **)(*plVar5 + 0x40))(plVar5);
      pvVar10 = *(void **)(param_1 + 0x88);
      if (pvVar10 != (void *)0x0) {
        FUN_038e1e68((long)pvVar10 + 0x188);
        FUN_03b48f90((long)pvVar10 + 0x110);
        FUN_038e267c(pvVar10);
        if (*(long *)puVar3 == 0) {
          free(pvVar10);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_03b4096c();
    pvVar10 = *(void **)(param_1 + 0x60);
    if (pvVar10 != (void *)0x0) {
      FUN_03b4096c(pvVar10);
      FUN_003e5248((long)pvVar10 + 0xbd8);
      FUN_003ba4d4((long)pvVar10 + 0x8c8);
      FUN_003e496c((long)pvVar10 + 0x2b8);
      FUN_003dfff0((long)pvVar10 + 0x78);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar11 = DAT_05aec1d8;
  if (*(long *)(param_1 + 0x140) != 0) {
    if (DAT_05aec1d8 != (undefined8 *)0x0) {
      DAT_05aec1d8 = (undefined8 *)0x0;
      (**(code **)*puVar11)();
      if (DAT_05aec1e0 != (long *)0x0) {
        (**(code **)(*DAT_05aec1e0 + 8))();
      }
      DAT_05aec1e0 = (long *)0x0;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  puVar11 = DAT_05aebc08;
  if (DAT_05aebc08 != (undefined8 *)0x0) {
    DAT_05aebc08 = (undefined8 *)0x0;
    (**(code **)*puVar11)();
    pvVar10 = DAT_05aebc10;
    if (DAT_05aebc10 != (void *)0x0) {
      FUN_03b6cd68(DAT_05aebc10);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
        }
      }
    }
    DAT_05aebc10 = (void *)0x0;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0);
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 8))();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  pvVar10 = *(void **)(param_1 + 0x138);
  if (pvVar10 == (void *)0x0) goto LAB_03b4a720;
  if (*(char *)((long)pvVar10 + 8) == '\0') {
LAB_03b4a690:
    if (*(char *)((long)pvVar10 + 8) != '\0') {
      pvVar13 = *(void **)((long)pvVar10 + 0x10);
      if (pvVar13 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar13);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar13);
          }
        }
        *(undefined8 *)((long)pvVar10 + 0x10) = 0;
      }
      if (*(long **)((long)pvVar10 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar10 + 0x18) + 0x20))();
      }
      *(undefined1 *)((long)pvVar10 + 8) = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
  }
  else {
    pvVar13 = *(void **)((long)pvVar10 + 0x10);
    if (pvVar13 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar13);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar13);
        }
      }
      *(undefined8 *)((long)pvVar10 + 0x10) = 0;
    }
    if (*(long **)((long)pvVar10 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar10 + 0x18) + 0x20))();
    }
    *(undefined1 *)((long)pvVar10 + 8) = 0;
    pvVar10 = *(void **)(param_1 + 0x138);
    if (pvVar10 != (void *)0x0) goto LAB_03b4a690;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
LAB_03b4a720:
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(long **)(param_1 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x150) + 0x18))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

