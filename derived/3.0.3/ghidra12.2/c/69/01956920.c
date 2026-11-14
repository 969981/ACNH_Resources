
void FUN_01956920(long param_1,long *param_2,long param_3,int *param_4,int *param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  char cVar15;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  if ((param_3 == 0) || (DAT_052d2598 == 0)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x170);
  if ((param_8 & 1) == 0) {
    uVar14 = 0;
    do {
      if ((int)*(uint *)(param_3 + 0x1c0) < 1) {
        lVar7 = *(long *)(param_3 + 0xb0);
        if (lVar7 == 0) {
          return;
        }
        uVar12 = 0;
        if (*(uint **)(lVar7 + 8) != (uint *)0x0) {
          uVar12 = (ulong)**(uint **)(lVar7 + 8);
        }
        if (uVar12 <= uVar14) {
          return;
        }
        if ((((lVar7 != 0) && (puVar13 = *(uint **)(lVar7 + 8), puVar13 != (uint *)0x0)) &&
            ((*(uint *)(param_3 + 200) <= uVar14 ||
             (*(char *)(*(long *)(param_3 + 0xd0) + uVar14) != '\0')))) &&
           (((uVar14 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * (int)uVar14 + (uint)(ushort)puVar13[2] * 8 +
                                    iVar11) + (long)puVar13);
          goto joined_r0x01956e40;
        }
      }
      else {
        if (*(uint *)(param_3 + 0x1c0) <= uVar14) {
          return;
        }
        uVar12 = uVar14 & 0xffffffff;
        if (*(uint *)(param_3 + 0x1b0) <= uVar14) {
          uVar12 = 0;
        }
        puVar13 = *(uint **)(*(long *)(param_3 + 0x1b8) + uVar12 * 8);
joined_r0x01956e40:
        if (puVar13 != (uint *)0x0) {
          uVar5 = *puVar13;
          if (uVar5 != 0) {
            cVar15 = DAT_052cba40;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                DAT_052cba40 = '\x01';
                memset(&DAT_052cba44,0xff,300);
                uVar5 = *puVar13;
              }
              else {
                if (-1 < (int)DAT_052cba44) {
                  if ((undefined2 *)((ulong)DAT_052cba44 + (long)puVar13) != (undefined2 *)0x0) {
                    uVar3 = *(undefined2 *)((ulong)DAT_052cba44 + (long)puVar13);
                    goto LAB_01956e64;
                  }
                  break;
                }
                if (DAT_052cba44 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)uVar5;
              uVar3 = 0;
              if ((puVar10 == (uint *)0x0) || (uVar3 = 0, puVar13 == puVar10)) goto LAB_01956e64;
              lVar7 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar13 + (lVar7 - (long)puVar10);
              uVar3 = 0;
              if (lVar7 == 0) goto LAB_01956e64;
              uVar12 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
              DAT_052cba44 = 0xfffffffe;
              if (uVar12 == 0) break;
              puVar10 = (uint *)(lVar7 + 4);
              while (puVar10[-1] != 0x20cb67bc) {
                puVar10 = puVar10 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01956e60;
              }
              DAT_052cba44 = 0;
              if (*puVar10 != 0xffffffff) {
                DAT_052cba44 = *puVar10;
              }
              uVar5 = *puVar13;
              if (uVar5 == 0) break;
            } while( true );
          }
LAB_01956e60:
          uVar3 = 0;
LAB_01956e64:
          local_68 = uVar3;
          local_66 = 0;
          local_64 = 0;
          FUN_0277d4ac(&local_68);
          uVar6 = FUN_0277d6c4(&local_68);
          uVar12 = (**(code **)*param_6)(param_6,uVar6,param_7);
          if ((uVar12 & 1) != 0) {
            uVar5 = *param_5 + *param_4 * 6;
            plVar2 = plVar1 + (ulong)uVar5 * 2;
            if (0x47 < uVar5) {
              plVar2 = plVar1;
            }
            pcVar9 = (code *)*plVar2;
            if ((plVar2[1] & 1U) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)((long)puVar13 + (plVar2[1] >> 1)));
            }
            sVar4 = (*pcVar9)();
            if (sVar4 != 0) {
              FUN_0277dedc(&local_68);
              lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
              uVar5 = FUN_0277d6c4(&local_68);
              if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while( true );
  }
  uVar14 = 0;
  do {
    if ((int)*(uint *)(param_3 + 0x1c0) < 1) {
      lVar7 = *(long *)(param_3 + 0xb0);
      if (lVar7 == 0) {
        return;
      }
      uVar12 = 0;
      if (*(uint **)(lVar7 + 8) != (uint *)0x0) {
        uVar12 = (ulong)**(uint **)(lVar7 + 8);
      }
      if (uVar12 <= uVar14) {
        return;
      }
      if ((((lVar7 != 0) && (puVar13 = *(uint **)(lVar7 + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(param_3 + 200) <= uVar14 ||
           (*(char *)(*(long *)(param_3 + 0xd0) + uVar14) != '\0')))) &&
         (((uVar14 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * (int)uVar14 + (uint)(ushort)puVar13[2] * 8 + iVar11)
                          + (long)puVar13);
        goto joined_r0x01956b20;
      }
    }
    else {
      if (*(uint *)(param_3 + 0x1c0) <= uVar14) {
        return;
      }
      uVar12 = uVar14 & 0xffffffff;
      if (*(uint *)(param_3 + 0x1b0) <= uVar14) {
        uVar12 = 0;
      }
      puVar13 = *(uint **)(*(long *)(param_3 + 0x1b8) + uVar12 * 8);
joined_r0x01956b20:
      if (puVar13 != (uint *)0x0) {
        uVar5 = *puVar13;
        if (uVar5 != 0) {
          cVar15 = DAT_052cba40;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              DAT_052cba40 = '\x01';
              memset(&DAT_052cba44,0xff,300);
              uVar5 = *puVar13;
            }
            else {
              if (-1 < (int)DAT_052cba44) {
                if ((undefined2 *)((ulong)DAT_052cba44 + (long)puVar13) != (undefined2 *)0x0) {
                  uVar3 = *(undefined2 *)((ulong)DAT_052cba44 + (long)puVar13);
                  goto LAB_01956b44;
                }
                break;
              }
              if (DAT_052cba44 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar5;
            uVar3 = 0;
            if ((puVar10 == (uint *)0x0) || (uVar3 = 0, puVar13 == puVar10)) goto LAB_01956b44;
            lVar7 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar13 + (lVar7 - (long)puVar10);
            uVar3 = 0;
            if (lVar7 == 0) goto LAB_01956b44;
            uVar12 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
            DAT_052cba44 = 0xfffffffe;
            if (uVar12 == 0) break;
            puVar10 = (uint *)(lVar7 + 4);
            while (puVar10[-1] != 0x20cb67bc) {
              puVar10 = puVar10 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_01956b40;
            }
            DAT_052cba44 = 0;
            if (*puVar10 != 0xffffffff) {
              DAT_052cba44 = *puVar10;
            }
            uVar5 = *puVar13;
            if (uVar5 == 0) break;
          } while( true );
        }
LAB_01956b40:
        uVar3 = 0;
LAB_01956b44:
        local_68 = uVar3;
        local_66 = 0;
        local_64 = 0;
        FUN_0277d4ac(&local_68);
        lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
        uVar5 = FUN_0277d6c4(&local_68);
        if (((uVar5 >> 3 & 0x1fff) < 0x753) &&
           ((*(uint *)(lVar7 + (ulong)((uVar5 & 0xffff) >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) !=
            0)) {
          uVar6 = FUN_0277d6c4(&local_68);
          uVar12 = (**(code **)*param_6)(param_6,uVar6,param_7);
          if ((uVar12 & 1) == 0) {
LAB_01956c48:
            lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
            uVar5 = FUN_0277d6c4(&local_68);
            if (0x752 < (uVar5 >> 3 & 0x1fff)) goto LAB_01956990;
            lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
            uVar5 = *(uint *)(lVar7 + lVar8) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
          }
          else {
            uVar5 = *param_5 + *param_4 * 6;
            plVar2 = plVar1 + (ulong)uVar5 * 2;
            if (0x47 < uVar5) {
              plVar2 = plVar1;
            }
            pcVar9 = (code *)*plVar2;
            if ((plVar2[1] & 1U) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)((long)puVar13 + (plVar2[1] >> 1)));
            }
            sVar4 = (*pcVar9)();
            if (sVar4 == 0) goto LAB_01956c48;
            FUN_0277dedc(&local_68);
            lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
            uVar5 = FUN_0277d6c4(&local_68);
            if (0x752 < (uVar5 >> 3 & 0x1fff)) goto LAB_01956990;
            lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
            uVar5 = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
          }
          *(uint *)(lVar7 + lVar8) = uVar5;
        }
      }
    }
LAB_01956990:
    uVar14 = uVar14 + 1;
  } while( true );
}

