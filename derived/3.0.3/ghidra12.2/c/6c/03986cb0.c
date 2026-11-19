
void FUN_03986cb0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  long *plVar20;
  char *pcVar21;
  long *plVar22;
  undefined *local_480;
  char *local_478;
  
  puVar1 = PTR_DAT_04bb2020;
  if (param_3 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar9 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    uVar6 = (**(code **)(*(long *)*puVar2 + 0x80))((long *)*puVar2,8);
    param_3 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)(*param_3 + 0x80))(param_3,8);
  }
  local_480 = puVar1 + 0x10;
  local_478 = "agl::detail::ShaderHolder";
  plVar8 = (long *)FUN_038c6d48(uVar6,&local_480,param_3,8,1,0);
  lVar7 = param_1 + 0x700;
  FUN_006e9454(&local_480,"%s.%s","agl_common","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_common",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(lVar7,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0x788,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique_pfx","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique_pfx",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0x810,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique_lght","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique_lght",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0x898,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique_lght_lpp","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique_lght_lpp",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0x920,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique_shdw","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique_shdw",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0x9a8,lVar10,lVar9,4,plVar8);
  }
  FUN_006e9454(&local_480,"%s.%s","agl_technique_proc","sharc");
  lVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  FUN_006e9454(&local_480,"%s.%s","agl_technique_proc",&DAT_040bd1ec);
  lVar10 = (**(code **)(*param_2 + 0x30))(param_2,&local_480,0);
  if (lVar9 != 0 || lVar10 != 0) {
    FUN_03908960(param_1 + 0xa30,lVar10,lVar9,4,plVar8);
  }
  uVar16 = 0;
  puVar1 = puVar1 + 0x10;
  do {
    lVar9 = lVar7 + (long)(int)(&DAT_04b68b60)[uVar16 * 4] * 0x88;
    if (*(long *)(lVar9 + 0x20) == 0 && *(long *)(lVar9 + 0x28) == 0) {
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    else {
      lVar9 = lVar7 + (long)(int)(&DAT_04b68b60)[uVar16 * 4] * 0x88;
      local_478 = (&PTR_s_dev_util_04b68b68)[uVar16 * 2];
      puVar18 = (uint *)(lVar9 + 0x30);
      uVar11 = *puVar18;
      plVar22 = (long *)(lVar9 + 0x38);
      lVar9 = *plVar22;
      local_480 = puVar1;
      if (uVar11 == 0) {
        uVar11 = 0;
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = 0;
        uVar17 = 0;
        do {
          plVar20 = *(long **)(lVar9 + (long)(int)uVar17 * 0x150 + 8);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          pcVar21 = (char *)plVar20[1];
          (**(code **)(local_480 + 0x18))(&local_480);
          if (pcVar21 == local_478) goto LAB_03987304;
          uVar12 = 0;
          bVar5 = true;
          do {
            lVar10 = plVar20[1] + 1 + uVar12;
            cVar4 = *(char *)(lVar10 + -1);
            if (cVar4 != local_478[uVar12]) break;
            if (cVar4 == '\0') {
              if (bVar5) goto LAB_03987304;
              break;
            }
            cVar4 = *(char *)(plVar20[1] + 1 + uVar12);
            if (cVar4 != local_478[uVar12 + 1]) break;
            if (cVar4 == '\0') goto LAB_03987304;
            cVar4 = *(char *)(lVar10 + 1);
            if (cVar4 != local_478[uVar12 + 2]) break;
            if (cVar4 == '\0') goto LAB_03987304;
            bVar5 = uVar12 < 0x7fffe;
            uVar12 = uVar12 + 3;
          } while (uVar12 != 0x80001);
          uVar17 = uVar17 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar11 != uVar17);
        uVar19 = 0xffffffff;
LAB_03987304:
        uVar11 = *puVar18;
        lVar9 = *plVar22;
      }
      lVar9 = lVar9 + (long)(int)uVar19 * 0x150;
      if (uVar11 <= uVar19) {
        lVar9 = 0;
      }
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = lVar9;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      switch(uVar16 & 0xffffffff) {
      case 0:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cWorldViewMatrix[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cWorldViewMatrix[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cWorldViewProjectionMatrix[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) =
                 "cWorldViewProjectionMatrix[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDiffuseColor0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDiffuseColor0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDiffuseColor1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDiffuseColor1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSpecularColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSpecularColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cViewLightDir";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x78;
            if (*(uint *)(lVar15 + 0x30) < 6) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cViewLightDir";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 1:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 2:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColorTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColorTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906e80(lVar9,1,plVar8);
        *(char **)(*(long *)(lVar9 + 0x58) + 0x10) = "outputBlock";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x58) + 0x10) = "outputBlock";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 3:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cParam1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cParam1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorTransform[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorTransform[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLuminanceModel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLuminanceModel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColorTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColorTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 4:
        FUN_03906170(lVar9,5,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)
         (*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             &DAT_040d7008;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(undefined **)
             (*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 + 0x10) =
                 &DAT_040d7008;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepth[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepth[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLineNum";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLineNum";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x6d:
        FUN_03905e30(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x28) + 0x10) = "aPosition";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x28) + 0x10) = "aPosition";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,0x1a,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "uProjViewWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "uProjViewWorld[0]"
            ;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cTexSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cTexSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uSlice";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uSlice";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uTexScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uTexScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uTexRotate";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uTexRotate";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uTexTrans";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uTexTrans";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uMultiSampleNum";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uMultiSampleNum";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uColorMatrix[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uColorMatrix[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xf0;
        if (*(uint *)(lVar9 + 0x30) < 0xb) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xf0;
            if (*(uint *)(lVar14 + 0x30) < 0xb) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x108;
        if (*(uint *)(lVar9 + 0x30) < 0xc) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uTexFetchAdjust";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x108;
            if (*(uint *)(lVar14 + 0x30) < 0xc) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uTexFetchAdjust";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x120;
        if (*(uint *)(lVar9 + 0x30) < 0xd) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorDriftR";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x120;
            if (*(uint *)(lVar14 + 0x30) < 0xd) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorDriftR";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x138;
        if (*(uint *)(lVar9 + 0x30) < 0xe) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorDriftG";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x138;
            if (*(uint *)(lVar14 + 0x30) < 0xe) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorDriftG";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x150;
        if (*(uint *)(lVar9 + 0x30) < 0xf) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorDriftB";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x150;
            if (*(uint *)(lVar14 + 0x30) < 0xf) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorDriftB";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x168;
        if (*(uint *)(lVar9 + 0x30) < 0x10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uColorT";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x168;
            if (*(uint *)(lVar14 + 0x30) < 0x10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uColorT";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x180;
        if (*(uint *)(lVar9 + 0x30) < 0x11) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uColorB";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x180;
            if (*(uint *)(lVar14 + 0x30) < 0x11) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uColorB";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x198;
        if (*(uint *)(lVar9 + 0x30) < 0x12) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uCubeMapFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x198;
            if (*(uint *)(lVar14 + 0x30) < 0x12) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uCubeMapFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x1b0;
        if (*(uint *)(lVar9 + 0x30) < 0x13) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uBlurOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x1b0;
            if (*(uint *)(lVar14 + 0x30) < 0x13) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uBlurOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x1c8;
        if (*(uint *)(lVar9 + 0x30) < 0x14) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uDepthNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x1c8;
            if (*(uint *)(lVar14 + 0x30) < 0x14) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uDepthNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x1f8;
        if (*(uint *)(lVar9 + 0x30) < 0x16) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uInvDepthRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x1f8;
            if (*(uint *)(lVar14 + 0x30) < 0x16) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uInvDepthRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x1e0;
        if (*(uint *)(lVar9 + 0x30) < 0x15) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uOneMinusNearDivFar";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x1e0;
            if (*(uint *)(lVar14 + 0x30) < 0x15) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uOneMinusNearDivFar";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x210;
        if (*(uint *)(lVar9 + 0x30) < 0x17) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNV12DecodeParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x210;
            if (*(uint *)(lVar14 + 0x30) < 0x17) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNV12DecodeParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x228;
        if (*(uint *)(lVar9 + 0x30) < 0x18) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uGamma";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x228;
            if (*(uint *)(lVar14 + 0x30) < 0x18) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uGamma";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x240;
        if (*(uint *)(lVar9 + 0x30) < 0x19) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uQuadTriangleZ";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x240;
            if (*(uint *)(lVar14 + 0x30) < 0x19) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uQuadTriangleZ";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 600;
        if (*(uint *)(lVar9 + 0x30) < 0x1a) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uNormalizeValue";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 600;
            if (*(uint *)(lVar14 + 0x30) < 0x1a) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uNormalizeValue";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "uTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "uTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "uTexture_1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "uTexture_1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 10:
      case 0xb:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "RenderParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "RenderParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "Context";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "Context";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexCorrectionMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cTexCorrectionMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x38:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPositions[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPositions[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cClearColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x38) + (ulong)(1 < *(uint *)(lVar10 + 0x30)) * 0x18 +
                      0x10) = "cClearColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x39:
        FUN_03906170(lVar9,5,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cWorld[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cView[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cView[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cProj[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cProj[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cPosition[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x30) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cPosition[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x3a:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cProjViewWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cProjViewWorld[0]"
            ;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cArcInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cArcInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x30) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x3b:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPVW_Cylinder[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPVW_Cylinder[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cPVW_Hemisphere[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cPVW_Hemisphere[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHemisphereOffsetLocal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x30) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cHemisphereOffsetLocal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x3c:
      case 0x3d:
        FUN_03905e30(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x28) + 0x10) = "aPosition";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x28) + 0x10) = "aPosition";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,0x1a,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "uProjViewWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "uProjViewWorld[0]"
            ;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "uMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "uMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,9,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "uTextureColor_0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "uTextureColor_0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "uTextureColor_1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "uTextureColor_1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_4";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_4";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_5";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_5";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_6";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x60) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_6";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x60) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureColor_7";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x60) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "uTextureColor_7";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x60) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "uTextureDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0xc0;
            if (*(uint *)(lVar15 + 0x60) < 9) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "uTextureDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
        FUN_03906170(lVar9,10,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cLuminanceWeight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cLuminanceWeight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cThresholdParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cThresholdParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cComposeColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cComposeColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthParam1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthParam1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFarTexSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFarTexSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cGaussianParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cGaussianParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLuminanceParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLuminanceParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam6";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam6";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam7";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam7";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTextureColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTextureColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTextureDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTextureDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureLuminanceOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTextureLuminanceOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x42:
        FUN_03906170(lVar9,8,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTexCoordCoeff0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTexCoordCoeff0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTexCoordCoeff1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTexCoordCoeff1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorCorrectionCoeff";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorCorrectionCoeff";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSCurveToeCoeff";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSCurveToeCoeff";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSCurveSholuderCoeff";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSCurveSholuderCoeff";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSCurveCrossOver";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSCurveCrossOver";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,5,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cExposureTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cExposureTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cHDRImage";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cHDRImage";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cBloom";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cBloom";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cColorCorrectionTable";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cColorCorrectionTable";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNormalizedLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x60) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cNormalizedLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
        FUN_03906170(lVar9,0xd,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cIndirectTexParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cIndirectTexParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cIndirectTexMtx0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cIndirectTexMtx0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cIndirectTexMtx1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cIndirectTexMtx1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cMulParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cMulParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAddParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAddParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFarParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFarParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTexParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTexParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVignettingRadius";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVignettingRadius";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVignettingParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVignettingParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xf0;
        if (*(uint *)(lVar9 + 0x30) < 0xb) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVignettingTrans";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xf0;
            if (*(uint *)(lVar14 + 0x30) < 0xb) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVignettingTrans";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x108;
        if (*(uint *)(lVar9 + 0x30) < 0xc) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVignettingColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x108;
            if (*(uint *)(lVar14 + 0x30) < 0xc) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVignettingColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x120;
        if (*(uint *)(lVar9 + 0x30) < 0xd) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cFarMulColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x120;
            if (*(uint *)(lVar14 + 0x30) < 0xd) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cFarMulColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,5,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTexDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexMipMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTexMipMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexMipMapDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTexMipMapDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexIndirect";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x60) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTexIndirect";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x4b:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Param";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Param";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x4c:
      case 0x4d:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Param";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Param";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrcTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrcTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x4e:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Param";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Param";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cNearCoc";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cNearCoc";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cFarCoc";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cFarCoc";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTileCoc";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTileCoc";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x4f:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Param";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Param";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cBaseTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cBaseTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cDepthTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cDepthTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNearTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cNearTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cFarTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x60) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cFarTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
        FUN_03906170(lVar9,0xc,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cFrameSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cFrameSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cFrameRCP1H";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cFrameRCP1H";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cFrameRCPOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cFrameRCPOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLumaCoeff";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLumaCoeff";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cEdgeThreshold";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cEdgeThreshold";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cQualityParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cQualityParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAlphaOut";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAlphaOut";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cFinalPowerGL";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cFinalPowerGL";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cPrevScreenCoordTrx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cPrevScreenCoordTrx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFar";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFar";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xf0;
        if (*(uint *)(lVar9 + 0x30) < 0xb) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFarCache";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xf0;
            if (*(uint *)(lVar14 + 0x30) < 0xb) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFarCache";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x108;
        if (*(uint *)(lVar9 + 0x30) < 0xc) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDrawDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x108;
            if (*(uint *)(lVar14 + 0x30) < 0xc) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDrawDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,5,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexBase";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexBase";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexLuma";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTexLuma";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexReduce";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTexReduce";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTexDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexPrev";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x60) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTexPrev";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x55:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cFrameRCP";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cFrameRCP";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexReduce";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cTexReduce";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
        FUN_039067f0(lVar9,3,plVar8);
        *(char **)(*(long *)(lVar9 + 0x78) + 0x10) = "imOutputColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x78) + 0x10) = "imOutputColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        *(char **)(*(long *)(lVar9 + 0x78) + (ulong)(1 < *(uint *)(lVar9 + 0x70)) * 0x18 + 0x10) =
             "imEdgeCounter";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x78) + (ulong)(1 < *(uint *)(lVar15 + 0x70)) * 0x18 +
                      0x10) = "imEdgeCounter";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x70) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x78) + lVar10 + 0x10) = "imEdgePosStorage";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x70) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x78) + lVar15 + 0x10) = "imEdgePosStorage";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906e80(lVar9,1,plVar8);
        *(char **)(*(long *)(lVar9 + 0x58) + 0x10) = "outputSSBO";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x58) + 0x10) = "outputSSBO";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,6,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cScreenParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cScreenParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cSMAAEdgeParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cSMAAEdgeParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSMAAWeightCalcParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSMAAWeightCalcParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSMAASubsampleIndices";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSMAASubsampleIndices";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVelocityMapParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVelocityMapParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSMAAComposeParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSMAAComposeParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,8,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTextureCurColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTextureCurColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexturePrevColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTexturePrevColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureVelocityMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureVelocityMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureLuminanceMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureLuminanceMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureLuminanceMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureLuminanceMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureEdgeMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureEdgeMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureBlendWeightMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureBlendWeightMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureSMAAArea";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x60) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureSMAAArea";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x60) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureSMAASearch";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0xa8;
            if (*(uint *)(lVar15 + 0x60) < 8) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTextureSMAASearch";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x5d:
      case 0x5e:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Light";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Light";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "LightView";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "LightView";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "LightMip";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "LightMip";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04098e5d;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04098e5d;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x5f:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "BlendInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "BlendInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "ProbeSH";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "ProbeSH";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLightMap0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cLightMap0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightMap1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cLightMap1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x60:
      case 0x61:
      case 0x62:
        FUN_03906b40(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Context";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Context";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "PointLightView";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "PointLightView";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "SpotLightView";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "SpotLightView";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x40) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "ProjLightView";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x40) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "ProjLightView";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,6,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSpecPowTable";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSpecPowTable";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cProjTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cProjTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDepthShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDepthShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x78;
            if (*(uint *)(lVar15 + 0x60) < 6) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 99:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cWVP[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cWVP[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSpotCone_CenterScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x30) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cSpotCone_CenterScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 100:
      case 0x65:
        FUN_03905e30(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x28) + 0x10) = "aPosition";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x28) + 0x10) = "aPosition";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexOffsetScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexOffsetScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cTexWidthInv";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cTexWidthInv";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTexOffsetAdjust";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTexOffsetAdjust";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "c3DTexCoordOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "c3DTexCoordOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x66:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "uParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "uParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "uTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "uTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x67:
        FUN_03906170(lVar9,7,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cCubeMapFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cCubeMapFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAngleScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAngleScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cOffsetScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cOffsetScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x68:
        FUN_03906170(lVar9,5,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "sTexCorrectValue";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "sTexCorrectValue";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x69:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cTextureWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cTextureWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexHeadArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexHeadArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x6a:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cTextureWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cTextureWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexHead";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexHead";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x6b:
        FUN_03906170(lVar9,7,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDynamicRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDynamicRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHDRDecodePower";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cHDRDecodePower";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "sTexCorrectValue";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "sTexCorrectValue";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x6c:
        FUN_03906170(lVar9,8,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cProjMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cProjMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cViewMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cViewMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCenterPos";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCenterPos";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAspect";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAspect";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cScale";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cScale";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cIntensity";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cIntensity";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x6e:
        FUN_03905e30(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x28) + 0x10) = "aPosition";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x28) + 0x10) = "aPosition";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x28) + (ulong)(1 < *(uint *)(lVar9 + 0x20)) * 0x18 + 0x10) =
             "aBlendWeight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x28) + (ulong)(1 < *(uint *)(lVar15 + 0x20)) * 0x18 +
                      0x10) = "aBlendWeight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x20) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x28) + lVar10 + 0x10) = "aBlendIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x20) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x28) + lVar15 + 0x10) = "aBlendIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xffffffbf | 0x40;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x20) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x28) + lVar10 + 0x10) = "aTexCoord0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x20) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x28) + lVar15 + 0x10) = "aTexCoord0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906b40(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "Skeleton";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "Skeleton";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "Material";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "Material";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x40) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "Shape";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x40) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "Shape";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x6f:
        FUN_03906170(lVar9,10,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cProjViewMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cProjViewMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cWorldMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cWorldMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCamWorld";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCamWorld";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cUseReflection";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cUseReflection";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cUseMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cUseMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDynamicRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDynamicRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHDRDecodePower";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cHDRDecodePower";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAlphaAdd";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAlphaAdd";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "sTexCorrectValue";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "sTexCorrectValue";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x70:
        FUN_03906170(lVar9,5,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPVW[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPVW[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cNearFarParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cNearFarParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cInvTextureSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cInvTextureSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureIndexY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureIndexY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x71:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cEsmC";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cEsmC";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cShadowMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cShadowMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x72:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cInvTexSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cInvTexSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cSlice";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cSlice";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x73:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "RaymarchContext";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "RaymarchContext";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "ShadowContext";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "ShadowContext";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSamplerLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) =
                 "cSamplerLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSamplerDepthShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSamplerDepthShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
        FUN_03906170(lVar9,7,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cAOParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cAOParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cAOParam1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cAOParam1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAOParam2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAOParam2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFar";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFar";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cInvTexSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cInvTexSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSamplePoint[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSamplePoint[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRotate[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRotate[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTextureRotate";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTextureRotate";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cTextureMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906b40(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "cAO_UB";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "cAO_UB";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x78:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cCameraParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cCameraParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cFrustumCorner";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cFrustumCorner";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cFrustumCorner2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cFrustumCorner2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cTextureSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cTextureSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSamplerLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) =
                 "cSamplerLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSamplerNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSamplerNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x79:
        FUN_03906b40(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)
         (*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             &DAT_04083edf;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(undefined **)
             (*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 + 0x10) =
                 &DAT_04083edf;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "Sphere";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "Sphere";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x40) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "Cylinder";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x40) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x48) + lVar10 + 0x10) = "Cylinder";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x7b:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Context";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Context";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x7c:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Element";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Element";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cOcclusion";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cOcclusion";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTexture2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTexture2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x7d:
      case 0x7e:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexSizeRCP";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexSizeRCP";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cReferLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cReferLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cReferSlice";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cReferSlice";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cReferFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cReferFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x7f:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Context";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Context";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906e80(lVar9,1,plVar8);
        *(char **)(*(long *)(lVar9 + 0x58) + 0x10) = "PickData";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x58) + 0x10) = "PickData";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)
         (*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             &DAT_040ad8c4;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(undefined **)
             (*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 + 0x10) =
                 &DAT_040ad8c4;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x80:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "SphereBlock";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "SphereBlock";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "CylinderBlock";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "CylinderBlock";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cTexColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x81:
      case 0x82:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cRadius";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cRadius";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cBlurPosition";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cBlurPosition";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVtxColor[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVtxColor[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x83:
        FUN_03906170(lVar9,8,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTanFovyHalf";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTanFovyHalf";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cProjOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cProjOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDstStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDstStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cIntensity";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cIntensity";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSteep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSteep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,8,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrcLight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrcLight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrcAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cSrcAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcPos";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcPos";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x60) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x60) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0xa8;
            if (*(uint *)(lVar15 + 0x60) < 8) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cDstNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x84:
        FUN_03906170(lVar9,10,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTanFovyHalf";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTanFovyHalf";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cProjOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cProjOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDstStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDstStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cIntensity";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cIntensity";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSteep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSteep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(undefined **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = &DAT_04069d1f;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(undefined **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = &DAT_04069d1f;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cInflate";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cInflate";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,8,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrcLight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrcLight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrcAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cSrcAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcPos";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcPos";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x60) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x60) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0xa8;
            if (*(uint *)(lVar15 + 0x60) < 8) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cDstNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x85:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x86:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x87:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTanFovyHalf";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTanFovyHalf";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cProjOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cProjOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cLight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cLight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x88:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTanFovyHalf";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTanFovyHalf";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cProjOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cProjOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDstStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDstStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,7,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrcLight0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrcLight0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrcLight1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cSrcLight1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSrcDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSrcDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstAlbedo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstAlbedo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDstNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDstDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x90;
            if (*(uint *)(lVar15 + 0x60) < 7) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cDstDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x89:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cThreshold";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cThreshold";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrc0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrc0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrc1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSrc1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8a:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cHeightTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cHeightTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8b:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cParam1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cParam1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParam3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParam3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cPrevTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cPrevTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8c:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTanFovyHalf";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTanFovyHalf";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cProjOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cProjOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cBias";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cBias";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthCorrection";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthCorrection";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAlpha";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAlpha";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrcLight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrcLight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrcDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cSrcDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cBiasTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cBiasTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8d:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cWeight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cWeight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cAlpha";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cAlpha";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8e:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cAlpha";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cAlpha";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSrc0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSrc0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrc1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSrc1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x8f:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cBaseDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cBaseDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cNear";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cNear";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRange";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRange";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cOneMinusNearDivFar";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cOneMinusNearDivFar";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,6,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSss0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSss0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSss1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cSss1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSss2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSss2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNoSss";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cNoSss";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTrans";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x78;
            if (*(uint *)(lVar15 + 0x60) < 6) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTrans";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x90:
        FUN_039064b0(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cWeight";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cWeight";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x91:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040c763c;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040c763c;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x92:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cAlpha";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cAlpha";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x93:
        FUN_039064b0(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x94:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x95:
        FUN_03906170(lVar9,6,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cGhostDispersal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cGhostDispersal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cGhostColor[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cGhostColor[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHaloWidth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cHaloWidth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHaloColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cHaloColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cChromaDistortion";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cChromaDistortion";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x96:
        FUN_03906170(lVar9,4,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cSrcStep";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cSrcStep";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cAlpha";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cAlpha";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cThreshold";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cThreshold";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x68) + 0x10) = &DAT_04094150;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = &DAT_04094150;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x97:
        FUN_039064b0(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cParam0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cParam0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x98:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,8,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cAoBuffer";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cAoBuffer";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texDynamicShadowCascade";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "texDynamicShadowCascade";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texDynamicShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "texDynamicShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texStaticDepthShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "texStaticDepthShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x60) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texModifyOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x60) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "texModifyOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texSrcUpdatableStaticShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "texSrcUpdatableStaticShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "texDstUpdatableStaticShadow";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x90;
            if (*(uint *)(lVar15 + 0x60) < 7) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "texDstUpdatableStaticShadow";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x99:
      case 0x9a:
        FUN_03906170(lVar9,7,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cW[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cW[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cBP[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cBP[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRayArray[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRayArray[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRayParamS";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRayParamS";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRayParamF";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRayParamF";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cParamCamera";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cParamCamera";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cFrustumCorner";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cFrustumCorner";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSamplerDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSamplerDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSamplerMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSamplerMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x9b:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDepthTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDepthTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x9c:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "Trail";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "Trail";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "Counter";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "Counter";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDepthTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDepthTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x9d:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x9e:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLinearDepthTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cLinearDepthTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0x9f:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPVW[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPVW[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cWorld[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x30) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa0:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906e80(lVar9,2,plVar8);
        *(char **)(*(long *)(lVar9 + 0x58) + 0x10) = "ShapeMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x58) + 0x10) = "ShapeMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        *(char **)(*(long *)(lVar9 + 0x58) + (ulong)(1 < *(uint *)(lVar9 + 0x50)) * 0x18 + 0x10) =
             "ShapeInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x58) + (ulong)(1 < *(uint *)(lVar10 + 0x50)) * 0x18 +
                      0x10) = "ShapeInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa1:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "PointMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "PointMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "PointInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x40) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x48) + lVar10 + 0x10) = "PointInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa2:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "PointMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "PointMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "PointInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x40) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x48) + lVar10 + 0x10) = "PointInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa3:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "PointMask";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "PointMask";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "PointInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x40) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x48) + lVar10 + 0x10) = "PointInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa4:
        FUN_03906170(lVar9,9,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColorFactor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColorFactor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPVW[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPVW[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cWorld[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cWorld[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVisibleFlag[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVisibleFlag[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVertexColorsOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVertexColorsOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cVisibleAttributeFlagsOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cVisibleAttributeFlagsOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAttributeIndexTableOffset";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAttributeIndexTableOffset";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDynamicArray[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0xc0;
            if (*(uint *)(lVar15 + 0x30) < 9) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cDynamicArray[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa5:
        FUN_039064b0(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "sTexCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "sTexCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,6,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cTexFlipY";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cTexFlipY";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cCubeMapFace";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cCubeMapFace";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCubeMapArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCubeMapArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cAngleParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cAngleParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x30) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa6:
      case 0xa7:
      case 0xa8:
        FUN_039064b0(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cColorCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cColorCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLinearDepthCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cLinearDepthCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_03906170(lVar9,7,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cAngleParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cAngleParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cCalcSHParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cCalcSHParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDistanceParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDistanceParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cPointSampleWorldNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cPointSampleWorldNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cNearFarParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cNearFarParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cOcclusionParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x90;
            if (*(uint *)(lVar15 + 0x30) < 7) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x38) + lVar10 + 0x10) = "cOcclusionParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xa9:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "Samples";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "Samples";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cBase";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cBase";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xaa:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "RefMipLevel";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "RefMipLevel";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)
         (*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             &DAT_0406e758;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(undefined **)
             (*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 + 0x10) =
                 &DAT_0406e758;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cBase";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cBase";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xab:
      case 0xac:
      case 0xad:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "DebugContext";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "DebugContext";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cLightTexture0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cLightTexture0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLightTexture1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cLightTexture1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x60) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cLightTexture3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xae:
      case 0xaf:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "VoxelContext";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "VoxelContext";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "ProbeContext";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "ProbeContext";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,7,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cViewNormalTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) =
                 "cViewNormalTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLinearDepthTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cLinearDepthTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x60) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x60) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNormalCubeMapTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x90;
            if (*(uint *)(lVar15 + 0x60) < 7) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cNormalCubeMapTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb0:
      case 0xb1:
        FUN_039064b0(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSHTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSHTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb2:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cPointInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cPointInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSHTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSHTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb3:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cSHParam3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cSHParam3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cPointInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cPointInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSHTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSHTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb4:
        FUN_03906170(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cSrcSHParam3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cSrcSHParam3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cSliceParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cSliceParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cRectInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cRectInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,2,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSHTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSHTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLightTexture3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cLightTexture3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb5:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cCopyRectInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) =
                 "cCopyRectInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture3d_0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture3d_0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb6:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cCopyRectInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) =
                 "cCopyRectInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cCopyParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cCopyParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTexture3d_0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTexture3d_0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb7:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cCopyRectInfoArray";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) =
                 "cCopyRectInfoArray";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cUpdateParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cUpdateParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cLightTexture0";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cLightTexture0";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cLightTexture1";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cLightTexture1";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture2";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cLightTexture2";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cLightTexture3";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x60) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cLightTexture3";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb8:
        FUN_039064b0(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cNormal";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cNormal";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cSrcSamplerCube";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar10 = lVar9 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18 +
                      0x10) = "cSrcSamplerCube";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xb9:
        FUN_03906170(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cNearFarParam";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cNearFarParam";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cNonLinearDepthTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) =
                 "cNonLinearDepthTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xba:
        FUN_03906170(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cInvTexSize";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cInvTexSize";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cVarianceMax";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cVarianceMax";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,3,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cTextureColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cTextureColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cTextureDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cTextureDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cTextureLinearDepth";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x30;
            if (*(uint *)(lVar15 + 0x60) < 3) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cTextureLinearDepth";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xbb:
        FUN_03906b40(lVar9,2,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040b0929;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040b0929;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,5,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cBaseTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cBaseTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cNoiseTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cNoiseTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cBaseTexture_Blend";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cBaseTexture_Blend";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNoiseTexture_Blend";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cNoiseTexture_Blend";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cScatterTexture";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x60) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cScatterTexture";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
        FUN_03906170(lVar9,0xc,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + 0x10) = "cArrayIndex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x38) + 0x10) = "cArrayIndex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xd8;
        if (*(uint *)(lVar9 + 0x30) < 10) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cSizeRCP";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xd8;
            if (*(uint *)(lVar14 + 0x30) < 10) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cSizeRCP";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18 + 0x10) =
             "cViewInvMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18 +
                      0x10) = "cViewInvMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x30) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLayerTrans";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x30) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLayerTrans";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x30) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLayerRenderInfo";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x30) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLayerRenderInfo";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x30) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cLayerNum";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x30) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cLayerNum";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x30) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cHeightAttenuation";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x78;
            if (*(uint *)(lVar14 + 0x30) < 6) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cHeightAttenuation";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x90;
        if (*(uint *)(lVar9 + 0x30) < 7) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthShadowProj[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x90;
            if (*(uint *)(lVar14 + 0x30) < 7) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthShadowProj[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xa8;
        if (*(uint *)(lVar9 + 0x30) < 8) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthShadowLength[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xa8;
            if (*(uint *)(lVar14 + 0x30) < 8) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthShadowLength[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xc0;
        if (*(uint *)(lVar9 + 0x30) < 9) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cDepthShadowAmplifier";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xc0;
            if (*(uint *)(lVar14 + 0x30) < 9) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cDepthShadowAmplifier";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0xf0;
        if (*(uint *)(lVar9 + 0x30) < 0xb) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cViewProjMtx[0]";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0xf0;
            if (*(uint *)(lVar14 + 0x30) < 0xb) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cViewProjMtx[0]";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffd | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x108;
        if (*(uint *)(lVar9 + 0x30) < 0xc) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x38) + lVar10 + 0x10) = "cColor";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x108;
            if (*(uint *)(lVar14 + 0x30) < 0xc) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x38) + lVar15 + 0x10) = "cColor";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,4,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDepthTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDepthTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cDepthShadowTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cDepthShadowTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cMaskTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cMaskTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cVolumeTex";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x48;
            if (*(uint *)(lVar15 + 0x60) < 4) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cVolumeTex";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xd7:
      case 0xd8:
      case 0xd9:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "Common";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "Common";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,5,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cInitialSpectrum";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cInitialSpectrum";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cPhases";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cPhases";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cSpectrum";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cSpectrum";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDisplacementMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDisplacementMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cNormalMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x60;
            if (*(uint *)(lVar15 + 0x60) < 5) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cNormalMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xda:
        FUN_03906b40(lVar9,3,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + 0x10) = "CommonUBO";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = "CommonUBO";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x48) + (ulong)(1 < *(uint *)(lVar9 + 0x40)) * 0x18 + 0x10) =
             "VertexUBO";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x48) + (ulong)(1 < *(uint *)(lVar15 + 0x40)) * 0x18 +
                      0x10) = "VertexUBO";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x40) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x48) + lVar10 + 0x10) = "MaterialUBO";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x40) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x48) + lVar15 + 0x10) = "MaterialUBO";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,6,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cDisplacementMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cDisplacementMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18 + 0x10) =
             "cNormalMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar10 + (long)iVar13 * 0x150;
            *(char **)(*(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18 +
                      0x10) = "cNormalMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x30;
        if (*(uint *)(lVar9 + 0x60) < 3) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cEnvMap";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x30;
            if (*(uint *)(lVar14 + 0x60) < 3) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cEnvMap";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x48;
        if (*(uint *)(lVar9 + 0x60) < 4) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cColorBuffer";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x48;
            if (*(uint *)(lVar14 + 0x60) < 4) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cColorBuffer";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x60;
        if (*(uint *)(lVar9 + 0x60) < 5) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cDepthBuffer";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar14 = lVar10 + (long)iVar13 * 0x150;
            lVar15 = 0x60;
            if (*(uint *)(lVar14 + 0x60) < 5) {
              lVar15 = 0;
            }
            *(char **)(*(long *)(lVar14 + 0x68) + lVar15 + 0x10) = "cDepthBuffer";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = 0x78;
        if (*(uint *)(lVar9 + 0x60) < 6) {
          lVar10 = 0;
        }
        *(char **)(*(long *)(lVar9 + 0x68) + lVar10 + 0x10) = "cCaustics";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            lVar15 = lVar9 + (long)iVar13 * 0x150;
            lVar10 = 0x78;
            if (*(uint *)(lVar15 + 0x60) < 6) {
              lVar10 = 0;
            }
            *(char **)(*(long *)(lVar15 + 0x68) + lVar10 + 0x10) = "cCaustics";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        break;
      case 0xdc:
        FUN_03906b40(lVar9,1,plVar8);
        puVar18 = (uint *)(lVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined **)(*(long *)(lVar9 + 0x48) + 0x10) = &DAT_040698b7;
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar10 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(undefined **)(*(long *)(lVar10 + (long)iVar13 * 0x150 + 0x48) + 0x10) = &DAT_040698b7;
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
        FUN_039064b0(lVar9,1,plVar8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char **)(*(long *)(lVar9 + 0x68) + 0x10) = "cSamplerSead";
        iVar3 = *(int *)(*(long *)(lVar9 + 8) + 0x20);
        if (iVar3 != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
          iVar13 = 0;
          do {
            *(char **)(*(long *)(lVar9 + (long)iVar13 * 0x150 + 0x68) + 0x10) = "cSamplerSead";
            iVar13 = iVar13 + 1;
          } while (iVar3 != iVar13);
        }
      }
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == 0xdd) {
      if (*(long *)(param_1 + 0x830) != 0 || *(long *)(param_1 + 0x838) != 0) {
        FUN_0399a6f0(param_1 + 0x810,plVar8);
      }
      if (*(long *)(param_1 + 0x720) != 0 || *(long *)(param_1 + 0x728) != 0) {
        FUN_03909d70(lVar7);
        FUN_03909e50(lVar7,*(ushort *)(param_1 + 0x746) & 1);
      }
      if (*(long *)(param_1 + 0x7a8) != 0 || *(long *)(param_1 + 0x7b0) != 0) {
        FUN_03909d70(param_1 + 0x788);
        FUN_03909e50(param_1 + 0x788,*(ushort *)(param_1 + 0x7ce) & 1);
      }
      if (*(long *)(param_1 + 0x830) != 0 || *(long *)(param_1 + 0x838) != 0) {
        FUN_03909d70(param_1 + 0x810);
        FUN_03909e50(param_1 + 0x810,*(ushort *)(param_1 + 0x856) & 1);
      }
      if (*(long *)(param_1 + 0x8b8) != 0 || *(long *)(param_1 + 0x8c0) != 0) {
        FUN_03909d70(param_1 + 0x898);
        FUN_03909e50(param_1 + 0x898,*(ushort *)(param_1 + 0x8de) & 1);
      }
      if (*(long *)(param_1 + 0x940) != 0 || *(long *)(param_1 + 0x948) != 0) {
        FUN_03909d70(param_1 + 0x920);
        FUN_03909e50(param_1 + 0x920,*(ushort *)(param_1 + 0x966) & 1);
      }
      if (*(long *)(param_1 + 0x9c8) != 0 || *(long *)(param_1 + 0x9d0) != 0) {
        FUN_03909d70(param_1 + 0x9a8);
        FUN_03909e50(param_1 + 0x9a8,*(ushort *)(param_1 + 0x9ee) & 1);
      }
      if (*(long *)(param_1 + 0xa50) != 0 || *(long *)(param_1 + 0xa58) != 0) {
        FUN_03909d70(param_1 + 0xa30);
        FUN_03909e50(param_1 + 0xa30,*(ushort *)(param_1 + 0xa76) & 1);
      }
      (**(code **)(*plVar8 + 0x28))(plVar8);
      return;
    }
  } while( true );
}

