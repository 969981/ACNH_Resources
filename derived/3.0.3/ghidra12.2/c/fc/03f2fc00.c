
void FUN_03f2fc00(long param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  byte bVar10;
  long lVar11;
  void *__ptr;
  ulong uVar12;
  undefined8 local_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined1 *puStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03f43a70(*(undefined8 *)(param_1 + 0x140));
    FUN_03f43a70(*(undefined8 *)(param_1 + 0x148));
    FUN_03f43a70(*(undefined8 *)(param_1 + 0x138));
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x180),0);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x180),1);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x180),2);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),1);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),2);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),3);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),4);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),5);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x180),6);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x180),0);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x180),1);
    FUN_03f423b0(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x180),2);
    if (*(long *)(param_1 + 0x880) != 0) {
      *(undefined4 *)(param_1 + 0x878) = 0;
      *(undefined8 *)(param_1 + 0x880) = 0;
    }
    if (*(long *)(param_1 + 0x870) != 0) {
      *(undefined4 *)(param_1 + 0x868) = 0;
      *(undefined8 *)(param_1 + 0x870) = 0;
    }
    if (*(long *)(param_1 + 0x8a0) != 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      *(undefined8 *)(param_1 + 0x8a0) = 0;
    }
    if (*(long *)(param_1 + 0x890) != 0) {
      *(undefined4 *)(param_1 + 0x888) = 0;
      *(undefined8 *)(param_1 + 0x890) = 0;
    }
    FUN_03f2d620(param_1 + 0x830);
    FUN_03f43b10(*(undefined8 *)(param_1 + 0x138));
    FUN_03f43b10(*(undefined8 *)(param_1 + 0x148));
    FUN_03f43b10(*(undefined8 *)(param_1 + 0x140));
    plVar8 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
    if ((*(byte *)(plVar8 + 1) & 1) != 0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if ((int)plVar8[0xd] == 0) {
      bVar10 = 1;
      bVar3 = *(byte *)(plVar8 + 1);
    }
    else {
      lVar7 = (long)(int)plVar8[0xd] * 8;
      plVar6 = (long *)plVar8[0xe];
      do {
        lVar7 = lVar7 + -8;
        bVar10 = *(byte *)(*plVar6 + 0x104) >> 3 & 1;
        if ((*(byte *)(*plVar6 + 0x104) >> 3 & 1) == 0) break;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
      bVar3 = *(byte *)(plVar8 + 1);
    }
    if ((bVar3 & 1) != 0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    if (bVar10 == 0) {
      lVar7 = 5;
      if (*(uint *)(plVar8 + 5) < 6) {
        lVar7 = 0;
      }
      lVar11 = plVar8[6] + lVar7 * 0x40;
      if ((*(char *)(plVar8[6] + lVar7 * 0x40) == '\0') || (*(long *)(lVar11 + 8) == 0)) {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x30));
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
    if ((*(byte *)(plVar8 + 1) & 1) != 0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if ((int)plVar8[0xd] == 0) {
      bVar10 = 1;
      bVar3 = *(byte *)(plVar8 + 1);
    }
    else {
      lVar7 = (long)(int)plVar8[0xd] * 8;
      plVar6 = (long *)plVar8[0xe];
      do {
        lVar7 = lVar7 + -8;
        bVar10 = *(byte *)(*plVar6 + 0x104) >> 3 & 1;
        if ((*(byte *)(*plVar6 + 0x104) >> 3 & 1) == 0) break;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
      bVar3 = *(byte *)(plVar8 + 1);
    }
    if ((bVar3 & 1) != 0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    if ((bVar10 == 0) &&
       ((lVar7 = plVar8[6] + (ulong)(4 < *(uint *)(plVar8 + 5)) * 0x100,
        *(char *)(plVar8[6] + (ulong)(4 < *(uint *)(plVar8 + 5)) * 0x100) == '\0' ||
        (*(long *)(lVar7 + 8) == 0)))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x30));
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
    if ((*(byte *)(plVar8 + 1) & 1) != 0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if ((int)plVar8[0xd] == 0) {
      bVar10 = 1;
      bVar3 = *(byte *)(plVar8 + 1);
    }
    else {
      lVar7 = (long)(int)plVar8[0xd] * 8;
      plVar6 = (long *)plVar8[0xe];
      do {
        lVar7 = lVar7 + -8;
        bVar10 = *(byte *)(*plVar6 + 0x104) >> 3 & 1;
        if ((*(byte *)(*plVar6 + 0x104) >> 3 & 1) == 0) break;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
      bVar3 = *(byte *)(plVar8 + 1);
    }
    if ((bVar3 & 1) != 0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    if (bVar10 == 0) {
      lVar7 = 3;
      if (*(uint *)(plVar8 + 5) < 4) {
        lVar7 = 0;
      }
      lVar11 = plVar8[6] + lVar7 * 0x40;
      if ((*(char *)(plVar8[6] + lVar7 * 0x40) == '\0') || (*(long *)(lVar11 + 8) == 0)) {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x30));
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    local_9e = 9;
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_a0 = 0x101;
    local_a8 = &PTR_LAB_04ba8bc8;
    local_58 = 0;
    local_c0 = 0;
    puStack_48 = &DAT_0419b684;
    local_98 = *(undefined8 *)(param_1 + 0x148);
    uStack_90 = 0;
    local_88 = param_1 + 0x3c0;
    uStack_80 = 0;
    pcStack_60 = "ClearAllCaches";
    local_54 = 0xffffffff;
    local_b8 = &local_a8;
    uStack_b0 = 0;
    local_50 = local_68;
    FUN_03f45184(*(undefined8 *)(param_1 + 0x1a8),&local_c0);
    puVar4 = PTR_DAT_04bb3350;
    lVar7 = *(long *)(param_1 + 600);
    if (lVar7 == 0) {
      lVar11 = 1;
      plVar8 = *(long **)(param_1 + 0x270);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
      plVar8 = *(long **)(param_1 + 0x270);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if (lVar11 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar11;
    }
    lVar7 = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (lVar7 == 0) {
      lVar11 = 1;
      plVar8 = *(long **)(param_1 + 0x278);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar11 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
      plVar8 = *(long **)(param_1 + 0x278);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if (lVar11 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar11;
    }
    *(undefined8 *)(param_1 + 0x278) = 0;
    if (*(long **)(param_1 + 600) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 600) + 0x20))();
      *(undefined8 *)(param_1 + 600) = 0;
    }
    puVar4 = PTR_DAT_04bb2698;
    pvVar9 = *(void **)(param_1 + 0x1f0);
    iVar2 = *(int *)(param_1 + 0x1e8);
    if (iVar2 != 0) {
      uVar12 = 0;
      do {
        __ptr = *(void **)((long)pvVar9 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
        if (__ptr != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(__ptr);
          }
          else {
            plVar8 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
            }
          }
        }
        uVar1 = uVar12 + 1;
        uVar12 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      pvVar9 = *(void **)(param_1 + 0x1f0);
    }
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(pvVar9);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
        }
      }
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
    }
    if (*(long **)(param_1 + 0x1d0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1c8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (*(long **)(param_1 + 0x1b8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b8) + 0x18))();
    }
    pvVar9 = *(void **)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (pvVar9 != (void *)0x0) {
      *(undefined **)((long)pvVar9 + 0x168) = PTR_DAT_04bdf0a8 + 0x10;
      FUN_03f44154(pvVar9);
      if (*(long *)puVar4 == 0) {
        free(pvVar9);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      FUN_03f44fe0();
      pvVar9 = *(void **)(param_1 + 0x1a8);
      if (pvVar9 != (void *)0x0) {
        FUN_03f44fe0(pvVar9);
        FUN_038e1c80((long)pvVar9 + 200);
        FUN_038e1c80((long)pvVar9 + 0x98);
        FUN_038e1a84((long)pvVar9 + 0x58);
        FUN_038e1a84((long)pvVar9 + 0x18);
        if (*(long *)puVar4 == 0) {
          free(pvVar9);
        }
        else {
          plVar8 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    if (*(long *)(param_1 + 0x1a0) != 0) {
      FUN_03f44fe0();
      pvVar9 = *(void **)(param_1 + 0x1a0);
      if (pvVar9 != (void *)0x0) {
        FUN_03f44fe0(pvVar9);
        FUN_038e1c80((long)pvVar9 + 200);
        FUN_038e1c80((long)pvVar9 + 0x98);
        FUN_038e1a84((long)pvVar9 + 0x58);
        FUN_038e1a84((long)pvVar9 + 0x18);
        if (*(long *)puVar4 == 0) {
          free(pvVar9);
        }
        else {
          plVar8 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,pvVar9);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    FUN_03f40f70(param_1 + 0x488);
    FUN_03f416d0(param_1 + 0x550);
    FUN_03f2a9b0(param_1 + 0x18);
    plVar8 = *(long **)(param_1 + 0x140);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x50))(plVar8,0);
      if (*(long **)(param_1 + 0x140) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x140) + 8))();
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    plVar8 = *(long **)(param_1 + 0x148);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x50))(plVar8,0);
      if (*(long **)(param_1 + 0x148) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x148) + 8))();
      }
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    plVar8 = *(long **)(param_1 + 0x138);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x50))(plVar8,0);
      if (*(long **)(param_1 + 0x138) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x138) + 8))();
      }
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    plVar8 = *(long **)(param_1 + 0x1d8);
    if (plVar8 != (long *)0x0) {
      plVar8[0x10] = (long)&PTR_FUN_04b64b18;
      if (((*(byte *)(plVar8 + 0x13) & 1) != 0) &&
         (pvVar9 = (void *)plVar8[0x11], pvVar9 != (void *)0x0)) {
        if (*(long *)puVar4 == 0) {
          free(pvVar9);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
          }
        }
      }
      *plVar8 = (long)(PTR_DAT_04bdf0e0 + 0x10);
      FUN_038d92c4(plVar8);
      if (*(long *)puVar4 == 0) {
        free(plVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar4,plVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,plVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_038e1a84(param_1 + 0xa30);
  *(undefined ***)(param_1 + 0x998) = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0x9d8) != 7) {
    if (*(long *)(param_1 + 0x9b8) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0x9b8),param_1 + 0x998,1);
    }
    *(undefined8 *)(param_1 + 0x9b8) = 0;
    *(undefined8 *)(param_1 + 0x9b0) = 0;
    *(undefined8 *)(param_1 + 0x9c8) = 0;
    *(undefined8 *)(param_1 + 0x9d0) = 0;
    *(undefined4 *)(param_1 + 0x9d8) = 7;
  }
  FUN_038e1c80(param_1 + 0x9f0);
  FUN_038e31ec(param_1 + 0x918);
  FUN_038e31ec(param_1 + 0x8c8);
  *(undefined ***)(param_1 + 0x820) = &PTR_FUN_04ba8fc0;
  if (*(long *)(param_1 + 0x880) != 0) {
    *(undefined4 *)(param_1 + 0x878) = 0;
    *(undefined8 *)(param_1 + 0x880) = 0;
  }
  if (*(long *)(param_1 + 0x870) != 0) {
    *(undefined4 *)(param_1 + 0x868) = 0;
    *(undefined8 *)(param_1 + 0x870) = 0;
  }
  if (*(long *)(param_1 + 0x8a0) != 0) {
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined8 *)(param_1 + 0x8a0) = 0;
  }
  if (*(long *)(param_1 + 0x890) != 0) {
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined8 *)(param_1 + 0x890) = 0;
  }
  FUN_03f2d620(param_1 + 0x830);
  FUN_03f2d448(param_1 + 0x830);
  FUN_038e1a84(param_1 + 0x7e0);
  FUN_038e1a84(param_1 + 0x788);
  FUN_038b3c54(param_1 + 0x700);
  FUN_038b3c54(param_1 + 0x678);
  FUN_038b3c54(param_1 + 0x5f0);
  FUN_038e1a84(param_1 + 0x5a0);
  FUN_038e1a84(param_1 + 0x4f8);
  FUN_03f40e80(param_1 + 0x488);
  FUN_038e1a84(param_1 + 0x2c0);
  FUN_038e1a84(param_1 + 0x280);
  FUN_038e1a84(param_1 + 0x158);
  FUN_03f2a9b0(param_1 + 0x18);
  FUN_038e1a84(param_1 + 0x88);
  return;
}

