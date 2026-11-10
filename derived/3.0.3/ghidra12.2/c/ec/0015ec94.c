
int FUN_0015ec94(long param_1,long param_2,size_t *param_3,char *param_4)

{
  long *plVar1;
  int *param5;
  int *param3;
  int *param3_00;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  ushort uVar14;
  size_t sVar15;
  char *pcVar16;
  undefined4 uVar17;
  long lVar18;
  ulong local_70;
  uchar local_68 [4];
  int local_64;
  
  sVar15 = *param_3;
  pcVar16 = *(char **)(param_1 + 0x158);
  plVar1 = (long *)(param_1 + 0xf0);
  param5 = (int *)(param_1 + 0x180);
  param3 = (int *)(param_2 + 0x230);
  param3_00 = (int *)(param_2 + 0x234);
  pcVar11 = pcVar16;
  do {
    *(char **)(param_1 + 0x160) = pcVar11;
    pvVar8 = memchr(pcVar11,10,*param_3);
    *(void **)(param_1 + 0x168) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      iVar6 = FUN_0015fad0(param_1,plVar1,*param_3);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (*(int *)(param_1 + 0x144) != 0) {
        return 0;
      }
      iVar6 = FUN_0015fbc0(param_1,*(undefined8 *)(param_1 + 0x1140),
                           *(undefined8 *)(param_1 + 0x150));
      if (iVar6 != 2) {
        return 0;
      }
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
      *(undefined4 *)(param_1 + 0x140) = 2;
      FUN_00158f30(param_2,2);
      if ((*(byte *)(param_1 + 0xf67) >> 2 & 1) != 0) {
        return 0;
      }
LAB_0015f958:
      pcVar11 = "Received HTTP/0.9 when not allowed\n";
      goto LAB_0015fa90;
    }
    *param_3 = (size_t)(pcVar11 + ~(ulong)pvVar8 + *param_3);
    lVar18 = *(long *)(param_1 + 0x168) + 1;
    *(long *)(param_1 + 0x158) = lVar18;
    iVar6 = FUN_0015fad0(param_1,plVar1,lVar18 - *(long *)(param_1 + 0x160));
    if (iVar6 != 0) {
      return iVar6;
    }
    pcVar11 = *(char **)(param_1 + 0x1140);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x148);
    *(char **)(param_1 + 0x170) = pcVar11;
    if (*(int *)(param_1 + 0x144) == 0) {
      iVar6 = FUN_0015fbc0(param_1,pcVar11,*(undefined8 *)(param_1 + 0x150));
      if (iVar6 == 2) {
        FUN_00158f30(param_2,2);
        if ((*(byte *)(param_1 + 0xf67) >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          if (*param_3 == 0) {
            *(undefined4 *)(param_1 + 0x140) = 2;
            *param_3 = sVar15;
            *(char **)(param_1 + 0x158) = pcVar16;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x140) = 1;
          return 0;
        }
        goto LAB_0015f958;
      }
      pcVar11 = *(char **)(param_1 + 0x170);
    }
    pcVar12 = pcVar11;
    if (*pcVar11 == '\n') {
LAB_0015eda4:
      *(char **)(param_1 + 0x170) = pcVar12 + 1;
LAB_0015edac:
      iVar6 = *param5;
      if (iVar6 - 100U < 100) {
        if (iVar6 == 0x65) {
          if (*(int *)(param_1 + 0x19c) != 1) {
            uVar14 = *(ushort *)(param_1 + 0x660) & 0xfffe;
            goto LAB_0015ef5c;
          }
          FUN_0014d430(param_1,"Received 101\n");
          *(undefined4 *)(param_1 + 0x19c) = 2;
          *(undefined4 *)(param_1 + 0x144) = 0;
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          iVar6 = FUN_00159c00(param_2,*(undefined8 *)(param_1 + 0x158),*param_3);
          if (iVar6 != 0) {
            return iVar6;
          }
          *param_3 = 0;
        }
        else if (iVar6 == 100) {
          *(undefined4 *)(param_1 + 0x144) = 0;
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          if (*(int *)(param_1 + 0x198) != 0) {
            *(undefined4 *)(param_1 + 0x198) = 0;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            thunk_FUN_00149f68(param_1,0);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x144) = 0;
          uVar14 = *(ushort *)(param_1 + 0x660) | 1;
LAB_0015ef5c:
          *(ushort *)(param_1 + 0x660) = uVar14;
        }
      }
      else {
        uVar14 = *(ushort *)(param_1 + 0x660);
        *(ushort *)(param_1 + 0x660) = uVar14 & 0xfffe;
        if (((((*(long *)(param_1 + 0xf0) == -1) && ((uVar14 >> 5 & 1) == 0)) &&
             ((*(byte *)(param_2 + 0x41c) & 1) == 0)) &&
            ((*param3 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x440) + 0x82) >> 2 & 1) == 0)))) &&
           (*(int *)(param_1 + 0xa38) != 6)) {
          FUN_0014d430(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          FUN_00158f30(param_2,2);
        }
      }
      iVar6 = FUN_0015da90(param_2);
      if (iVar6 != 0) {
        FUN_0014d5f8(param_1,"The requested URL returned error: %d",*(undefined4 *)(param_1 + 0x180)
                    );
        return 0x16;
      }
      uVar17 = 2;
      if ((*(ulong *)(param_1 + 0xf60) & 0x200000) != 0) {
        uVar17 = 3;
      }
      lVar18 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x1140);
      iVar6 = FUN_0014d948(param_2,uVar17,*(long *)(param_1 + 0x1140),lVar18);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(long *)(param_1 + 0x1630) = *(long *)(param_1 + 0x1630) + lVar18;
      lVar2 = *(long *)(param_1 + 0x110) + lVar18;
      lVar3 = lVar2;
      if (99 < *(int *)(param_1 + 0x180) - 100U) {
        lVar3 = 0;
      }
      *(long *)(param_1 + 0x110) = lVar2;
      *(long *)(param_1 + 0x118) = lVar3;
      iVar6 = FUN_0015d730(param_2);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (299 < *param5) {
        if ((((*(uint *)(param_2 + 0x41c) & 0x18001) == 0) && (*(int *)(param_1 + 0xa38) - 2U < 4))
           && (thunk_FUN_00149f68(param_1,0), (*(ushort *)(param_1 + 0x660) >> 2 & 1) == 0)) {
          if ((*(byte *)(param_1 + 0xf62) >> 1 & 1) == 0) {
            FUN_0014d430(param_1,"HTTP error before end of send, stop sending\n");
            FUN_00158f30(param_2,2);
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 4;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffd;
            if ((*(byte *)(param_1 + 0x15c5) & 1) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 3;
            }
          }
          else {
            FUN_0014d430(param_1,"HTTP error before end of send, keep sending\n");
            if (*(int *)(param_1 + 0x198) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 0;
              *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            }
          }
        }
        if ((*(byte *)(param_2 + 0x41e) & 1) != 0) {
          FUN_0014d430(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
        }
      }
      if ((*(ushort *)(param_1 + 0x660) & 1) == 0) {
        if ((*(byte *)(param_1 + 0xf63) & 1) == 0) {
          if ((*(ushort *)(param_1 + 0x660) >> 5 & 1) == 0) goto LAB_0015f970;
          *plVar1 = -1;
          *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
LAB_0015f9e4:
          if (*param_4 == '\0') goto LAB_0015fa18;
        }
        else {
          *param_4 = '\x01';
LAB_0015f970:
          if (*plVar1 == -1) {
            if (*(long *)(param_1 + 0xf8) == 0) goto LAB_0015f9c8;
            goto LAB_0015f9e4;
          }
          FUN_00146c4c(param_1);
          *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
          if (*(long *)(param_1 + 0xf0) != 0) goto LAB_0015f9e4;
LAB_0015f9c8:
          if (((*(byte *)(*(long *)(param_2 + 0x440) + 0x80) & 3) != 0) && (*param3 == 0x14))
          goto LAB_0015f9e4;
          *param_4 = '\x01';
        }
        *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffe;
LAB_0015fa18:
        if ((*(byte *)(param_1 + 0xf63) >> 2 & 1) == 0) {
          return 0;
        }
        FUN_0014d550(param_1,1,*(undefined8 *)(param_1 + 0x160),lVar18);
        return 0;
      }
    }
    else {
      if (*pcVar11 == '\r') {
        pcVar12 = pcVar11 + 1;
        *(char **)(param_1 + 0x170) = pcVar12;
        if (pcVar11[1] == '\n') goto LAB_0015eda4;
        goto LAB_0015edac;
      }
      iVar6 = *(int *)(param_1 + 0x144);
      *(int *)(param_1 + 0x144) = iVar6 + 1;
      if (iVar6 == 0) {
        local_70 = local_70 & 0xffffffff00000000;
        local_64 = 0;
        uVar4 = *(uint *)(*(long *)(param_2 + 0x440) + 0x80);
        if ((uVar4 & 3) == 0) {
          if ((uVar4 >> 0x12 & 1) == 0) goto LAB_0015f9f0;
          local_68[0] = '\0';
          iVar7 = sscanf(pcVar11," RTSP/%1d.%1d%c%3d",&local_64,param3_00,local_68,param5);
          iVar6 = 0;
          if ((iVar7 == 4) && (local_68[0] == ' ')) {
            *param3_00 = *param3_00 + local_64 * 10;
            *param3 = 0xb;
            goto LAB_0015f110;
          }
        }
        else {
          local_68[0] = '\0';
          iVar6 = sscanf(pcVar11," HTTP/%1d.%1d%c%3d",(int *)&local_70,param3,local_68,param5);
          if ((iVar6 == 1) && ((int)local_70 == 2)) {
            iVar6 = sscanf(*(char **)(param_1 + 0x170)," HTTP/2 %d",param5);
            if (iVar6 != 1) goto LAB_0015fa88;
            *param3 = 0;
            local_68[0] = ' ';
          }
          else if ((iVar6 != 4) || (local_68[0] != ' ')) {
            if (iVar6 == 0) {
              iVar6 = sscanf(*(char **)(param_1 + 0x170)," HTTP %3d",param5);
              *param3 = 10;
              if (iVar6 == 0) {
                iVar6 = FUN_0015fbc0(param_1,*(undefined8 *)(param_1 + 0x170),
                                     *(undefined8 *)(param_1 + 0x150));
                if (iVar6 == 1) {
                  *param5 = 200;
                  *param3 = 10;
                  iVar6 = 1;
                }
                else {
                  iVar6 = 0;
                }
              }
              goto LAB_0015f114;
            }
LAB_0015fa88:
            pcVar11 = "Unsupported HTTP version in response\n";
LAB_0015fa90:
            FUN_0014d5f8(param_1,pcVar11);
            return 1;
          }
          iVar6 = 4;
          iVar7 = *param3 + (int)local_70 * 10;
          *param3 = iVar7;
          if ((*(int *)(param_1 + 0x19c) == 2) && (iVar7 != 0x14)) {
            FUN_0014d430(param_1,"Lying server, not serving HTTP/2\n");
LAB_0015f110:
            iVar6 = 4;
          }
        }
LAB_0015f114:
        if (iVar6 == 0) {
LAB_0015f9f0:
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          return 0;
        }
        iVar6 = *(int *)(param_1 + 0x180);
        *(int *)(param_1 + 0x1618) = iVar6;
        *(int *)(param_1 + 0x1620) = *param3;
        if ((*(int *)(param_1 + 0x1500) == 0) || (*param3 < *(int *)(param_1 + 0x1500))) {
          *(int *)(param_1 + 0x1500) = *param3;
        }
        if (((*(long *)(param_1 + 0x1518) == 0) || (*(int *)(param_1 + 0xa38) != 1)) ||
           (iVar6 != 0x1a0)) {
          if (((*(byte *)(param_1 + 0xf62) & 1) != 0) && (399 < iVar6)) {
            if (iVar6 == 0x197) {
              if ((*(byte *)(param_2 + 0x41d) & 1) == 0) goto LAB_0015fa7c;
            }
            else if ((iVar6 != 0x191) || (-1 < *(char *)(param_2 + 0x41c))) {
LAB_0015fa7c:
              FUN_0015fc6c(param_1);
              return 0x16;
            }
          }
        }
        else {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 8;
        }
        iVar7 = *param3;
        if (iVar7 == 0x14) {
LAB_0015f1e8:
          **(undefined4 **)(param_2 + 0x680) = 2;
        }
        else if (iVar7 == 10) {
          FUN_0014d430(param_1,"HTTP 1.0, assume close after body\n");
          FUN_00158f30(param_2,1);
        }
        else {
          if ((*(int *)(param_1 + 0x19c) == 1) && (iVar6 == 0x65)) goto LAB_0015f1e8;
          if ((((10 < iVar7) && ((*(byte *)(param_2 + 0x41c) & 1) == 0)) &&
              (*(long *)(param_2 + 0x680) != 0)) &&
             (uVar9 = FUN_00166920(param_1,param_2), (uVar9 & 1) == 0)) {
            **(undefined4 **)(param_2 + 0x680) = 1;
          }
        }
        if (*param5 != 0xcc) {
          if (*param5 != 0x130) goto LAB_0015f22c;
          if (*(int *)(param_1 + 0xa28) != 0) {
            *(byte *)(param_1 + 0x16f8) = *(byte *)(param_1 + 0x16f8) | 1;
          }
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 0x10;
      }
LAB_0015f22c:
      if ((*(ushort *)(param_1 + 0x660) >> 4 & 1) == 0) {
        lVar18 = *(long *)(param_1 + 0x170);
        if ((*(byte *)(param_1 + 0xf64) >> 4 & 1) != 0) goto LAB_0015f2a4;
        iVar6 = thunk_FUN_00144b34("Content-Length:",lVar18,0xf);
        lVar18 = *(long *)(param_1 + 0x170);
        if (iVar6 == 0) goto LAB_0015f2a4;
        local_70 = 0;
        iVar6 = FUN_0014e1e4(lVar18 + 0xf,0,10,&local_70);
        if (iVar6 != 1) {
          if (iVar6 != 0) {
            iVar6 = 8;
            pcVar11 = "Invalid Content-Length: value";
            goto LAB_0015fabc;
          }
          if ((*(long *)(param_1 + 0xc58) != 0) && (*(long *)(param_1 + 0xc58) < (long)local_70))
          goto LAB_0015faa0;
          *(ulong *)(param_1 + 0xf0) = local_70;
          *(ulong *)(param_1 + 0xf8) = local_70;
          FUN_00146c4c(param_1);
          goto LAB_0015f588;
        }
        if (*(long *)(param_1 + 0xc58) != 0) {
LAB_0015faa0:
          iVar6 = 0x3f;
          pcVar11 = "Maximum file size exceeded";
LAB_0015fabc:
          FUN_0014d5f8(param_1,pcVar11);
          return iVar6;
        }
        FUN_00158f30(param_2,2);
        pcVar11 = "Overflow Content-Length: value!\n";
LAB_0015f524:
        FUN_0014d430(param_1,pcVar11);
        goto LAB_0015f588;
      }
      lVar18 = *(long *)(param_1 + 0x170);
LAB_0015f2a4:
      iVar6 = thunk_FUN_00144b34("Content-Type:",lVar18,0xd);
      if (iVar6 == 0) {
        iVar7 = thunk_FUN_00144b34("Server:",*(undefined8 *)(param_1 + 0x170),7);
        iVar6 = *param3;
        if (iVar7 == 0) {
          if (iVar6 == 10) {
            if ((*(byte *)(param_2 + 0x41c) >> 5 & 1) != 0) {
              uVar9 = FUN_0015e58c(*(undefined8 *)(param_1 + 0x170),"Proxy-Connection:","keep-alive"
                                  );
              if ((uVar9 & 1) != 0) {
                FUN_00158f30(param_2,0);
                pcVar11 = "HTTP/1.0 proxy connection set to keep alive!\n";
                goto LAB_0015f524;
              }
              iVar6 = *param3;
              goto LAB_0015f494;
            }
LAB_0015f4f0:
            uVar9 = FUN_0015e58c(*(undefined8 *)(param_1 + 0x170),"Connection:","keep-alive");
            if ((uVar9 & 1) != 0) {
              FUN_00158f30(param_2,0);
              pcVar11 = "HTTP/1.0 connection set to keep alive!\n";
              goto LAB_0015f524;
            }
          }
          else {
LAB_0015f494:
            if (iVar6 == 0xb) {
              if ((*(byte *)(param_2 + 0x41c) >> 5 & 1) != 0) {
                uVar9 = FUN_0015e58c(*(undefined8 *)(param_1 + 0x170),"Proxy-Connection:","close");
                if ((uVar9 & 1) != 0) {
                  FUN_00158f30(param_2,1);
                  pcVar11 = "HTTP/1.1 proxy connection set close!\n";
                  goto LAB_0015f524;
                }
                iVar6 = *param3;
                goto LAB_0015f4e8;
              }
            }
            else {
LAB_0015f4e8:
              if (iVar6 == 10) goto LAB_0015f4f0;
            }
          }
          uVar9 = FUN_0015e58c(*(undefined8 *)(param_1 + 0x170),"Connection:","close");
          if ((uVar9 & 1) == 0) {
            iVar6 = thunk_FUN_00144b34("Transfer-Encoding:",*(undefined8 *)(param_1 + 0x170),0x12);
            if (iVar6 == 0) {
              iVar6 = thunk_FUN_00144b34("Content-Encoding:",*(long *)(param_1 + 0x170),0x11);
              if ((iVar6 != 0) && (*(long *)(param_1 + 0xce8) != 0)) {
                uVar13 = 0;
                lVar18 = *(long *)(param_1 + 0x170) + 0x11;
                goto LAB_0015f580;
              }
              iVar6 = thunk_FUN_00144b34("Content-Range:",*(undefined8 *)(param_1 + 0x170),0xe);
              if (iVar6 != 0) {
                pcVar11 = (char *)(*(long *)(param_1 + 0x170) + 0xe);
                cVar5 = *pcVar11;
                while (cVar5 != '\0') {
                  iVar6 = FUN_0014654c();
                  if ((iVar6 != 0) || (*pcVar11 == '*')) break;
                  pcVar11 = pcVar11 + 1;
                  cVar5 = *pcVar11;
                }
                iVar6 = FUN_0014654c();
                if (iVar6 == 0) {
                  *(undefined8 *)(param_1 + 0x1518) = 0;
                }
                else {
                  iVar6 = FUN_0014e1e4(pcVar11,0,10,param_1 + 0x178);
                  if ((iVar6 == 0) && (*(long *)(param_1 + 0x1518) == *(long *)(param_1 + 0x178))) {
                    *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 2;
                  }
                }
                goto LAB_0015f588;
              }
              if ((*(long *)(param_1 + 0xf90) != 0) &&
                 (iVar6 = thunk_FUN_00144b34("Set-Cookie:",*(undefined8 *)(param_1 + 0x170),0xb),
                 iVar6 != 0)) {
                FUN_0014b7c4(param_1,2,2);
                lVar18 = *(long *)(param_2 + 0x4b0);
                if (lVar18 == 0) {
                  lVar18 = *(long *)(param_2 + 0xd0);
                }
                FUN_0014bad4(param_1,*(undefined8 *)(param_1 + 0xf90),1,0,
                             *(long *)(param_1 + 0x170) + 0xb,lVar18,
                             *(undefined8 *)(param_1 + 0x15a0),
                             *(uint *)(*(long *)(param_2 + 0x440) + 0x80) >> 1 & 1);
                FUN_0014b80c(param_1,2);
                goto LAB_0015f588;
              }
              iVar6 = thunk_FUN_00144b34("Last-Modified:",*(undefined8 *)(param_1 + 0x170),0xe);
              if ((iVar6 != 0) &&
                 ((*(int *)(param_1 + 0xa28) != 0 || ((*(byte *)(param_1 + 0xf61) >> 1 & 1) != 0))))
              {
                local_70 = 0;
                local_70 = FUN_00146418(0);
                uVar13 = FUN_0014e2b4(*(long *)(param_1 + 0x170) + 0xe,&local_70);
                *(undefined8 *)(param_1 + 0x1a8) = uVar13;
                if ((*(byte *)(param_1 + 0xf61) >> 1 & 1) != 0) {
                  *(undefined8 *)(param_1 + 0x1628) = uVar13;
                }
                goto LAB_0015f588;
              }
              iVar6 = thunk_FUN_00144b34("WWW-Authenticate:",*(undefined8 *)(param_1 + 0x170),0x11);
              if ((iVar6 != 0) && (*param5 == 0x191)) {
                uVar13 = 0;
LAB_0015f7dc:
                pcVar11 = (char *)FUN_0015d644(*(undefined8 *)(param_1 + 0x170));
                if (pcVar11 == (char *)0x0) {
                  return 0x1b;
                }
                FUN_0015deec(param_2,uVar13,pcVar11);
                goto LAB_0015f344;
              }
              iVar6 = thunk_FUN_00144b34("Proxy-authenticate:",*(undefined8 *)(param_1 + 0x170),0x13
                                        );
              if ((iVar6 != 0) && (*(int *)(param_1 + 0x180) == 0x197)) {
                uVar13 = 1;
                goto LAB_0015f7dc;
              }
              if (((99 < *(int *)(param_1 + 0x180) - 300U) ||
                  (iVar6 = thunk_FUN_00144b34("Location:",*(undefined8 *)(param_1 + 0x170),9),
                  iVar6 == 0)) || (*(long *)(param_1 + 0x1c8) != 0)) {
                if ((*(byte *)(*(long *)(param_2 + 0x440) + 0x82) >> 2 & 1) != 0) {
                  return 4;
                }
                goto LAB_0015f588;
              }
              pcVar11 = (char *)FUN_0015d644(*(undefined8 *)(param_1 + 0x170));
              if (pcVar11 == (char *)0x0) {
                return 0x1b;
              }
              if (*pcVar11 == '\0') goto LAB_0015f344;
              *(char **)(param_1 + 0x1c8) = pcVar11;
              if ((*(byte *)(param_1 + 0xf62) >> 2 & 1) == 0) goto LAB_0015f588;
              if (*(char *)(param_1 + 0x6c1) == '\0') {
                uVar13 = FUN_00166cb8();
                uVar10 = FUN_00143320();
                *(undefined8 *)(param_1 + 0x1d0) = uVar10;
                FUN_00143300(uVar13);
                lVar18 = *(long *)(param_1 + 0x1d0);
              }
              else {
                lVar18 = FUN_00143320();
                *(long *)(param_1 + 0x1d0) = lVar18;
              }
              if (lVar18 == 0) {
                return 0x1b;
              }
              iVar6 = FUN_0015d9ac(param_2);
            }
            else {
              lVar18 = *(long *)(param_1 + 0x170) + 0x12;
              uVar13 = 1;
LAB_0015f580:
              iVar6 = FUN_00161e30(param_2,lVar18,uVar13);
            }
            if (iVar6 != 0) {
              return iVar6;
            }
          }
          else {
            FUN_00158f30(param_2,2);
          }
        }
        else if (iVar6 < 0x14) {
          pcVar11 = (char *)FUN_0015d644(*(undefined8 *)(param_1 + 0x170));
          if (((*(int **)(param_2 + 0x680) != (int *)0x0) && (**(int **)(param_2 + 0x680) == 1)) &&
             (uVar9 = FUN_00166aa4(param_1,pcVar11), (uVar9 & 1) != 0)) {
            **(undefined4 **)(param_2 + 0x680) = 0xffffffff;
          }
          goto LAB_0015f344;
        }
      }
      else {
        pcVar11 = (char *)FUN_0015d644(*(undefined8 *)(param_1 + 0x170));
        if (pcVar11 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar11 != '\0') {
          FUN_00143300(*(undefined8 *)(param_1 + 0x1658));
          *(char **)(param_1 + 0x1658) = pcVar11;
          goto LAB_0015f588;
        }
LAB_0015f344:
        FUN_00143300(pcVar11);
      }
LAB_0015f588:
      uVar17 = 2;
      if ((*(ulong *)(param_1 + 0xf60) & 0x200000) != 0) {
        uVar17 = 3;
      }
      if (((uint)*(ulong *)(param_1 + 0xf60) >> 0x1a & 1) != 0) {
        FUN_0014d550(param_1,1,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x150));
      }
      iVar6 = FUN_0014d948(param_2,uVar17,*(undefined8 *)(param_1 + 0x170),
                           *(undefined8 *)(param_1 + 0x150));
      if (iVar6 != 0) {
        return iVar6;
      }
      *(long *)(param_1 + 0x1630) = *(long *)(param_1 + 0x1630) + *(long *)(param_1 + 0x150);
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x150);
    }
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1140);
    *(undefined8 *)(param_1 + 0x150) = 0;
    pcVar11 = *(char **)(param_1 + 0x158);
    if (*pcVar11 == '\0') {
      return 0;
    }
  } while( true );
}

