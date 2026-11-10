
undefined8 FUN_00163554(char *param_1,long *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  ulong *puVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char local_78 [12];
  char local_6c [4];
  ulong local_68;
  ulong local_60;
  char *local_58;
  
  sVar4 = strlen(param_1);
  pcVar5 = (char *)FUN_001432f0(sVar4 * 2 + 2);
  param_2[9] = (long)pcVar5;
  if (pcVar5 == (char *)0x0) {
LAB_00163bb8:
    uVar15 = 7;
  }
  else {
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    pcVar16 = pcVar5 + sVar4 + 1;
    *pcVar16 = '\0';
    uVar6 = FUN_0016297c(param_1,local_78,8);
    if ((uVar6 & 1) == 0) {
      *pcVar5 = '\0';
      if ((param_3 & 0x204) != 0) {
        pcVar17 = (char *)0x0;
        if ((param_3 & 4) != 0) {
          pcVar17 = "https";
        }
LAB_001636e4:
        for (sVar4 = 0;
            0x3f < (byte)param_1[sVar4] ||
            (1L << ((ulong)(byte)param_1[sVar4] & 0x3f) & 0x8000800800000001U) == 0;
            sVar4 = sVar4 + 1) {
        }
        if (sVar4 != 0) {
          memcpy(pcVar16,param_1,sVar4);
          pcVar16[sVar4] = '\0';
          if (((param_3 >> 9 & 1) != 0) && (pcVar17 == (char *)0x0)) {
            iVar2 = thunk_FUN_00144b34(&DAT_040fc6f7,pcVar16,4);
            if (iVar2 == 0) {
              iVar2 = thunk_FUN_00144b34("dict.",pcVar16,5);
              if (iVar2 == 0) {
                iVar2 = thunk_FUN_00144b34("ldap.",pcVar16,5);
                if (iVar2 == 0) {
                  iVar2 = thunk_FUN_00144b34("imap.",pcVar16,5);
                  if (iVar2 == 0) {
                    iVar2 = thunk_FUN_00144b34(&DAT_040a3a37,pcVar16,5);
                    if (iVar2 == 0) {
                      iVar2 = thunk_FUN_00144b34("pop3.",pcVar16,5);
                      pcVar17 = "http";
                      if (iVar2 != 0) {
                        pcVar17 = "pop3";
                      }
                    }
                    else {
                      pcVar17 = "smtp";
                    }
                  }
                  else {
                    pcVar17 = "imap";
                  }
                }
                else {
                  pcVar17 = "ldap";
                }
              }
              else {
                pcVar17 = "dict";
              }
            }
            else {
              pcVar17 = "ftp";
            }
          }
          sVar11 = strlen(param_1 + sVar4);
          memcpy(pcVar5,param_1 + sVar4,sVar11);
          pcVar5[sVar11] = '\0';
          lVar7 = FUN_00143320(pcVar17);
          *param_2 = lVar7;
          if (lVar7 == 0) goto LAB_00163bb8;
          goto LAB_001638b4;
        }
      }
    }
    else {
      sVar4 = strlen(local_78);
      iVar2 = FUN_00144a90(local_78,&DAT_040f2037);
      if (iVar2 == 0) {
        *pcVar5 = '\0';
        param_1 = param_1 + sVar4 + 1;
        if (*param_1 == '/') {
          uVar14 = 0xffffffff;
          do {
            param_1 = param_1 + 1;
            uVar14 = uVar14 + 1;
          } while (*param_1 == '/' && uVar14 < 3);
          if (uVar14 < 3) {
            lVar7 = FUN_0014fe60(local_78);
            if (((param_3 >> 3 & 1) == 0) && (lVar7 == 0)) {
              uVar15 = 5;
              goto LAB_00163bbc;
            }
            pcVar17 = local_78;
            iVar2 = FUN_00163f90(local_78);
            if (iVar2 == 0) goto LAB_001636e4;
          }
        }
        goto LAB_001638cc;
      }
      strcpy(pcVar5,param_1 + 5);
      lVar7 = FUN_00143320(&DAT_040f2037);
      *param_2 = lVar7;
      if (lVar7 == 0) goto LAB_00163bb8;
      if (*pcVar5 == '/') {
        if (pcVar5[1] == '/') {
          pcVar16 = pcVar5 + 2;
          cVar13 = *pcVar16;
          if (cVar13 == '\0') {
LAB_0016363c:
            iVar2 = thunk_FUN_00144b34("localhost/",pcVar16,10);
            if ((iVar2 == 0) && (iVar2 = thunk_FUN_00144b34("127.0.0.1/",pcVar16,10), iVar2 == 0))
            goto LAB_001638cc;
            cVar13 = pcVar5[0xb];
            pcVar16 = pcVar5 + 0xb;
LAB_00163674:
            pcVar5 = pcVar16;
            pcVar16 = pcVar5;
            if (cVar13 != '/') {
              pcVar16 = (char *)0x0;
              goto LAB_001638b4;
            }
          }
          else if (cVar13 != '/') {
            pcVar17 = pcVar5 + 3;
            do {
              cVar1 = *pcVar17;
              if (cVar1 == ':') goto LAB_00163674;
              pcVar17 = pcVar17 + 1;
            } while (cVar1 != '\0');
            goto LAB_0016363c;
          }
          pcVar5 = pcVar16;
        }
        pcVar16 = pcVar5 + 1;
        if (*pcVar16 != '\0') {
          lVar7 = 2;
          do {
            pcVar17 = pcVar5 + lVar7;
            if (*pcVar17 == '\0') goto LAB_001636bc;
            lVar7 = lVar7 + 1;
          } while (*pcVar17 != ':');
          sVar4 = strlen(pcVar16);
          memmove(pcVar5,pcVar16,sVar4 + 1);
        }
      }
LAB_001636bc:
      pcVar16 = (char *)0x0;
LAB_001638b4:
      lVar7 = FUN_0014fe60(*param_2);
      iVar2 = FUN_00163f90(pcVar5);
      if (iVar2 == 0) {
        pcVar8 = strchr(pcVar5,0x3f);
        pcVar17 = pcVar8;
        if (pcVar8 != (char *)0x0) {
          pcVar17 = pcVar8 + 1;
          *pcVar8 = '\0';
        }
        pcVar8 = pcVar5;
        if (pcVar17 != (char *)0x0) {
          pcVar8 = pcVar17;
        }
        pcVar9 = strchr(pcVar8,0x23);
        pcVar8 = pcVar9;
        if (pcVar9 != (char *)0x0) {
          pcVar8 = pcVar9 + 1;
          *pcVar9 = '\0';
        }
        if (*pcVar5 != '\0') {
          if ((param_3 >> 4 & 1) == 0) {
            pcVar9 = (char *)FUN_001640b4(pcVar5);
            if (pcVar9 == (char *)0x0) goto LAB_00163bb8;
            iVar2 = strcmp(pcVar9,pcVar5);
            if (iVar2 != 0) {
              param_2[6] = (long)pcVar9;
              goto LAB_00163950;
            }
            FUN_00143300(pcVar9);
          }
          lVar10 = FUN_00143320(pcVar5);
          param_2[6] = lVar10;
          if (lVar10 == 0) goto LAB_00163bb8;
        }
LAB_00163950:
        if (pcVar16 != (char *)0x0) {
          iVar2 = FUN_00163f90(pcVar16);
          if (iVar2 != 0) goto LAB_001638cc;
          local_68 = 0;
          local_60 = 0;
          local_58 = (char *)0x0;
          pcVar5 = strchr(pcVar16,0x40);
          if (pcVar5 == (char *)0x0) {
            uVar15 = 0;
            pcVar9 = pcVar16;
LAB_001639cc:
            FUN_00143300();
            FUN_00143300(local_60);
            FUN_00143300(local_68);
            if (pcVar5 != (char *)0x0) goto LAB_00163bbc;
          }
          else {
            pcVar9 = pcVar5 + 1;
            if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x85) >> 2 & 1) == 0)) {
              puVar12 = (ulong *)0x0;
            }
            else {
              puVar12 = &local_68;
            }
            iVar2 = FUN_0014fed4(pcVar16,pcVar9 + ~(ulong)pcVar16,&local_58,&local_60,puVar12);
            if (iVar2 != 0) {
              uVar15 = 3;
LAB_001639c8:
              goto LAB_001639cc;
            }
            if (local_58 != (char *)0x0) {
              if ((param_3 >> 5 & 1) != 0) {
                uVar15 = 8;
                goto LAB_001639c8;
              }
              param_2[1] = (long)local_58;
            }
            if (local_60 != 0) {
              param_2[2] = local_60;
            }
            if (local_68 != 0) {
              param_2[3] = local_68;
            }
          }
          local_6c[0] = '\0';
          local_68 = local_68 & 0xffffffff00000000;
          iVar2 = sscanf(pcVar9,"[%*45[0123456789abcdefABCDEF:.]%c%n",local_6c,&local_68);
          if (iVar2 == 1) {
            iVar2 = (int)local_68;
            if (local_6c[0] == '%') {
              iVar3 = sscanf(pcVar9 + (int)local_68,"25%*[^]]%c%n",local_6c,&local_68);
              uVar15 = 3;
              if ((iVar3 != 1) || (local_6c[0] != ']')) goto LAB_00163bbc;
              iVar2 = (int)local_68 + iVar2;
            }
            else {
              if (local_6c[0] != ']') goto LAB_001638cc;
            }
            pcVar5 = pcVar9 + iVar2;
            if (*pcVar5 != '\0') {
              if (*pcVar5 != ':') goto LAB_001638cc;
              goto LAB_00163abc;
            }
          }
          else {
            pcVar5 = strchr(pcVar9,0x3a);
            if (pcVar5 != (char *)0x0) {
LAB_00163abc:
              local_58 = (char *)0x0;
              local_60 = local_60 & 0xff00000000000000;
              if (pcVar5[1] == '\0') {
                *pcVar5 = '\0';
              }
              else {
                iVar2 = FUN_0014654c();
                if (((iVar2 == 0) ||
                    (lVar7 = strtol(pcVar5 + 1,&local_58,10), lVar7 - 0x10000U < 0xffffffffffff0001)
                    ) || (*local_58 != '\0')) {
                  uVar15 = 4;
                  goto LAB_00163bbc;
                }
                *pcVar5 = '\0';
                *local_58 = '\0';
                uVar15 = 7;
                FUN_001460b8(&local_60,7,&DAT_040e1d15,lVar7);
                param_2[10] = lVar7;
                lVar7 = FUN_00143320(&local_60);
                param_2[5] = lVar7;
                if (lVar7 == 0) goto LAB_00163bbc;
              }
            }
          }
          sVar4 = strlen(pcVar9);
          if (*pcVar9 == '[') {
            sVar4 = sVar4 - 2;
            sVar11 = strspn(pcVar9 + 1,"0123456789abcdefABCDEF::.%");
          }
          else {
            sVar11 = strcspn(pcVar9," ");
          }
          if (sVar4 != sVar11) goto LAB_001638cc;
          lVar7 = FUN_00143320(pcVar9);
          param_2[4] = lVar7;
          if (lVar7 == 0) goto LAB_00163bb8;
        }
        if (pcVar17 != (char *)0x0) {
          lVar7 = FUN_00143320(pcVar17);
          param_2[7] = lVar7;
          if (lVar7 == 0) goto LAB_00163bb8;
        }
        if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
LAB_00163ba4:
          FUN_00143300(param_2[9]);
          param_2[9] = 0;
          return 0;
        }
        lVar7 = FUN_00143320(pcVar8);
        param_2[8] = lVar7;
        if (lVar7 != 0) goto LAB_00163ba4;
        goto LAB_00163bb8;
      }
    }
LAB_001638cc:
    uVar15 = 3;
  }
LAB_00163bbc:
  FUN_00162a7c(param_2);
  memset(param_2,0,0x58);
  return uVar15;
}

