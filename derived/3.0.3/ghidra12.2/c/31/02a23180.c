
void FUN_02a23180(undefined8 *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  byte *pbVar18;
  undefined **local_80;
  long *plStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_FUN_04a99b20;
  lVar15 = DAT_055f6860;
  puVar8 = PTR_DAT_04bb3350;
  if (DAT_055f5f50 != param_1) goto LAB_02a23f7c;
  DAT_055f5f50 = (undefined8 *)0x0;
  plVar11 = (long *)(DAT_055f6860 + 0x19f8a0);
  pbVar1 = (byte *)(DAT_055f6860 + 0x11f9d8);
  puVar2 = (uint *)(DAT_055f6860 + 0xb3890);
  if ((*(byte *)(DAT_055f6860 + 0xb3894) & 1) == 0) {
    lVar16 = *(long *)(DAT_055f6860 + 0xb38a8);
    if (lVar16 == 0) {
      lVar12 = 1;
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)(lVar9 + 0xa8);
      *(long *)(lVar9 + 0xa8) = lVar16;
    }
    FUN_02982f68(lVar15 + 0x122a40);
    FUN_029c9230(lVar15 + 0x63810);
    FUN_029d8ca8(lVar15 + 0x89730);
    puVar7 = PTR_DAT_04bb2698;
    pvVar17 = *(void **)(lVar15 + 0x6d0);
    if (pvVar17 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar17);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar17);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar17);
        }
      }
    }
    pvVar17 = *(void **)(lVar15 + 0x6c8);
    *(undefined8 *)(lVar15 + 0x6d0) = 0;
    if (pvVar17 != (void *)0x0) {
      FUN_038e1a84((long)pvVar17 + 0x30);
      if (*(long *)puVar7 == 0) {
        free(pvVar17);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar7,pvVar17);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar17);
        }
      }
    }
    *(undefined8 *)(lVar15 + 0x6c8) = 0;
    FUN_029cc9f4(*(undefined8 *)(lVar15 + 0x6c0));
    pvVar17 = *(void **)(lVar15 + 0x6c0);
    if (pvVar17 != (void *)0x0) {
      lVar16 = (long)pvVar17 + 0xcc70;
      do {
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != (long)pvVar17 + 0xcc70);
      lVar16 = (long)pvVar17 + 0x35f8;
      do {
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != (long)pvVar17 + 0x35f8);
      lVar16 = (long)pvVar17 + 0x130;
      do {
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != (long)pvVar17 + 0x130);
      FUN_038e1a84(pvVar17);
      if (*(long *)puVar7 == 0) {
        free(pvVar17);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar7,pvVar17);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar17);
        }
      }
    }
    *(undefined8 *)(lVar15 + 0x6c0) = 0;
    pbVar18 = (byte *)(lVar15 + 0x1211d8);
    FUN_0382b080(lVar15 + 0x146628);
    *pbVar1 = *pbVar1 & 0xfd;
    FUN_03f45838(lVar15 + 0x11f9e8);
    if (*(long *)(lVar15 + 0x11f9e0) != 0) {
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar15 + 0x11f9e0),1);
      *(undefined8 *)(lVar15 + 0x11f9e0) = 0;
    }
    *(byte *)(lVar15 + 0x11fa78) = *(byte *)(lVar15 + 0x11fa78) & 0xfd;
    FUN_03f45838(lVar15 + 0x11fa88);
    if (*(long *)(lVar15 + 0x11fa80) != 0) {
      *(byte *)(lVar15 + 0x11fa78) = *(byte *)(lVar15 + 0x11fa78) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar15 + 0x11fa80),1);
      *(undefined8 *)(lVar15 + 0x11fa80) = 0;
    }
    lVar16 = DAT_055f6860;
    puVar3 = (undefined1 *)(DAT_055f6860 + 0xa7680);
    *(undefined4 *)(DAT_055f6860 + 0xa7684) = 0xffffffff;
    *puVar3 = 1;
    *(undefined2 *)(lVar15 + 0x120f60) = 0xffff;
    *(undefined4 *)(lVar16 + 0xa7688) = 0xffffffff;
    *(undefined1 *)(lVar16 + 0xa7681) = 1;
    *(undefined4 *)(lVar15 + 0x120ec0) = 0;
    FUN_029bc9c0(lVar15 + 0xb4568);
    *pbVar18 = *pbVar18 & 0xfd;
    FUN_03f45838(lVar15 + 0x1211e8);
    if (*(long *)(lVar15 + 0x1211e0) != 0) {
      *pbVar18 = *pbVar18 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar15 + 0x1211e0),1);
      *(undefined8 *)(lVar15 + 0x1211e0) = 0;
    }
    FUN_029f6cb0(lVar15 + 0x1211b8);
    FUN_029ffda0(lVar15 + 0x122ad8);
    FUN_03baae70(*(undefined8 *)(DAT_05aebb78 + 0x20),*(undefined8 *)(lVar15 + 0xb4518));
    plVar10 = *(long **)(lVar15 + 0xb4510);
    *(undefined8 *)(lVar15 + 0xb4518) = 0;
    if (plVar10 != (long *)0x0) {
      lVar16 = 0;
      if (DAT_05aebb78 != 0) {
        lVar16 = *(long *)(DAT_05aebb78 + 0x20);
      }
      plVar13 = *(long **)(lVar16 + 0x58);
      if (plVar13 != (long *)(lVar16 + 0x50)) {
        plVar14 = (long *)((long)*(int *)(lVar16 + 100) + (long)plVar10);
        do {
          if (plVar13 == plVar14) {
            if (*plVar14 != 0) {
              *(long *)(*plVar14 + 8) = plVar14[1];
            }
            if ((long *)plVar14[1] != (long *)0x0) {
              *(long *)plVar14[1] = *plVar14;
            }
            *plVar14 = 0;
            plVar14[1] = 0;
            *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
            break;
          }
          plVar13 = (long *)plVar13[1];
        } while (plVar13 != (long *)(lVar16 + 0x50));
      }
      (**(code **)(*plVar10 + 8))();
      *(undefined8 *)(lVar15 + 0xb4510) = 0;
    }
    FUN_02a2075c(lVar15 + 0xb38e8);
    pvVar17 = *(void **)(lVar15 + 0x19f8b0);
    if (pvVar17 != (void *)0x0) {
      local_70 = &LAB_02a53398;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9ae18;
      plStack_78 = plVar11;
      if (*plVar11 == 0) {
        *(undefined4 *)(lVar15 + 0x19f8b8) = 0;
        *plVar11 = 0;
        lVar16 = *(long *)puVar7;
        if (lVar16 != 0) goto LAB_02a235c8;
LAB_02a23600:
        free(pvVar17);
      }
      else {
        FUN_02a533b0(*plVar11,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f8b0);
        *(undefined4 *)(lVar15 + 0x19f8b8) = 0;
        *plVar11 = 0;
        if (pvVar17 != (void *)0x0) {
          lVar16 = *(long *)puVar7;
          if (lVar16 == 0) goto LAB_02a23600;
LAB_02a235c8:
          plVar11 = (long *)FUN_038cb610(lVar16,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      *(undefined4 *)(lVar15 + 0x19f8bc) = 0;
      *(undefined8 *)(lVar15 + 0x19f8a8) = 0;
      *(undefined8 *)(lVar15 + 0x19f8b0) = 0;
    }
    pvVar17 = *(void **)(lVar15 + 0x19f890);
    if (pvVar17 != (void *)0x0) {
      plStack_78 = (long *)(lVar15 + 0x19f880);
      local_70 = &LAB_02a53500;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9ae68;
      if (*plStack_78 == 0) {
        *(undefined4 *)(lVar15 + 0x19f898) = 0;
        *(undefined8 *)(lVar15 + 0x19f880) = 0;
LAB_02a23680:
        if (DAT_05ae7600 == 0) {
          free(pvVar17);
        }
        else {
          plVar11 = (long *)FUN_038cb610(DAT_05ae7600,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      else {
        FUN_02a53510(*plStack_78,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f890);
        *(undefined4 *)(lVar15 + 0x19f898) = 0;
        *(undefined8 *)(lVar15 + 0x19f880) = 0;
        if (pvVar17 != (void *)0x0) goto LAB_02a23680;
      }
      *(undefined4 *)(lVar15 + 0x19f89c) = 0;
      *(undefined8 *)(lVar15 + 0x19f888) = 0;
      *(undefined8 *)(lVar15 + 0x19f890) = 0;
    }
    pvVar17 = *(void **)(lVar15 + 0x19f870);
    if (pvVar17 != (void *)0x0) {
      plStack_78 = (long *)(lVar15 + 0x19f860);
      local_70 = &LAB_02a53500;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9ae68;
      if (*plStack_78 == 0) {
        *(undefined4 *)(lVar15 + 0x19f878) = 0;
        *(undefined8 *)(lVar15 + 0x19f860) = 0;
LAB_02a23720:
        if (DAT_05ae7600 == 0) {
          free(pvVar17);
        }
        else {
          plVar11 = (long *)FUN_038cb610(DAT_05ae7600,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      else {
        FUN_02a53510(*plStack_78,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f870);
        *(undefined4 *)(lVar15 + 0x19f878) = 0;
        *(undefined8 *)(lVar15 + 0x19f860) = 0;
        if (pvVar17 != (void *)0x0) goto LAB_02a23720;
      }
      *(undefined4 *)(lVar15 + 0x19f87c) = 0;
      *(undefined8 *)(lVar15 + 0x19f868) = 0;
      *(undefined8 *)(lVar15 + 0x19f870) = 0;
    }
    puVar7 = PTR_DAT_04bb2698;
    pvVar17 = *(void **)(lVar15 + 0x19f850);
    if (pvVar17 != (void *)0x0) {
      plStack_78 = (long *)(lVar15 + 0x19f840);
      local_70 = &LAB_02a53660;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9aeb8;
      if (*plStack_78 == 0) {
        *(undefined4 *)(lVar15 + 0x19f858) = 0;
        *(undefined8 *)(lVar15 + 0x19f840) = 0;
        lVar16 = *(long *)puVar7;
        if (lVar16 != 0) goto LAB_02a237bc;
LAB_02a237f4:
        free(pvVar17);
      }
      else {
        FUN_02a53670(*plStack_78,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f850);
        *(undefined4 *)(lVar15 + 0x19f858) = 0;
        *(undefined8 *)(lVar15 + 0x19f840) = 0;
        if (pvVar17 != (void *)0x0) {
          lVar16 = *(long *)puVar7;
          if (lVar16 == 0) goto LAB_02a237f4;
LAB_02a237bc:
          plVar11 = (long *)FUN_038cb610(lVar16,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      *(undefined4 *)(lVar15 + 0x19f85c) = 0;
      *(undefined8 *)(lVar15 + 0x19f848) = 0;
      *(undefined8 *)(lVar15 + 0x19f850) = 0;
    }
    pvVar17 = *(void **)(lVar15 + 0x19f830);
    if (pvVar17 != (void *)0x0) {
      plStack_78 = (long *)(lVar15 + 0x19f820);
      local_70 = &LAB_02a537c0;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9af08;
      if (*plStack_78 == 0) {
        *(undefined4 *)(lVar15 + 0x19f838) = 0;
        *(undefined8 *)(lVar15 + 0x19f820) = 0;
        lVar16 = *(long *)puVar7;
        if (lVar16 != 0) goto LAB_02a23858;
LAB_02a23890:
        free(pvVar17);
      }
      else {
        FUN_02a537d0(*plStack_78,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f830);
        *(undefined4 *)(lVar15 + 0x19f838) = 0;
        *(undefined8 *)(lVar15 + 0x19f820) = 0;
        if (pvVar17 != (void *)0x0) {
          lVar16 = *(long *)puVar7;
          if (lVar16 == 0) goto LAB_02a23890;
LAB_02a23858:
          plVar11 = (long *)FUN_038cb610(lVar16,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      *(undefined4 *)(lVar15 + 0x19f83c) = 0;
      *(undefined8 *)(lVar15 + 0x19f828) = 0;
      *(undefined8 *)(lVar15 + 0x19f830) = 0;
    }
    pvVar17 = *(void **)(lVar15 + 0x19f810);
    if (pvVar17 != (void *)0x0) {
      plStack_78 = (long *)(lVar15 + 0x19f800);
      local_70 = &LAB_02a53920;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a9af58;
      if (*plStack_78 == 0) {
        *(undefined4 *)(lVar15 + 0x19f818) = 0;
        *(undefined8 *)(lVar15 + 0x19f800) = 0;
        lVar16 = *(long *)puVar7;
        if (lVar16 != 0) goto LAB_02a238f4;
LAB_02a2392c:
        free(pvVar17);
      }
      else {
        FUN_02a53930(*plStack_78,&local_80);
        pvVar17 = *(void **)(lVar15 + 0x19f810);
        *(undefined4 *)(lVar15 + 0x19f818) = 0;
        *(undefined8 *)(lVar15 + 0x19f800) = 0;
        if (pvVar17 != (void *)0x0) {
          lVar16 = *(long *)puVar7;
          if (lVar16 == 0) goto LAB_02a2392c;
LAB_02a238f4:
          plVar11 = (long *)FUN_038cb610(lVar16,pvVar17);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
          }
        }
      }
      *(undefined4 *)(lVar15 + 0x19f81c) = 0;
      *(undefined8 *)(lVar15 + 0x19f808) = 0;
      *(undefined8 *)(lVar15 + 0x19f810) = 0;
    }
    if (*(long **)(lVar15 + 0x19f798) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f798) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f798) = 0;
    if (*(long **)(lVar15 + 0x19f7a0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7a0) + 0x18))();
    }
    plVar11 = *(long **)(lVar15 + 0x19f790);
    *(undefined8 *)(lVar15 + 0x19f7a0) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))();
    }
    *(long *)(lVar15 + 0x19f790) = 0;
    if (*(long **)(lVar15 + 0x19f7a8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7a8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7a8) = 0;
    if (*(long **)(lVar15 + 0x19f7b0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7b0) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7b0) = 0;
    if (*(long **)(lVar15 + 0x19f7b8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7b8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7b8) = 0;
    if (*(long **)(lVar15 + 0x19f7c0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7c0) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7c0) = 0;
    if (*(long **)(lVar15 + 0x19f7c8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7c8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7c8) = 0;
    if (*(long **)(lVar15 + 0x19f7d0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7d0) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7d0) = 0;
    if (*(long **)(lVar15 + 0x19f7d8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7d8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7d8) = 0;
    if (*(long **)(lVar15 + 0x19f7e0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7e0) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7e0) = 0;
    if (*(long **)(lVar15 + 0x19f7e8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7e8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7e8) = 0;
    if (*(long **)(lVar15 + 0x19f7f0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7f0) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7f0) = 0;
    if (*(long **)(lVar15 + 0x19f7f8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x19f7f8) + 0x18))();
    }
    *(undefined8 *)(lVar15 + 0x19f7f8) = 0;
    if (*(long *)(lVar15 + 0x19f930) != 0) {
      FUN_03f42ca4(*(long *)(lVar15 + 0x19f930),lVar15 + 0x19f910,1);
    }
    if (lVar12 != 1) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      *(long *)(lVar16 + 0xa8) = lVar12;
    }
    (**(code **)(**(long **)(lVar15 + 0xb38a8) + 0x20))();
    uVar5 = *puVar2;
    uVar6 = *(uint *)(lVar15 + 0xb3894);
    *(undefined8 *)(lVar15 + 0xb38a8) = 0;
    *puVar2 = uVar5 | 1;
    *(uint *)(lVar15 + 0xb3894) = uVar6 | 1;
  }
  plVar11 = (long *)(lVar15 + 0xa7750);
  plVar10 = (long *)(lVar15 + 0x88728);
  *(long *)(lVar15 + 0x19f910) = (long)(PTR_DAT_04bdf1b8 + 0x10);
  if (*(int *)(lVar15 + 0x19f950) != 7) {
    if (*(long *)(lVar15 + 0x19f930) != 0) {
      FUN_03f42ca4(*(long *)(lVar15 + 0x19f930),(long *)(lVar15 + 0x19f910),1);
    }
    *(undefined8 *)(lVar15 + 0x19f928) = 0;
    *(undefined8 *)(lVar15 + 0x19f930) = 0;
    *(undefined8 *)(lVar15 + 0x19f940) = 0;
    *(undefined8 *)(lVar15 + 0x19f948) = 0;
    *(undefined4 *)(lVar15 + 0x19f950) = 7;
  }
  FUN_038e1c80(lVar15 + 0x19f968);
  FUN_038e1c80(lVar15 + 0x19f8d8);
  lVar16 = lVar15 + 0x19e180;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0x19e180);
  FUN_03828ae0(lVar15 + 0x146628);
  FUN_038e1a84(FUN_00146528 + lVar15);
  FUN_029fe514(lVar15 + 0x122f88);
  FUN_029ff1a8(lVar15 + 0x122ad8);
  FUN_02982e34(lVar15 + 0x122a40);
  FUN_02a022f4(lVar15 + 0x1211c8);
  FUN_038e1a84(lVar15 + 0x121108);
  lVar16 = DAT_055f6860;
  puVar3 = (undefined1 *)(DAT_055f6860 + 0xa7680);
  *(undefined4 *)(DAT_055f6860 + 0xa7684) = 0xffffffff;
  *puVar3 = 1;
  *(undefined2 *)(lVar15 + 0x120f60) = 0xffff;
  *(undefined4 *)(lVar16 + 0xa7688) = 0xffffffff;
  *(undefined1 *)(lVar16 + 0xa7681) = 1;
  *(undefined4 *)(lVar15 + 0x120ec0) = 0;
  FUN_038e1a84(lVar15 + 0x120ee0);
  lVar16 = lVar15 + 0x11fbe8;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0x11fbe8);
  FUN_03838610(lVar15 + 0x11fbb8);
  FUN_03838610(lVar15 + 0x11fb88);
  FUN_03838610(lVar15 + 0x11fb58);
  FUN_03838610(lVar15 + 0x11fb28);
  FUN_03838610(lVar15 + 0x11faf8);
  FUN_03838610(lVar15 + 0x11fac8);
  pbVar18 = (byte *)(lVar15 + 0x11fa78);
  *pbVar18 = *pbVar18 & 0xfd;
  FUN_03f45838(lVar15 + 0x11fa88);
  if (*(long *)(lVar15 + 0x11fa80) != 0) {
    *(byte *)(lVar15 + 0x11fa78) = *(byte *)(lVar15 + 0x11fa78) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar15 + 0x11fa80),1);
    *(undefined8 *)(lVar15 + 0x11fa80) = 0;
  }
  FUN_03838610(pbVar18);
  *pbVar1 = *pbVar1 & 0xfd;
  FUN_03f45838(lVar15 + 0x11f9e8);
  if (*(long *)(lVar15 + 0x11f9e0) != 0) {
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar15 + 0x11f9e0),1);
    *(undefined8 *)(lVar15 + 0x11f9e0) = 0;
  }
  FUN_03838610(pbVar1);
  FUN_038e1a84(lVar15 + 0x11f990);
  FUN_038e1a84(lVar15 + 0x11e618);
  FUN_029bb0c0(lVar15 + 0xb4568);
  FUN_03baae70(*(undefined8 *)(DAT_05aebb78 + 0x20),*(undefined8 *)(lVar15 + 0xb4518));
  plVar13 = *(long **)(lVar15 + 0xb4510);
  *(undefined8 *)(lVar15 + 0xb4518) = 0;
  if (plVar13 != (long *)0x0) {
    lVar16 = 0;
    if (DAT_05aebb78 != 0) {
      lVar16 = *(long *)(DAT_05aebb78 + 0x20);
    }
    plVar14 = *(long **)(lVar16 + 0x58);
    if (plVar14 != (long *)(lVar16 + 0x50)) {
      plVar4 = (long *)((long)*(int *)(lVar16 + 100) + (long)plVar13);
      do {
        if (plVar14 == plVar4) {
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
          break;
        }
        plVar14 = (long *)plVar14[1];
      } while (plVar14 != (long *)(lVar16 + 0x50));
    }
    (**(code **)(*plVar13 + 8))();
    *(undefined8 *)(lVar15 + 0xb4510) = 0;
  }
  FUN_038e1a84(lVar15 + 0xb43e8);
  FUN_038e1a84(lVar15 + 0xb43a8);
  lVar16 = lVar15 + 0xb3b78;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0xb3b78);
  FUN_038e1a84(lVar15 + 0xb3b38);
  FUN_03f2d448(lVar15 + 0xb38b0);
  FUN_038e1a84(lVar15 + 0xb37d8);
  lVar16 = lVar15 + 0xb3770;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0xb3770);
  local_70 = PTR_LAB_04bc42c0;
  uStack_68 = 0;
  local_80 = (undefined **)(PTR_DAT_04bc42d0 + 0x10);
  plStack_78 = plVar11;
  if (*plVar11 != 0) {
    FUN_02a0dba0(*plVar11,&local_80);
  }
  FUN_02a0e9d0(lVar15 + 0x8b928);
  FUN_029d8a40(lVar15 + 0x89730);
  FUN_038e1a84(lVar15 + 0x896f0);
  FUN_038e1a84(lVar15 + 0x896a8);
  FUN_038e1a84(lVar15 + 0x89640);
  FUN_038e1a84(lVar15 + 0x89588);
  local_70 = &LAB_029ca214;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04a98400;
  plStack_78 = plVar10;
  if (*plVar10 != 0) {
    FUN_029ca220(*plVar10,&local_80);
  }
  lVar16 = lVar15 + 0x88248;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0x88248);
  lVar16 = lVar15 + 0x87728;
  do {
    lVar16 = *(long *)(lVar16 + 8);
  } while (lVar16 != lVar15 + 0x87728);
  FUN_038e1a84(lVar15 + 0x63818);
  if (*(char *)(lVar15 + 0x63578) != '\0') {
    *(char *)(lVar15 + 0x63578) = '\0';
  }
  if (*(char *)(lVar15 + 0x2e6c) != '\0') {
    *(char *)(lVar15 + 0x2e6c) = '\0';
  }
  FUN_038e1a84(lVar15 + 0x980);
  FUN_038e1a84(lVar15 + 2000);
  FUN_038e1a84(lVar15 + 0x780);
  DAT_055f6860 = 0;
LAB_02a23f7c:
  lVar15 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar15 != 0) {
    if (lVar15 == 1) {
      return;
    }
    if ((*(uint *)(lVar15 + 0xd0) & 1) == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar15 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar15 + 0xb0));
    }
    plVar11 = (long *)((long)*(int *)(lVar15 + 0x84) + (long)param_1);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + -1;
    if (lVar16 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

