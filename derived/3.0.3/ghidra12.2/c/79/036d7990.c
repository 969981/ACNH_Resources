
undefined8 FUN_036d7990(short param_1)

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
  
  uVar4 = DAT_05ab3e80;
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  if ((int)DAT_05ab3e80 < 1) {
    if ((((DAT_05ab3d70 != 0) && (piVar11 = *(int **)(DAT_05ab3d70 + 8), piVar11 != (int *)0x0)) &&
        ((DAT_05ab3d88 == 0 || (*DAT_05ab3d90 != '\0')))) &&
       (((*piVar11 != 0 && (piVar11[1] != 0)) && (*(ushort *)(piVar11 + 2) != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)piVar11 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)((uint)*(ushort *)(piVar11 + 2) * 8 + iVar10) + (long)piVar11);
      goto joined_r0x036d7b20;
    }
  }
  else if (DAT_05ab3e80 != 0) {
    puVar9 = (uint *)*DAT_05ab3e78;
joined_r0x036d7b20:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d7b3c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d7b3c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d7b3c;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d7b38;
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
LAB_036d7b38:
      sVar8 = 0;
LAB_036d7b3c:
      if (sVar8 == param_1) {
        return 0;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 2 || (DAT_05ab3d90[1] != '\0')))) &&
       (((1 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
      goto joined_r0x036d7ccc;
    }
  }
  else if (1 < uVar4) {
    puVar9 = (uint *)DAT_05ab3e78[1 < DAT_05ab3e70];
joined_r0x036d7ccc:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d7ce8;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d7ce8;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d7ce8;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d7ce4;
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
LAB_036d7ce4:
      sVar8 = 0;
LAB_036d7ce8:
      if (sVar8 == param_1) {
        return 1;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 2;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 3 || (DAT_05ab3d90[2] != '\0')))) &&
       (((2 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 2 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d7e80;
    }
  }
  else if (2 < uVar4) {
    if (DAT_05ab3e70 < 3) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
joined_r0x036d7e80:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d7e9c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d7e9c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d7e9c;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d7e98;
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
LAB_036d7e98:
      sVar8 = 0;
LAB_036d7e9c:
      if (sVar8 == param_1) {
        return 2;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 3;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 4 || (DAT_05ab3d90[3] != '\0')))) &&
       (((3 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 3 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d803c;
    }
  }
  else if (3 < uVar4) {
    if (DAT_05ab3e70 < 4) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
joined_r0x036d803c:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d8058;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8058;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d8058;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8054;
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
LAB_036d8054:
      sVar8 = 0;
LAB_036d8058:
      if (sVar8 == param_1) {
        return 3;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 4;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 5 || (DAT_05ab3d90[4] != '\0')))) &&
       (((4 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 4 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d81f0;
    }
  }
  else if (4 < uVar4) {
    if (DAT_05ab3e70 < 5) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
joined_r0x036d81f0:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d820c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d820c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d820c;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8208;
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
LAB_036d8208:
      sVar8 = 0;
LAB_036d820c:
      if (sVar8 == param_1) {
        return 4;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 5;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 6 || (DAT_05ab3d90[5] != '\0')))) &&
       (((5 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 5 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d83ac;
    }
  }
  else if (5 < uVar4) {
    if (DAT_05ab3e70 < 6) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
joined_r0x036d83ac:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d83c8;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d83c8;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d83c8;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d83c4;
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
LAB_036d83c4:
      sVar8 = 0;
LAB_036d83c8:
      if (sVar8 == param_1) {
        return 5;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 6;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 != 0) && (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 != (uint *)0x0)) &&
        ((DAT_05ab3d88 < 7 || (DAT_05ab3d90[6] != '\0')))) &&
       (((6 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * 6 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9
                       );
      goto joined_r0x036d8560;
    }
  }
  else if (6 < uVar4) {
    if (DAT_05ab3e70 < 7) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
joined_r0x036d8560:
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar12 = *PTR_DAT_04bcac30;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined4 *)puVar7 = 0xffffffff;
            *puVar6 = 1;
            uVar2 = *puVar9;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
                goto LAB_036d857c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar2;
          sVar8 = 0;
          if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d857c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
          sVar8 = 0;
          if (lVar1 == 0) goto LAB_036d857c;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_036d8578;
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
LAB_036d8578:
      sVar8 = 0;
LAB_036d857c:
      if (sVar8 == param_1) {
        return 6;
      }
    }
  }
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 7;
  if ((int)uVar4 < 1) {
    if ((((DAT_05ab3d70 == 0) || (puVar9 = *(uint **)(DAT_05ab3d70 + 8), puVar9 == (uint *)0x0)) ||
        ((7 < DAT_05ab3d88 && (DAT_05ab3d90[7] == '\0')))) ||
       (((*puVar9 < 8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_036d874c;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * 7 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
  }
  else {
    if (uVar4 < 8) goto LAB_036d874c;
    if (DAT_05ab3e70 < 8) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
  }
  if (puVar9 != (uint *)0x0) {
    uVar2 = *puVar9;
    if (uVar2 != 0) {
      cVar12 = *PTR_DAT_04bcac30;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined4 *)puVar7 = 0xffffffff;
          *puVar6 = 1;
          uVar2 = *puVar9;
        }
        else {
          uVar3 = *(uint *)puVar7;
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
              sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
              goto LAB_036d8738;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar8 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d8738;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
        sVar8 = 0;
        if (lVar1 == 0) goto LAB_036d8738;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_036d8734;
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
LAB_036d8734:
    sVar8 = 0;
LAB_036d8738:
    if (sVar8 == param_1) {
      return 7;
    }
  }
LAB_036d874c:
  puVar7 = PTR_DAT_04bcac38;
  puVar6 = PTR_DAT_04bcac30;
  uVar2 = 8;
  if ((int)uVar4 < 1) {
    if (DAT_05ab3d70 == 0) {
      return 0;
    }
    puVar9 = *(uint **)(DAT_05ab3d70 + 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if ((8 < DAT_05ab3d88) && (DAT_05ab3d90[8] == '\0')) {
      return 0;
    }
    if (*puVar9 < 9) {
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
    puVar9 = (uint *)((ulong)(puVar9[1] * 8 + (uint)(ushort)puVar9[2] * 8 + iVar10) + (long)puVar9);
  }
  else {
    if (uVar4 < 9) {
      return 0;
    }
    if (DAT_05ab3e70 < 9) {
      uVar2 = 0;
    }
    puVar9 = (uint *)DAT_05ab3e78[uVar2];
  }
  if (puVar9 != (uint *)0x0) {
    uVar4 = *puVar9;
    if (uVar4 != 0) {
      cVar12 = *PTR_DAT_04bcac30;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined4 *)puVar7 = 0xffffffff;
          *puVar6 = 1;
          uVar4 = *puVar9;
        }
        else {
          uVar2 = *(uint *)puVar7;
          if (-1 < (int)uVar2) {
            if ((short *)((ulong)uVar2 + (long)puVar9) != (short *)0x0) {
              sVar8 = *(short *)((ulong)uVar2 + (long)puVar9);
              goto LAB_036d88ec;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar4;
        sVar8 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar8 = 0, puVar9 == puVar5)) goto LAB_036d88ec;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar5);
        sVar8 = 0;
        if (lVar1 == 0) goto LAB_036d88ec;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_036d88e8;
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
LAB_036d88e8:
    sVar8 = 0;
LAB_036d88ec:
    if (sVar8 == param_1) {
      return 8;
    }
  }
  return 0;
}

