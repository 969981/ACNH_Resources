
void FUN_0399a6f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined *local_70;
  undefined *local_68;
  
  lVar14 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    iVar3 = *(int *)(param_1 + 0x30);
    local_68 = (&PTR_s_sky_transmittance_04b69938)[lVar14 * 2];
    local_70 = puVar1;
    if (iVar3 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(param_1 + 0x38);
      uVar15 = 0;
      iVar9 = 0;
      do {
        plVar12 = *(long **)(lVar16 + (long)iVar9 * 0x150 + 8);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        puVar13 = (undefined *)plVar12[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (puVar13 == local_68) {
LAB_0399a880:
          lVar16 = *(long *)(param_1 + 0x38) + uVar15 * 0x150;
          if (*(uint *)(param_1 + 0x30) <= uVar15) {
            lVar16 = 0;
          }
          goto LAB_0399a8a4;
        }
        uVar7 = 0;
        bVar6 = true;
        do {
          lVar8 = plVar12[1] + 1 + uVar7;
          cVar5 = *(char *)(lVar8 + -1);
          if (cVar5 != local_68[uVar7]) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_0399a880;
            break;
          }
          cVar5 = *(char *)(plVar12[1] + 1 + uVar7);
          if (cVar5 != local_68[uVar7 + 1]) break;
          if (cVar5 == '\0') goto LAB_0399a880;
          cVar5 = *(char *)(lVar8 + 1);
          if (cVar5 != local_68[uVar7 + 2]) break;
          if (cVar5 == '\0') goto LAB_0399a880;
          bVar6 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        iVar9 = iVar9 + 1;
        uVar15 = uVar15 + 1;
      } while (iVar3 != iVar9);
      lVar16 = 0;
    }
LAB_0399a8a4:
    uVar4 = (&DAT_04b69930)[lVar14 * 4];
    if (uVar4 < 4) {
      FUN_039064b0(lVar16,5,param_2);
      FUN_03906b40(lVar16,2,param_2);
      puVar2 = (uint *)(lVar16 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + 0x10) = "cTexTransmittance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x68) + 0x10) = "cTexTransmittance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + (ulong)(1 < *(uint *)(lVar16 + 0x60)) * 0x18 + 0x10) =
           "cTexDeltaE";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar8 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 + 0x10)
               = "cTexDeltaE";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x30;
      if (*(uint *)(lVar16 + 0x60) < 3) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexDeltaJ";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x30;
          if (*(uint *)(lVar11 + 0x60) < 3) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexDeltaJ";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x48;
      if (*(uint *)(lVar16 + 0x60) < 4) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexDeltaSR";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x48;
          if (*(uint *)(lVar11 + 0x60) < 4) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexDeltaSR";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x60;
      if (*(uint *)(lVar16 + 0x60) < 5) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexDeltaSM";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x60;
          if (*(uint *)(lVar11 + 0x60) < 5) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexDeltaSM";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + 0x10) = "SizeInfo";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x48) + 0x10) = "SizeInfo";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + (ulong)(1 < *(uint *)(lVar16 + 0x40)) * 0x18 + 0x10) =
           "Config";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar8 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar10 + 0x48) + (ulong)(1 < *(uint *)(lVar10 + 0x40)) * 0x18 + 0x10)
               = "Config";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
    }
    if (uVar4 - 4 < 5) {
      FUN_039064b0(lVar16,7,param_2);
      FUN_03906b40(lVar16,2,param_2);
      puVar2 = (uint *)(lVar16 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + 0x10) = "cTexDeltaE";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x68) + 0x10) = "cTexDeltaE";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + (ulong)(1 < *(uint *)(lVar16 + 0x60)) * 0x18 + 0x10) =
           "cTexDeltaJ";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar8 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 + 0x10)
               = "cTexDeltaJ";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x30;
      if (*(uint *)(lVar16 + 0x60) < 3) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexDeltaSR";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x30;
          if (*(uint *)(lVar11 + 0x60) < 3) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexDeltaSR";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x48;
      if (*(uint *)(lVar16 + 0x60) < 4) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexDeltaSM";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x48;
          if (*(uint *)(lVar11 + 0x60) < 4) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexDeltaSM";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x60;
      if (*(uint *)(lVar16 + 0x60) < 5) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexInscatter";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x60;
          if (*(uint *)(lVar11 + 0x60) < 5) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexInscatter";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x90;
      if (*(uint *)(lVar16 + 0x60) < 7) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexTransmittance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x90;
          if (*(uint *)(lVar11 + 0x60) < 7) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexTransmittance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x78;
      if (*(uint *)(lVar16 + 0x60) < 6) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexIrradiance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x78;
          if (*(uint *)(lVar11 + 0x60) < 6) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexIrradiance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + 0x10) = "SizeInfo";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x48) + 0x10) = "SizeInfo";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + (ulong)(1 < *(uint *)(lVar16 + 0x40)) * 0x18 + 0x10) =
           "RenderInfo";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar8 = lVar16 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar8 + 0x48) + (ulong)(1 < *(uint *)(lVar8 + 0x40)) * 0x18 + 0x10) =
               "RenderInfo";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
    }
    else if (uVar4 - 9 < 2) {
      FUN_039064b0(lVar16,10,param_2);
      FUN_03906b40(lVar16,3,param_2);
      puVar2 = (uint *)(lVar16 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + 0x10) = "cTexColor";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x68) + 0x10) = "cTexColor";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x68) + (ulong)(1 < *(uint *)(lVar16 + 0x60)) * 0x18 + 0x10) =
           "cTexDepth";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar8 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 + 0x10)
               = "cTexDepth";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x30;
      if (*(uint *)(lVar16 + 0x60) < 3) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexTransmittance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x30;
          if (*(uint *)(lVar11 + 0x60) < 3) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexTransmittance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x48;
      if (*(uint *)(lVar16 + 0x60) < 4) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexIrradiance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x48;
          if (*(uint *)(lVar11 + 0x60) < 4) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexIrradiance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x60;
      if (*(uint *)(lVar16 + 0x60) < 5) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexInscatter";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x60;
          if (*(uint *)(lVar11 + 0x60) < 5) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexInscatter";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x78;
      if (*(uint *)(lVar16 + 0x60) < 6) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexBakedInscatter";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x78;
          if (*(uint *)(lVar11 + 0x60) < 6) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexBakedInscatter";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x90;
      if (*(uint *)(lVar16 + 0x60) < 7) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexBakedIrradiance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0x90;
          if (*(uint *)(lVar11 + 0x60) < 7) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexBakedIrradiance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0xa8;
      if (*(uint *)(lVar16 + 0x60) < 8) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexBakedRangeTransmittance";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0xa8;
          if (*(uint *)(lVar11 + 0x60) < 8) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexBakedRangeTransmittance";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0xc0;
      if (*(uint *)(lVar16 + 0x60) < 9) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexFogDensity";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0xc0;
          if (*(uint *)(lVar11 + 0x60) < 9) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexFogDensity";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0xd8;
      if (*(uint *)(lVar16 + 0x60) < 10) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x68) + lVar8 + 0x10) = "cTexCloud";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar11 = lVar8 + (long)iVar9 * 0x150;
          lVar10 = 0xd8;
          if (*(uint *)(lVar11 + 0x60) < 10) {
            lVar10 = 0;
          }
          *(char **)(*(long *)(lVar11 + 0x68) + lVar10 + 0x10) = "cTexCloud";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + 0x10) = "SizeInfo";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          *(char **)(*(long *)(lVar8 + (long)iVar9 * 0x150 + 0x48) + 0x10) = "SizeInfo";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(char **)(*(long *)(lVar16 + 0x48) + (ulong)(1 < *(uint *)(lVar16 + 0x40)) * 0x18 + 0x10) =
           "Context";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar8 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar8 + (long)iVar9 * 0x150;
          *(char **)(*(long *)(lVar10 + 0x48) + (ulong)(1 < *(uint *)(lVar10 + 0x40)) * 0x18 + 0x10)
               = "Context";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xfffffffb | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar8 = 0x30;
      if (*(uint *)(lVar16 + 0x40) < 3) {
        lVar8 = 0;
      }
      *(char **)(*(long *)(lVar16 + 0x48) + lVar8 + 0x10) = "RenderInfo";
      iVar3 = *(int *)(*(long *)(lVar16 + 8) + 0x20);
      if (iVar3 != 0) {
        lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0x28);
        iVar9 = 0;
        do {
          lVar10 = lVar16 + (long)iVar9 * 0x150;
          lVar8 = 0x30;
          if (*(uint *)(lVar10 + 0x40) < 3) {
            lVar8 = 0;
          }
          *(char **)(*(long *)(lVar10 + 0x48) + lVar8 + 0x10) = "RenderInfo";
          iVar9 = iVar9 + 1;
        } while (iVar3 != iVar9);
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 0xb) {
      return;
    }
  } while( true );
}

