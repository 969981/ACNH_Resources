
int FUN_00165bf0(long *param_1,int param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *param3;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 local_78;
  long local_70;
  int local_64;
  
  lVar22 = param_1[0xcf];
  if (lVar22 == 0) {
    lVar22 = FUN_00143330(1,0x4028);
    if (lVar22 == 0) {
      return 0x1b;
    }
    FUN_0014d430(*param_1,"allocate connect buffer!\n");
    param_1[0xcf] = lVar22;
    *(undefined4 *)(lVar22 + 0x4020) = 0;
    *(undefined4 *)(lVar22 + 0x4004) = 1;
    *(long *)(lVar22 + 0x4008) = lVar22;
    *(long *)(lVar22 + 0x4010) = lVar22;
    *(undefined8 *)(lVar22 + 0x4018) = 0;
    *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) & 0xfd;
    lVar22 = param_1[0xcf];
    local_64 = 0;
    if (lVar22 != 0) goto LAB_00165c30;
  }
  else {
LAB_00165c30:
    local_64 = 0;
    piVar2 = (int *)(lVar22 + 0x4000);
    if (*(int *)(lVar22 + 0x4020) != 2) {
      lVar20 = *param_1;
      puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
      uVar7 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
      *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xff7fffff;
      param3 = (int *)(lVar20 + 0x180);
      plVar3 = (long *)(lVar22 + 0x4018);
      do {
        if (*(int *)(lVar22 + 0x4020) == 0) {
          local_70 = 0;
          FUN_0014d430(lVar20,"Establish HTTP proxy tunnel to %s:%d\n",param_3,param_4);
          FUN_00143300(*(undefined8 *)(lVar20 + 0x1d0));
          *(undefined8 *)(lVar20 + 0x1d0) = 0;
          local_70 = FUN_0015e0c4();
          if (local_70 == 0) {
LAB_00166628:
            iVar10 = 0x1b;
          }
          else {
            lVar12 = FUN_00146120("%s:%d",param_3,param_4);
            if (lVar12 == 0) {
LAB_001666a0:
              iVar10 = 0x1b;
            }
            else {
              iVar10 = FUN_0015dae4(param_1,"CONNECT",lVar12,1);
              FUN_00143300(lVar12);
              if (iVar10 == 0) {
                puVar4 = &UNK_0406a404;
                if ((int)param_1[0x2f] != 1) {
                  puVar4 = &DAT_04089f5e;
                }
                if ((char *)param_1[0x1a] == param_3) {
                  bVar9 = (bool)(*(byte *)((long)param_1 + 0x41d) >> 1 & 1);
                }
                else {
                  pcVar13 = strchr(param_3,0x3a);
                  bVar9 = pcVar13 != (char *)0x0;
                }
                puVar23 = (undefined8 *)&DAT_0408f254;
                if (bVar9 == false) {
                  puVar23 = &DAT_0407ebb1;
                }
                puVar16 = (undefined8 *)&DAT_040bd946;
                if (bVar9 == false) {
                  puVar16 = &DAT_0407ebb1;
                }
                lVar12 = FUN_00146120("%s%s%s:%d",puVar23,param_3,puVar16,param_4);
                if (lVar12 == 0) goto LAB_001666a0;
                lVar14 = FUN_0015d5b4(param_1,&DAT_040844e2);
                if (lVar14 == 0) {
                  puVar23 = (undefined8 *)FUN_00146120("Host: %s\r\n",lVar12);
                  if (puVar23 == (undefined8 *)0x0) {
                    FUN_00143300(lVar12);
                    goto LAB_001666a0;
                  }
                }
                else {
                  puVar23 = (undefined8 *)0x0;
                }
                lVar14 = FUN_0015d5b4(param_1,"Proxy-Connection");
                pcVar13 = "Proxy-Connection: Keep-Alive\r\n";
                if (lVar14 != 0) {
                  pcVar13 = "";
                }
                lVar14 = FUN_0015d5b4(param_1,"User-Agent");
                puVar16 = &DAT_0407ebb1;
                if (lVar14 == 0) {
                  if (*(long *)(lVar20 + 0xdd0) == 0) {
                    puVar16 = &DAT_0407ebb1;
                  }
                  else {
                    puVar16 = (undefined8 *)param_1[0x90];
                  }
                }
                puVar5 = &DAT_0407ebb1;
                if (puVar23 != (undefined8 *)0x0) {
                  puVar5 = puVar23;
                }
                puVar6 = &DAT_0407ebb1;
                if ((undefined8 *)param_1[0x8f] != (undefined8 *)0x0) {
                  puVar6 = (undefined8 *)param_1[0x8f];
                }
                iVar10 = FUN_0015e3d4(&local_70,"CONNECT %s HTTP/%s\r\n%s%s%s%s",lVar12,puVar4,
                                      puVar5,puVar6,puVar16,pcVar13);
                if (puVar23 != (undefined8 *)0x0) {
                  FUN_00143300(puVar23);
                }
                FUN_00143300(lVar12);
                if (((iVar10 == 0) && (iVar10 = FUN_0015e76c(param_1,1,local_70), iVar10 == 0)) &&
                   (iVar10 = FUN_0015e3d4(&local_70,&DAT_040a395c), iVar10 == 0)) {
                  iVar10 = FUN_0015e108(&local_70,param_1,lVar20 + 0x1638,0,param_2);
                  local_70 = 0;
                  if (iVar10 == 0) {
                    FUN_0015e0d0(&local_70);
                    *(undefined4 *)(lVar22 + 0x4020) = 1;
                    *piVar2 = 0;
                    goto LAB_00165f10;
                  }
                }
                local_70 = 0;
                FUN_0014d5f8(lVar20,"Failed sending CONNECT to proxy");
              }
            }
            FUN_0015e0d0(&local_70);
          }
          goto LAB_001666ac;
        }
LAB_00165f10:
        iVar10 = FUN_00157b2c(lVar20,0,1);
        if (iVar10 < 1) {
          FUN_0014d5f8(lVar20,"Proxy CONNECT aborted due to timeout");
          iVar10 = 0x1c;
          goto LAB_001666ac;
        }
        uVar15 = FUN_00158f7c(param_1,param_2);
        if ((uVar15 & 1) == 0) goto LAB_00165c40;
LAB_00165f38:
        do {
          if (*(int *)(lVar22 + 0x4004) == 0) {
            bVar9 = false;
            goto LAB_001663e0;
          }
          local_70 = 0;
          if (piVar2 <= *(int **)(lVar22 + 0x4010)) {
            FUN_0014d5f8(lVar20,"CONNECT response too large!");
            goto LAB_00166524;
          }
          iVar10 = FUN_0014dcbc(param_1,uVar7,*(int **)(lVar22 + 0x4010),1,&local_70);
          if (iVar10 == 0x51) goto LAB_00165c40;
          iVar11 = FUN_001466d0(param_1);
          if (iVar11 != 0) goto LAB_0016650c;
          if (iVar10 != 0) {
LAB_001663c0:
            bVar9 = false;
LAB_001663dc:
            *(undefined4 *)(lVar22 + 0x4004) = 0;
            goto LAB_001663e0;
          }
          if (local_70 < 1) {
            if ((*(long *)(lVar20 + 0x6b8) != 0) && (*(long *)(lVar20 + 0x1298) != 0)) {
              *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x800000;
              FUN_0014d430(lVar20,"Proxy CONNECT connection closed\n");
              goto LAB_001663c0;
            }
            FUN_0014d5f8(lVar20,"Proxy CONNECT aborted");
            bVar9 = true;
            goto LAB_001663dc;
          }
          if (*(int *)(lVar22 + 0x4004) < 2) {
            iVar10 = *piVar2 + 1;
            *piVar2 = iVar10;
            if (**(char **)(lVar22 + 0x4010) == '\n') {
              uVar15 = *(ulong *)(lVar20 + 0xf60);
              if (((uint)uVar15 >> 0x1a & 1) != 0) {
                FUN_0014d550(lVar20,1,*(undefined8 *)(lVar22 + 0x4008));
                uVar15 = *(ulong *)(lVar20 + 0xf60);
                iVar10 = *piVar2;
              }
              if ((uVar15 >> 0x32 & 1) == 0) {
                uVar17 = 2;
                if ((uVar15 & 0x200000) != 0) {
                  uVar17 = 3;
                }
                iVar10 = FUN_0014d948(param_1,uVar17,*(undefined8 *)(lVar22 + 0x4008),(long)iVar10);
                if (iVar10 != 0) goto LAB_001666ac;
                iVar10 = *piVar2;
              }
              *(long *)(lVar20 + 0x1630) = *(long *)(lVar20 + 0x1630) + (long)iVar10;
              *(long *)(lVar20 + 0x110) = *(long *)(lVar20 + 0x110) + (long)*piVar2;
              cVar8 = **(char **)(lVar22 + 0x4008);
              if ((cVar8 == '\r') || (cVar8 == '\n')) {
                *(long *)(lVar22 + 0x4010) = lVar22;
                if ((*param3 == 0x197) && ((*(ushort *)(lVar20 + 0x15c4) >> 5 & 1) == 0)) {
                  *(undefined4 *)(lVar22 + 0x4004) = 2;
                  if (*plVar3 == 0) {
                    if ((*(byte *)(lVar22 + 0x4024) & 1) == 0) goto LAB_001661dc;
                    FUN_0014d430(lVar20,"Ignore chunked response-body\n");
                    *(ushort *)(lVar20 + 0x660) = *(ushort *)(lVar20 + 0x660) | 8;
                    pcVar19 = *(char **)(lVar22 + 0x4008) + 1;
                    pcVar13 = *(char **)(lVar22 + 0x4008);
                    if (*pcVar19 == '\n') {
                      *(char **)(lVar22 + 0x4008) = pcVar19;
                      pcVar13 = pcVar19;
                    }
                    iVar10 = FUN_001618e8(param_1,pcVar13 + 1,1,&local_70);
                    if (iVar10 == -1) {
                      FUN_0014d430(lVar20,"chunk reading DONE\n");
                      *(undefined4 *)(lVar22 + 0x4004) = 0;
                      *(undefined4 *)(lVar22 + 0x4020) = 2;
                    }
                  }
                  else {
                    FUN_0014d430(lVar20,"Ignore %ld bytes of response-body\n");
                  }
                }
                else {
LAB_001661dc:
                  *(undefined4 *)(lVar22 + 0x4004) = 0;
                }
                if (*plVar3 == 0) goto LAB_001661ec;
              }
              else {
                (*(char **)(lVar22 + 0x4008))[*piVar2] = '\0';
                iVar10 = thunk_FUN_00144b34("WWW-Authenticate:",*(undefined8 *)(lVar22 + 0x4008),
                                            0x11);
                if ((iVar10 == 0) || (*param3 != 0x191)) {
                  iVar10 = thunk_FUN_00144b34("Proxy-authenticate:",*(undefined8 *)(lVar22 + 0x4008)
                                              ,0x13);
                  if ((iVar10 != 0) && (*param3 == 0x197)) {
                    uVar21 = 1;
                    goto LAB_00166150;
                  }
                  iVar10 = thunk_FUN_00144b34("Content-Length:",*(undefined8 *)(lVar22 + 0x4008),0xf
                                             );
                  if (iVar10 == 0) {
                    uVar15 = FUN_0015e58c(*(undefined8 *)(lVar22 + 0x4008),"Connection:","close");
                    if ((uVar15 & 1) == 0) {
                      iVar10 = thunk_FUN_00144b34("Transfer-Encoding:",
                                                  *(undefined8 *)(lVar22 + 0x4008),0x12);
                      if (iVar10 == 0) {
                        uVar15 = FUN_0015e58c(*(undefined8 *)(lVar22 + 0x4008),"Proxy-Connection:",
                                              "close");
                        if ((uVar15 & 1) != 0) goto LAB_00166214;
                        iVar10 = sscanf(*(char **)(lVar22 + 0x4008),"HTTP/1.%d %d",&local_64,param3)
                        ;
                        if (iVar10 == 2) {
                          *(undefined4 *)(lVar20 + 0x161c) = *(undefined4 *)(lVar20 + 0x180);
                        }
                      }
                      else {
                        if (*param3 - 200U < 100) {
                          pcVar13 = "Ignoring Transfer-Encoding in CONNECT %03d response\n";
                          goto LAB_001661cc;
                        }
                        uVar15 = FUN_0015e58c(*(undefined8 *)(lVar22 + 0x4008),"Transfer-Encoding:",
                                              "chunked");
                        if ((uVar15 & 1) != 0) {
                          FUN_0014d430(lVar20,"CONNECT responded chunked\n");
                          *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 1;
                          FUN_001618dc(param_1);
                        }
                      }
                    }
                    else {
LAB_00166214:
                      *(byte *)(lVar22 + 0x4024) = *(byte *)(lVar22 + 0x4024) | 2;
                    }
                  }
                  else if (*param3 - 200U < 100) {
                    pcVar13 = "Ignoring Content-Length in CONNECT %03d response\n";
LAB_001661cc:
                    FUN_0014d430(lVar20,pcVar13);
                  }
                  else {
                    FUN_0014e1e4(*(long *)(lVar22 + 0x4008) + 0xf,0,10,plVar3);
                  }
                }
                else {
                  uVar21 = 0;
LAB_00166150:
                  lVar12 = FUN_0015d644(*(undefined8 *)(lVar22 + 0x4008));
                  if (lVar12 == 0) goto LAB_00166628;
                  iVar10 = FUN_0015deec(param_1,uVar21,lVar12);
                  FUN_00143300(lVar12);
                  if (iVar10 != 0) goto LAB_001666ac;
                }
                *piVar2 = 0;
                *(long *)(lVar22 + 0x4010) = lVar22;
                *(long *)(lVar22 + 0x4008) = lVar22;
              }
            }
            else {
              *(char **)(lVar22 + 0x4010) = *(char **)(lVar22 + 0x4010) + 1;
            }
            goto LAB_00165f38;
          }
          lVar12 = *(long *)(lVar22 + 0x4018);
          *(long *)(lVar22 + 0x4010) = lVar22;
          if (lVar12 == 0) {
            local_78 = 0;
            iVar10 = FUN_001618e8(param_1,lVar22,1,&local_78);
            if (iVar10 == -1) {
              FUN_0014d430(lVar20,"chunk reading DONE\n");
              *(undefined4 *)(lVar22 + 0x4004) = 0;
LAB_001661ec:
              *(undefined4 *)(lVar22 + 0x4020) = 2;
            }
            goto LAB_00165f38;
          }
          *plVar3 = lVar12 + -1;
        } while (lVar12 + -1 != 0 && 0 < lVar12);
        bVar9 = false;
        *(undefined4 *)(lVar22 + 0x4004) = 0;
        *(undefined4 *)(lVar22 + 0x4020) = 2;
LAB_001663e0:
        iVar10 = FUN_001466d0(param_1);
        if (iVar10 != 0) {
LAB_0016650c:
          iVar10 = 0x2a;
          goto LAB_001666ac;
        }
        if (bVar9) goto LAB_00166524;
        if (*(int *)(lVar20 + 0x161c) - 200U < 100) {
          uVar18 = (uint)*(byte *)(lVar22 + 0x4024);
        }
        else {
          iVar10 = FUN_0015d730(param_1);
          if (iVar10 != 0) goto LAB_001666ac;
          uVar18 = (uint)*(byte *)(lVar22 + 0x4024);
          if ((*(byte *)((long)param_1 + 0x41c) & 1) != 0) {
            uVar18 = uVar18 | 2;
            *(char *)(lVar22 + 0x4024) = (char)uVar18;
          }
        }
        lVar12 = *(long *)(lVar20 + 0x1d0);
        if ((uVar18 >> 1 & 1) != 0) {
          if (lVar12 != 0) {
            FUN_00158430(param_1,*puVar1);
            *puVar1 = 0xffffffff;
          }
          break;
        }
        if (lVar12 == 0) break;
        if (*(int *)(lVar22 + 0x4020) == 2) {
          lVar12 = param_1[0xcf];
          *(long *)(lVar12 + 0x4008) = lVar12;
          *(long *)(lVar12 + 0x4010) = lVar12;
          *(undefined8 *)(lVar12 + 0x4018) = 0;
          *(undefined4 *)(lVar12 + 0x4020) = 0;
          *(undefined4 *)(lVar12 + 0x4004) = 1;
          *(byte *)(lVar12 + 0x4024) = *(byte *)(lVar12 + 0x4024) & 0xfd;
          lVar12 = *(long *)(lVar20 + 0x1d0);
        }
      } while (lVar12 != 0);
      if (*(int *)(lVar20 + 0x161c) - 200U < 100) {
        *(undefined4 *)(lVar22 + 0x4020) = 2;
        FUN_00143300(param_1[0x8f]);
        param_1[0x8f] = 0;
        *(byte *)(lVar20 + 0x12a0) = *(byte *)(lVar20 + 0x12a0) | 1;
        FUN_0014d430(lVar20,"Proxy replied %d to CONNECT request\n",*(undefined4 *)(lVar20 + 0x161c)
                    );
        *(ushort *)(lVar20 + 0x660) = *(ushort *)(lVar20 + 0x660) & 0xfff7;
        *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xfffeffff;
      }
      else {
        if (((*(byte *)(lVar22 + 0x4024) >> 1 & 1) == 0) || (*(long *)(lVar20 + 0x1d0) == 0)) {
          FUN_00143300();
          *(undefined8 *)(lVar20 + 0x1d0) = 0;
          FUN_00158f30(param_1,2);
          FUN_00158430(param_1,*puVar1);
          *puVar1 = 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x800000;
          FUN_0014d430(lVar20,"Connect me again please\n");
          *(undefined4 *)(param_1[0xcf] + 0x4020) = 2;
          FUN_0014d430(*param_1,"CONNECT phase completed!\n");
        }
        *(undefined4 *)(lVar22 + 0x4020) = 0;
        if (-1 < *(char *)((long)param_1 + 0x41e)) {
          FUN_0014d5f8(lVar20,"Received HTTP code %d from proxy after CONNECT",
                       *(undefined4 *)(lVar20 + 0x180));
LAB_00166524:
          iVar10 = 0x38;
          goto LAB_001666ac;
        }
      }
    }
  }
LAB_00165c40:
  if (param_1[0xcf] == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    if (*(int *)(param_1[0xcf] + 0x4020) != 2) {
      return 0;
    }
  }
LAB_001666ac:
  *(undefined4 *)(param_1[0xcf] + 0x4020) = 2;
  FUN_0014d430(*param_1,"CONNECT phase completed!\n");
  return iVar10;
}

