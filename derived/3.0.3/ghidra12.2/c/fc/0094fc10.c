
void FUN_0094fc10(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = param_1[0x99];
  *param_1 = &PTR_FUN_04929c08;
  puVar4 = PTR_DAT_04bb49b8;
  puVar3 = PTR_DAT_04bb2698;
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0094fcd4;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_0094fcd4:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x99] = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x9b];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0094fda8;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_0094fda8:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9a) = 0;
  }
  if ((long *)param_1[0x9c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9c] + 0x20))();
    param_1[0x9c] = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x9e];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0094fe94;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_0094fe94:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x9e] = 0;
    *(undefined4 *)(param_1 + 0x9d) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0xa0];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0094ff68;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_0094ff68:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0xa0] = 0;
    *(undefined4 *)(param_1 + 0x9f) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0xa2];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar10 = *plVar6 * 0xe8;
      lVar9 = 0;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0xd0) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0xd0) = *(byte *)(lVar1 + -0xd0) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0xb0) == 0) {
            if (*(long *)(lVar1 + -200) != 0) goto LAB_00950044;
          }
          else {
            FUN_03f45838(lVar1 + -0xc0);
            if (*(long *)(lVar1 + -200) == 0) {
              *(undefined4 *)(lVar1 + -0xcc) = 0xe;
            }
            else {
LAB_00950044:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0xd8);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0xc0);
        lVar9 = lVar9 + 0xe8;
        lVar8 = lVar8 + -0xe8;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0xa2] = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0xa4];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar10 = *plVar6 * 0xe8;
      lVar9 = 0;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0xd0) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0xd0) = *(byte *)(lVar1 + -0xd0) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0xb0) == 0) {
            if (*(long *)(lVar1 + -200) != 0) goto LAB_00950118;
          }
          else {
            FUN_03f45838(lVar1 + -0xc0);
            if (*(long *)(lVar1 + -200) == 0) {
              *(undefined4 *)(lVar1 + -0xcc) = 0xe;
            }
            else {
LAB_00950118:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0xd8);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0xc0);
        lVar9 = lVar9 + 0xe8;
        lVar8 = lVar8 + -0xe8;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0xa4] = 0;
    *(undefined4 *)(param_1 + 0xa3) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0xa7];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar10 = *plVar6 * 0xe8;
      lVar9 = 0;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0xd0) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0xd0) = *(byte *)(lVar1 + -0xd0) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0xb0) == 0) {
            if (*(long *)(lVar1 + -200) != 0) goto LAB_009501f4;
          }
          else {
            FUN_03f45838(lVar1 + -0xc0);
            if (*(long *)(lVar1 + -200) == 0) {
              *(undefined4 *)(lVar1 + -0xcc) = 0xe;
            }
            else {
LAB_009501f4:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0xd8);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0xc0);
        lVar9 = lVar9 + 0xe8;
        lVar8 = lVar8 + -0xe8;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0xa7] = 0;
    *(undefined4 *)(param_1 + 0xa6) = 0;
  }
  if ((long *)param_1[0xa5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa5] + 0x20))();
    param_1[0xa5] = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x1ae];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_009502e4;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_009502e4:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1ae] = 0;
    *(undefined4 *)(param_1 + 0x1ad) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x1b0];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_009503b8;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_009503b8:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1b0] = 0;
    *(undefined4 *)(param_1 + 0x1af) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x1b2];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_00950494;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_00950494:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1b2] = 0;
    *(undefined4 *)(param_1 + 0x1b1) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x1b4];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_00950568;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_00950568:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1b4] = 0;
    *(undefined4 *)(param_1 + 0x1b3) = 0;
  }
  puVar4 = PTR_DAT_04bb49b8;
  lVar8 = param_1[0x1b6];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x50;
      do {
        lVar1 = lVar8 + lVar10;
        if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
          *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
          if (*(long *)(lVar1 + -0x18) == 0) {
            if (*(long *)(lVar1 + -0x30) != 0) goto LAB_00950644;
          }
          else {
            FUN_03f45838(lVar1 + -0x28);
            if (*(long *)(lVar1 + -0x30) == 0) {
              *(undefined4 *)(lVar1 + -0x34) = 0xe;
            }
            else {
LAB_00950644:
              if (*(long *)puVar4 != 0) {
                FUN_03f350f4(*(long *)puVar4,lVar1 + -0x40);
              }
            }
          }
        }
        FUN_03f457c4(lVar1 + -0x28);
        lVar9 = lVar9 + 0x50;
        lVar8 = lVar8 + -0x50;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1b6] = 0;
    *(undefined4 *)(param_1 + 0x1b5) = 0;
  }
  pvVar7 = (void *)param_1[0x1b8];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x1b8] = 0;
    *(undefined4 *)(param_1 + 0x1b7) = 0;
  }
  if (param_1[0x1ba] != 0) {
    pvVar7 = (void *)(param_1[0x1ba] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x1ba] = 0;
    *(undefined4 *)(param_1 + 0x1b9) = 0;
  }
  pvVar7 = (void *)param_1[0x1bd];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x1bd] = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  lVar8 = param_1[0x1c3];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = *plVar6 * 0x28;
      do {
        lVar10 = lVar8 + lVar9;
        pvVar7 = *(void **)(lVar10 + -8);
        *(undefined ***)(lVar10 + -0x28) = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          *(undefined8 *)(lVar10 + -8) = 0;
        }
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1c3] = 0;
    *(undefined4 *)(param_1 + 0x1c2) = 0;
  }
  lVar8 = param_1[0x1c5];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = *plVar6 * 0xf0;
      do {
        puVar2 = (undefined8 *)(lVar8 + -0x78 + lVar9);
        pvVar7 = (void *)puVar2[0xe];
        puVar2[10] = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[0xe] = 0;
        }
        pvVar7 = (void *)puVar2[9];
        puVar2[5] = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[9] = 0;
        }
        pvVar7 = (void *)puVar2[4];
        *puVar2 = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[4] = 0;
        }
        pvVar7 = (void *)puVar2[-1];
        puVar2[-5] = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[-1] = 0;
        }
        pvVar7 = (void *)puVar2[-6];
        puVar2[-10] = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[-6] = 0;
        }
        pvVar7 = (void *)puVar2[-0xb];
        puVar2[-0xf] = &PTR_FUN_04929c28;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
            }
          }
          puVar2[-0xb] = 0;
        }
        lVar9 = lVar9 + -0xf0;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
    param_1[0x1c5] = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if ((long *)param_1[0x1bf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1bf] + 0x20))();
  }
  if ((long *)param_1[0x1c0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c0] + 0x20))();
  }
  if ((long *)param_1[0x1c1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c1] + 0x20))();
  }
  if ((*(byte *)(param_1 + 0x1a6) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x1a6) = *(byte *)(param_1 + 0x1a6) & 0xf8 | 4;
    if (param_1[0x1aa] == 0) {
      if (param_1[0x1a7] != 0) goto LAB_00950a74;
    }
    else {
      FUN_03f45838(param_1 + 0x1a8);
      if (param_1[0x1a7] == 0) {
        *(undefined4 *)((long)param_1 + 0xd34) = 0xe;
      }
      else {
LAB_00950a74:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x1a5);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x1a8);
  if ((*(byte *)(param_1 + 0x19c) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8 | 4;
    if (param_1[0x1a0] == 0) {
      if (param_1[0x19d] != 0) goto LAB_00950ad4;
    }
    else {
      FUN_03f45838(param_1 + 0x19e);
      if (param_1[0x19d] == 0) {
        *(undefined4 *)((long)param_1 + 0xce4) = 0xe;
      }
      else {
LAB_00950ad4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x19b);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x19e);
  if ((*(byte *)(param_1 + 0x192) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x192) = *(byte *)(param_1 + 0x192) & 0xf8 | 4;
    if (param_1[0x196] == 0) {
      if (param_1[0x193] != 0) goto LAB_00950b34;
    }
    else {
      FUN_03f45838(param_1 + 0x194);
      if (param_1[0x193] == 0) {
        *(undefined4 *)((long)param_1 + 0xc94) = 0xe;
      }
      else {
LAB_00950b34:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x191);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x194);
  if ((*(byte *)(param_1 + 0x188) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) & 0xf8 | 4;
    if (param_1[0x18c] == 0) {
      if (param_1[0x189] != 0) goto LAB_00950b94;
    }
    else {
      FUN_03f45838(param_1 + 0x18a);
      if (param_1[0x189] == 0) {
        *(undefined4 *)((long)param_1 + 0xc44) = 0xe;
      }
      else {
LAB_00950b94:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x187);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x18a);
  if ((*(byte *)(param_1 + 0x17e) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xf8 | 4;
    if (param_1[0x182] == 0) {
      if (param_1[0x17f] != 0) goto LAB_00950bf4;
    }
    else {
      FUN_03f45838(param_1 + 0x180);
      if (param_1[0x17f] == 0) {
        *(undefined4 *)((long)param_1 + 0xbf4) = 0xe;
      }
      else {
LAB_00950bf4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x17d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x180);
  if ((*(byte *)(param_1 + 0x174) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xf8 | 4;
    if (param_1[0x178] == 0) {
      if (param_1[0x175] != 0) goto LAB_00950c54;
    }
    else {
      FUN_03f45838(param_1 + 0x176);
      if (param_1[0x175] == 0) {
        *(undefined4 *)((long)param_1 + 0xba4) = 0xe;
      }
      else {
LAB_00950c54:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x173);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x176);
  if ((*(byte *)(param_1 + 0x16a) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x16a) = *(byte *)(param_1 + 0x16a) & 0xf8 | 4;
    if (param_1[0x16e] == 0) {
      if (param_1[0x16b] != 0) goto LAB_00950cb4;
    }
    else {
      FUN_03f45838(param_1 + 0x16c);
      if (param_1[0x16b] == 0) {
        *(undefined4 *)((long)param_1 + 0xb54) = 0xe;
      }
      else {
LAB_00950cb4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x169);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x16c);
  if ((*(byte *)(param_1 + 0x160) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) & 0xf8 | 4;
    if (param_1[0x164] == 0) {
      if (param_1[0x161] != 0) goto LAB_00950d14;
    }
    else {
      FUN_03f45838(param_1 + 0x162);
      if (param_1[0x161] == 0) {
        *(undefined4 *)((long)param_1 + 0xb04) = 0xe;
      }
      else {
LAB_00950d14:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x15f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x162);
  if ((*(byte *)(param_1 + 0x156) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xf8 | 4;
    if (param_1[0x15a] == 0) {
      if (param_1[0x157] != 0) goto LAB_00950d74;
    }
    else {
      FUN_03f45838(param_1 + 0x158);
      if (param_1[0x157] == 0) {
        *(undefined4 *)((long)param_1 + 0xab4) = 0xe;
      }
      else {
LAB_00950d74:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x155);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x158);
  if ((*(byte *)(param_1 + 0x14c) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xf8 | 4;
    if (param_1[0x150] == 0) {
      if (param_1[0x14d] != 0) goto LAB_00950dd4;
    }
    else {
      FUN_03f45838(param_1 + 0x14e);
      if (param_1[0x14d] == 0) {
        *(undefined4 *)((long)param_1 + 0xa64) = 0xe;
      }
      else {
LAB_00950dd4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x14b);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x14e);
  if ((*(byte *)(param_1 + 0x142) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xf8 | 4;
    if (param_1[0x146] == 0) {
      if (param_1[0x143] != 0) goto LAB_00950e34;
    }
    else {
      FUN_03f45838(param_1 + 0x144);
      if (param_1[0x143] == 0) {
        *(undefined4 *)((long)param_1 + 0xa14) = 0xe;
      }
      else {
LAB_00950e34:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x141);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x144);
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) & 0xf8 | 4;
    if (param_1[0x13c] == 0) {
      if (param_1[0x139] != 0) goto LAB_00950e94;
    }
    else {
      FUN_03f45838(param_1 + 0x13a);
      if (param_1[0x139] == 0) {
        *(undefined4 *)((long)param_1 + 0x9c4) = 0xe;
      }
      else {
LAB_00950e94:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x137);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x13a);
  if ((*(byte *)(param_1 + 0x12e) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x12e) = *(byte *)(param_1 + 0x12e) & 0xf8 | 4;
    if (param_1[0x132] == 0) {
      if (param_1[0x12f] != 0) goto LAB_00950ef4;
    }
    else {
      FUN_03f45838(param_1 + 0x130);
      if (param_1[0x12f] == 0) {
        *(undefined4 *)((long)param_1 + 0x974) = 0xe;
      }
      else {
LAB_00950ef4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x12d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x130);
  if ((*(byte *)(param_1 + 0x124) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xf8 | 4;
    if (param_1[0x128] == 0) {
      if (param_1[0x125] != 0) goto LAB_00950f54;
    }
    else {
      FUN_03f45838(param_1 + 0x126);
      if (param_1[0x125] == 0) {
        *(undefined4 *)((long)param_1 + 0x924) = 0xe;
      }
      else {
LAB_00950f54:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x123);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x126);
  if ((*(byte *)(param_1 + 0x11a) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x11a) = *(byte *)(param_1 + 0x11a) & 0xf8 | 4;
    if (param_1[0x11e] == 0) {
      if (param_1[0x11b] != 0) goto LAB_00950fb4;
    }
    else {
      FUN_03f45838(param_1 + 0x11c);
      if (param_1[0x11b] == 0) {
        *(undefined4 *)((long)param_1 + 0x8d4) = 0xe;
      }
      else {
LAB_00950fb4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x119);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x11c);
  if ((*(byte *)(param_1 + 0x110) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xf8 | 4;
    if (param_1[0x114] == 0) {
      if (param_1[0x111] != 0) goto LAB_00951014;
    }
    else {
      FUN_03f45838(param_1 + 0x112);
      if (param_1[0x111] == 0) {
        *(undefined4 *)((long)param_1 + 0x884) = 0xe;
      }
      else {
LAB_00951014:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x10f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x112);
  if ((*(byte *)(param_1 + 0x106) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x106) = *(byte *)(param_1 + 0x106) & 0xf8 | 4;
    if (param_1[0x10a] == 0) {
      if (param_1[0x107] != 0) goto LAB_00951074;
    }
    else {
      FUN_03f45838(param_1 + 0x108);
      if (param_1[0x107] == 0) {
        *(undefined4 *)((long)param_1 + 0x834) = 0xe;
      }
      else {
LAB_00951074:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x105);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x108);
  if ((*(byte *)(param_1 + 0xfc) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) & 0xf8 | 4;
    if (param_1[0x100] == 0) {
      if (param_1[0xfd] != 0) goto LAB_009510d4;
    }
    else {
      FUN_03f45838(param_1 + 0xfe);
      if (param_1[0xfd] == 0) {
        *(undefined4 *)((long)param_1 + 0x7e4) = 0xe;
      }
      else {
LAB_009510d4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xfb);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xfe);
  if ((*(byte *)(param_1 + 0xf2) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) & 0xf8 | 4;
    if (param_1[0xf6] == 0) {
      if (param_1[0xf3] != 0) goto LAB_00951134;
    }
    else {
      FUN_03f45838(param_1 + 0xf4);
      if (param_1[0xf3] == 0) {
        *(undefined4 *)((long)param_1 + 0x794) = 0xe;
      }
      else {
LAB_00951134:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xf1);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xf4);
  if ((*(byte *)(param_1 + 0xe8) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xf8 | 4;
    if (param_1[0xec] == 0) {
      if (param_1[0xe9] != 0) goto LAB_00951194;
    }
    else {
      FUN_03f45838(param_1 + 0xea);
      if (param_1[0xe9] == 0) {
        *(undefined4 *)((long)param_1 + 0x744) = 0xe;
      }
      else {
LAB_00951194:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xe7);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xea);
  if ((*(byte *)(param_1 + 0xde) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xde) = *(byte *)(param_1 + 0xde) & 0xf8 | 4;
    if (param_1[0xe2] == 0) {
      if (param_1[0xdf] != 0) goto LAB_009511f4;
    }
    else {
      FUN_03f45838(param_1 + 0xe0);
      if (param_1[0xdf] == 0) {
        *(undefined4 *)((long)param_1 + 0x6f4) = 0xe;
      }
      else {
LAB_009511f4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xdd);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xe0);
  if ((*(byte *)(param_1 + 0xd4) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xf8 | 4;
    if (param_1[0xd8] == 0) {
      if (param_1[0xd5] != 0) goto LAB_00951254;
    }
    else {
      FUN_03f45838(param_1 + 0xd6);
      if (param_1[0xd5] == 0) {
        *(undefined4 *)((long)param_1 + 0x6a4) = 0xe;
      }
      else {
LAB_00951254:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xd3);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xd6);
  if ((*(byte *)(param_1 + 0xca) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xca) = *(byte *)(param_1 + 0xca) & 0xf8 | 4;
    if (param_1[0xce] == 0) {
      if (param_1[0xcb] != 0) goto LAB_009512b4;
    }
    else {
      FUN_03f45838(param_1 + 0xcc);
      if (param_1[0xcb] == 0) {
        *(undefined4 *)((long)param_1 + 0x654) = 0xe;
      }
      else {
LAB_009512b4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xc9);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xcc);
  if ((*(byte *)(param_1 + 0xc0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xf8 | 4;
    if (param_1[0xc4] == 0) {
      if (param_1[0xc1] != 0) goto LAB_00951314;
    }
    else {
      FUN_03f45838(param_1 + 0xc2);
      if (param_1[0xc1] == 0) {
        *(undefined4 *)((long)param_1 + 0x604) = 0xe;
      }
      else {
LAB_00951314:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xbf);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xc2);
  if ((*(byte *)(param_1 + 0xb6) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf8 | 4;
    if (param_1[0xba] == 0) {
      if (param_1[0xb7] != 0) goto LAB_00951374;
    }
    else {
      FUN_03f45838(param_1 + 0xb8);
      if (param_1[0xb7] == 0) {
        *(undefined4 *)((long)param_1 + 0x5b4) = 0xe;
      }
      else {
LAB_00951374:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xb5);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 0xac) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xf8 | 4;
    if (param_1[0xb0] == 0) {
      if (param_1[0xad] != 0) goto LAB_009513d4;
    }
    else {
      FUN_03f45838(param_1 + 0xae);
      if (param_1[0xad] == 0) {
        *(undefined4 *)((long)param_1 + 0x564) = 0xe;
      }
      else {
LAB_009513d4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0xab);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0xae);
  if ((*(byte *)(param_1 + 0x90) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xf8 | 4;
    if (param_1[0x94] == 0) {
      if (param_1[0x91] != 0) goto LAB_00951434;
    }
    else {
      FUN_03f45838(param_1 + 0x92);
      if (param_1[0x91] == 0) {
        *(undefined4 *)((long)param_1 + 0x484) = 0xe;
      }
      else {
LAB_00951434:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x8f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x92);
  if ((*(byte *)(param_1 + 0x86) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x86) = *(byte *)(param_1 + 0x86) & 0xf8 | 4;
    if (param_1[0x8a] == 0) {
      if (param_1[0x87] != 0) goto LAB_00951494;
    }
    else {
      FUN_03f45838(param_1 + 0x88);
      if (param_1[0x87] == 0) {
        *(undefined4 *)((long)param_1 + 0x434) = 0xe;
      }
      else {
LAB_00951494:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x85);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x88);
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xf8 | 4;
    if (param_1[0x80] == 0) {
      if (param_1[0x7d] != 0) goto LAB_009514f4;
    }
    else {
      FUN_03f45838(param_1 + 0x7e);
      if (param_1[0x7d] == 0) {
        *(undefined4 *)((long)param_1 + 0x3e4) = 0xe;
      }
      else {
LAB_009514f4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x7b);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x7e);
  if ((*(byte *)(param_1 + 0x72) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xf8 | 4;
    if (param_1[0x76] == 0) {
      if (param_1[0x73] != 0) goto LAB_00951554;
    }
    else {
      FUN_03f45838(param_1 + 0x74);
      if (param_1[0x73] == 0) {
        *(undefined4 *)((long)param_1 + 0x394) = 0xe;
      }
      else {
LAB_00951554:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x71);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x74);
  if ((*(byte *)(param_1 + 0x68) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf8 | 4;
    if (param_1[0x6c] == 0) {
      if (param_1[0x69] != 0) goto LAB_009515b4;
    }
    else {
      FUN_03f45838(param_1 + 0x6a);
      if (param_1[0x69] == 0) {
        *(undefined4 *)((long)param_1 + 0x344) = 0xe;
      }
      else {
LAB_009515b4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x67);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x6a);
  if ((*(byte *)(param_1 + 0x5e) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0xf8 | 4;
    if (param_1[0x62] == 0) {
      if (param_1[0x5f] != 0) goto LAB_00951614;
    }
    else {
      FUN_03f45838(param_1 + 0x60);
      if (param_1[0x5f] == 0) {
        *(undefined4 *)((long)param_1 + 0x2f4) = 0xe;
      }
      else {
LAB_00951614:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x5d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x54) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf8 | 4;
    if (param_1[0x58] == 0) {
      if (param_1[0x55] != 0) goto LAB_00951674;
    }
    else {
      FUN_03f45838(param_1 + 0x56);
      if (param_1[0x55] == 0) {
        *(undefined4 *)((long)param_1 + 0x2a4) = 0xe;
      }
      else {
LAB_00951674:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x53);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x56);
  if ((*(byte *)(param_1 + 0x4a) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf8 | 4;
    if (param_1[0x4e] == 0) {
      if (param_1[0x4b] != 0) goto LAB_009516d4;
    }
    else {
      FUN_03f45838(param_1 + 0x4c);
      if (param_1[0x4b] == 0) {
        *(undefined4 *)((long)param_1 + 0x254) = 0xe;
      }
      else {
LAB_009516d4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x49);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x4c);
  if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf8 | 4;
    if (param_1[0x44] == 0) {
      if (param_1[0x41] != 0) goto LAB_00951734;
    }
    else {
      FUN_03f45838(param_1 + 0x42);
      if (param_1[0x41] == 0) {
        *(undefined4 *)((long)param_1 + 0x204) = 0xe;
      }
      else {
LAB_00951734:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x3f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x42);
  if ((*(byte *)(param_1 + 0x36) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0xf8 | 4;
    if (param_1[0x3a] == 0) {
      if (param_1[0x37] != 0) goto LAB_00951794;
    }
    else {
      FUN_03f45838(param_1 + 0x38);
      if (param_1[0x37] == 0) {
        *(undefined4 *)((long)param_1 + 0x1b4) = 0xe;
      }
      else {
LAB_00951794:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x35);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x2c) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xf8 | 4;
    if (param_1[0x30] == 0) {
      if (param_1[0x2d] != 0) goto LAB_009517f4;
    }
    else {
      FUN_03f45838(param_1 + 0x2e);
      if (param_1[0x2d] == 0) {
        *(undefined4 *)((long)param_1 + 0x164) = 0xe;
      }
      else {
LAB_009517f4:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x2b);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x2e);
  if ((*(byte *)(param_1 + 0x22) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xf8 | 4;
    if (param_1[0x26] == 0) {
      if (param_1[0x23] != 0) goto LAB_00951854;
    }
    else {
      FUN_03f45838(param_1 + 0x24);
      if (param_1[0x23] == 0) {
        *(undefined4 *)((long)param_1 + 0x114) = 0xe;
      }
      else {
LAB_00951854:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x21);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x24);
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf8 | 4;
    if (param_1[0x1c] == 0) {
      if (param_1[0x19] == 0) goto LAB_009518cc;
    }
    else {
      FUN_03f45838(param_1 + 0x1a);
      if (param_1[0x19] == 0) {
        *(undefined4 *)((long)param_1 + 0xc4) = 0xe;
        goto LAB_009518cc;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x17);
    }
  }
LAB_009518cc:
  FUN_03f457c4(param_1 + 0x1a);
  return;
}

