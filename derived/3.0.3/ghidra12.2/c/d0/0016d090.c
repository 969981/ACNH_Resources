
long FUN_0016d090(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  char cVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  
  iVar5 = FUN_0016cf28();
  if (iVar5 < -900) {
LAB_0016da9c:
    return (long)iVar5;
  }
  lVar1 = param_1 + 0x158;
  lVar2 = param_1 + 0x890;
  puVar3 = (undefined8 *)(param_1 + 0x150);
  lVar4 = param_1 + 0x290;
switchD_0016d108_default:
  do {
    switch(*(undefined4 *)(param_1 + 0x198)) {
    case 0:
      puVar9 = (ulong *)FUN_0016d00c(param_1);
      if (puVar9 == (ulong *)0x0) {
        return 0;
      }
      cVar14 = *(char *)((long)puVar9 + 0xc);
      switch(cVar14) {
      case '\0':
        lVar10 = FUN_001726f0(param_1,(int)puVar9[1]);
        if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) != 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if (*(int *)(lVar10 + 0xdc) != 5) {
            lVar16 = lVar10;
          }
        }
        uVar8 = FUN_00171f98(param_1,lVar16);
        if (uVar8 == 0) {
          iVar5 = *(int *)(lVar16 + 0xbc);
          if (*(int *)(param_1 + 0x94c) <= *(int *)(lVar16 + 0xbc)) {
            iVar5 = *(int *)(param_1 + 0x94c);
          }
          if (*(int *)(param_1 + 0x974) <= iVar5) {
            iVar5 = *(int *)(param_1 + 0x974);
          }
          if (0x3fff < iVar5) {
            iVar5 = 0x4000;
          }
          if (iVar5 < 1) {
            uVar13 = 4;
LAB_0016d800:
            uVar7 = FUN_00172ab0(lVar16,uVar13);
            if (-0x385 < (int)uVar7) {
              *puVar3 = 0;
              goto LAB_0016d240;
            }
          }
          else {
            uVar7 = FUN_00171874(param_1,lVar1,iVar5,puVar9,puVar9 + 0xc,lVar16);
            if ((int)uVar7 < -0x1fc) {
              if (uVar7 == 0xfffffdf7) {
                uVar7 = FUN_00172a6c(lVar16);
                if (-0x385 < (int)uVar7) {
                  uVar7 = FUN_0016cb78(param_1,(int)puVar9[1],2);
                  uVar8 = 0xfffffdf7;
                  if (-0x385 < (int)uVar7) goto LAB_0016d984;
                }
                goto LAB_0016d4ec;
              }
              if (uVar7 == 0xfffffdf2) {
                return 0;
              }
            }
            else {
              if (uVar7 == 0) break;
              if (uVar7 == 0xfffffe04) {
                uVar13 = 8;
                goto LAB_0016d800;
              }
            }
            uVar8 = FUN_00172a6c(lVar16);
            if ((int)uVar8 < -900) {
              uVar7 = uVar8;
            }
          }
        }
        else {
          lVar10 = FUN_001726f0(param_1,(int)puVar9[1]);
          if (lVar10 != 0) {
            uVar7 = FUN_00172a6c();
            if ((int)uVar7 < -900) goto LAB_0016d4ec;
          }
          uVar7 = uVar8;
        }
        goto LAB_0016d4ec;
      case '\x01':
        if ((int)puVar9[7] == 0) {
          lVar10 = FUN_0016c73c(param_1,(int)puVar9[1],0,puVar9 + 3,0,puVar9[0xe]);
          if (lVar10 == 0) {
            uVar8 = 0xfffffc7b;
          }
          else if (*(char *)((long)puVar9 + 0x7c) == '\0') {
            uVar8 = 0xfffffdfc;
            if ((*(byte *)(param_1 + 0x9ab) >> 3 & 1) == 0) {
              iVar5 = FUN_0016cfc4(param_1);
              uVar8 = 0xfffffdfc;
              if (iVar5 == 0) {
                if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
                  FUN_00173dd0(lVar10,puVar9);
                }
                goto LAB_0016d924;
              }
            }
          }
          else {
LAB_0016d72c:
            uVar8 = 0xfffffe01;
          }
        }
        else {
          lVar10 = FUN_001726f0(param_1);
          if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) != 0)) ||
             (*(int *)(lVar10 + 0xdc) == 5)) {
            *(undefined4 *)(puVar9 + 7) = 3;
            goto LAB_0016d670;
          }
          if (*(int *)(lVar10 + 0xdc) == 4) {
            uVar7 = FUN_0017203c(param_1,lVar10);
            if (uVar7 != 0) goto LAB_0016d4ec;
            *(undefined4 *)(puVar9 + 7) = 2;
            if (puVar9[0xe] != 0) {
              *(ulong *)(lVar10 + 0xa0) = puVar9[0xe];
            }
          }
          else {
            iVar5 = FUN_0016cfc4(param_1);
            if (((((iVar5 == 0) && ((*(byte *)(lVar10 + 0xe5) >> 1 & 1) == 0)) &&
                 (*(char *)(param_1 + 0x9aa) != '\0')) &&
                ((*(uint *)(lVar10 + 0xb8) == 0 || ((*(uint *)(lVar10 + 0xb8) & 1) != 0)))) &&
               (*(int *)(lVar10 + 0xdc) == 1)) {
              *(undefined4 *)(puVar9 + 7) = 1;
            }
            else {
              *(undefined4 *)(puVar9 + 7) = 3;
              iVar5 = FUN_0016cfc4(param_1);
              uVar8 = 0xfffffdee;
              if (iVar5 != 0) goto LAB_0016d984;
              if ((*(byte *)(lVar10 + 0xe5) >> 1 & 1) != 0) goto LAB_0016d980;
              if (*(int *)(lVar10 + 0xdc) != 2) {
                if (*(int *)(lVar10 + 0xdc) == 3) goto LAB_0016d72c;
                if (*(uint *)(lVar10 + 0xb8) == 0) {
                  uVar8 = 0xfffffdfe;
                }
                else {
                  uVar8 = 0xfffffdfe;
                  if (((*(uint *)(lVar10 + 0xb8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1)
                      == 0) goto LAB_0016d924;
                }
                goto LAB_0016d984;
              }
            }
          }
LAB_0016d924:
          lVar10 = FUN_001694ac(lVar4,puVar9[5],puVar9[6]);
          uVar8 = 0xfffffdf6;
          if (lVar10 + 5U <= *(ulong *)(param_1 + 0x928)) {
            uVar7 = FUN_001677d4(lVar1,puVar9,lVar4);
            if (uVar7 == 0) {
              uVar7 = FUN_001720b4(param_1,puVar9);
              if (uVar7 == 0) {
                if ((int)puVar9[7] == 0) {
                  uVar15 = (undefined4)puVar9[1];
LAB_0016d978:
                  *(undefined4 *)(param_1 + 0x934) = uVar15;
                }
                break;
              }
            }
            goto LAB_0016d4ec;
          }
        }
        goto LAB_0016d984;
      case '\x02':
        iVar5 = FUN_0016cfc4(param_1);
        uVar8 = 0xfffffdee;
        if (iVar5 != 0) goto LAB_0016d984;
        FUN_00167a5c(lVar1,puVar9);
        break;
      case '\x03':
        iVar5 = FUN_0016cfc4(param_1);
        uVar8 = 0xfffffdee;
        if (iVar5 != 0) goto LAB_0016d984;
        FUN_00167ab0(lVar1,puVar9);
        break;
      case '\x04':
        if ((*(byte *)((long)puVar9 + 0xd) & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + -1;
          iVar5 = FUN_0016cfc4(param_1);
          uVar8 = 0xfffffdee;
          if (iVar5 != 0) goto LAB_0016d984;
        }
        uVar7 = FUN_00167b24(lVar1,puVar9);
LAB_0016d4ec:
        uVar8 = uVar7;
        if (uVar8 == 0xfffffe04) goto switchD_0016d108_default;
        if (uVar8 == 0xfffffdf2) {
          return 0;
        }
        if ((int)uVar8 < 0) goto LAB_0016d984;
        break;
      case '\x05':
        lVar10 = FUN_001726f0(param_1,(int)puVar9[1]);
        if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) != 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if (*(int *)(lVar10 + 0xdc) != 5) {
            lVar16 = lVar10;
          }
        }
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          uVar8 = 0xfffffe07;
        }
        else {
          if (lVar16 == 0) goto LAB_0016d670;
          iVar5 = FUN_0016cfc4(param_1);
          uVar8 = 0xfffffdee;
          if (iVar5 == 0) {
            if ((*(byte *)(lVar16 + 0xe5) >> 1 & 1) == 0) {
              if (*(int *)(param_1 + 0x968) == 0) {
                uVar8 = 0xfffffdf0;
              }
              else {
                if (*(int *)(lVar16 + 0xdc) == 3) goto LAB_0016d72c;
                uVar8 = 0xfffffdfc;
                if ((*(byte *)(param_1 + 0x9ab) >> 3 & 1) == 0) {
                  uVar17 = FUN_001694ac(lVar4,puVar9[3],puVar9[4]);
                  uVar8 = 0xfffffdf6;
                  if (uVar17 <= *(ulong *)(param_1 + 0x928)) {
                    uVar7 = FUN_00167d00(lVar1,puVar9,lVar4);
                    if (uVar7 == 0) {
                      uVar7 = FUN_001720b4(param_1,puVar9);
                      if (uVar7 == 0) {
                        uVar15 = (undefined4)puVar9[5];
                        goto LAB_0016d978;
                      }
                    }
                    goto LAB_0016d4ec;
                  }
                }
              }
            }
            else {
LAB_0016d980:
              uVar8 = 0xfffffe00;
            }
          }
        }
        goto LAB_0016d984;
      case '\x06':
        if ((*(byte *)((long)puVar9 + 0xd) & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + -1;
        }
        uVar8 = 0xfffffdee;
        if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) goto LAB_0016d984;
        FUN_00167dc4(lVar1,puVar9);
        break;
      case '\a':
        uVar7 = FUN_00167e18(lVar1,puVar9);
        if (uVar7 != 0) goto LAB_0016d4ec;
        *(int *)(param_1 + 0x944) = (int)puVar9[2];
        break;
      case '\b':
        uVar17 = puVar9[1];
        iVar5 = FUN_0016cfc4(param_1);
        uVar8 = 0xfffffdee;
        if (iVar5 == 0) {
          if ((int)uVar17 == 0) {
LAB_0016d4a4:
            FUN_00167ee8(lVar1,puVar9);
            break;
          }
          lVar10 = FUN_001726f0(param_1,(int)uVar17);
          if (lVar10 == 0) {
LAB_0016d670:
            uVar8 = 0xfffffe02;
          }
          else {
            uVar8 = 0xfffffe02;
            if ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) == 0) {
              iVar5 = *(int *)(lVar10 + 0xdc);
              if (iVar5 == 3) goto LAB_0016d72c;
              if (iVar5 == 5) goto LAB_0016d670;
              if (((iVar5 != 4) || (*(uint *)(lVar10 + 0xb8) == 0)) ||
                 (uVar8 = 0xfffffdfe,
                 ((*(uint *)(lVar10 + 0xb8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1) != 0)
                 ) goto LAB_0016d4a4;
            }
          }
        }
        goto LAB_0016d984;
      case '\t':
        break;
      default:
        if ((char)puVar9[0xc] == '\0') {
          iVar5 = FUN_0016cfc4(param_1);
          uVar8 = 0xfffffdee;
          if (iVar5 == 0) {
            lVar10 = *(long *)(param_1 + 0x158);
            uVar17 = *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 0x20);
            if (0x3fff < uVar17) {
              uVar17 = 0x4000;
            }
            uVar11 = (**(code **)(param_1 + 0x868))
                               (param_1,*(long *)(lVar10 + 0x20),uVar17,puVar9,
                                *(undefined8 *)(param_1 + 0x8b8));
            uVar8 = 0xfffffde9;
            if (uVar11 != 0xfffffffffffffde9) {
              if ((long)uVar11 < 0) {
                uVar8 = 0xfffffc7a;
              }
              else {
                uVar8 = 0xfffffc7a;
                if (uVar11 <= uVar17) {
                  *puVar9 = uVar11;
                  lVar16 = *(long *)(lVar10 + 0x18) + -9;
                  *(long *)(lVar10 + 0x18) = lVar16;
                  *(ulong *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + uVar11;
                  FUN_001674fc(lVar16,puVar9);
                  break;
                }
              }
            }
          }
        }
        else if (cVar14 == '\f') {
          iVar5 = FUN_0016cfc4(param_1);
          uVar8 = 0xfffffdee;
          if (iVar5 == 0) {
            uVar7 = FUN_00167fec(lVar1,puVar9);
            goto LAB_0016d4ec;
          }
        }
        else {
          if (cVar14 != '\n') break;
          uVar17 = puVar9[1];
          iVar5 = FUN_0016cfc4(param_1);
          uVar8 = 0xfffffdee;
          if (iVar5 == 0) {
            if ((int)uVar17 == 0) {
LAB_0016d2c0:
              FUN_00167f60(lVar1,puVar9);
              break;
            }
            lVar10 = FUN_001726f0(param_1,(int)uVar17);
            if (lVar10 == 0) goto LAB_0016d670;
            uVar8 = 0xfffffe02;
            if ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) == 0) {
              if (*(int *)(lVar10 + 0xdc) == 3) goto LAB_0016d72c;
              uVar8 = 0xfffffe02;
              if (*(int *)(lVar10 + 0xdc) != 5) goto LAB_0016d2c0;
            }
          }
        }
LAB_0016d984:
        cVar14 = *(char *)((long)puVar9 + 0xc);
        if (cVar14 != '\0') {
          if (((*(code **)(param_1 + 0x810) != (code *)0x0) && (0xfffffc7c < uVar8)) &&
             (cVar14 != '\b')) {
            iVar5 = (**(code **)(param_1 + 0x810))
                              (param_1,puVar9,uVar8,*(undefined8 *)(param_1 + 0x8b8));
            if (iVar5 != 0) {
              FUN_0016bc00(puVar9,lVar2);
              FUN_001689f8(lVar2,puVar9);
              return -0x386;
            }
            cVar14 = *(char *)((long)puVar9 + 0xc);
          }
          if (cVar14 == '\x05') {
            iVar5 = (int)puVar9[5];
            uVar15 = 2;
joined_r0x0016d9f8:
            if (iVar5 != 0) {
LAB_0016d9fc:
              iVar5 = FUN_0016cc94(param_1,iVar5,uVar15);
              if (iVar5 < -900) goto LAB_0016da9c;
            }
          }
          else if ((cVar14 == '\x01') && ((int)puVar9[7] == 0)) {
            iVar5 = (int)puVar9[1];
            if (*(char *)((long)puVar9 + 0x7c) != '\0') {
              uVar15 = (undefined4)puVar9[0xf];
              goto joined_r0x0016d9f8;
            }
            uVar15 = 7;
            if (iVar5 == 0) goto LAB_0016da0c;
            goto LAB_0016d9fc;
          }
        }
LAB_0016da0c:
        FUN_0016bc00(puVar9,lVar2);
        FUN_001689f8(lVar2,puVar9);
        FUN_0016c3ec(puVar3,lVar2);
        if (uVar8 == 0xfffffdf5) {
          uVar8 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),2,0);
        }
        if ((int)uVar8 < -900) {
          return (long)(int)uVar8;
        }
        goto switchD_0016d108_default;
      }
      *(ulong **)(param_1 + 0x150) = puVar9;
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x158);
      if (*(char *)((long)puVar9 + 0xc) == '\0') {
        if (*(char *)((long)puVar9 + 0x72) != '\0') {
          *(undefined4 *)(param_1 + 0x198) = 2;
          break;
        }
      }
      else if ((*(code **)(param_1 + 0x800) != (code *)0x0) &&
              (iVar5 = (**(code **)(param_1 + 0x800))
                                 (param_1,puVar9,*(undefined8 *)(param_1 + 0x8b8)), iVar5 != 0)) {
        if (iVar5 != -0x217) {
          return -0x386;
        }
        if ((*(code **)(param_1 + 0x810) != (code *)0x0) &&
           (iVar5 = (**(code **)(param_1 + 0x810))
                              (param_1,puVar9,0xfffffde9,*(undefined8 *)(param_1 + 0x8b8)),
           iVar5 != 0)) {
          return -0x386;
        }
        if (*(char *)((long)puVar9 + 0xc) == '\x05') {
          puVar9 = puVar9 + 5;
          uVar13 = 2;
LAB_0016d7b0:
          if ((int)*puVar9 != 0) {
            iVar5 = FUN_0016cc94(param_1,(int)*puVar9,uVar13);
LAB_0016d7c0:
            if (iVar5 < -900) goto LAB_0016da9c;
          }
        }
        else if ((*(char *)((long)puVar9 + 0xc) == '\x01') && ((int)puVar9[7] == 0)) {
          puVar9 = puVar9 + 1;
          uVar13 = 7;
          goto LAB_0016d7b0;
        }
LAB_0016d240:
        FUN_0016c3ec(puVar3,lVar2);
        break;
      }
      *(undefined4 *)(param_1 + 0x198) = 1;
      break;
    case 1:
      lVar16 = *(long *)(param_1 + 0x160);
      lVar10 = *(long *)(lVar16 + 0x18);
      if (lVar10 != *(long *)(lVar16 + 0x20)) {
LAB_0016daa4:
        *param_2 = lVar10;
        lVar1 = *(long *)(lVar16 + 0x18);
        *(long *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x20);
        return *(long *)(lVar16 + 0x20) - lVar1;
      }
      if (((param_3 == 0) && (iVar5 = FUN_0016db18(param_1), iVar5 < 0)) ||
         (iVar5 = FUN_00171ebc(param_1), iVar5 < 0)) goto LAB_0016da9c;
      break;
    case 2:
      lVar16 = *(long *)(param_1 + 0x150);
      lVar10 = FUN_001726f0(param_1,*(undefined4 *)(lVar16 + 8));
      if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0xe4) >> 1 & 1) != 0)) ||
         (*(int *)(lVar10 + 0xdc) == 5)) goto LAB_0016d240;
      plVar12 = *(long **)(param_1 + 0x150);
      iVar6 = (**(code **)(param_1 + 0x860))
                        (param_1,plVar12,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x18),
                         *plVar12 - plVar12[2],plVar12 + 0xc,*(undefined8 *)(param_1 + 0x8b8));
      if (iVar6 < -0x1f8) {
        if (iVar6 == -0x20e) goto LAB_0016d644;
        if (iVar6 != -0x209) {
          return -0x386;
        }
        iVar5 = FUN_00172a6c(lVar10);
        if (-0x385 < iVar5) {
          iVar5 = FUN_0016cb78(param_1,*(undefined4 *)(lVar16 + 8),2);
          goto LAB_0016d7c0;
        }
      }
      else {
        if (iVar6 != 0) {
          if (iVar6 == -0x1f8) {
            return 0;
          }
          return -0x386;
        }
LAB_0016d644:
        iVar5 = FUN_0016db18(param_1);
        if ((-1 < iVar5) && (iVar5 = FUN_00171ebc(param_1), -1 < iVar5)) goto code_r0x0016d65c;
      }
      goto LAB_0016da9c;
    case 3:
      lVar16 = *(long *)(param_1 + 0x160);
      lVar10 = *(long *)(lVar16 + 0x18);
      if (lVar10 != *(long *)(lVar16 + 0x20)) goto LAB_0016daa4;
      goto LAB_0016d240;
    }
  } while( true );
code_r0x0016d65c:
  if (iVar6 == -0x20e) {
    return 0;
  }
  goto switchD_0016d108_default;
}

