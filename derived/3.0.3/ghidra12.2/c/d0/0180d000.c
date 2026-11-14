
void FUN_0180d000(long *param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  
  puVar8 = PTR_DAT_04bb5ce0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  uVar12 = FUN_0180b7a0();
  puVar9 = PTR_DAT_04bbe4b0;
  puVar7 = PTR_DAT_04bb2720;
  if ((uVar12 & 1) == 0) {
    lVar15 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar10 = FUN_006bd550(*puVar13,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar7 != 0) {
            lVar15 = *(long *)(*(long *)puVar7 + 0x330);
            iVar11 = 0;
            if (lVar15 != 0) {
              iVar11 = *(int *)(lVar15 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar9 + 0x84) == iVar11) goto LAB_0180d0d0;
  }
  else {
LAB_0180d0d0:
    lVar4 = param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar15 = 0;
    do {
      if (*(char *)(param_1[1] + lVar15) == '\0') goto LAB_0180d12c;
      lVar1 = param_1[1] + lVar15;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0180d12c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0180d12c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0180d12c:
    uVar16 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
    uVar17 = 3;
    if ((int)((int)param_1[2] - uVar16) < 4) {
      uVar17 = (int)param_1[2] + ~uVar16;
    }
    if (0 < (int)uVar17) {
      memcpy((void *)(lVar4 + (ulong)uVar16),&DAT_0405bdbe,(ulong)uVar17);
      *(undefined1 *)(lVar4 + (ulong)uVar17 + (ulong)uVar16) = 0;
    }
  }
  puVar6 = PTR_DAT_04bb2640;
  if (*(long *)puVar8 != 0) {
    lVar15 = *(long *)puVar7;
    uVar12 = 0;
    do {
      if (lVar15 == 0) {
LAB_0180d1e0:
        iVar11 = 0;
      }
      else {
        iVar11 = 0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)puVar6 + 0x18))
                              (*(long **)puVar6,*(undefined4 *)(lVar15 + 0x338));
          iVar11 = FUN_006bd550(*puVar13,0);
          lVar15 = *(long *)puVar7;
          if ((iVar11 != 0x758f7eaf) || (lVar15 == 0)) goto LAB_0180d1e0;
          iVar11 = 0;
          if (*(long *)(lVar15 + 0x330) != 0) {
            iVar11 = *(int *)(*(long *)(lVar15 + 0x330) + 0x244);
          }
        }
      }
      uVar16 = (uint)uVar12;
      piVar2 = (int *)((long)(puVar9 + 8) + uVar12 * 4);
      if (0x32 < uVar16) {
        piVar2 = (int *)(puVar9 + 8);
      }
      if (*piVar2 == iVar11) {
        if (uVar16 < 0x33) goto LAB_0180d210;
        puVar13 = &DAT_0407ebb1;
        goto LAB_0180d220;
      }
      uVar17 = 0x33;
      if ((int)uVar16 < 0x33) {
        uVar17 = uVar16 + 1;
      }
      uVar12 = (ulong)uVar17;
    } while (uVar17 != 0x33);
  }
  uVar12 = 0;
LAB_0180d210:
  puVar13 = *(undefined8 **)(PTR_s_ErrorName_04bbe308 + uVar12 * 8 + 0x278);
LAB_0180d220:
  lVar4 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar15 = 0;
  do {
    if (*(char *)(param_1[1] + lVar15) == '\0') goto LAB_0180d290;
    lVar1 = param_1[1] + lVar15;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0180d290;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_0180d290;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_0180d290:
  uVar16 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
  lVar15 = 0;
  do {
    if (*(char *)((long)puVar13 + lVar15) == '\0') goto LAB_0180d2dc;
    if (*(char *)((long)puVar13 + lVar15 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0180d2dc;
    }
    if (*(char *)((long)puVar13 + lVar15 + 2) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_0180d2dc;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_0180d2dc:
  uVar17 = (uint)lVar15;
  if ((int)((int)param_1[2] - uVar16) <= (int)(uint)lVar15) {
    uVar17 = (int)param_1[2] + ~uVar16;
  }
  if (0 < (int)uVar17) {
    memcpy((void *)(lVar4 + (ulong)uVar16),puVar13,(ulong)uVar17);
    *(undefined1 *)(lVar4 + (int)(uVar17 + uVar16)) = 0;
  }
  lVar15 = *(long *)puVar7;
  iVar11 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar10 = FUN_006bd550(*puVar13,0);
      iVar11 = 0;
      if (iVar10 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar7 != 0) {
          lVar15 = *(long *)(*(long *)puVar7 + 0x330);
          iVar11 = 0;
          if (lVar15 != 0) {
            iVar11 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar9 + 0x14) == iVar11) {
    iVar11 = FUN_017ba560();
    FUN_038d13f0(param_1,&DAT_040ae943,iVar11 + -1);
  }
  lVar15 = *(long *)puVar7;
  iVar11 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar10 = FUN_006bd550(*puVar13,0);
      iVar11 = 0;
      if (iVar10 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar7 != 0) {
          lVar15 = *(long *)(*(long *)puVar7 + 0x330);
          iVar11 = 0;
          if (lVar15 != 0) {
            iVar11 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar9 + 0x18) == iVar11) {
    iVar11 = FUN_017ba638();
    if (4 < iVar11) {
      iVar11 = 5;
    }
    FUN_038d13f0(param_1,&DAT_040ae943,iVar11 + -2);
  }
  lVar15 = *(long *)puVar7;
  iVar11 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar10 = FUN_006bd550(*puVar13,0);
      iVar11 = 0;
      if (iVar10 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar7 != 0) {
          lVar15 = *(long *)(*(long *)puVar7 + 0x330);
          iVar11 = 0;
          if (lVar15 != 0) {
            iVar11 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar9 + 0x28) == iVar11) {
LAB_0180d510:
    FUN_038d13f0(param_1,&DAT_040ae943,1);
  }
  else {
    lVar15 = *(long *)puVar7;
    iVar11 = 0;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar10 = FUN_006bd550(*puVar13,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar7 != 0) {
            lVar15 = *(long *)(*(long *)puVar7 + 0x330);
            iVar11 = 0;
            if (lVar15 != 0) {
              iVar11 = *(int *)(lVar15 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar9 + 0x2c) == iVar11) goto LAB_0180d510;
  }
  if ((*(long *)puVar8 == 0) || (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 == -1)) {
LAB_0180d620:
    lVar15 = *(long *)puVar7;
    if (lVar15 == 0) {
LAB_0180d678:
      iVar11 = 0;
    }
    else {
      iVar11 = 0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar11 = FUN_006bd550(*puVar13,0);
        lVar15 = *(long *)puVar7;
        if ((iVar11 != 0x758f7eaf) || (lVar15 == 0)) goto LAB_0180d678;
        iVar11 = 0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          iVar11 = *(int *)(*(long *)(lVar15 + 0x330) + 0x244);
        }
      }
    }
    if (*(int *)(puVar9 + 0x8c) != iVar11) {
      if (lVar15 == 0) {
LAB_0180d6dc:
        iVar11 = 0;
      }
      else {
        iVar11 = 0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar11 = FUN_006bd550(*puVar13,0);
          lVar15 = *(long *)puVar7;
          if ((iVar11 != 0x758f7eaf) || (lVar15 == 0)) goto LAB_0180d6dc;
          iVar11 = 0;
          if (*(long *)(lVar15 + 0x330) != 0) {
            iVar11 = *(int *)(*(long *)(lVar15 + 0x330) + 0x244);
          }
        }
      }
      if (*(int *)(puVar9 + 0x1c) != iVar11) {
        if (lVar15 == 0) {
LAB_0180d740:
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          if (*(long *)(lVar15 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
            iVar11 = FUN_006bd550(*puVar13,0);
            lVar15 = *(long *)puVar7;
            if ((iVar11 != 0x758f7eaf) || (lVar15 == 0)) goto LAB_0180d740;
            iVar11 = 0;
            if (*(long *)(lVar15 + 0x330) != 0) {
              iVar11 = *(int *)(*(long *)(lVar15 + 0x330) + 0x244);
            }
          }
        }
        if (*(int *)(puVar9 + 0x20) != iVar11) {
          if (lVar15 == 0) {
LAB_0180d7a4:
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            if (*(long *)(lVar15 + 0x330) != 0) {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              lVar15 = *(long *)puVar7;
              if ((iVar11 != 0x758f7eaf) || (lVar15 == 0)) goto LAB_0180d7a4;
              iVar11 = 0;
              if (*(long *)(lVar15 + 0x330) != 0) {
                iVar11 = *(int *)(*(long *)(lVar15 + 0x330) + 0x244);
              }
            }
          }
          if (*(int *)(puVar9 + 0x24) != iVar11) {
            iVar11 = 0;
            if (lVar15 != 0) {
              if (*(long *)(lVar15 + 0x330) == 0) {
                iVar11 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
                iVar10 = FUN_006bd550(*puVar13,0);
                iVar11 = 0;
                if (iVar10 == 0x758f7eaf) {
                  iVar11 = 0;
                  if (*(long *)puVar7 != 0) {
                    lVar15 = *(long *)(*(long *)puVar7 + 0x330);
                    iVar11 = 0;
                    if (lVar15 != 0) {
                      iVar11 = *(int *)(lVar15 + 0x244);
                    }
                  }
                }
              }
            }
            if ((*(int *)(puVar9 + 0xa0) != iVar11) || (iVar11 = FUN_02917204(), iVar11 == 0)) {
              return;
            }
            lVar15 = *(long *)puVar7;
          }
        }
      }
    }
    if (lVar15 != 0) goto LAB_0180d82c;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 6 & 1) == 0) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 7 & 1) == 0) goto LAB_0180d620;
    }
    lVar15 = *(long *)puVar7;
    if (lVar15 == 0) {
      return;
    }
    if (*(long *)(lVar15 + 0x330) == 0) {
      return;
    }
    puVar13 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar11 = FUN_006bd550(*puVar13,0);
    if (iVar11 != 0x758f7eaf) {
      return;
    }
    lVar15 = *(long *)puVar7;
    if (lVar15 == 0) {
      return;
    }
    if (*(long *)(lVar15 + 0x330) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar15 + 0x330) + 0x248) == 0) {
      return;
    }
LAB_0180d82c:
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar11 = FUN_006bd550(*puVar13,0);
      uVar14 = 0;
      if (iVar11 != 0x758f7eaf) goto LAB_0180d8a4;
      if ((*(long *)puVar7 != 0) && (lVar15 = *(long *)(*(long *)puVar7 + 0x330), lVar15 != 0)) {
        uVar14 = *(undefined4 *)(lVar15 + 0x248);
        goto LAB_0180d8a4;
      }
    }
  }
  uVar14 = 0;
LAB_0180d8a4:
  FUN_038d13f0(param_1,&DAT_04081175,uVar14);
  return;
}

