
undefined8 FUN_036d8910(short param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  char cVar12;
  ulong uVar13;
  
  uVar4 = DAT_05ab4098;
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  if ((int)DAT_05ab4098 < 1) {
    if ((((DAT_05ab3f88 != 0) && (piVar11 = *(int **)(DAT_05ab3f88 + 8), piVar11 != (int *)0x0)) &&
        ((DAT_05ab3fa0 == 0 || (*DAT_05ab3fa8 != '\0')))) &&
       (((*piVar11 != 0 && (piVar11[1] != 0)) && (*(ushort *)(piVar11 + 2) != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)piVar11 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar10) + (long)piVar11);
      goto joined_r0x036d8aa0;
    }
  }
  else if (DAT_05ab4098 != 0) {
    puVar9 = (uint *)*DAT_05ab4090;
joined_r0x036d8aa0:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d8abc;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8abc;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d8abc;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8ab8;
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)puVar7 = iVar10;
          uVar2 = *puVar9;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_036d8ab8:
      sVar8 = 0;
LAB_036d8abc:
      if (sVar8 == param_1) {
        return 0;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3f88 != 0) && (puVar9 = *(uint **)(DAT_05ab3f88 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3fa0 < 2 || (DAT_05ab3fa8[1] != '\0')))) &&
       (((1 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
      goto joined_r0x036d8c4c;
    }
  }
  else if (1 < uVar4) {
    puVar9 = (uint *)DAT_05ab4090[1 < DAT_05ab4088];
joined_r0x036d8c4c:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d8c68;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8c68;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d8c68;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8c64;
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)puVar7 = iVar10;
          uVar2 = *puVar9;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_036d8c64:
      sVar8 = 0;
LAB_036d8c68:
      if (sVar8 == param_1) {
        return 1;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  uVar2 = 2;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3f88 != 0) && (puVar9 = *(uint **)(DAT_05ab3f88 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3fa0 < 3 || (DAT_05ab3fa8[2] != '\0')))) &&
       (((2 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 2 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d8e00;
    }
  }
  else if (2 < uVar4) {
    if (DAT_05ab4088 < 3) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab4090[uVar2];
joined_r0x036d8e00:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d8e1c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8e1c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d8e1c;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8e18;
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)puVar7 = iVar10;
          uVar2 = *puVar9;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_036d8e18:
      sVar8 = 0;
LAB_036d8e1c:
      if (sVar8 == param_1) {
        return 2;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  uVar2 = 3;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3f88 != 0) && (puVar9 = *(uint **)(DAT_05ab3f88 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3fa0 < 4 || (DAT_05ab3fa8[3] != '\0')))) &&
       (((3 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 3 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d8fbc;
    }
  }
  else if (3 < uVar4) {
    if (DAT_05ab4088 < 4) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab4090[uVar2];
joined_r0x036d8fbc:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d8fd8;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8fd8;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d8fd8;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8fd4;
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)puVar7 = iVar10;
          uVar2 = *puVar9;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_036d8fd4:
      sVar8 = 0;
LAB_036d8fd8:
      if (sVar8 == param_1) {
        return 3;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  uVar2 = 4;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3f88 == 0) || (puVar9 = *(uint **)(DAT_05ab3f88 + 8), puVar9 == (uint *)0x0)) ||
        ((4 < DAT_05ab3fa0 && (DAT_05ab3fa8[4] == '\0')))) ||
       (((*puVar9 < 5 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_036d91a0;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * 4 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
  }
  else {
    if (uVar4 < 5) goto LAB_036d91a0;
    if (DAT_05ab4088 < 5) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab4090[uVar2];
  }
  if (puVar9 != (uint *)0x0) {
    uVar2 = *puVar9;
    if (uVar2 != 0) {
      cVar12 = *PTR_DAT_04bcac48;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          uVar2 = *puVar9;
        }
        else {
          uVar3 = *(uint *)puVar7;
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
              sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
              goto LAB_036d918c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar8 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d918c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
        sVar8 = 0;
        if (lVar1 == 0) goto LAB_036d918c;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_036d9188;
        }
        iVar10 = 0;
        if (*piVar11 != -1) {
          iVar10 = *piVar11;
        }
        *(int *)puVar7 = iVar10;
        uVar2 = *puVar9;
        if (uVar2 == 0) break;
      } while( true );
    }
LAB_036d9188:
    sVar8 = 0;
LAB_036d918c:
    if (sVar8 == param_1) {
      return 4;
    }
  }
LAB_036d91a0:
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  uVar2 = 5;
  if ((int)uVar4 < 1) {
    if (DAT_05ab3f88 == 0) {
      return 0;
    }
    puVar9 = *(uint **)(DAT_05ab3f88 + 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if ((5 < DAT_05ab3fa0) && (DAT_05ab3fa8[5] == '\0')) {
      return 0;
    }
    if (*puVar9 < 6) {
      return 0;
    }
    if (puVar9[1] == 0) {
      return 0;
    }
    if ((ushort)puVar9[2] == 0) {
      return 0;
    }
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * 5 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
  }
  else {
    if (uVar4 < 6) {
      return 0;
    }
    if (DAT_05ab4088 < 6) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab4090[uVar2];
  }
  if (puVar9 != (uint *)0x0) {
    uVar4 = *puVar9;
    if (uVar4 != 0) {
      cVar12 = *PTR_DAT_04bcac48;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          uVar4 = *puVar9;
        }
        else {
          uVar2 = *(uint *)puVar7;
          if (-1 < (int)uVar2) {
            if ((short *)((ulong)uVar2 + (long)puVar9) != (short *)0x0) {
              sVar8 = *(short *)((ulong)uVar2 + (long)puVar9);
              goto LAB_036d9348;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar4;
        sVar8 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d9348;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
        sVar8 = 0;
        if (lVar1 == 0) goto LAB_036d9348;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_036d9344;
        }
        iVar10 = 0;
        if (*piVar11 != -1) {
          iVar10 = *piVar11;
        }
        *(int *)puVar7 = iVar10;
        uVar4 = *puVar9;
        if (uVar4 == 0) break;
      } while( true );
    }
LAB_036d9344:
    sVar8 = 0;
LAB_036d9348:
    if (sVar8 == param_1) {
      return 5;
    }
  }
  return 0;
}

