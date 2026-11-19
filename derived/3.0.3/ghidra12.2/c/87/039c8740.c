
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039c8740(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  char *pcVar20;
  long local_cb0;
  undefined8 local_ca8;
  long local_898;
  undefined8 local_890;
  undefined *local_480;
  char *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  FUN_006e9454(&local_480,"%s.%s","common",&DAT_040bd1ec);
  uVar6 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","common","sharc");
  uVar7 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  lVar1 = param_1 + 8;
  FUN_03908960(lVar1,uVar6,uVar7,4,param_3);
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "g_buffer";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c892c:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c894c;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c892c;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c892c;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c892c;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039c894c:
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "GBufferContext";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "GBufferContext";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_039064b0(lVar17,5,param_3);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + 0x10) = "cAlbedo";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x68) + 0x10) = "cAlbedo";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + (ulong)(1 < *(uint *)(lVar17 + 0x60)) * 0x18 + 0x10) =
       "cNormal";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar10 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x68) + (ulong)(1 < *(uint *)(lVar13 + 0x60)) * 0x18 + 0x10) =
           "cNormal";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x60) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cMaterialID";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x30;
      if (*(uint *)(lVar14 + 0x60) < 3) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x68) + lVar13 + 0x10) = "cMaterialID";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x48;
  if (*(uint *)(lVar17 + 0x60) < 4) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cEmission";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x48;
      if (*(uint *)(lVar13 + 0x60) < 4) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x68) + lVar10 + 0x10) = "cEmission";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  local_478 = "g_buffer_depth_mask";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  iVar16 = *(int *)(param_1 + 0x38);
  if (iVar16 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c8ce0:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c8d00;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c8ce0;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c8ce0;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c8ce0;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
    lVar17 = 0;
  }
LAB_039c8d00:
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "GBufferContext";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "GBufferContext";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_039064b0(lVar17,5,param_3);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + 0x10) = "cAlbedo";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x68) + 0x10) = "cAlbedo";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + (ulong)(1 < *(uint *)(lVar17 + 0x60)) * 0x18 + 0x10) =
       "cNormal";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar10 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x68) + (ulong)(1 < *(uint *)(lVar13 + 0x60)) * 0x18 + 0x10) =
           "cNormal";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x60) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cMaterialID";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x30;
      if (*(uint *)(lVar14 + 0x60) < 3) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x68) + lVar13 + 0x10) = "cMaterialID";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x48;
  if (*(uint *)(lVar17 + 0x60) < 4) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cEmission";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x48;
      if (*(uint *)(lVar13 + 0x60) < 4) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x68) + lVar10 + 0x10) = "cEmission";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "clear_material_id";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c9060:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c907c;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c9060;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c9060;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c9060;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
    lVar17 = 0;
  }
LAB_039c907c:
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "GBufferContext";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar17 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "GBufferContext";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "render_buffer_depth";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c91fc:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c921c;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c91fc;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c91fc;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c91fc;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039c921c:
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "Context";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "Context";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_039064b0(lVar17,3,param_3);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + 0x10) = "cDepth";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x68) + 0x10) = "cDepth";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x60) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cHalfNormalizedLinearDepth";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x30;
      if (*(uint *)(lVar13 + 0x60) < 3) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x68) + lVar10 + 0x10) = "cHalfNormalizedLinearDepth";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  local_478 = "render_buffer_color";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  iVar16 = *(int *)(param_1 + 0x38);
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c94ac:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c94cc;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c94ac;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c94ac;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c94ac;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039c94cc:
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "Context";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "Context";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_039064b0(lVar17,3,param_3);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + (ulong)(1 < *(uint *)(lVar17 + 0x60)) * 0x18 + 0x10) =
       "cColor";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar10 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x68) + (ulong)(1 < *(uint *)(lVar13 + 0x60)) * 0x18 + 0x10) =
           "cColor";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + 0x10) = "cDepth";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x68) + 0x10) = "cDepth";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x60) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cHalfNormalizedLinearDepth";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x30;
      if (*(uint *)(lVar13 + 0x60) < 3) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x68) + lVar10 + 0x10) = "cHalfNormalizedLinearDepth";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "ffl_simple";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c97ac:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c97cc;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c97ac;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c97ac;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c97ac;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039c97cc:
  FUN_039064b0(lVar17,0x21,param_3);
  FUN_03906b40(lVar17,0xf,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x300;
  if (*(uint *)(lVar17 + 0x60) < 0x21) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x68) + lVar10 + 0x10) = "cTexAlbedo";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x300;
      if (*(uint *)(lVar13 + 0x60) < 0x21) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x68) + lVar10 + 0x10) = "cTexAlbedo";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "expansion_color";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039c999c:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039c99bc;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039c999c;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039c999c;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039c999c;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039c99bc:
  FUN_039064b0(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x68) + 0x10) = "cColor";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x68) + 0x10) = "cColor";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_03906170(lVar17,10,param_3);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x38) + 0x10) = "cInvViewport";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x38) + 0x10) = "cInvViewport";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x38) + (ulong)(1 < *(uint *)(lVar17 + 0x30)) * 0x18 + 0x10) =
       "cTexcoordOffset[0]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar10 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x38) + (ulong)(1 < *(uint *)(lVar13 + 0x30)) * 0x18 + 0x10) =
           "cTexcoordOffset[0]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x30) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[1]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x30;
      if (*(uint *)(lVar14 + 0x30) < 3) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[1]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x48;
  if (*(uint *)(lVar17 + 0x30) < 4) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[2]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x48;
      if (*(uint *)(lVar14 + 0x30) < 4) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[2]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x60;
  if (*(uint *)(lVar17 + 0x30) < 5) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[3]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x60;
      if (*(uint *)(lVar14 + 0x30) < 5) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[3]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x78;
  if (*(uint *)(lVar17 + 0x30) < 6) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[4]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x78;
      if (*(uint *)(lVar14 + 0x30) < 6) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[4]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x90;
  if (*(uint *)(lVar17 + 0x30) < 7) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[5]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0x90;
      if (*(uint *)(lVar14 + 0x30) < 7) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[5]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0xa8;
  if (*(uint *)(lVar17 + 0x30) < 8) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[6]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0xa8;
      if (*(uint *)(lVar14 + 0x30) < 8) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[6]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0xc0;
  if (*(uint *)(lVar17 + 0x30) < 9) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[7]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar14 = lVar10 + (long)iVar18 * 0x150;
      lVar13 = 0xc0;
      if (*(uint *)(lVar14 + 0x30) < 9) {
        lVar13 = 0;
      }
      *(char **)(*(long *)(lVar14 + 0x38) + lVar13 + 0x10) = "cTexcoordOffset[7]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0xd8;
  if (*(uint *)(lVar17 + 0x30) < 10) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[8]";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0xd8;
      if (*(uint *)(lVar13 + 0x30) < 10) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x38) + lVar10 + 0x10) = "cTexcoordOffset[8]";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
LAB_039c9f54:
  switch(iVar16) {
  case 0:
    iVar18 = *(int *)(param_1 + 0x38);
    local_478 = "sh_vs_quad";
    local_480 = puVar3;
    if (iVar18 != 0) {
      lVar17 = *(long *)(param_1 + 0x40);
      uVar9 = 0;
      iVar12 = 0;
      do {
        plVar19 = *(long **)(lVar17 + (long)iVar12 * 0x150 + 8);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pcVar20 = (char *)plVar19[1];
        (**(code **)(local_480 + 0x18))(&local_480);
        if (pcVar20 == local_478) goto LAB_039ca290;
        uVar11 = 0;
        bVar5 = true;
        do {
          lVar10 = plVar19[1] + 1 + uVar11;
          cVar4 = *(char *)(lVar10 + -1);
          if (cVar4 != local_478[uVar11]) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_039ca290;
            break;
          }
          cVar4 = *(char *)(plVar19[1] + 1 + uVar11);
          if (cVar4 != local_478[uVar11 + 1]) break;
          if (cVar4 == '\0') goto LAB_039ca290;
          cVar4 = *(char *)(lVar10 + 1);
          if (cVar4 != local_478[uVar11 + 2]) break;
          if (cVar4 == '\0') goto LAB_039ca290;
          bVar5 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        iVar12 = iVar12 + 1;
        uVar9 = uVar9 + 1;
      } while (iVar18 != iVar12);
      goto LAB_039ca4ec;
    }
LAB_039ca09c:
    lVar17 = 0;
    goto LAB_039ca2b4;
  case 1:
    local_480 = PTR_DAT_04bb2020 + 0x10;
    local_478 = "sh_ps_quad";
    iVar18 = *(int *)(param_1 + 0x38);
    if (iVar18 == 0) goto LAB_039ca09c;
    lVar17 = *(long *)(param_1 + 0x40);
    uVar9 = 0;
    iVar12 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar12 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) goto LAB_039ca290;
      uVar11 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar11;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar11]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039ca290;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar11);
        if (cVar4 != local_478[uVar11 + 1]) break;
        if (cVar4 == '\0') goto LAB_039ca290;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar11 + 2]) break;
        if (cVar4 == '\0') goto LAB_039ca290;
        bVar5 = uVar11 < 0x7fffe;
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      iVar12 = iVar12 + 1;
      uVar9 = uVar9 + 1;
    } while (iVar18 != iVar12);
LAB_039ca4ec:
    lVar17 = 0;
    goto LAB_039ca2b4;
  case 2:
    lVar17 = *(long *)(param_1 + 0x40);
    local_480 = PTR_DAT_04bb2020 + 0x10;
    local_478 = "probe_color";
    iVar18 = *(int *)(param_1 + 0x38);
    if (iVar18 == 0) {
      uVar11 = 0;
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = 0;
      iVar12 = 0;
      do {
        plVar19 = *(long **)(lVar17 + (long)iVar12 * 0x150 + 8);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pcVar20 = (char *)plVar19[1];
        (**(code **)(local_480 + 0x18))(&local_480);
        if (pcVar20 == local_478) goto LAB_039ca508;
        uVar11 = 0;
        bVar5 = true;
        do {
          lVar10 = plVar19[1] + 1 + uVar11;
          cVar4 = *(char *)(lVar10 + -1);
          if (cVar4 != local_478[uVar11]) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_039ca508;
            break;
          }
          cVar4 = *(char *)(plVar19[1] + 1 + uVar11);
          if (cVar4 != local_478[uVar11 + 1]) break;
          if (cVar4 == '\0') goto LAB_039ca508;
          cVar4 = *(char *)(lVar10 + 1);
          if (cVar4 != local_478[uVar11 + 2]) break;
          if (cVar4 == '\0') goto LAB_039ca508;
          bVar5 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        iVar12 = iVar12 + 1;
        uVar9 = uVar9 + 1;
      } while (iVar18 != iVar12);
      uVar9 = 0xffffffff;
LAB_039ca508:
      uVar11 = (ulong)*(uint *)(param_1 + 0x38);
      lVar17 = *(long *)(param_1 + 0x40);
    }
    lVar17 = lVar17 + uVar9 * 0x150;
    if (uVar11 <= uVar9) {
      lVar17 = 0;
    }
    FUN_03906b40(lVar17,3,param_3);
    puVar2 = (uint *)(lVar17 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "Camera";
    iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
    if (iVar18 != 0) {
      lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
      iVar12 = 0;
      do {
        *(char **)(*(long *)(lVar10 + (long)iVar12 * 0x150 + 0x48) + 0x10) = "Camera";
        iVar12 = iVar12 + 1;
      } while (iVar18 != iVar12);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(char **)(*(long *)(lVar17 + 0x48) + (ulong)(1 < *(uint *)(lVar17 + 0x40)) * 0x18 + 0x10) =
         "ProbeWorldPosScale";
    iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
    if (iVar18 != 0) {
      lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
      iVar12 = 0;
      do {
        lVar13 = lVar10 + (long)iVar12 * 0x150;
        *(char **)(*(long *)(lVar13 + 0x48) + (ulong)(1 < *(uint *)(lVar13 + 0x40)) * 0x18 + 0x10) =
             "ProbeWorldPosScale";
        iVar12 = iVar12 + 1;
      } while (iVar18 != iVar12);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = 0x30;
    if (*(uint *)(lVar17 + 0x40) < 3) {
      lVar10 = 0;
    }
    *(char **)(*(long *)(lVar17 + 0x48) + lVar10 + 0x10) = "ProbeAttribute";
    iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
    if (iVar18 != 0) {
      lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
      iVar12 = 0;
      do {
        lVar13 = lVar17 + (long)iVar12 * 0x150;
        lVar10 = 0x30;
        if (*(uint *)(lVar13 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar13 + 0x48) + lVar10 + 0x10) = "ProbeAttribute";
        iVar12 = iVar12 + 1;
      } while (iVar18 != iVar12);
    }
    break;
  case 3:
    goto switchD_039c9f74_caseD_3;
  default:
    FUN_03906b40(0,3,param_3);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x14,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        _DAT_00000014 = _DAT_00000014 & 0xfffffffb | 4;
      }
    } while (cVar4 != '\0');
    *(char **)(_DAT_00000048 + 0x10) = "Camera";
    iVar18 = *(int *)(_DAT_00000008 + 0x20);
    if (iVar18 != 0) {
      lVar17 = *(long *)(_DAT_00000008 + 0x28);
      iVar12 = 0;
      do {
        *(char **)(*(long *)(lVar17 + (long)iVar12 * 0x150 + 0x48) + 0x10) = "Camera";
        iVar12 = iVar12 + 1;
      } while (iVar18 != iVar12);
    }
  }
LAB_039c9f50:
  iVar16 = iVar16 + 1;
  goto LAB_039c9f54;
LAB_039ca290:
  lVar17 = *(long *)(param_1 + 0x40) + uVar9 * 0x150;
  if (*(uint *)(param_1 + 0x38) <= uVar9) {
    lVar17 = 0;
  }
LAB_039ca2b4:
  FUN_03906b40(lVar17,3,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "Camera";
  iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar18 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar12 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar12 * 0x150 + 0x48) + 0x10) = "Camera";
      iVar12 = iVar12 + 1;
    } while (iVar18 != iVar12);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + (ulong)(1 < *(uint *)(lVar17 + 0x40)) * 0x18 + 0x10) =
       "ProbeWorldPosScale";
  iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar18 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar12 = 0;
    do {
      lVar13 = lVar10 + (long)iVar12 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x48) + (ulong)(1 < *(uint *)(lVar13 + 0x40)) * 0x18 + 0x10) =
           "ProbeWorldPosScale";
      iVar12 = iVar12 + 1;
    } while (iVar18 != iVar12);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x40) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x48) + lVar10 + 0x10) = "ProbeSH";
  iVar18 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar18 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar12 = 0;
    do {
      lVar13 = lVar17 + (long)iVar12 * 0x150;
      lVar10 = 0x30;
      if (*(uint *)(lVar13 + 0x40) < 3) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x48) + lVar10 + 0x10) = "ProbeSH";
      iVar12 = iVar12 + 1;
    } while (iVar18 != iVar12);
  }
  goto LAB_039c9f50;
switchD_039c9f74_caseD_3:
  lVar17 = *(long *)(param_1 + 0x40);
  local_478 = "voxel_color";
  iVar16 = *(int *)(param_1 + 0x38);
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 == 0) {
    uVar8 = 0;
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) goto LAB_039ca7e4;
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039ca7e4;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039ca7e4;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039ca7e4;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
    uVar15 = 0xffffffff;
LAB_039ca7e4:
    uVar8 = *(uint *)(param_1 + 0x38);
    lVar17 = *(long *)(param_1 + 0x40);
  }
  lVar17 = lVar17 + (ulong)uVar15 * 0x150;
  if (uVar8 <= uVar15) {
    lVar17 = 0;
  }
  FUN_03906b40(lVar17,3,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + 0x10) = "Camera";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = "Camera";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(char **)(*(long *)(lVar17 + 0x48) + (ulong)(1 < *(uint *)(lVar17 + 0x40)) * 0x18 + 0x10) =
       "VoxelWorldPosSize";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar10 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar13 + 0x48) + (ulong)(1 < *(uint *)(lVar13 + 0x40)) * 0x18 + 0x10) =
           "VoxelWorldPosSize";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = 0x30;
  if (*(uint *)(lVar17 + 0x40) < 3) {
    lVar10 = 0;
  }
  *(char **)(*(long *)(lVar17 + 0x48) + lVar10 + 0x10) = "VoxelAttribute";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar13 = lVar17 + (long)iVar18 * 0x150;
      lVar10 = 0x30;
      if (*(uint *)(lVar13 + 0x40) < 3) {
        lVar10 = 0;
      }
      *(char **)(*(long *)(lVar13 + 0x48) + lVar10 + 0x10) = "VoxelAttribute";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "clear_geometry_culling";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039caa7c:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039caa9c;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039caa7c;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039caa7c;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039caa7c;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039caa9c:
  FUN_03906e80(lVar17,1,param_3);
  *(char **)(*(long *)(lVar17 + 0x58) + 0x10) = "ClearInfo";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar17 + (long)iVar18 * 0x150 + 0x58) + 0x10) = "ClearInfo";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  iVar16 = *(int *)(param_1 + 0x38);
  local_478 = "analyze_miplevel";
  local_480 = PTR_DAT_04bb2020 + 0x10;
  if (iVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x40);
    uVar15 = 0;
    iVar18 = 0;
    do {
      plVar19 = *(long **)(lVar17 + (long)iVar18 * 0x150 + 8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcVar20 = (char *)plVar19[1];
      (**(code **)(local_480 + 0x18))(&local_480);
      if (pcVar20 == local_478) {
LAB_039cac0c:
        lVar17 = *(long *)(param_1 + 0x40) + (ulong)uVar15 * 0x150;
        if (*(uint *)(param_1 + 0x38) <= uVar15) {
          lVar17 = 0;
        }
        goto LAB_039cac2c;
      }
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar10 = plVar19[1] + 1 + uVar9;
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != local_478[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_039cac0c;
          break;
        }
        cVar4 = *(char *)(plVar19[1] + 1 + uVar9);
        if (cVar4 != local_478[uVar9 + 1]) break;
        if (cVar4 == '\0') goto LAB_039cac0c;
        cVar4 = *(char *)(lVar10 + 1);
        if (cVar4 != local_478[uVar9 + 2]) break;
        if (cVar4 == '\0') goto LAB_039cac0c;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      iVar18 = iVar18 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar16 != iVar18);
  }
  lVar17 = 0;
LAB_039cac2c:
  FUN_03906e80(lVar17,1,param_3);
  *(undefined **)(*(long *)(lVar17 + 0x58) + 0x10) = &DAT_040dc5ab;
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(undefined **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x58) + 0x10) = &DAT_040dc5ab;
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_03906b40(lVar17,1,param_3);
  puVar2 = (uint *)(lVar17 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined **)(*(long *)(lVar17 + 0x48) + 0x10) = &DAT_04083f7e;
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(undefined **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x48) + 0x10) = &DAT_04083f7e;
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_039067f0(lVar17,2,param_3);
  *(char **)(*(long *)(lVar17 + 0x78) + 0x10) = "color_image";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar10 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      *(char **)(*(long *)(lVar10 + (long)iVar18 * 0x150 + 0x78) + 0x10) = "color_image";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  *(char **)(*(long *)(lVar17 + 0x78) + (ulong)(1 < *(uint *)(lVar17 + 0x70)) * 0x18 + 0x10) =
       "depth_image";
  iVar16 = *(int *)(*(long *)(lVar17 + 8) + 0x20);
  if (iVar16 != 0) {
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
    iVar18 = 0;
    do {
      lVar10 = lVar17 + (long)iVar18 * 0x150;
      *(char **)(*(long *)(lVar10 + 0x78) + (ulong)(1 < *(uint *)(lVar10 + 0x70)) * 0x18 + 0x10) =
           "depth_image";
      iVar18 = iVar18 + 1;
    } while (iVar16 != iVar18);
  }
  FUN_03909d70(lVar1);
  FUN_03909e50(lVar1,*(ushort *)(param_1 + 0x4e) & 1);
  if (param_4 != 0) {
    FUN_006e9454(&local_cb0,"%s_%s","detail","folder");
    local_6d = 0;
    local_478 = local_46c;
    local_470 = 0x400;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","detail",local_ca8);
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
  }
  return;
}

