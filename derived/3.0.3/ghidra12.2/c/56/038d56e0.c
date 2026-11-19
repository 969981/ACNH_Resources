
void FUN_038d56e0(long *param_1,long *param_2,int param_3,uint param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  ulong *puVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 uVar16;
  int iVar17;
  ushort local_40 [32];
  
  switch((int)param_1[6]) {
  case 0:
    uVar5 = *(uint *)(param_1 + 3);
    if ((param_4 & 1) == 0) {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        pbVar9 = (byte *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        pbVar9 = (byte *)*param_1;
        *param_1 = (long)(pbVar9 + 8);
      }
      uVar13 = (uint)*pbVar9;
      if (*pbVar9 == 0) {
LAB_038d5cd0:
        bVar3 = true;
        local_40[0] = 0x30;
        uVar5 = 1;
      }
      else if (param_3 == 8) {
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar4 = 7 < uVar13;
          uVar13 = uVar13 >> 3;
          bVar3 = true;
        } while (bVar4);
      }
      else if (param_3 == 0x10) {
        uVar5 = 0;
        sVar12 = 0x37;
        if ((param_5 & 1) == 0) {
          sVar12 = 0x57;
        }
        do {
          if ((int)uVar5 < 0x1f) {
            sVar1 = 0x30;
            if (9 < (uVar13 & 0xf)) {
              sVar1 = sVar12;
            }
            local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
            uVar5 = uVar5 + 1;
          }
          bVar4 = 0xf < uVar13;
          uVar13 = uVar13 >> 4;
          bVar3 = true;
        } while (bVar4);
      }
      else {
        if (param_3 != 10) goto switchD_038d5704_default;
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar3 = true;
          bVar4 = 9 < uVar13;
          uVar13 = uVar13 / 10;
        } while (bVar4);
      }
    }
    else {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        piVar7 = (int *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        piVar7 = (int *)*param_1;
        *param_1 = (long)(piVar7 + 2);
      }
      iVar14 = *piVar7 * 0x1000000;
      uVar13 = (uint)(char)*piVar7;
      if (iVar14 < -0xffffff) {
        uVar13 = -uVar13;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
          } while (bVar4);
        }
        else if (param_3 == 10) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
        else {
LAB_038d6144:
          uVar5 = 0;
          bVar3 = false;
        }
      }
      else {
        if (iVar14 == 0) goto LAB_038d5cd0;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
            bVar3 = true;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
            bVar3 = true;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto switchD_038d5704_default;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = true;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
      }
    }
    break;
  case 1:
    uVar5 = *(uint *)(param_1 + 3);
    if ((param_4 & 1) == 0) {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        puVar10 = (ushort *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        puVar10 = (ushort *)*param_1;
        *param_1 = (long)(puVar10 + 4);
      }
      uVar13 = (uint)*puVar10;
      if (*puVar10 == 0) goto LAB_038d5cd0;
      if (param_3 == 8) {
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar4 = 7 < uVar13;
          uVar13 = uVar13 >> 3;
          bVar3 = true;
        } while (bVar4);
      }
      else if (param_3 == 0x10) {
        uVar5 = 0;
        sVar12 = 0x37;
        if ((param_5 & 1) == 0) {
          sVar12 = 0x57;
        }
        do {
          if ((int)uVar5 < 0x1f) {
            sVar1 = 0x30;
            if (9 < (uVar13 & 0xf)) {
              sVar1 = sVar12;
            }
            local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
            uVar5 = uVar5 + 1;
          }
          bVar4 = 0xf < uVar13;
          uVar13 = uVar13 >> 4;
          bVar3 = true;
        } while (bVar4);
      }
      else {
        if (param_3 != 10) goto switchD_038d5704_default;
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar3 = true;
          bVar4 = 9 < uVar13;
          uVar13 = uVar13 / 10;
        } while (bVar4);
      }
    }
    else {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        piVar7 = (int *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        piVar7 = (int *)*param_1;
        *param_1 = (long)(piVar7 + 2);
      }
      iVar14 = *piVar7 * 0x10000;
      uVar13 = (uint)(short)*piVar7;
      if (iVar14 < -0xffff) {
        uVar13 = -uVar13;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto LAB_038d6144;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
      }
      else {
        if (iVar14 == 0) goto LAB_038d5cd0;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
            bVar3 = true;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
            bVar3 = true;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto switchD_038d5704_default;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = true;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
      }
    }
    break;
  case 2:
  case 3:
    uVar5 = *(uint *)(param_1 + 3);
    if ((param_4 & 1) == 0) {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        uVar13 = *(uint *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        puVar6 = (uint *)*param_1;
        *param_1 = (long)(puVar6 + 2);
        uVar13 = *puVar6;
      }
      if (uVar13 == 0) goto LAB_038d5cd0;
      if (param_3 == 8) {
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar4 = 7 < uVar13;
          uVar13 = uVar13 >> 3;
          bVar3 = true;
        } while (bVar4);
      }
      else if (param_3 == 0x10) {
        uVar5 = 0;
        sVar12 = 0x37;
        if ((param_5 & 1) == 0) {
          sVar12 = 0x57;
        }
        do {
          if ((int)uVar5 < 0x1f) {
            sVar1 = 0x30;
            if (9 < (uVar13 & 0xf)) {
              sVar1 = sVar12;
            }
            local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
            uVar5 = uVar5 + 1;
          }
          bVar4 = 0xf < uVar13;
          uVar13 = uVar13 >> 4;
          bVar3 = true;
        } while (bVar4);
      }
      else {
        if (param_3 != 10) goto switchD_038d5704_default;
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar3 = true;
          bVar4 = 9 < uVar13;
          uVar13 = uVar13 / 10;
        } while (bVar4);
      }
    }
    else {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        uVar13 = *(uint *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        puVar6 = (uint *)*param_1;
        *param_1 = (long)(puVar6 + 2);
        uVar13 = *puVar6;
      }
      if ((int)uVar13 < 0) {
        uVar13 = -uVar13;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto LAB_038d6144;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
      }
      else {
        if (uVar13 == 0) goto LAB_038d5cd0;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar13 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar4 = 7 < uVar13;
            uVar13 = uVar13 >> 3;
            bVar3 = true;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              sVar1 = 0x30;
              if (9 < (uVar13 & 0xf)) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)(uVar13 & 0xf);
              uVar5 = uVar5 + 1;
            }
            bVar4 = 0xf < uVar13;
            uVar13 = uVar13 >> 4;
            bVar3 = true;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto switchD_038d5704_default;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = true;
            bVar4 = 9 < uVar13;
            uVar13 = uVar13 / 10;
          } while (bVar4);
        }
      }
    }
    break;
  case 4:
    uVar5 = *(uint *)(param_1 + 3);
    if ((param_4 & 1) == 0) {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        puVar8 = (ulong *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        puVar8 = (ulong *)*param_1;
        *param_1 = (long)(puVar8 + 1);
      }
      uVar11 = *puVar8;
      if (uVar11 == 0) goto LAB_038d5cd0;
      if (param_3 == 8) {
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (ushort)uVar11 & 7 | 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar4 = 7 < uVar11;
          uVar11 = uVar11 >> 3;
          bVar3 = true;
        } while (bVar4);
      }
      else if (param_3 == 0x10) {
        uVar5 = 0;
        sVar12 = 0x37;
        if ((param_5 & 1) == 0) {
          sVar12 = 0x57;
        }
        do {
          if ((int)uVar5 < 0x1f) {
            uVar13 = (uint)uVar11 & 0xf;
            sVar1 = 0x30;
            if (9 < uVar13) {
              sVar1 = sVar12;
            }
            local_40[(int)uVar5] = sVar1 + (short)uVar13;
            uVar5 = uVar5 + 1;
          }
          bVar3 = true;
          bVar4 = 0xf < uVar11;
          uVar11 = uVar11 >> 4;
        } while (bVar4);
      }
      else {
        if (param_3 != 10) goto switchD_038d5704_default;
        uVar5 = 0;
        do {
          if ((int)uVar5 < 0x1f) {
            local_40[(int)uVar5] = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
            uVar5 = uVar5 + 1;
          }
          bVar3 = true;
          bVar4 = 9 < uVar11;
          uVar11 = uVar11 / 10;
        } while (bVar4);
      }
    }
    else {
      if (((int)uVar5 < 0) && (*(uint *)(param_1 + 3) = uVar5 + 8, uVar5 < 0xfffffff9)) {
        puVar8 = (ulong *)(param_1[1] + (long)(int)uVar5);
      }
      else {
        puVar8 = (ulong *)*param_1;
        *param_1 = (long)(puVar8 + 1);
      }
      uVar11 = *puVar8;
      if ((long)uVar11 < 0) {
        uVar11 = -uVar11;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar11 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 7 < uVar11;
            uVar11 = uVar11 >> 3;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              uVar13 = (uint)uVar11 & 0xf;
              sVar1 = 0x30;
              if (9 < uVar13) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)uVar13;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 0xf < uVar11;
            uVar11 = uVar11 >> 4;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto LAB_038d6144;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = false;
            bVar4 = 9 < uVar11;
            uVar11 = uVar11 / 10;
          } while (bVar4);
        }
      }
      else {
        if (uVar11 == 0) goto LAB_038d5cd0;
        if (param_3 == 8) {
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (ushort)uVar11 & 7 | 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar4 = 7 < uVar11;
            uVar11 = uVar11 >> 3;
            bVar3 = true;
          } while (bVar4);
        }
        else if (param_3 == 0x10) {
          uVar5 = 0;
          sVar12 = 0x37;
          if ((param_5 & 1) == 0) {
            sVar12 = 0x57;
          }
          do {
            if ((int)uVar5 < 0x1f) {
              uVar13 = (uint)uVar11 & 0xf;
              sVar1 = 0x30;
              if (9 < uVar13) {
                sVar1 = sVar12;
              }
              local_40[(int)uVar5] = sVar1 + (short)uVar13;
              uVar5 = uVar5 + 1;
            }
            bVar4 = 0xf < uVar11;
            uVar11 = uVar11 >> 4;
            bVar3 = true;
          } while (bVar4);
        }
        else {
          if (param_3 != 10) goto switchD_038d5704_default;
          uVar5 = 0;
          do {
            if ((int)uVar5 < 0x1f) {
              local_40[(int)uVar5] = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
              uVar5 = uVar5 + 1;
            }
            bVar3 = true;
            bVar4 = 9 < uVar11;
            uVar11 = uVar11 / 10;
          } while (bVar4);
        }
      }
    }
    break;
  default:
switchD_038d5704_default:
    uVar5 = 0;
    bVar3 = true;
  }
  uVar13 = uVar5;
  if (*(char *)((long)param_1 + 0x2c) == '\0') {
    iVar14 = 0;
    if ((param_4 & 1) == 0) goto LAB_038d5d24;
LAB_038d5d00:
    if ((!bVar3) || ((*(byte *)(param_1 + 4) & 10) != 0)) {
LAB_038d5d3c:
      uVar13 = uVar13 + 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 5);
    iVar14 = 0;
    if (uVar5 <= uVar2) {
      uVar13 = uVar2;
      iVar14 = uVar2 - uVar5;
    }
    if ((param_4 & 1) != 0) goto LAB_038d5d00;
LAB_038d5d24:
    if ((*(byte *)(param_1 + 4) >> 4 & 1) != 0) {
      if (param_3 == 0x10) {
        uVar13 = uVar13 + 2;
        goto LAB_038d5d40;
      }
      if (param_3 != 8) goto LAB_038d5d40;
      goto LAB_038d5d3c;
    }
  }
LAB_038d5d40:
  uVar2 = *(uint *)((long)param_1 + 0x24);
  iVar15 = uVar2 - uVar13;
  if (uVar2 < uVar13 || iVar15 == 0) {
LAB_038d5de8:
    iVar15 = 0;
LAB_038d5dec:
    if ((param_4 & 1) == 0) goto LAB_038d5d6c;
LAB_038d5df0:
    if (bVar3) {
      if ((*(uint *)(param_1 + 4) >> 1 & 1) == 0) {
        if ((*(uint *)(param_1 + 4) >> 3 & 1) == 0) goto joined_r0x038d5fb8;
        if (*(int *)((long)param_2 + 0xc) < (int)param_2[1]) {
          *(undefined2 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc) * 2) = 0x20;
          goto LAB_038d5fac;
        }
      }
      else if (*(int *)((long)param_2 + 0xc) < (int)param_2[1]) {
        *(undefined2 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc) * 2) = 0x2b;
        goto LAB_038d5fac;
      }
      goto LAB_038d5e98;
    }
    if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) goto LAB_038d5e98;
    *(undefined2 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc) * 2) = 0x2d;
LAB_038d5fac:
    *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + 1;
  }
  else {
    if ((*(uint *)(param_1 + 4) & 1) != 0) goto LAB_038d5dec;
    if ((*(char *)((long)param_1 + 0x2c) != '\0') || ((*(uint *)(param_1 + 4) >> 2 & 1) == 0)) {
      if (uVar2 != uVar13) {
        iVar17 = *(int *)((long)param_2 + 0xc);
        iVar15 = uVar13 - uVar2;
        do {
          if ((int)param_2[1] <= iVar17) {
            *(undefined1 *)(param_2 + 2) = 1;
            goto joined_r0x038d60cc;
          }
          bVar4 = iVar15 != -1;
          iVar15 = iVar15 + 1;
          *(undefined2 *)(*param_2 + (long)iVar17 * 2) = 0x20;
          iVar17 = *(int *)((long)param_2 + 0xc) + 1;
          *(int *)((long)param_2 + 0xc) = iVar17;
        } while (bVar4);
      }
      goto LAB_038d5de8;
    }
    iVar14 = (iVar14 - uVar13) + uVar2;
joined_r0x038d60cc:
    iVar15 = 0;
    if ((param_4 & 1) != 0) goto LAB_038d5df0;
LAB_038d5d6c:
    if ((*(byte *)(param_1 + 4) >> 4 & 1) == 0) goto joined_r0x038d5fb8;
    if (param_3 == 0x10) {
      iVar17 = *(int *)((long)param_2 + 0xc);
      if (iVar17 < (int)param_2[1]) {
        *(undefined2 *)(*param_2 + (long)iVar17 * 2) = 0x30;
        iVar17 = *(int *)((long)param_2 + 0xc) + 1;
        *(int *)((long)param_2 + 0xc) = iVar17;
        if (iVar17 < (int)param_2[1]) {
LAB_038d5f94:
          uVar16 = 0x58;
          if ((param_5 & 1) == 0) {
            uVar16 = 0x78;
          }
          *(undefined2 *)(*param_2 + (long)iVar17 * 2) = uVar16;
          goto LAB_038d5fac;
        }
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        if (iVar17 < (int)param_2[1]) goto LAB_038d5f94;
      }
    }
    else {
      if (param_3 != 8) goto joined_r0x038d5fb8;
      if (*(int *)((long)param_2 + 0xc) < (int)param_2[1]) {
        *(undefined2 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc) * 2) = 0x30;
        goto LAB_038d5fac;
      }
    }
LAB_038d5e98:
    *(undefined1 *)(param_2 + 2) = 1;
  }
joined_r0x038d5fb8:
  if (iVar14 != 0) {
    iVar17 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar17) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      iVar14 = iVar14 + -1;
      *(undefined2 *)(*param_2 + (long)iVar17 * 2) = 0x30;
      iVar17 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar17;
    } while (iVar14 != 0);
  }
  if (0 < (int)uVar5) {
    iVar14 = *(int *)((long)param_2 + 0xc);
    if (iVar14 < (int)param_2[1]) {
      uVar11 = (ulong)uVar5 + 1;
      do {
        if (iVar14 < (int)param_2[1]) {
          *(ushort *)(*param_2 + (long)iVar14 * 2) = local_40[uVar11 - 2 & 0xffffffff];
          iVar14 = *(int *)((long)param_2 + 0xc) + 1;
          *(int *)((long)param_2 + 0xc) = iVar14;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
        }
        uVar11 = uVar11 - 1;
      } while (1 < uVar11);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
    }
  }
  if (iVar15 != 0) {
    iVar14 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar14) {
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
      iVar15 = iVar15 + -1;
      *(undefined2 *)(*param_2 + (long)iVar14 * 2) = 0x20;
      iVar14 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar14;
    } while (iVar15 != 0);
  }
  return;
}

