
undefined8 FUN_017f7a50(uint param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  uint local_14;
  
  local_14 = param_1;
  if ((int)param_1 < 0x91dc718) {
    if ((int)param_1 < -0x214773f9) {
      if ((int)param_1 < -0x66cc4d79) {
        if ((int)param_1 < -0x7975b8e8) {
          if (param_1 == 0x84ade7bd) goto LAB_017f70e8;
          if (param_1 != 0x852d1e56) {
            uVar8 = 0x85b28224;
            goto LAB_017f7fb0;
          }
        }
        else if ((param_1 != 0x868a4718) && (param_1 != 0x8b6c7dce)) {
          uVar8 = 0x8bcc8555;
          goto LAB_017f7f04;
        }
LAB_017f7fec:
        if (DAT_05aed670 == 0) {
          puVar15 = &DAT_055c04a0;
        }
        else {
          puVar15 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar15 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar15,0);
            puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar15 = &DAT_055c04a0;
            }
          }
        }
        if (*(uint *)(puVar15 + 7) == param_1) {
          if (DAT_05292338 == 0) {
            iVar4 = 0;
            iVar3 = 0;
            iVar12 = 0x10;
            iVar13 = 0x10;
          }
          else {
            iVar4 = *(int *)(DAT_05292338 + 0xd88);
            iVar3 = *(int *)(DAT_05292338 + 0xd8c);
            iVar13 = *(int *)(DAT_05292338 + 0xd98);
            iVar12 = *(int *)(DAT_05292338 + 0xd9c);
          }
          iVar1 = iVar4;
          if (iVar13 <= iVar4) {
            iVar1 = iVar13;
          }
          if (iVar4 <= iVar13) {
            iVar4 = iVar13;
          }
          iVar13 = iVar3;
          if (iVar12 <= iVar3) {
            iVar13 = iVar12;
          }
          *(int *)(param_2 + 0x10) = iVar1;
          *(int *)(param_2 + 0x14) = iVar13;
          if (iVar3 <= iVar12) {
            iVar3 = iVar12;
          }
          *(int *)(param_2 + 0x20) = iVar4;
          *(int *)(param_2 + 0x24) = iVar3;
          return 1;
        }
        *(undefined8 *)(param_2 + 0x10) = 0x1a0000001a;
        uVar9 = 0x2500000025;
LAB_017f809c:
        *(undefined8 *)(param_2 + 0x20) = uVar9;
        return 1;
      }
      if ((int)param_1 < -0x4701dc58) {
        if (param_1 != 0x9933b287) {
          iVar4 = -0x5c2fda8c;
          if (param_1 == 0xa3d02574) {
LAB_017f7e30:
            if (DAT_05aed670 == 0) {
              puVar15 = &DAT_055c04a0;
            }
            else {
              puVar15 = &DAT_055c04a0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                puVar15 = (undefined8 *)
                          (**(code **)(*DAT_05aed668 + 0x18))
                                    (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
                iVar3 = FUN_006bd550(*puVar15,0);
                puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar3 != 0x758f7eaf) {
                  puVar15 = &DAT_055c04a0;
                }
              }
            }
            if (*(int *)(puVar15 + 7) == iVar4) goto LAB_017f80f4;
            goto LAB_017f81bc;
          }
          uVar8 = 0xb88d07fc;
          goto LAB_017f7f04;
        }
      }
      else {
        if (-0x3e092033 < (int)param_1) {
          if (param_1 != 0xc1f6dfce) {
            uVar8 = 0xd3c049f0;
            goto LAB_017f7f70;
          }
          goto LAB_017f7fec;
        }
        if (param_1 != 0xb8fe23a8) {
          uVar8 = 0xc1dab6e4;
          goto LAB_017f7fb0;
        }
      }
    }
    else {
      if ((int)param_1 < -0x917edf9) {
        if ((int)param_1 < -0x11ea17dc) {
          if (param_1 == 0xdeb88c07) goto LAB_017f7fb8;
          if (param_1 == 0xe6986d28) goto LAB_017f70e8;
          uVar8 = 0xee097098;
        }
        else {
          if ((int)param_1 < -0xe5efd5a) {
            if (param_1 != 0xee15e824) {
              uVar8 = 0xf156181d;
LAB_017f7f70:
              if (param_1 != uVar8) goto LAB_017f814c;
              goto LAB_017f7fec;
            }
            goto LAB_017f7f44;
          }
          if (param_1 == 0xf1a102a6) goto LAB_017f7fb8;
          uVar8 = 0xf40e33f8;
        }
        goto LAB_017f7f04;
      }
      if ((int)param_1 < 0x5f6c88) {
        if ((param_1 == 0xf6e81207) || (param_1 == 0xf70487f3)) {
LAB_017f7f44:
          *(undefined8 *)(param_2 + 0x10) = 0x1800000018;
          uVar9 = 0x2700000027;
          goto LAB_017f809c;
        }
        uVar8 = 0xf9ce892d;
LAB_017f7fb0:
        if (param_1 == uVar8) {
LAB_017f7fb8:
          FUN_017f7884(param_1,param_2);
          return 1;
        }
        goto LAB_017f814c;
      }
      if ((int)param_1 < 0x427dece) {
        if (param_1 != 0x5f6c88) {
          uVar8 = 0x1ac1236;
          goto LAB_017f7f04;
        }
      }
      else if (param_1 != 0x427dece) {
        uVar8 = 0x68001ae;
        goto LAB_017f7fb0;
      }
    }
LAB_017f70e8:
    local_14 = FUN_017e4f94(param_1);
    if (DAT_05574040 == 0) {
LAB_017f7164:
      uVar9 = 0;
    }
    else {
      puVar15 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
        if (((puVar15 != (undefined8 *)0x0) && ((long *)puVar15[0x26] != (long *)0x0)) &&
           (lVar6 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar6 != 0)) goto LAB_017f7158;
        goto LAB_017f7164;
      }
      lVar6 = (**(code **)(*(long *)*puVar15 + 0x38))();
      if (lVar6 == 0) goto LAB_017f7164;
      lVar6 = lVar6 + 0x70;
LAB_017f7158:
      if (9 < local_14) goto LAB_017f7164;
      lVar2 = lVar6 + 0x1962d8 + (ulong)local_14 * 0x10d8;
      if (9 < local_14) {
        lVar2 = lVar6 + 0x1962d8;
      }
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar15 == (undefined8 *)0x0)) {
        iVar4 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      }
      else {
        uVar7 = (**(code **)*puVar15)();
        iVar4 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar15 != (undefined8 *)0x0))
        {
          (**(code **)*puVar15)();
        }
      }
      uVar9 = 1;
      if (iVar4 == 1) {
        uVar5 = 0x23;
        uVar10 = 0x1c;
        goto LAB_017f7170;
      }
    }
    uVar5 = 0x25;
    uVar10 = 0x1a;
LAB_017f7170:
    *(undefined4 *)(param_2 + 0x10) = uVar10;
    *(undefined4 *)(param_2 + 0x14) = uVar10;
    *(undefined4 *)(param_2 + 0x20) = uVar5;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    return uVar9;
  }
  if ((int)param_1 < 0x483e4538) {
    if ((int)param_1 < 0x25b43b89) {
      if ((int)param_1 < 0x16f2dadc) {
        if (param_1 == 0x91dc718) goto LAB_017f7fb8;
        if (param_1 == 0xc672fa7) goto LAB_017f7d18;
        uVar8 = 0xe716ff8;
      }
      else {
        if (param_1 == 0x16f2dadc) goto LAB_017f70e8;
        if (param_1 == 0x1a13a2ea) goto LAB_017f7fb8;
        uVar8 = 0x1d096e7d;
      }
    }
    else {
      if (0x2aefed46 < (int)param_1) {
        if ((int)param_1 < 0x340da5a5) {
          if (param_1 == 0x2aefed47) goto LAB_017f7fb8;
          uVar8 = 0x302056e3;
        }
        else {
          if (param_1 == 0x340da5a5) goto LAB_017f7fb8;
          uVar8 = 0x356323a8;
        }
        goto LAB_017f7fb0;
      }
      if ((param_1 == 0x25b43b89) || (param_1 == 0x2633946a)) goto LAB_017f7fb8;
      uVar8 = 0x28c45759;
    }
LAB_017f7f04:
    if (param_1 == uVar8) goto LAB_017f70e8;
  }
  else {
    if ((int)param_1 < 0x6c9ebc71) {
      if ((int)param_1 < 0x6043fd87) {
        if (param_1 != 0x483e4538) {
          if (param_1 == 0x4d702d55) goto LAB_017f70e8;
          if (param_1 != 0x5fbb6b26) goto LAB_017f814c;
        }
LAB_017f7d18:
        if (DAT_05aed670 == 0) {
          puVar15 = &DAT_055c04a0;
        }
        else {
          puVar15 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar15 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar15,0);
            puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar15 = &DAT_055c04a0;
            }
          }
        }
        if (*(uint *)(puVar15 + 7) == param_1) {
LAB_017f80f4:
          if (DAT_05292338 == 0) {
            iVar4 = 0;
            iVar3 = 0;
            iVar12 = 0x10;
            iVar13 = 0x10;
          }
          else {
            iVar4 = *(int *)(DAT_05292338 + 0xd88);
            iVar3 = *(int *)(DAT_05292338 + 0xd8c);
            iVar13 = *(int *)(DAT_05292338 + 0xd98);
            iVar12 = *(int *)(DAT_05292338 + 0xd9c);
          }
          iVar1 = iVar4;
          if (iVar13 <= iVar4) {
            iVar1 = iVar13;
          }
          if (iVar4 <= iVar13) {
            iVar4 = iVar13;
          }
          *(int *)(param_2 + 0x10) = iVar1;
          *(int *)(param_2 + 0x20) = iVar4;
          iVar4 = iVar3;
          if (iVar12 <= iVar3) {
            iVar4 = iVar12;
          }
          if (iVar3 <= iVar12) {
            iVar3 = iVar12;
          }
          goto LAB_017f81cc;
        }
LAB_017f81bc:
        iVar4 = 0x1a;
        iVar3 = 0x25;
        *(undefined4 *)(param_2 + 0x10) = 0x1a;
        *(undefined4 *)(param_2 + 0x20) = 0x25;
LAB_017f81cc:
        *(int *)(param_2 + 0x14) = iVar4;
        *(int *)(param_2 + 0x24) = iVar3;
        return 1;
      }
      if (0x6168e44c < (int)param_1) {
        if ((param_1 == 0x6168e44d) || (param_1 == 0x65b7732d)) goto LAB_017f7f44;
        goto LAB_017f814c;
      }
      if (param_1 == 0x6043fd87) goto LAB_017f7fb8;
      uVar8 = 0x60c2c4f0;
      goto LAB_017f7f04;
    }
    if ((int)param_1 < 0x77870a84) {
      if (param_1 == 0x6c9ebc71) goto LAB_017f7f44;
      if (param_1 == 0x72a13146) goto LAB_017f70e8;
      iVar4 = 0x756daeec;
      if (param_1 == 0x756daeec) goto LAB_017f7e30;
    }
    else {
      if ((int)param_1 < 0x7dfa9ed2) {
        if (param_1 != 0x77870a84) {
          uVar8 = 0x7c939885;
          goto LAB_017f7f04;
        }
        goto LAB_017f70e8;
      }
      if (param_1 == 0x7dfa9ed2) goto LAB_017f7fb8;
      if (param_1 == 0x7fff3f46) goto LAB_017f7fec;
    }
  }
LAB_017f814c:
  iVar4 = FUN_017f34c0(param_1);
  uVar5 = FUN_017f4660(&local_14);
  switch(uVar5) {
  case 0:
    if (iVar4 == 1) {
      uVar10 = 0x23;
      uVar11 = 0x1c;
      uVar14 = 0x1c;
    }
    else {
      if (iVar4 == 2) break;
      uVar10 = 0x27;
      uVar11 = 0x18;
      uVar14 = 0x18;
    }
    goto LAB_017f8230;
  case 1:
    if (iVar4 < 4) {
      return 0;
    }
    break;
  case 2:
    if (iVar4 < 5) {
      return 0;
    }
    break;
  case 3:
    if (iVar4 < 6) {
      return 0;
    }
    break;
  case 4:
    if (iVar4 < 7) {
      return 0;
    }
    goto LAB_017f8244;
  default:
    if (iVar4 < 8) {
      return 0;
    }
LAB_017f8244:
    uVar14 = 0x1a;
    uVar10 = 0x29;
    uVar11 = 0x16;
    uVar5 = 0x25;
    goto LAB_017f8254;
  }
  uVar10 = 0x25;
  uVar11 = 0x1a;
  uVar14 = 0x1a;
LAB_017f8230:
  uVar5 = uVar10;
LAB_017f8254:
  *(undefined4 *)(param_2 + 0x10) = uVar11;
  *(undefined4 *)(param_2 + 0x14) = uVar14;
  *(undefined4 *)(param_2 + 0x20) = uVar10;
  *(undefined4 *)(param_2 + 0x24) = uVar5;
  return 1;
}

