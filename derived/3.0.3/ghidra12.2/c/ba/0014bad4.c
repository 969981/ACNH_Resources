
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_0014bad4(undefined8 param_1,long param_2,ulong param_3,uint param_4,char *param_5,char *param_6,
            char *param_7,uint param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void *__dest;
  char *pcVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *__dest_00;
  char *__s2;
  undefined4 local_2074;
  char local_2070 [4096];
  undefined8 local_1070;
  undefined4 local_6c [3];
  
  local_2074 = param_8;
  uVar9 = FUN_00146418(0);
  puVar10 = (undefined8 *)FUN_00143330(1,0x68);
  if (puVar10 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 1) == 0) {
    local_1070 = 0;
    iVar7 = strncmp(param_5,"#HttpOnly_",10);
    if (iVar7 == 0) {
      param_5 = param_5 + 10;
      *(undefined1 *)((long)puVar10 + 0x5a) = 1;
    }
    if (*param_5 == '#') goto LAB_0014bbe4;
    pcVar12 = strchr(param_5,0xd);
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    pcVar12 = strchr(param_5,10);
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    pcVar12 = (char *)FUN_0014e158(param_5,&DAT_040a38f2,&local_1070);
    if (pcVar12 == (char *)0x0) goto LAB_0014c39c;
    iVar7 = 0;
    bVar5 = false;
    do {
      switch(iVar7) {
      case 0:
        if (*pcVar12 == '.') {
          pcVar12 = pcVar12 + 1;
        }
        lVar18 = FUN_00143320(pcVar12);
        bVar6 = lVar18 == 0;
        iVar7 = 0;
        puVar10[5] = lVar18;
        goto LAB_0014c1bc;
      case 1:
        iVar8 = FUN_00144a90(pcVar12,&DAT_040cca44);
        iVar7 = 1;
        *(bool *)(puVar10 + 8) = iVar8 != 0;
        break;
      case 2:
        iVar7 = strcmp("TRUE",pcVar12);
        if ((iVar7 == 0) || (iVar7 = strcmp("FALSE",pcVar12), iVar7 == 0)) {
          lVar18 = FUN_00143320(&DAT_04079e84);
          puVar10[3] = lVar18;
          lVar17 = FUN_00143320(&DAT_04079e84);
          puVar10[4] = lVar17;
          if (lVar18 == 0 || lVar17 == 0) {
            bVar5 = true;
          }
          goto switchD_0014c0bc_caseD_3;
        }
        lVar18 = FUN_00143320(pcVar12);
        puVar10[3] = lVar18;
        if (lVar18 != 0) {
          lVar18 = FUN_0014c728();
          bVar6 = lVar18 == 0;
          puVar10[4] = lVar18;
          iVar7 = 2;
          goto LAB_0014c1bc;
        }
        iVar7 = 2;
LAB_0014c258:
        bVar5 = true;
        break;
      case 3:
switchD_0014c0bc_caseD_3:
        *(undefined1 *)(puVar10 + 0xb) = 0;
        iVar7 = FUN_00144a90(pcVar12,&DAT_040cca44);
        if (iVar7 != 0) {
          if (((local_2074 & 1) == 0) && (*(char *)(param_2 + 0x808) == '\0')) {
            iVar7 = 3;
            goto LAB_0014c258;
          }
          *(undefined1 *)(puVar10 + 0xb) = 1;
        }
        iVar7 = 3;
        break;
      case 4:
        iVar8 = FUN_0014e1e4(pcVar12,0,10,puVar10 + 6);
        iVar7 = 4;
        if (iVar8 != 0) {
          bVar5 = true;
        }
        break;
      case 5:
        lVar18 = FUN_00143320(pcVar12);
        puVar10[1] = lVar18;
        if (lVar18 == 0) {
          bVar5 = true;
        }
        iVar7 = FUN_00144b34("__Secure-",lVar18,9);
        if (iVar7 == 0) {
          iVar7 = FUN_00144b34("__Host-",puVar10[1],7);
          if (iVar7 != 0) {
            bVar20 = *(byte *)(puVar10 + 0xc) | 2;
            goto LAB_0014c240;
          }
        }
        else {
          bVar20 = *(byte *)(puVar10 + 0xc) | 1;
LAB_0014c240:
          *(byte *)(puVar10 + 0xc) = bVar20;
        }
        iVar7 = 5;
        break;
      case 6:
        lVar18 = FUN_00143320(pcVar12);
        bVar6 = lVar18 == 0;
        iVar7 = 6;
        puVar10[2] = lVar18;
LAB_0014c1bc:
        if (bVar6) {
          bVar5 = true;
        }
      }
      pcVar12 = (char *)FUN_0014e158(0,&DAT_040a38f2,&local_1070);
      iVar7 = iVar7 + 1;
    } while ((pcVar12 != (char *)0x0) && (!bVar5));
    if (iVar7 == 6) {
      lVar18 = FUN_00143320(&DAT_0407ebb1);
      puVar10[2] = lVar18;
      if (lVar18 == 0) {
        bVar5 = true;
      }
      iVar7 = 6;
      if (lVar18 != 0) {
        iVar7 = 7;
      }
    }
    if ((bVar5) || (iVar7 != 7)) goto LAB_0014c39c;
  }
  else {
    memset(&local_1070,0,0x1000);
    memset(local_2070,0,0x1000);
    sVar11 = strlen(param_5);
    if (5000 < sVar11) {
LAB_0014bbe4:
      FUN_00143300(puVar10);
      return (undefined8 *)0x0;
    }
    pcVar12 = strchr(param_5,0x3b);
    for (; (*param_5 == '\t' || (*param_5 == ' ')); param_5 = param_5 + 1) {
    }
    bVar5 = false;
LAB_0014bc00:
    local_2070[0] = '\0';
    local_1070 = local_1070 & 0xffffffffffffff00;
    iVar7 = sscanf(param_5,"%4095[^;\r\n=] =%4095[^;\r\n]",&local_1070,local_2070);
    if (iVar7 < 1) {
LAB_0014be64:
      bVar6 = bVar5;
      if ((pcVar12 == (char *)0x0) || (param_5 = pcVar12, *pcVar12 == '\0')) goto LAB_0014c2ec;
      do {
        param_5 = param_5 + 1;
        cVar3 = *param_5;
      } while (cVar3 == ' ' || cVar3 == '\t');
      pcVar12 = strchr(param_5,0x3b);
      bVar5 = bVar6;
      if (pcVar12 == (char *)0x0) {
        if (cVar3 == '\0') goto LAB_0014c2ec;
        sVar11 = strlen(param_5);
        pcVar12 = param_5 + sVar11;
      }
      goto LAB_0014bc00;
    }
    sVar11 = strlen(local_2070);
    sVar13 = strlen((char *)&local_1070);
    if (((0xffe < sVar13) || (0xffe < sVar11)) || (0x1000 < sVar13 + sVar11)) {
      FUN_0014c6c8(puVar10);
      FUN_0014d430(param_1,"oversized cookie dropped, name/val %zu + %zu bytes\n",sVar13,sVar11);
      return (undefined8 *)0x0;
    }
    cVar3 = param_5[sVar13];
    if ((sVar13 != 0) && ((cVar4 = (param_5 + sVar13)[-1], cVar4 == ' ' || (cVar4 == '\t')))) {
      for (; ((cVar4 == ' ' || ((cVar4 != '\0' && (cVar4 == '\t')))) && (sVar13 != 0));
          sVar13 = sVar13 - 1) {
        cVar4 = param_5[sVar13 - 2];
      }
      local_2070[sVar13 + 0x1000] = '\0';
    }
    for (; sVar11 != 0; sVar11 = sVar11 - 1) {
      if (local_2070[sVar11 - 1] != ' ' && local_2070[sVar11 - 1] != '\t') {
        bVar6 = false;
        goto LAB_0014bce8;
      }
      local_2070[sVar11 - 1] = '\0';
    }
    bVar6 = true;
LAB_0014bce8:
    for (pcVar19 = local_2070; *pcVar19 == ' ' || *pcVar19 == '\t'; pcVar19 = pcVar19 + 1) {
    }
    if (((3 < sVar13) && ((char)local_1070 == '_')) && (local_1070._1_1_ == '_')) {
      iVar7 = FUN_00144b34("__Secure-",&local_1070,9);
      if (iVar7 == 0) {
        iVar7 = FUN_00144b34("__Host-",&local_1070,7);
        if (iVar7 == 0) goto LAB_0014bd74;
        bVar20 = 2;
      }
      else {
        bVar20 = 1;
      }
      *(byte *)(puVar10 + 0xc) = *(byte *)(puVar10 + 0xc) | bVar20;
    }
LAB_0014bd74:
    if (puVar10[1] != 0) {
      if (bVar6) {
        iVar7 = FUN_00144a90("secure",&local_1070);
        if (iVar7 == 0) {
          iVar7 = FUN_00144a90("httponly",&local_1070);
          if (iVar7 == 0) {
            if (cVar3 == '=') goto LAB_0014be1c;
          }
          else {
            *(undefined1 *)((long)puVar10 + 0x5a) = 1;
          }
        }
        else {
          if (((local_2074 & 1) == 0) && (*(char *)(param_2 + 0x808) != '\0')) goto LAB_0014c2e8;
          *(undefined1 *)(puVar10 + 0xb) = 1;
        }
      }
      else {
LAB_0014be1c:
        iVar7 = FUN_00144a90(&DAT_040c2972,&local_1070);
        if (iVar7 == 0) {
          iVar7 = FUN_00144a90("domain",&local_1070);
          if (iVar7 == 0) {
            iVar7 = FUN_00144a90("version",&local_1070);
            if (iVar7 != 0) {
              FUN_00143300(puVar10[9]);
              lVar18 = FUN_00143320(pcVar19);
              puVar10[9] = lVar18;
              goto LAB_0014be60;
            }
            iVar7 = FUN_00144a90("max-age",&local_1070);
            if (iVar7 == 0) {
              iVar7 = FUN_00144a90("expires",&local_1070);
              if (iVar7 != 0) {
                FUN_00143300(puVar10[7]);
                lVar18 = FUN_00143320(pcVar19);
                puVar10[7] = lVar18;
                goto LAB_0014be60;
              }
            }
            else {
              FUN_00143300(puVar10[10]);
              lVar18 = FUN_00143320(pcVar19);
              puVar10[10] = lVar18;
              if (lVar18 == 0) {
                bVar6 = true;
                goto LAB_0014c364;
              }
            }
          }
          else {
            if (*pcVar19 == '.') {
              pcVar19 = pcVar19 + 1;
            }
            pcVar15 = strchr(pcVar19,0x2e);
            __s2 = param_6;
            if (pcVar15 == (char *)0x0) {
              iVar7 = FUN_00144a90(pcVar19,"localhost");
              __s2 = ":";
              if (iVar7 != 0) {
                __s2 = param_6;
              }
            }
            local_6c[0] = 0;
            pcVar15 = pcVar19;
            if (__s2 != (char *)0x0) {
              pcVar15 = __s2;
            }
            iVar7 = FUN_0014b5f8(2,pcVar15,local_6c);
            param_6 = __s2;
            if (__s2 == (char *)0x0) {
LAB_0014bf98:
              FUN_00143300(puVar10[5]);
              lVar18 = FUN_00143320(pcVar19);
              puVar10[5] = lVar18;
              if ((lVar18 == 0) || (iVar7 != 0)) goto LAB_0014be60;
              *(undefined1 *)(puVar10 + 8) = 1;
            }
            else {
              if (iVar7 == 0) {
                uVar16 = FUN_0014c7e8();
                if ((uVar16 & 1) != 0) goto LAB_0014bf98;
              }
              else {
                iVar8 = strcmp(pcVar19,__s2);
                if (iVar8 == 0) goto LAB_0014bf98;
              }
              FUN_0014d430(param_1,"skipped cookie with bad tailmatch domain: %s\n",pcVar19);
              bVar5 = true;
            }
          }
        }
        else {
          FUN_00143300(puVar10[3]);
          lVar18 = FUN_00143320(pcVar19);
          puVar10[3] = lVar18;
          if (lVar18 == 0) goto LAB_0014c2e8;
          FUN_00143300(puVar10[4]);
          lVar18 = FUN_0014c728(puVar10[3]);
          puVar10[4] = lVar18;
LAB_0014be60:
          if (lVar18 == 0) goto LAB_0014c2e8;
        }
      }
      goto LAB_0014be64;
    }
    if (cVar3 == '=') {
      uVar14 = FUN_00143320(&local_1070);
      puVar10[1] = uVar14;
      lVar18 = FUN_00143320(pcVar19);
      bVar6 = true;
      puVar10[2] = lVar18;
      if ((puVar10[1] == 0) || (lVar18 == 0)) goto LAB_0014c2ec;
      goto LAB_0014be64;
    }
LAB_0014c2e8:
    bVar6 = true;
LAB_0014c2ec:
    pcVar12 = (char *)puVar10[10];
    if (pcVar12 == (char *)0x0) {
LAB_0014c364:
      if (puVar10[7] != 0) {
        lVar18 = FUN_0014e2b4(puVar10[7],0);
        puVar10[6] = lVar18;
        if (lVar18 == 0) {
          puVar10[6] = 1;
        }
        else if (lVar18 < 0) {
          puVar10[6] = 0;
        }
      }
    }
    else {
      plVar1 = puVar10 + 6;
      if (*pcVar12 == '\"') {
        pcVar12 = pcVar12 + 1;
      }
      iVar7 = FUN_0014e1e4(pcVar12,0,10,plVar1);
      if (iVar7 == 0) {
        lVar18 = *plVar1;
        if (lVar18 == 0) {
          lVar18 = 1;
        }
        else {
          if ((long)(uVar9 ^ 0x7fffffffffffffff) < lVar18) goto LAB_0014c344;
          lVar18 = lVar18 + uVar9;
        }
      }
      else {
        if (iVar7 != 1) goto LAB_0014c398;
LAB_0014c344:
        lVar18 = 0x7fffffffffffffff;
      }
      *plVar1 = lVar18;
    }
LAB_0014c398:
    if (bVar6) goto LAB_0014c39c;
    if ((puVar10[5] == 0) && (param_6 != (char *)0x0)) {
      lVar18 = FUN_00143320(param_6);
      puVar10[5] = lVar18;
      if (lVar18 == 0) goto LAB_0014c39c;
    }
    if ((param_7 != (char *)0x0) && (puVar10[3] == 0)) {
      pcVar12 = strchr(param_7,0x3f);
      if (pcVar12 == (char *)0x0) {
        pcVar12 = strrchr(param_7,0x2f);
      }
      else {
        pcVar12 = (char *)FUN_0014e898(param_7,0x2f,(long)pcVar12 - (long)param_7);
      }
      if (pcVar12 != (char *)0x0) {
        __dest = (void *)FUN_001432f0(pcVar12 + (2 - (long)param_7));
        puVar10[3] = __dest;
        if (__dest == (void *)0x0) goto LAB_0014c39c;
        memcpy(__dest,param_7,(size_t)(pcVar12 + (1 - (long)param_7)));
        (pcVar12 + (1 - (long)param_7))[puVar10[3]] = '\0';
        lVar18 = FUN_0014c728(puVar10[3]);
        puVar10[4] = lVar18;
        if (lVar18 == 0) goto LAB_0014c39c;
      }
    }
    if (puVar10[1] == 0) goto LAB_0014c39c;
  }
  if (((((*(byte *)(puVar10 + 0xc) & 1) == 0) || (*(char *)(puVar10 + 0xb) != '\0')) &&
      (((*(byte *)(puVar10 + 0xc) >> 1 & 1) == 0 ||
       ((((*(char *)(puVar10 + 0xb) != '\0' && ((char *)puVar10[3] != (char *)0x0)) &&
         (iVar7 = strcmp((char *)puVar10[3],"/"), iVar7 == 0)) && (*(char *)(puVar10 + 8) == '\0')))
       ))) && (((*(char *)(param_2 + 0x808) != '\0' || (*(char *)(param_2 + 0x818) == '\0')) ||
               (puVar10[6] != 0)))) {
    *(char *)((long)puVar10 + 0x59) = *(char *)(param_2 + 0x808);
    iVar7 = *(int *)(param_2 + 0x81c) + 1;
    *(int *)(param_2 + 0x81c) = iVar7;
    *(int *)((long)puVar10 + 0x5c) = iVar7;
    if ((param_4 & 1) == 0) {
      FUN_0014c868(param_2);
    }
    lVar18 = FUN_0014c900(puVar10[5]);
    puVar2 = (undefined8 *)(param_2 + lVar18 * 8);
    puVar21 = (undefined8 *)*puVar2;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
      bVar5 = true;
    }
    else {
      do {
        __dest_00 = puVar21;
        iVar7 = FUN_00144a90(__dest_00[1],puVar10[1]);
        if (iVar7 != 0) {
          if (__dest_00[5] == 0) {
            if (puVar10[5] == 0) goto LAB_0014c504;
          }
          else if (((puVar10[5] != 0) && (iVar7 = FUN_00144a90(), iVar7 != 0)) &&
                  (*(char *)(__dest_00 + 8) == *(char *)(puVar10 + 8))) {
LAB_0014c504:
            pcVar12 = (char *)__dest_00[4];
            lVar18 = puVar10[4];
            if (pcVar12 == (char *)0x0) {
              if (lVar18 == 0) goto LAB_0014c630;
            }
            else if (lVar18 != 0) {
              if (((*(char *)(__dest_00 + 0xb) == '\0') || (*(char *)(puVar10 + 0xb) != '\0')) ||
                 ((local_2074 & 1) != 0)) {
                iVar7 = FUN_00144a90(pcVar12,lVar18);
                if (iVar7 == 0) goto LAB_0014c544;
              }
              else {
                pcVar19 = strchr(pcVar12 + 1,0x2f);
                if (pcVar19 == (char *)0x0) {
                  sVar11 = strlen(pcVar12);
                }
                else {
                  sVar11 = (long)pcVar19 - (long)pcVar12;
                }
                iVar7 = FUN_00144b34(pcVar12,lVar18,sVar11);
                if (iVar7 != 0) goto LAB_0014c39c;
              }
LAB_0014c630:
              if ((*(char *)((long)puVar10 + 0x59) != '\0') ||
                 (*(char *)((long)__dest_00 + 0x59) == '\0')) {
                *puVar10 = *__dest_00;
                *(undefined4 *)((long)puVar10 + 0x5c) = *(undefined4 *)((long)__dest_00 + 0x5c);
                FUN_00143300(__dest_00[1]);
                FUN_00143300(__dest_00[2]);
                FUN_00143300(__dest_00[5]);
                FUN_00143300(__dest_00[3]);
                FUN_00143300(__dest_00[4]);
                FUN_00143300(__dest_00[7]);
                FUN_00143300(__dest_00[9]);
                FUN_00143300(__dest_00[10]);
                memcpy(__dest_00,puVar10,0x68);
                FUN_00143300(puVar10);
                puVar10 = __dest_00;
                do {
                  puVar21 = puVar10;
                  puVar10 = (undefined8 *)*puVar21;
                } while ((undefined8 *)*puVar21 != (undefined8 *)0x0);
                bVar5 = false;
                puVar10 = __dest_00;
                goto LAB_0014c5a0;
              }
              goto LAB_0014c39c;
            }
          }
        }
LAB_0014c544:
        puVar21 = (undefined8 *)*__dest_00;
      } while ((undefined8 *)*__dest_00 != (undefined8 *)0x0);
      bVar5 = true;
      puVar21 = __dest_00;
    }
LAB_0014c5a0:
    if (*(char *)(param_2 + 0x808) != '\0') {
      pcVar12 = "Added";
      if (!bVar5) {
        pcVar12 = "Replaced";
      }
      FUN_0014d430(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",pcVar12,
                   puVar10[1],puVar10[2],puVar10[5],puVar10[3],puVar10[6]);
    }
    if (!bVar5) {
      return puVar10;
    }
    if (puVar21 != (undefined8 *)0x0) {
      puVar2 = puVar21;
    }
    *puVar2 = puVar10;
    *(long *)(param_2 + 0x810) = *(long *)(param_2 + 0x810) + 1;
    return puVar10;
  }
LAB_0014c39c:
  FUN_0014c6c8(puVar10);
  return (undefined8 *)0x0;
}

