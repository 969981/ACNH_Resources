
void FUN_029b7580(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  int iVar9;
  char cVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  int iVar25;
  uint uVar26;
  byte bVar27;
  wchar_t wVar28;
  uint uVar29;
  wchar_t wVar30;
  long *plVar31;
  wchar_t *pwVar32;
  long lVar33;
  undefined1 uVar34;
  wchar_t wVar35;
  int iVar36;
  long lVar37;
  int *piVar38;
  char *pcVar39;
  long *plVar40;
  uint uVar41;
  int iVar42;
  ulong uVar43;
  char cVar44;
  int iVar45;
  uint uVar46;
  wchar_t *pwVar47;
  wchar_t wVar48;
  int iVar49;
  long lVar50;
  char cVar51;
  float fVar52;
  int local_120;
  ulong local_118;
  uint local_e4;
  int local_dc;
  wchar_t local_d4;
  wchar_t local_d0;
  int local_9c;
  int local_98;
  ulong local_8c [2];
  undefined4 local_7c;
  char local_64 [4];
  
  uVar18 = *(uint *)(param_3 + 2);
  uVar26 = uVar18;
  if ((int)uVar18 < 1) goto LAB_029b76f4;
  lVar37 = *param_3;
  if (lVar37 == 0) {
    uVar41 = 0;
    if (1 < uVar18) goto LAB_029b7644;
LAB_029b7638:
    uVar26 = 1;
  }
  else {
    iVar45 = (int)param_3[1];
    iVar25 = *(int *)((long)param_3 + 0xc);
    iVar42 = 0;
    if (iVar45 <= iVar25) {
      iVar42 = iVar45;
    }
    iVar42 = *(int *)(lVar37 + (long)(iVar25 - iVar42) * 0x14);
    uVar41 = (uint)(iVar42 == 0xa6);
    if (uVar18 < 2) goto LAB_029b7638;
    iVar20 = 0;
    if (iVar45 <= iVar25 + 1) {
      iVar20 = iVar45;
    }
    iVar45 = *(int *)(lVar37 + (long)((iVar25 + 1) - iVar20) * 0x14);
    if (iVar45 == 0xa7) {
      uVar41 = 0;
    }
    else if ((iVar45 == 0xa6) && (uVar41 = 1, iVar42 == 0xa6)) {
      uVar41 = 2;
    }
LAB_029b7644:
    if (uVar18 < 3) {
      uVar26 = 2;
    }
    else {
      iVar42 = *(int *)((long)param_3 + 0xc) + 2;
      iVar45 = 0;
      if ((int)param_3[1] <= iVar42) {
        iVar45 = (int)param_3[1];
      }
      if (lVar37 != 0) {
        piVar38 = (int *)(lVar37 + (long)(iVar42 - iVar45) * 0x14);
        iVar42 = *piVar38;
        if (iVar42 != 0xa7) {
          if ((iVar42 != 0xa6) || (uVar41 = uVar41 + 1, uVar41 != 3)) goto LAB_029b7698;
          *piVar38 = 0xa7;
          uVar26 = *(uint *)(param_3 + 2);
        }
        uVar41 = 0;
      }
LAB_029b7698:
      if (3 < uVar18) {
        piVar38 = (int *)*param_3;
        if (3 < uVar26) {
          iVar42 = *(int *)((long)param_3 + 0xc) + 3;
          iVar45 = 0;
          if ((int)param_3[1] <= iVar42) {
            iVar45 = (int)param_3[1];
          }
          piVar38 = piVar38 + (long)(iVar42 - iVar45) * 5;
        }
        if (piVar38 != (int *)0x0) {
          if (*piVar38 != 0xa7) {
            if ((*piVar38 != 0xa6) || (uVar41 = uVar41 + 1, uVar41 != 3)) goto LAB_029b76f8;
            *piVar38 = 0xa7;
            uVar26 = *(uint *)(param_3 + 2);
          }
LAB_029b76f4:
          uVar41 = 0;
        }
      }
LAB_029b76f8:
      if (uVar26 == 0) {
        cVar44 = '\0';
        goto LAB_029b7700;
      }
    }
  }
  local_d0 = L'\0';
  local_e4 = 0;
  iVar42 = 0;
  uVar43 = 0;
  local_118 = 0;
  iVar45 = 0;
  local_98 = 0;
  cVar10 = '\0';
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_d4 = L'd';
  local_dc = -1;
  local_9c = -1;
  do {
    iVar20 = (int)param_3[1];
    iVar36 = *(int *)((long)param_3 + 0xc);
    lVar37 = *param_3;
    iVar25 = 0;
    if (iVar20 <= iVar36) {
      iVar25 = iVar20;
    }
    if ((int)uVar26 < 2) {
      pwVar23 = (wchar_t *)0x0;
      pwVar47 = (wchar_t *)0x0;
LAB_029b78b8:
      pwVar24 = (wchar_t *)0x0;
    }
    else {
      iVar2 = 0;
      if (iVar20 <= iVar36 + 1) {
        iVar2 = iVar20;
      }
      pwVar47 = (wchar_t *)(lVar37 + (long)((iVar36 + 1) - iVar2) * 0x14);
      if (uVar26 == 2) {
        pwVar23 = (wchar_t *)0x0;
        goto LAB_029b78b8;
      }
      iVar2 = 0;
      if (iVar20 <= iVar36 + 2) {
        iVar2 = iVar20;
      }
      pwVar23 = (wchar_t *)(lVar37 + (long)((iVar36 + 2) - iVar2) * 0x14);
      if (uVar26 < 4) goto LAB_029b78b8;
      iVar2 = 0;
      if (iVar20 <= iVar36 + 3) {
        iVar2 = iVar20;
      }
      pwVar24 = (wchar_t *)(lVar37 + (long)((iVar36 + 3) - iVar2) * 0x14);
    }
    pwVar32 = (wchar_t *)(lVar37 + (long)(iVar36 - iVar25) * 0x14);
    wVar8 = pwVar32[2];
    wVar6 = *pwVar32;
    wVar7 = pwVar32[1];
    cVar44 = (char)pwVar32[4];
    iVar25 = (int)(float)pwVar32[3];
    if (wVar6 < L'ď') {
      wVar30 = wVar6;
      if ((uint)(wVar6 + L'\xffffff85') < 0x5f) {
        wVar30 = L"aaaaaaaeceeeeiiiidnooooo"[(uint)(wVar6 + L'\xffffff85')];
      }
      if ((pwVar47 == (wchar_t *)0x0) || (wVar48 = *pwVar47, L'Ď' < wVar48)) {
        wVar48 = L'\0';
      }
      else if ((uint)(wVar48 + L'\xffffff85') < 0x5f) {
        wVar48 = L"aaaaaaaeceeeeiiiidnooooo"[(uint)(wVar48 + L'\xffffff85')];
      }
      if ((pwVar23 == (wchar_t *)0x0) || (wVar28 = *pwVar23, L'Ď' < wVar28)) {
        wVar28 = L'\0';
      }
      else if ((uint)(wVar28 + L'\xffffff85') < 0x5f) {
        wVar28 = L"aaaaaaaeceeeeiiiidnooooo"[(uint)(wVar28 + L'\xffffff85')];
      }
      if ((pwVar24 == (wchar_t *)0x0) || (wVar35 = *pwVar24, L'Ď' < wVar35)) {
        wVar35 = L'\0';
      }
      else if ((uint)(wVar35 + L'\xffffff85') < 0x5f) {
        wVar35 = L"aaaaaaaeceeeeiiiidnooooo"[(uint)(wVar35 + L'\xffffff85')];
      }
      wVar4 = wVar30;
      if (0x10d < (uint)wVar30) {
        wVar4 = L'\0';
      }
      wVar5 = wVar48;
      if (0x10d < (uint)wVar48) {
        wVar5 = L'\0';
      }
      if (0x10d < (uint)wVar28) {
        wVar28 = L'\0';
      }
      if (0x10d < (uint)wVar35) {
        wVar35 = L'\0';
      }
      if ((uint)(wVar30 + L'\xffffff26') < 0x33) {
switchD_029b7ad0_caseD_a4:
        uVar17 = 0;
        uVar15 = 0;
        uVar18 = 0;
        iVar20 = 1;
        iVar25 = 0;
      }
      else {
        uVar15 = 0;
        iVar19 = (&DAT_0417d2bc)[wVar4];
        iVar20 = 1;
        iVar36 = (&DAT_0417d2bc)[wVar5];
        uVar17 = 2;
        iVar2 = (&DAT_0417d2bc)[wVar28];
        iVar49 = (&DAT_0417d2bc)[(uint)wVar35];
        uVar18 = 0;
        switch(wVar30) {
        case L'\x9b':
          uVar15 = 0;
          uVar18 = 0x12;
          switch((uint)(wVar48 + L'\xffffff9f') >> 1 | (wVar48 + L'\xffffff9f') * -0x80000000) {
          case L'\0':
            uVar15 = 0;
            uVar18 = 0x10;
            break;
          case L'\x02':
            uVar15 = 0;
            uVar18 = 0x13;
            break;
          case L'\x04':
            uVar15 = 0;
            uVar18 = 0x11;
            break;
          case L'\a':
            uVar15 = 0;
            uVar18 = 0x14;
          }
          break;
        case L'\x9c':
        case L'¨':
        case L'©':
        case L'ª':
        case L'«':
        case L'¬':
        case L'­':
        case L'®':
        case L'¯':
        case L'°':
        case L'±':
        case L'²':
        case L'³':
        case L'´':
        case L'µ':
        case L'¶':
        case L'·':
        case L'¸':
        case L'¹':
        case L'º':
        case L'»':
        case L'¼':
        case L'½':
        case L'¾':
        case L'¿':
        case L'À':
        case L'Á':
        case L'Â':
        case L'Ã':
        case L'Ä':
        case L'Å':
        case L'Æ':
        case L'Ç':
        case L'È':
        case L'É':
        case L'Ê':
        case L'Ë':
        case L'Ì':
        case L'Í':
        case L'Î':
        case L'Ï':
        case L'Ð':
        case L'Ñ':
        case L'Ò':
        case L'Ó':
        case L'Ô':
        case L'Õ':
        case L'Ö':
        case L'×':
        case L'Ø':
        case L'Ù':
        case L'Ú':
        case L'Û':
        case L'Ü':
        case L'Ý':
        case L'Þ':
        case L'ß':
        case L'à':
        case L'á':
        case L'â':
        case L'ã':
        case L'ä':
        case L'å':
        case L'æ':
        case L'ç':
        case L'è':
        case L'é':
        case L'ê':
        case L'ë':
        case L'ì':
        case L'í':
        case L'î':
        case L'ï':
        case L'ð':
        case L'ñ':
        case L'ò':
        case L'ó':
        case L'ô':
        case L'õ':
        case L'ö':
        case L'÷':
        case L'ø':
        case L'ù':
        case L'ú':
        case L'û':
        case L'ü':
        case L'ý':
        case L'þ':
        case L'ÿ':
        case L'Ā':
        case L'ā':
        case L'Ă':
        case L'ă':
        case L'Ą':
        case L'ą':
        case L'Ć':
        case L'ć':
        case L'Ĉ':
        case L'ĉ':
        case L'Ċ':
        case L'ċ':
        case L'Č':
switchD_029b7ad0_caseD_9c:
          if (iVar36 == 0xa2) {
            if (iVar2 == 0xa2) {
              uVar18 = 4;
              iVar20 = 3;
              local_120 = (int)(float)pwVar47[3] + iVar25 + (int)(float)pwVar23[3];
            }
            else {
              uVar18 = 4;
              iVar20 = 2;
              local_120 = (int)(float)pwVar47[3] + iVar25;
            }
          }
          else {
            iVar16 = FUN_029b9744(iVar19,iVar36);
            if (iVar16 != 0) {
              uVar18 = FUN_029b8ea4(local_e4,iVar16,param_4 & 1);
              iVar25 = (int)(float)pwVar47[3] + iVar25;
              if (iVar2 == 0xa2) {
                iVar25 = iVar25 + (int)(float)pwVar23[3];
                if (iVar49 == 0xa2) {
                  iVar20 = 4;
                  iVar25 = iVar25 + (int)(float)pwVar24[3];
                }
                else {
                  iVar20 = 3;
                }
LAB_029b8c5c:
                uVar17 = 4;
              }
              else {
                iVar20 = FUN_029b9744(iVar2,iVar49);
                if ((iVar20 == 0) && ((iVar2 - 0x4dU < 5 || (iVar2 - 1U < 5)))) {
                  iVar36 = FUN_029b94e8(uVar18);
                  iVar20 = iVar2 + -0x4c;
                  if (4 < iVar2 - 0x4dU) {
                    iVar20 = -1;
                  }
                  if (4 < iVar2 - 1U) {
                    iVar2 = iVar20;
                  }
                  if (iVar2 != iVar36) goto LAB_029b8bbc;
                  iVar25 = iVar25 + (int)(float)pwVar23[3];
                  if (iVar49 == 0xa2) {
                    uVar17 = 4;
                    iVar20 = 4;
                    iVar25 = iVar25 + (int)(float)pwVar24[3];
                  }
                  else {
                    iVar20 = 3;
                    uVar17 = 4;
                  }
LAB_029b8bcc:
                  wVar30 = *pwVar23;
                  uVar15 = FUN_029b9910(wVar30);
                  uVar21 = FUN_029b95c0(wVar30);
                  uVar15 = uVar15 | uVar21 ^ 1;
                  if ((uVar15 & 1) == 0) {
                    wVar30 = L'Ď';
                  }
                  if ((pwVar24 != (wchar_t *)0x0) && ((uVar15 & 1) == 0)) {
                    wVar30 = *pwVar24;
                    uVar15 = FUN_029b9910(wVar30);
                    uVar21 = FUN_029b95c0(wVar30);
                    if (((uVar15 | uVar21 ^ 0xffffffff) & 1) == 0) {
                      wVar30 = L'\0';
                    }
                  }
                }
                else {
LAB_029b8bbc:
                  uVar17 = 2;
                  if (pwVar23 != (wchar_t *)0x0) {
                    iVar20 = 2;
                    goto LAB_029b8bcc;
                  }
                  iVar20 = 2;
                  wVar30 = L'Ď';
                }
                uVar22 = FUN_029b9910(wVar30);
                if ((uVar22 & 1) != 0) goto LAB_029b8c5c;
              }
              local_7c = 0;
              local_8c[1] = 0x3f80000000000000;
              local_8c[0] = 0xa4;
              uVar15 = FUN_029b9620(local_8c,pwVar23,pwVar24);
              uVar15 = uVar15 & 1;
              break;
            }
            uVar18 = 2;
            local_120 = iVar25;
          }
          uVar17 = FUN_029b9620(pwVar47,pwVar23,pwVar24);
          uVar15 = uVar17 & 1;
          bVar14 = (uVar17 & 1) == 0;
          uVar17 = 4;
          if (bVar14) {
            uVar17 = uVar18;
          }
          uVar21 = 4;
          if (bVar14) {
            uVar21 = uVar18;
          }
          if (wVar30 < L'W') {
            uVar18 = iVar19 - 0x4d;
            if (((uVar18 < 0xf) && (uVar18 < 0xf)) && ((0x7d7fU >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               ) {
              iVar19 = *(int *)(&DAT_0417dac8 + (long)(int)uVar18 * 4);
            }
            uVar18 = FUN_029b8ea4(local_e4,iVar19,param_4 & 1);
            iVar25 = FUN_029b9744(iVar36,iVar2);
            if ((iVar25 == 0) && ((iVar36 - 0x4dU < 5 || (iVar36 - 1U < 5)))) {
              iVar19 = FUN_029b94e8(uVar18);
              iVar25 = iVar36 + -0x4c;
              if (4 < iVar36 - 0x4dU) {
                iVar25 = -1;
              }
              if (4 < iVar36 - 1U) {
                iVar36 = iVar25;
              }
              if (iVar36 != iVar19) goto LAB_029b8aa0;
              local_120 = local_120 + (int)(float)pwVar47[3];
              if (iVar2 == 0xa2) {
                iVar20 = iVar20 + 2;
                local_120 = local_120 + (int)(float)pwVar23[3];
              }
              else {
                iVar20 = iVar20 + 1;
              }
              local_7c = 0;
              local_8c[1] = 0x3f80000000000000;
              local_8c[0] = 0xa4;
              uVar15 = FUN_029b9620(local_8c,pwVar23,pwVar24);
              uVar15 = uVar15 & 1;
              uVar17 = 4;
LAB_029b8d44:
              wVar30 = *pwVar47;
              uVar22 = FUN_029b95c0(wVar30);
              iVar25 = local_120;
              if ((uVar22 & 1) != 0) {
                uVar22 = FUN_029b9910(wVar30);
                if ((uVar22 & 1) == 0) {
                  wVar30 = L'Ď';
                }
                if ((pwVar23 != (wchar_t *)0x0) && ((uVar22 & 1) == 0)) {
                  wVar30 = *pwVar23;
                  uVar22 = FUN_029b95c0(wVar30);
                  if ((uVar22 & 1) != 0) {
                    uVar22 = FUN_029b9910(wVar30);
                    if ((uVar22 & 1) == 0) {
                      wVar30 = L'Ď';
                    }
                    if ((pwVar24 != (wchar_t *)0x0) && ((uVar22 & 1) == 0)) {
                      wVar30 = *pwVar24;
                      uVar22 = FUN_029b95c0(wVar30);
                      if (((uVar22 & 1) != 0) && (uVar22 = FUN_029b9910(wVar30), (uVar22 & 1) == 0))
                      break;
                    }
                  }
                }
              }
              switch(wVar30) {
              case L'\x9e':
              case L'\xa0':
              case L'¡':
              case L'¢':
              case L'£':
              case L'¥':
              case L'§':
              case L'Þ':
                goto switchD_029b8e6c_caseD_9e;
              case L'\x9f':
              case L'¤':
              case L'¦':
              case L'¨':
              case L'©':
              case L'ª':
              case L'«':
              case L'¬':
              case L'­':
              case L'®':
              case L'¯':
              case L'°':
              case L'±':
              case L'²':
              case L'³':
              case L'´':
              case L'µ':
              case L'¶':
              case L'·':
              case L'¸':
              case L'¹':
              case L'º':
              case L'»':
              case L'¼':
              case L'½':
              case L'¾':
              case L'¿':
              case L'À':
              case L'Á':
              case L'Â':
              case L'Ã':
              case L'Ä':
              case L'Å':
              case L'Æ':
              case L'Ç':
              case L'È':
              case L'É':
              case L'Ê':
              case L'Ë':
              case L'Ì':
              case L'Í':
              case L'Î':
              case L'Ï':
              case L'Ð':
              case L'Ñ':
              case L'Ò':
              case L'Ó':
              case L'Ô':
              case L'Õ':
              case L'Ö':
              case L'×':
              case L'Ø':
              case L'Ù':
              case L'Ú':
              case L'Û':
              case L'Ü':
              case L'Ý':
                break;
              default:
                if (wVar30 == L'Ď') goto switchD_029b8e6c_caseD_9e;
              }
            }
            else {
LAB_029b8aa0:
              if (pwVar47 != (wchar_t *)0x0) goto LAB_029b8d44;
switchD_029b8e6c_caseD_9e:
              uVar17 = 4;
              iVar25 = local_120;
            }
          }
          else if ((uint)wVar30 < 0x61) {
            lVar33 = DAT_055e9048 + (long)(int)((uint)DAT_055e9040 * *(uint *)(param_1 + 0x18)) * 4;
            if (DAT_055e9040._4_4_ <= *(uint *)(param_1 + 0x18) || (uint)DAT_055e9040 == 0) {
              lVar33 = 0;
            }
            bVar14 = lVar33 == 0;
            uVar22 = (ulong)(uint)(wVar30 + L'\xffffffa9');
            if ((int)(uint)DAT_055e9040 < 1 || bVar14) {
              lVar33 = 0;
            }
            if (((int)(uint)DAT_055e9040 < 1 || bVar14) ||
                (uint)DAT_055e9040 <= (uint)(wVar30 + L'\xffffffa9')) {
              uVar22 = 0;
            }
            uVar18 = *(uint *)(lVar33 + uVar22 * 4);
            iVar25 = local_120;
          }
          else if ((uint)wVar30 < 0x7b) {
            local_8c[0] = local_8c[0] & 0xffffffffffffff00;
            local_64[0] = '\0';
            uVar18 = FUN_029b9950(param_1,local_64,wVar30,wVar48);
            if (uVar18 == 0) {
              uVar18 = FUN_029ba5ec(local_8c,wVar30,wVar48);
              bVar14 = (char)local_8c[0] != '\0';
              iVar20 = 1;
              if (bVar14) {
                iVar20 = 2;
              }
            }
            else {
              iVar20 = 2;
              bVar14 = true;
            }
            iVar36 = 0;
            if ((pwVar47 != (wchar_t *)0x0) && (bVar14)) {
              iVar36 = (int)(float)pwVar47[3];
            }
            uVar29 = 2;
            if (local_64[0] != '\0') {
              uVar29 = 4;
            }
            uVar17 = uVar21;
            if (uVar21 <= uVar29) {
              uVar17 = uVar29;
            }
            iVar25 = iVar36 + iVar25;
          }
          else {
            uVar18 = 0;
            iVar25 = local_120;
          }
          break;
        case L'\x9d':
          if (0x1a9 < local_e4 - 1) goto LAB_029b8828;
          uVar17 = 0;
          uVar15 = 0;
          uVar18 = 0;
          if ((byte)(&DAT_0417d6f4)[local_e4 - 1] != 0xff) {
            uVar18 = (byte)(&DAT_0417d6f4)[local_e4 - 1] + 0x4d;
          }
          break;
        case L'\x9e':
          uVar15 = 0;
          uVar18 = 0x1ab;
          break;
        case L'\x9f':
          uVar15 = 0;
          uVar18 = 0x1ac;
          break;
        case L'\xa0':
        case L'¡':
        case L'¢':
        case L'£':
        case L'¥':
        case L'č':
          break;
        case L'¤':
        case L'¦':
        case L'§':
          goto switchD_029b7ad0_caseD_a4;
        case L'Ď':
          iVar25 = 0;
LAB_029b8828:
          uVar17 = 0;
          uVar15 = 0;
          uVar18 = 0;
          break;
        default:
          if (wVar30 == L'\0') {
            uVar18 = 0;
          }
          else {
            if (wVar30 != L'#') goto switchD_029b7ad0_caseD_9c;
            uVar15 = 0;
            uVar18 = 0x10b;
          }
        }
      }
    }
    else {
      uVar18 = wVar6 + L'ﻲ' & 0xffff;
      uVar17 = uVar18 - 0xc0;
      if (uVar17 < 400) {
        uVar18 = *(uint *)(&DAT_0417cafc + (ulong)uVar17 * 4);
joined_r0x029b7b14:
        if (pwVar47 == (wchar_t *)0x0) goto LAB_029b7b80;
LAB_029b7b18:
        if (*pwVar47 < L'ď') goto LAB_029b7b80;
        uVar17 = *pwVar47 + L'ﻲ' & 0xffff;
        uVar15 = uVar17 - 0xc0;
        if (uVar15 < 400) {
          uVar17 = *(uint *)(&DAT_0417cafc + (ulong)uVar15 * 4);
          goto joined_r0x029b7b48;
        }
        uVar17 = uVar17 - 0x400;
        if (0x5f < uVar17) goto LAB_029b7b80;
        uVar17 = *(uint *)(&DAT_0417d13c + (ulong)uVar17 * 4);
        if (uVar18 == 0) goto LAB_029b7b4c;
LAB_029b7b88:
        uVar15 = uVar18 - 0xd;
        if (uVar15 == 0 || (int)uVar18 < 0xd) {
          bVar14 = uVar18 < (uint)DAT_055e9020 && DAT_055e9020._4_4_ != 0;
        }
        else {
          if ((uVar17 != 0) && ((int)uVar17 < 0xe)) {
            lVar33 = (long)(int)((uint)DAT_055e9020 * uVar15 + uVar17);
            if (DAT_055e9020._4_4_ <= uVar15 || (uint)DAT_055e9020 <= uVar17) {
              lVar33 = 0;
            }
            uVar18 = *(uint *)(DAT_055e9028 + lVar33 * 4);
            if (pwVar47 == (wchar_t *)0x0) {
              iVar36 = 0;
            }
            else {
              iVar36 = (int)(float)pwVar47[3];
            }
            iVar20 = 2;
            goto LAB_029b7c38;
          }
          uVar18 = (uint)DAT_055e9020 * uVar15;
          bVar14 = ((uint)DAT_055e9020 != 0 && uVar15 <= DAT_055e9020._4_4_) &&
                   ((uint)DAT_055e9020 == 0 || DAT_055e9020._4_4_ != uVar15);
        }
        lVar33 = (long)(int)uVar18;
        if (!bVar14) {
          lVar33 = 0;
        }
        iVar36 = 0;
        iVar20 = 1;
        uVar18 = *(uint *)(DAT_055e9028 + lVar33 * 4);
      }
      else {
        uVar18 = uVar18 - 0x400;
        if (0x5f < uVar18) {
          uVar18 = 0;
          goto joined_r0x029b7b14;
        }
        uVar18 = *(uint *)(&DAT_0417d13c + (ulong)uVar18 * 4);
        if (pwVar47 != (wchar_t *)0x0) goto LAB_029b7b18;
LAB_029b7b80:
        uVar17 = 0;
joined_r0x029b7b48:
        if (uVar18 != 0) goto LAB_029b7b88;
LAB_029b7b4c:
        uVar18 = 0;
        iVar36 = 0;
        iVar20 = 1;
      }
LAB_029b7c38:
      uVar15 = FUN_029b9620(pwVar47);
      uVar15 = uVar15 & 1;
      uVar17 = 2;
      iVar25 = iVar36 + iVar25;
    }
    if (((param_4 & 1) != 0) && (uVar18 - 0x175 < 0xffffff97)) {
      uVar21 = uVar18 - 1;
      if (uVar21 < 0x4b) {
LAB_029b7ca0:
        uVar21 = uVar21 + ((uVar21 & 0xff) / 5) * -5 & 0xff;
      }
      else {
        if (uVar18 - 0x4d < 5) {
          uVar21 = uVar18 - 2;
          goto LAB_029b7ca0;
        }
        uVar21 = 0xffffffff;
        if (uVar18 - 0x52 < 0xb9) {
          uVar21 = (uVar18 - 2) + ((uVar18 - 2 & 0xffff) / 5) * -5 & 0xffff;
        }
      }
      uVar18 = uVar21 + 1;
    }
    iVar36 = iVar20;
    uVar21 = uVar17;
    if ((1 < (int)uVar26) && (wVar6 == L'\x9d')) {
      iVar16 = uVar26 - 1;
      lVar33 = param_3[1];
      iVar49 = *(int *)((long)param_3 + 0xc);
      iVar2 = iVar16 + iVar20;
      iVar19 = uVar17 + uVar26 * 2;
      lVar37 = lVar37 + (long)iVar49 * 0x14;
LAB_029b7d00:
      iVar49 = iVar49 + 1;
      iVar36 = 0;
      if ((int)lVar33 <= iVar49) {
        iVar36 = (int)lVar33;
      }
      lVar50 = lVar37 + (long)iVar36 * -0x14;
      iVar9 = *(int *)(lVar50 + 0x14);
      uVar21 = 1;
      switch(iVar9) {
      case 0x9d:
        goto switchD_029b7d2c_caseD_9d;
      case 0x9e:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa5:
      case 0xa7:
      case 0xde:
        goto switchD_029b7d2c_caseD_9e;
      case 0x9f:
      case 0xa4:
      case 0xa6:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
switchD_029b7d2c_caseD_9f:
        uVar22 = FUN_029b95c0(iVar9);
        if ((uVar22 & 1) == 0) {
          uVar21 = 0;
          goto switchD_029b7d2c_caseD_9e;
        }
        goto LAB_029b7d34;
      default:
        if (1 < iVar9 - 0x10dU) goto switchD_029b7d2c_caseD_9f;
        goto switchD_029b7d2c_caseD_9e;
      }
    }
LAB_029b7de4:
    cVar51 = (char)uVar21;
    bVar14 = false;
    if ((int)uVar18 < 0x10b) {
      if ((4 < uVar18 - 0x4d) && (uVar18 != 0)) goto LAB_029b833c;
LAB_029b7e20:
      local_dc = -1;
    }
    else {
      if ((uVar18 - 0x1ab < 2) || (uVar18 == 0x10b)) goto LAB_029b7e20;
LAB_029b833c:
      local_dc = (local_dc + 1) % 5;
      if (local_dc == 0) {
        if (*(char *)(param_1 + 0x20) == '\0') {
          local_118 = 0;
        }
        else {
          uVar29 = *(uint *)(param_1 + 0x14);
          uVar17 = *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 8) << 0xb;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
          uVar17 = uVar17 >> 8 ^ uVar29 >> 0x13 ^ uVar17 ^ uVar29;
          *(uint *)(param_1 + 0x10) = uVar29;
          *(uint *)(param_1 + 0x14) = uVar17;
          local_118 = (ulong)uVar17 + (ulong)uVar17 * 4 >> 0x20;
        }
      }
      bVar14 = local_dc == (int)local_118;
    }
    if (0 < (int)uVar26) {
      if (local_d4 < L'e' && L'd' < wVar7) {
        bVar14 = true;
      }
      if ((local_d0 == L'\0') && (wVar8 == L'\x01')) {
        bVar14 = true;
      }
      bVar12 = cVar10 == '\0';
      local_d4 = wVar7;
      local_d0 = wVar8;
      cVar10 = cVar44;
      if (bVar12 && cVar44 != '\0') {
        bVar14 = true;
      }
    }
    uVar17 = 0;
    if ((int)uVar18 < 0x10b) {
      if (4 < uVar18 - 0x4d) {
        uVar29 = 0;
        uVar46 = 0;
        iVar20 = 0;
        if (uVar18 != 0) goto LAB_029b820c;
        goto LAB_029b7eb8;
      }
LAB_029b7eac:
      uVar29 = 0;
      uVar46 = 0;
      iVar20 = 0;
    }
    else {
      if (uVar18 - 0x1ab < 2) goto LAB_029b7eac;
      uVar29 = 0;
      uVar46 = 0;
      iVar20 = 0;
      if (uVar18 != 0x10b) {
LAB_029b820c:
        if (iVar36 < (int)uVar26) {
          iVar2 = (int)param_3[1];
          iVar19 = *(int *)((long)param_3 + 0xc);
          lVar37 = *param_3;
          iVar49 = (int)param_3[2];
          iVar20 = 0;
          if (iVar2 <= iVar19 + iVar36) {
            iVar20 = iVar2;
          }
          uVar17 = *(uint *)(lVar37 + (long)((iVar19 + iVar36) - iVar20) * 0x14);
          uVar29 = uVar17;
          iVar16 = iVar36;
          if (uVar17 == 0x9d) {
            do {
              iVar20 = 0;
              if (iVar2 <= iVar19 + iVar16) {
                iVar20 = iVar2;
              }
              if (*(int *)(lVar37 + (long)((iVar19 + iVar16) - iVar20) * 0x14) != 0x9d)
              goto LAB_029b8280;
              iVar16 = iVar16 + 1;
            } while (iVar49 != iVar16);
            iVar16 = iVar49;
LAB_029b8280:
            if (iVar16 < (int)uVar26) {
              iVar20 = 0;
              if (iVar2 <= iVar16 + iVar19) {
                iVar20 = iVar2;
              }
              uVar29 = *(uint *)(lVar37 + (long)((iVar16 + iVar19) - iVar20) * 0x14);
              goto LAB_029b82a0;
            }
            uVar29 = 0x9d;
LAB_029b86b8:
            iVar20 = iVar16 + 1;
            if (iVar20 < (int)uVar26) {
              iVar16 = 0;
              if (iVar2 <= iVar20 + iVar19) {
                iVar16 = iVar2;
              }
              uVar46 = *(uint *)(lVar37 + (long)((iVar20 + iVar19) - iVar16) * 0x14);
              if (uVar46 == 0x9d) {
                do {
                  iVar16 = 0;
                  if (iVar2 <= iVar19 + iVar20) {
                    iVar16 = iVar2;
                  }
                  if (*(int *)(lVar37 + (long)((iVar19 + iVar20) - iVar16) * 0x14) != 0x9d)
                  goto LAB_029b8714;
                  iVar20 = iVar20 + 1;
                } while (iVar49 != iVar20);
                iVar20 = iVar49;
LAB_029b8714:
                if ((int)uVar26 <= iVar20) {
                  uVar46 = 0x9d;
                  goto LAB_029b7eb8;
                }
                iVar16 = 0;
                if (iVar2 <= iVar20 + iVar19) {
                  iVar16 = iVar2;
                }
                uVar46 = *(uint *)(lVar37 + (long)((iVar20 + iVar19) - iVar16) * 0x14);
              }
              if (uVar46 == 0x23) {
                do {
                  iVar16 = 0;
                  if (iVar2 <= iVar19 + iVar20) {
                    iVar16 = iVar2;
                  }
                  iVar9 = iVar20;
                  if (*(int *)(lVar37 + (long)((iVar19 + iVar20) - iVar16) * 0x14) != 0x23) break;
                  iVar20 = iVar20 + 1;
                  iVar9 = iVar49;
                } while (iVar49 != iVar20);
                iVar20 = iVar9;
                if (iVar9 < (int)uVar26) {
                  iVar49 = 0;
                  if (iVar2 <= iVar9 + iVar19) {
                    iVar49 = iVar2;
                  }
                  uVar46 = *(uint *)(lVar37 + (long)((iVar9 + iVar19) - iVar49) * 0x14);
                }
                else {
                  uVar46 = 0x23;
                }
              }
              else {
              }
              goto LAB_029b7eb8;
            }
          }
          else {
LAB_029b82a0:
            if (uVar29 == 0x23) {
              do {
                iVar20 = 0;
                if (iVar2 <= iVar19 + iVar16) {
                  iVar20 = iVar2;
                }
                if (*(int *)(lVar37 + (long)((iVar19 + iVar16) - iVar20) * 0x14) != 0x23)
                goto LAB_029b82e0;
                iVar16 = iVar16 + 1;
              } while (iVar49 != iVar16);
              iVar16 = iVar49;
LAB_029b82e0:
              if ((int)uVar26 <= iVar16) {
                uVar29 = 0x23;
                goto LAB_029b86b8;
              }
              iVar20 = 0;
              if (iVar2 <= iVar16 + iVar19) {
                iVar20 = iVar2;
              }
              uVar29 = *(uint *)(lVar37 + (long)((iVar16 + iVar19) - iVar20) * 0x14);
            }
            if (uVar29 != 0) goto LAB_029b86b8;
          }
          uVar46 = 0;
          iVar20 = iVar16;
        }
        else {
          uVar17 = 0;
          uVar29 = 0;
          uVar46 = 0;
          iVar20 = iVar36;
        }
      }
    }
LAB_029b7eb8:
    bVar12 = (uVar29 & 0xfffffffe) == 0xa0;
    iVar20 = iVar20 << 1;
    bVar13 = (uVar46 & 0xfffffffe) == 0xa0;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (!bVar12 && !bVar13) {
      iVar20 = 0;
    }
    iVar19 = 0;
    if (iVar2 != 0) {
      iVar19 = (local_9c + 1) / iVar2;
    }
    local_9c = (local_9c + 1) - iVar19 * iVar2;
    local_98 = local_98 + ((int)(char)iVar25 & ((int)(char)iVar25 >> 0x1f ^ 0xffffffffU));
    if (local_9c == 1) {
      uVar22 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
      if (0x1f < (uint)uVar22) {
        uVar22 = 0;
      }
      cVar44 = (&DAT_04058440)[uVar22];
      if (cVar44 == '\0' || cVar44 == '\t') {
        fVar52 = 0.6666667;
      }
      else {
        fVar52 = 0.6666667;
        if (cVar44 != '\n') {
          fVar52 = 1.2;
        }
      }
      local_9c = 0;
      if (0x10a < (int)uVar18) {
        if ((1 < uVar18 - 0x1ab) && (uVar18 != 0x10b)) goto LAB_029b7fa4;
        goto LAB_029b8004;
      }
      if ((uVar18 - 0x4d < 5) || (uVar18 == 0)) goto LAB_029b8004;
LAB_029b7fa4:
      local_9c = 0;
      if ((((bVar14) || (uVar15 != 0)) || (uVar17 == 0x23)) ||
         (uVar17 = (uint)cVar51,
         (float)(int)(iVar42 + (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU))) <=
         (1.0 / fVar52) * (float)local_98)) goto LAB_029b8004;
      if (2 < (int)uVar17) {
        local_9c = 1;
        cVar51 = (char)(uVar21 - 2);
        if ((uVar21 - 2 & 0xff) < 3) {
          cVar51 = '\x02';
        }
        goto LAB_029b8004;
      }
      local_9c = 1;
    }
    else {
LAB_029b8004:
      local_e4 = uVar18;
      if ((int)uVar18 < 0x10b) {
        if ((uVar18 - 0x4d < 5) || (uVar18 == 0)) goto LAB_029b8040;
      }
      else if ((uVar18 - 0x1ab < 2) || (uVar18 == 0x10b)) {
LAB_029b8040:
        if ((int)uVar18 < 0x10b) {
          if ((uVar18 - 0x4d < 5) || (local_9c = -1, uVar18 == 0)) goto LAB_029b8080;
        }
        else if ((uVar18 - 0x1ab < 2) || (local_9c = -1, uVar18 == 0x10b)) {
LAB_029b8080:
          local_9c = -1;
          local_e4 = 0;
        }
      }
      plVar31 = (long *)param_2[3];
      if (plVar31 != (long *)0x0) {
        param_2[3] = *plVar31;
      }
      plVar31[5] = 0;
      *plVar31 = 0;
      plVar31[1] = 0;
      *(undefined1 *)((long)plVar31 + 9) = 1;
      *(undefined1 *)((long)plVar31 + 0xd) = 0xff;
      plVar31[6] = 0;
      plVar31[7] = 0;
      plVar31[2] = 0;
      plVar31[3] = (long)puVar1;
      puVar11 = PTR_DAT_04bb2120;
      *(undefined4 *)(plVar31 + 7) = 0;
      plVar31[8] = 0;
      plVar31[10] = 0;
      plVar31[4] = (long)puVar11;
      plVar40 = plVar31 + 9;
      *plVar40 = 0;
      lVar37 = *param_2;
      *param_2 = (long)plVar40;
      plVar31[10] = (long)param_2;
      *plVar40 = lVar37;
      if (lVar37 != 0) {
        *(long **)(lVar37 + 8) = plVar40;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      *(char *)((long)plVar31 + 0xd) = bVar14 + -1;
      *(bool *)plVar31 = bVar12 || bVar13;
      *(int *)((long)plVar31 + 4) = iVar20;
      *(undefined2 *)((long)plVar31 + 10) = 0x200;
      uVar22 = FUN_029b95c0(wVar6);
      cVar44 = cVar51;
      if ((uVar22 & 1) != 0) {
        cVar44 = -1;
      }
      *(char *)((long)plVar31 + 0xc) = cVar44;
      if (((wVar6 == L'§') || (wVar6 == L'Þ')) || (wVar6 == L'Ď')) {
        iVar42 = 0;
        local_9c = -1;
        local_98 = 0;
        bVar27 = *(byte *)(plVar31 + 1) | 1;
      }
      else {
        iVar42 = iVar42 + ((int)cVar51 & ((int)cVar51 >> 0x1f ^ 0xffffffffU));
        bVar27 = *(byte *)(plVar31 + 1) & 0xfe;
      }
      if (uVar15 != 0) {
        bVar27 = bVar27 | 8;
      }
      *(char *)((long)plVar31 + 0xe) = (char)iVar45;
      bVar3 = ('\0' < (char)iVar45) << 6;
      *(byte *)(plVar31 + 1) = bVar27 & 0x80 | bVar27 & 0x3f | bVar3;
      switch(wVar6) {
      case L'ß':
        uVar43 = uVar43 | 2;
        break;
      case L'à':
        uVar43 = uVar43 & 0xfffffffffffffffd;
        break;
      case L'á':
        uVar43 = uVar43 | 4;
        break;
      case L'â':
        uVar43 = uVar43 & 0xfffffffffffffffb;
        break;
      case L'ã':
        uVar43 = uVar43 | 0x40000000;
        break;
      case L'ä':
        uVar43 = uVar43 & 0xffffffffbfffffff;
        break;
      case L'å':
        uVar43 = uVar43 | 0x80000000;
        break;
      case L'æ':
        uVar43 = uVar43 & 0xffffffff7fffffff;
        break;
      case L'ç':
        uVar43 = uVar43 | 0x100000000;
        break;
      case L'è':
        uVar43 = uVar43 & 0xfffffffeffffffff;
        break;
      case L'é':
        uVar43 = uVar43 | 8;
        break;
      case L'ê':
        uVar43 = uVar43 & 0xfffffffffffffff7;
        break;
      case L'ë':
        uVar43 = uVar43 | 0x10;
        break;
      case L'ì':
        uVar43 = uVar43 & 0xffffffffffffffef;
        break;
      case L'í':
        uVar43 = uVar43 & 0xffffffffc000001f;
        break;
      case L'î':
        uVar43 = uVar43 | 0x20;
        break;
      case L'ï':
        uVar43 = uVar43 | 0x40;
        break;
      case L'ð':
        uVar43 = uVar43 | 0x80;
        break;
      case L'ñ':
        uVar43 = uVar43 | 0x100;
        break;
      case L'ò':
        uVar43 = uVar43 | 0x200;
        break;
      case L'ó':
        uVar43 = uVar43 | 0x400;
        break;
      case L'ô':
        uVar43 = uVar43 | 0x800;
        break;
      case L'õ':
        uVar43 = uVar43 | 0x1000;
        break;
      case L'ö':
        uVar43 = uVar43 | 0x2000;
        break;
      case L'÷':
        uVar43 = uVar43 | 0x4000;
        break;
      case L'ø':
        uVar43 = uVar43 | 0x8000;
        break;
      case L'ù':
        uVar43 = uVar43 | 0x10000;
        break;
      case L'ú':
        uVar43 = uVar43 | 0x20000;
        break;
      case L'û':
        uVar43 = uVar43 | 0x40000;
        break;
      case L'ü':
        uVar43 = uVar43 | 0x80000;
        break;
      case L'ý':
        uVar43 = uVar43 | 0x100000;
        break;
      case L'þ':
        uVar43 = uVar43 | 0x200000;
        break;
      case L'ÿ':
        uVar43 = uVar43 | 0x400000;
        break;
      case L'Ā':
        uVar43 = uVar43 | 0x800000;
        break;
      case L'ā':
        uVar43 = uVar43 | 0x1000000;
        break;
      case L'Ă':
        uVar43 = uVar43 | 0x2000000;
        break;
      case L'ă':
        uVar43 = uVar43 | 0x4000000;
        break;
      case L'Ą':
        uVar43 = uVar43 | 0x8000000;
        break;
      case L'ą':
        uVar43 = uVar43 | 0x10000000;
        break;
      case L'Ć':
        uVar43 = uVar43 | 0x20000000;
        break;
      case L'ć':
        uVar43 = uVar43 | 0x200000000;
        break;
      case L'Ĉ':
        uVar43 = uVar43 & 0xfffffffdffffffff;
        break;
      case L'ĉ':
        uVar43 = uVar43 | 0x400000000;
        break;
      case L'Ċ':
        uVar43 = uVar43 & 0xfffffffbffffffff;
        break;
      case L'ċ':
        uVar43 = uVar43 | 0x800000000;
        break;
      case L'Č':
        uVar43 = uVar43 & 0xfffffff7ffffffff;
      }
      plVar31[5] = uVar43;
      if ((int)uVar26 < 1) {
        uVar34 = 1;
      }
      else if (wVar7 < L'È') {
        if (wVar7 < L'\x96') {
          uVar34 = L'c' < wVar7;
        }
        else {
          uVar34 = 2;
        }
      }
      else {
        uVar34 = 3;
      }
      *(undefined1 *)((long)plVar31 + 9) = uVar34;
      uVar26 = uVar18;
      if (0x1ac < uVar18) {
        uVar26 = 0;
      }
      *(uint *)(plVar31 + 2) = uVar18;
      iVar45 = 0;
      pcVar39 = (char *)(&DAT_055e7558)[(ulong)uVar26 * 2];
      plVar31[4] = (long)pcVar39;
      *(byte *)(plVar31 + 1) = bVar27 & 0x80 | bVar27 & 0x3d | bVar3 | (*pcVar39 == '\0') << 1;
    }
    uVar26 = *(uint *)(param_3 + 2);
    iVar45 = iVar45 + iVar25;
    cVar44 = (char)iVar45;
    if (0 < iVar36) {
      if (uVar26 == 0) break;
      uVar26 = 1;
      do {
        if (uVar26 != 0) {
          iVar25 = 0;
          if ((int)param_3[1] <= *(int *)((long)param_3 + 0xc)) {
            iVar25 = (int)param_3[1];
          }
          *(undefined8 *)(*param_3 + (long)(*(int *)((long)param_3 + 0xc) - iVar25) * 0x14) = 0;
          uVar26 = *(uint *)(param_3 + 2);
          uVar18 = uVar26 - 1;
          if (0 < (int)uVar26) {
            iVar20 = (int)param_3[1];
            iVar25 = 0;
            if (*(int *)((long)param_3 + 0xc) + 1 < iVar20) {
              iVar25 = *(int *)((long)param_3 + 0xc) + 1;
            }
            *(int *)((long)param_3 + 0xc) = iVar25;
            *(uint *)(param_3 + 2) = uVar18;
            uVar26 = uVar18;
            if (3 < uVar18) {
              iVar2 = 0;
              if (iVar20 <= iVar25 + 3) {
                iVar2 = iVar20;
              }
              if (*param_3 != 0) {
                piVar38 = (int *)(*param_3 + (long)((iVar25 + 3) - iVar2) * 0x14);
                iVar25 = *piVar38;
                if (iVar25 != 0xa7) {
                  if ((iVar25 != 0xa6) || (uVar41 = uVar41 + 1, uVar41 != 3)) goto LAB_029b85d4;
                  *piVar38 = 0xa7;
                  uVar26 = *(uint *)(param_3 + 2);
                }
                uVar41 = 0;
              }
            }
          }
        }
LAB_029b85d4:
        iVar36 = iVar36 + -1;
      } while (iVar36 != 0);
    }
  } while (uVar26 != 0);
LAB_029b7700:
  plVar31 = (long *)param_2[3];
  if (plVar31 != (long *)0x0) {
    param_2[3] = *plVar31;
  }
  *plVar31 = 0;
  plVar31[1] = 0;
  *(undefined1 *)((long)plVar31 + 9) = 1;
  *(undefined1 *)((long)plVar31 + 0xd) = 0xff;
  plVar31[6] = 0;
  plVar31[7] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar31[5] = 0;
  plVar31[2] = 0;
  plVar31[3] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2120;
  *(undefined4 *)(plVar31 + 7) = 0;
  plVar31[8] = 0;
  plVar31[10] = 0;
  plVar31[4] = (long)puVar1;
  plVar40 = plVar31 + 9;
  *plVar40 = 0;
  lVar37 = *param_2;
  *param_2 = (long)plVar40;
  plVar31[10] = (long)param_2;
  *plVar40 = lVar37;
  if (lVar37 != 0) {
    *(long **)(lVar37 + 8) = plVar40;
  }
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  *(undefined1 *)((long)plVar31 + 0xd) = 0xff;
  *(undefined1 *)plVar31 = 0;
  *(undefined4 *)((long)plVar31 + 4) = 0;
  *(char *)((long)plVar31 + 0xe) = cVar44;
  *(undefined4 *)(plVar31 + 2) = 0;
  *(undefined4 *)((long)plVar31 + 9) = 0xff000001;
  uVar34 = 0x4a;
  if (cVar44 < '\x01') {
    uVar34 = 10;
  }
  *(undefined1 *)(plVar31 + 1) = uVar34;
  plVar31[4] = DAT_055e7558;
  plVar31[5] = 0;
  lVar37 = param_2[1];
  if ((int)param_2[2] < 1) {
    lVar37 = 0;
  }
  if ((lVar37 != 0) && (lVar37 != 0x48)) {
    *(byte *)(lVar37 + -0x40) = *(byte *)(lVar37 + -0x40) | 4;
  }
  return;
switchD_029b7d2c_caseD_9e:
  uVar15 = uVar21;
LAB_029b7d34:
  iVar36 = iVar20;
  uVar21 = uVar17;
  if (iVar9 != 0x9d) goto LAB_029b7de4;
switchD_029b7d2c_caseD_9d:
  iVar20 = iVar20 + 1;
  uVar17 = uVar17 + 2;
  iVar16 = iVar16 + -1;
  lVar37 = lVar37 + 0x14;
  iVar25 = iVar25 + (int)*(float *)(lVar50 + 0x20);
  iVar36 = iVar2;
  uVar21 = iVar19 - 2;
  if (iVar16 == 0) goto LAB_029b7de4;
  goto LAB_029b7d00;
}

