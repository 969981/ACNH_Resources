
undefined8 FUN_00160400(long *param_1,long param_2,char *param_3,undefined1 *param_4)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  char local_74 [4];
  ulong local_70;
  ulong local_68;
  
  uVar6 = *(uint *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if ((*(uint *)(param_2 + 0x1c0) & 0x15) == 1) {
    uVar9 = (undefined4)param_1[0x8e];
  }
  else {
    uVar9 = 0xffffffff;
  }
  if ((*(uint *)(param_2 + 0x1c0) & 0x2a) == 2) {
    uVar13 = *(undefined4 *)((long)param_1 + 0x474);
  }
  else {
    uVar13 = 0xffffffff;
  }
  uVar6 = uVar6 | *(long *)(*param_1 + 0x1540) != 0;
  if (uVar6 == 0) {
    uVar6 = FUN_00159114(uVar9,0xffffffff,uVar13,0);
  }
  if (uVar6 == 4) {
    FUN_0014d5f8(param_2,"select/poll returned error");
    return 0x37;
  }
  uVar15 = *(uint *)(param_2 + 0x1c0);
  plVar1 = (long *)(param_2 + 0xf0);
  if (((uVar15 & 1) == 0) ||
     (((uVar6 & 1) == 0 && ((*(byte *)((long)param_1 + 0x41e) >> 6 & 1) == 0)))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    uVar17 = 0;
    local_68 = 0;
    iVar8 = 100;
    local_70 = local_70 & 0xffffffffffffff00;
    *param_3 = '\0';
    *param_4 = 0;
    do {
      lVar14 = *(long *)(param_2 + 0xc30);
      lVar11 = lVar14;
      if (((((*(byte *)(param_1[0x88] + 0x80) & 3) == 0) || ((int)param_1[0x46] != 0x14)) &&
          (*plVar1 != -1)) &&
         (((*(ushort *)(param_2 + 0x660) & 1) == 0 &&
          (lVar11 = *plVar1 - *(long *)(param_2 + 0x100), lVar14 <= lVar11)))) {
        lVar11 = lVar14;
      }
      if (lVar11 != 0) {
        uVar10 = FUN_0014dcbc(param_1,(int)param_1[0x8e],*(undefined8 *)(param_2 + 0x1b8),lVar11,
                              &local_68);
        if ((int)uVar10 == 0) goto LAB_00160654;
        if ((int)uVar10 != 0x51) {
          return uVar10;
        }
LAB_00160bf4:
        if (0 < iVar8) goto LAB_00160c08;
        break;
      }
      local_68 = 0;
LAB_00160654:
      if (((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) &&
         (FUN_00146c9c(param_2,7), *(int *)(param_2 + 0x198) != 0)) {
        auVar20 = FUN_00147178();
        *(undefined1 (*) [16])(param_2 + 0x188) = auVar20;
      }
      if (local_68 == 0) {
        bVar5 = *(long *)(param_2 + 0x1b0) == 0;
      }
      else {
        bVar5 = false;
      }
      if (((long)local_68 < 1) && (!bVar5)) {
        uVar15 = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
LAB_00160bec:
        *(uint *)(param_2 + 0x1c0) = uVar15;
LAB_00160bf0:
        uVar18 = 1;
        goto LAB_00160bf4;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x1b8) + local_68) = 0;
      *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x1b8);
      if (*(code **)(param_1[0x88] + 0x68) != (code *)0x0) {
        uVar10 = (**(code **)(param_1[0x88] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if ((char)local_70 == '\0') goto LAB_001606e4;
        goto LAB_00160bf0;
      }
LAB_001606e4:
      if ((*(ushort *)(param_2 + 0x660) & 1) != 0) {
        local_74[0] = '\0';
        uVar10 = FUN_0015ec94(param_2,param_1,&local_68,local_74);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if (((*(code **)(param_1[0x88] + 0x68) != (code *)0x0) && (*(long *)(param_2 + 0xf8) < 1))
           && (0 < (long)local_68)) {
          uVar10 = (**(code **)(param_1[0x88] + 0x68))(param_2,param_1,&local_68,&local_70);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          if ((char)local_70 != '\0') goto LAB_00160bf0;
        }
        if (local_74[0] != '\0') {
          if (0 < (long)local_68) {
            uVar17 = FUN_00148068(*(undefined8 *)(*param_1 + 0xd8),1);
            if ((uVar17 & 1) == 0) {
              FUN_0014d430(param_2,
                           "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                           ,local_68,*(undefined8 *)(param_2 + 0x15a0));
            }
            else {
              FUN_0014d430(param_2,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n",
                           local_68,*(undefined8 *)(param_2 + 0x15a0));
              param_1[0xa2] = param_1[0xa2] - local_68;
              *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x400000;
            }
          }
          goto LAB_00160bf0;
        }
      }
      if ((*(long *)(param_2 + 0x158) != 0) && ((*(ushort *)(param_2 + 0x660) & 1) == 0)) {
        bVar2 = bVar5;
        if (0 < (long)local_68) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((*(byte *)(param_2 + 0xf63) & 1) != 0) {
            FUN_00158f30(param_1,2);
            bVar5 = true;
            uVar10 = 8;
            goto LAB_00160f44;
          }
          bVar2 = bVar5;
          if (*(long *)(param_2 + 0x1b0) != 0) {
            bVar2 = true;
          }
          if ((!bVar2) && ((*(uint *)(param_1[0x88] + 0x80) & 0x40003) != 0)) {
            if (*(long *)(param_2 + 0x1d0) == 0) {
LAB_001607d0:
              if ((((*(long *)(param_2 + 0x1518) == 0) ||
                   ((*(ushort *)(param_2 + 0x660) >> 1 & 1) != 0)) ||
                  ((*(ushort *)(param_2 + 0x660) >> 3 & 1) != 0)) ||
                 (*(int *)(param_2 + 0xa38) != 1)) {
                if (((*(int *)(param_2 + 0xa28) == 0) || (*(long *)(param_2 + 0x1510) != 0)) ||
                   (uVar12 = FUN_0016037c(param_2,*(undefined8 *)(param_2 + 0x1a8)),
                   (uVar12 & 1) != 0)) goto LAB_00160810;
                uVar18 = 1;
                *param_3 = '\x01';
                *(undefined4 *)(param_2 + 0x1618) = 0x130;
                FUN_0014d430(param_2,"Simulate a HTTP 304 response!\n");
                FUN_00158f30(param_1,1);
                goto LAB_00160c3c;
              }
              if (*plVar1 != *(long *)(param_2 + 0x1518)) {
                FUN_0014d5f8(param_2,
                             "HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
                return 0x21;
              }
              FUN_0014d430(param_2,"The entire document is already downloaded");
              FUN_00158f30(param_1,1);
            }
            else if ((*(byte *)((long)param_1 + 0x41c) & 1) == 0) {
              *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 8;
              FUN_0014d430(param_2,"Ignoring the response-body\n");
              goto LAB_001607d0;
            }
            uVar10 = 0;
            *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
            bVar5 = true;
            goto LAB_00160f44;
          }
LAB_00160810:
          *(long *)(param_2 + 0x1b0) = *(long *)(param_2 + 0x1b0) + 1;
          if (((*(byte *)(param_2 + 0xf63) >> 2 & 1) != 0) &&
             ((*(int *)(param_2 + 0x140) == 0 ||
              (FUN_0014d550(param_2,3,*(undefined8 *)(param_2 + 0x1140),
                            *(undefined8 *)(param_2 + 0x150)), *(int *)(param_2 + 0x140) == 1)))) {
            FUN_0014d550(param_2,3,*(undefined8 *)(param_2 + 0x158),local_68);
          }
          if ((*(ushort *)(param_2 + 0x660) >> 5 & 1) != 0) {
            iVar7 = FUN_001618e8(param_1,*(undefined8 *)(param_2 + 0x158),local_68,&local_68);
            if (0 < iVar7) {
              if (iVar7 == 4) {
                FUN_0014d5f8(param_2,"Failed writing data");
                return 0x17;
              }
              uVar10 = FUN_00161c9c();
              FUN_0014d5f8(param_2,"%s in chunked-encoding",uVar10);
              return 0x38;
            }
            if (iVar7 == -1) {
              *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
              lVar11 = param_1[9];
              if (lVar11 != 0) {
                FUN_0014d430(*param_1,"Leftovers after chunking: %zu bytes\n",lVar11);
                uVar12 = FUN_00148068(*(undefined8 *)(*param_1 + 0xd8),1);
                if ((uVar12 & 1) != 0) {
                  FUN_0014d430(*param_1,"Rewinding %zu bytes\n",lVar11);
                  param_1[0xa2] = param_1[0xa2] - lVar11;
                  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x400000;
                }
              }
            }
          }
          if (*(int *)(param_2 + 0x140) == 1) {
            lVar11 = *(long *)(param_2 + 0x100);
            if ((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0) {
              lVar11 = *(long *)(param_2 + 0x150) + lVar11;
              *(long *)(param_2 + 0x100) = lVar11;
            }
          }
          else {
            lVar11 = *(long *)(param_2 + 0x100);
          }
          lVar14 = *(long *)(param_2 + 0xf8);
          if (lVar14 != -1) {
            uVar12 = (local_68 + lVar11) - lVar14;
            if (lVar14 <= (long)(local_68 + lVar11)) {
              if ((uVar12 != 0) && ((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0)) {
                uVar17 = FUN_00148068(*(undefined8 *)(*param_1 + 0xd8),1);
                if ((uVar17 & 1) == 0) {
                  FUN_0014d430(param_2,
                               "Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                               ,uVar12,*(undefined8 *)(param_2 + 0xf0),
                               *(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_2 + 0x100));
                }
                else {
                  FUN_0014d430(param_2,
                               "Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)\n"
                               ,uVar12,*(undefined8 *)(param_2 + 0x15a0),
                               *(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8),
                               *(undefined8 *)(param_2 + 0x100),local_68);
                  param_1[0xa2] = param_1[0xa2] - uVar12;
                  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x400000;
                }
              }
              lVar11 = *(long *)(param_2 + 0x100);
              local_68 = *(long *)(param_2 + 0xf8) - lVar11;
              local_68 = local_68 & ((long)local_68 >> 0x3f ^ 0xffffffffffffffffU);
              *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
              uVar17 = uVar12;
            }
          }
          *(ulong *)(param_2 + 0x100) = local_68 + lVar11;
          FUN_00146f34(param_2);
          if ((*(ushort *)(param_2 + 0x660) >> 5 & 1) == 0) {
            uVar15 = *(uint *)(param_2 + 0x140);
            bVar2 = bVar5;
            if (local_68 != 0 || uVar15 != 0) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0) && (uVar15 != 0)) {
                lVar11 = *(long *)(param_2 + 0xf8);
                if (*(long *)(param_2 + 0x150) <= lVar11 || lVar11 == -1) {
                  lVar11 = *(long *)(param_2 + 0x150);
                }
                uVar10 = FUN_0014d948(param_1,1,*(undefined8 *)(param_2 + 0x1140),lVar11);
                if ((int)uVar10 != 0) {
                  return uVar10;
                }
                uVar15 = *(uint *)(param_2 + 0x140);
              }
              if (uVar15 < 2) {
                if ((*(byte *)(*param_1 + 0xf65) & 1) == 0) {
                  uVar4 = *(ushort *)(param_2 + 0x660);
                  if (*(long *)(param_2 + 0x1a0) == 0) goto LAB_00160a84;
                  if ((uVar4 >> 3 & 1) != 0) goto LAB_00160aa8;
                  uVar10 = FUN_00161dbc(param_1,*(long *)(param_2 + 0x1a0),
                                        *(undefined8 *)(param_2 + 0x158),local_68);
                }
                else {
                  uVar4 = *(ushort *)(param_2 + 0x660);
LAB_00160a84:
                  if ((uVar4 >> 3 & 1) != 0) goto LAB_00160aa8;
                  uVar10 = FUN_0014d948(param_1,1,*(undefined8 *)(param_2 + 0x158),local_68);
                }
                *(undefined4 *)(param_2 + 0x140) = 0;
                if ((int)uVar10 != 0) {
                  return uVar10;
                }
              }
              else {
LAB_00160aa8:
                *(undefined4 *)(param_2 + 0x140) = 0;
              }
            }
          }
        }
      }
      if (((*(long *)(param_1[0x88] + 0x68) != 0) && (uVar17 != 0)) &&
         ((*(byte *)((long)param_1 + 0x41e) >> 6 & 1) == 0)) {
        lVar11 = *(long *)(param_2 + 0x158) + local_68;
        uVar12 = *(long *)(param_2 + 0x1b8) + *(long *)(param_2 + 0xc30);
        *(long *)(param_2 + 0x158) = lVar11;
        local_68 = uVar12 - lVar11;
        if (lVar11 + uVar17 <= uVar12) {
          local_68 = uVar17;
        }
        uVar10 = (**(code **)(param_1[0x88] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if ((char)local_70 != '\0') {
          uVar15 = *(uint *)(param_2 + 0x1c0) | 1;
          goto LAB_00160bec;
        }
        goto LAB_00160bf0;
      }
      uVar15 = *(uint *)(param_2 + 0x1c0);
      if (bVar5) {
        uVar15 = uVar15 & 0xfffffffe;
        *(uint *)(param_2 + 0x1c0) = uVar15;
      }
      if (((uVar15 >> 4 & 1) != 0) ||
         ((((*(byte *)(param_1[0x88] + 0x80) & 0x30) == 0 &&
           (uVar12 = thunk_FUN_0017b1a8(param_1,0), (uVar12 & 1) == 0)) &&
          (((*(byte *)(param_1[0x88] + 0x80) & 3) == 0 || ((int)param_1[0x46] != 0x14))))))
      goto LAB_00160bf0;
      iVar8 = iVar8 + -1;
      uVar18 = 1;
    } while (iVar8 != -1);
    *(undefined4 *)(param_1 + 0xcc) = 1;
    *param_4 = 1;
LAB_00160c08:
    if (((*(uint *)(param_2 + 0x1c0) & 3) == 2) && ((*(byte *)((long)param_1 + 0x41c) & 1) != 0)) {
      FUN_0014d430(param_2,"we are done reading and this is set to close, stop send\n");
      *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
    }
LAB_00160c3c:
    if (*param_3 != '\0') {
      return 0;
    }
    uVar15 = *(uint *)(param_2 + 0x1c0);
  }
  uVar19 = uVar18;
  if (((uVar6 & uVar15) >> 1 & 1) != 0) {
    if ((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) {
      FUN_00146c9c(param_2,7);
    }
    uVar19 = uVar18 | 2;
    local_68 = 0;
    uVar17 = *(ulong *)(param_2 + 0x1d8);
    if (*(ulong *)(param_2 + 0x1d8) == 0) {
      lVar11 = *(long *)(param_2 + 0x1158);
      if (lVar11 == 0) {
        lVar11 = FUN_001432f0(*(undefined8 *)(param_2 + 0xc38));
        *(long *)(param_2 + 0x1158) = lVar11;
        if (lVar11 == 0) {
          return 0x1b;
        }
      }
      *(long *)(param_2 + 0x1e0) = lVar11;
      if ((*(ushort *)(param_2 + 0x660) >> 2 & 1) == 0) {
        local_70 = 0;
        if ((*(int *)(param_2 + 0x198) == 2) && (*(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 2))
        {
          *(undefined4 *)(param_2 + 0x198) = 1;
          *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
          auVar20 = FUN_00147178();
          *(undefined1 (*) [16])(param_2 + 0x188) = auVar20;
          FUN_00147570(param_2,*(undefined8 *)(param_2 + 0xf00),0);
          uVar19 = uVar18;
          goto LAB_00160e04;
        }
        if ((*(uint *)(param_1[0x88] + 0x80) & 0x40003) == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = *(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 1;
        }
        uVar10 = FUN_0015fde4(param_1,*(undefined8 *)(param_2 + 0xc38),&local_70);
        uVar12 = local_70;
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if (local_70 != 0) {
          if (0 < (long)local_70) {
            *(ulong *)(param_2 + 0x1d8) = local_70;
            uVar17 = local_70;
            if ((!bVar5) && ((*(ushort *)(param_2 + 0xf60) & 0x840) != 0)) {
              if (*(long *)(param_2 + 0x11d8) == 0) {
                lVar11 = FUN_001432f0(*(long *)(param_2 + 0xc38) << 1);
                *(long *)(param_2 + 0x11d8) = lVar11;
                if (lVar11 == 0) {
                  FUN_0014d5f8(param_2,"Failed to alloc scratch buffer!");
                  return 0x1b;
                }
              }
              uVar16 = 0;
              uVar17 = 0;
              do {
                cVar3 = *(char *)(*(long *)(param_2 + 0x1e0) + uVar16);
                if (cVar3 == '\n') {
                  *(undefined1 *)(*(long *)(param_2 + 0x11d8) + uVar17) = 0xd;
                  uVar17 = uVar17 + 1;
                  *(undefined1 *)(*(long *)(param_2 + 0x11d8) + uVar17) = 10;
                  if (((*(byte *)(param_2 + 0xf60) >> 6 & 1) == 0) &&
                     (*(long *)(param_2 + 0x1538) != -1)) {
                    *(long *)(param_2 + 0x1538) = *(long *)(param_2 + 0x1538) + 1;
                  }
                }
                else {
                  *(char *)(*(long *)(param_2 + 0x11d8) + uVar17) = cVar3;
                }
                uVar16 = uVar16 + 1;
                uVar17 = uVar17 + 1;
              } while (uVar12 != uVar16);
              if (uVar17 == uVar12) {
                uVar17 = *(ulong *)(param_2 + 0x1d8);
              }
              else {
                *(ulong *)(param_2 + 0x1d8) = uVar17;
                *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x11d8);
              }
            }
            goto LAB_00160500;
          }
          goto LAB_00160df0;
        }
      }
      if ((*(byte *)(param_2 + 0x1c0) >> 5 & 1) == 0) {
LAB_00160df0:
        uVar10 = FUN_00161898(param_1,plVar1);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
      }
    }
    else {
LAB_00160500:
      uVar10 = FUN_0014d704(param_1,*(undefined4 *)((long)param_1 + 0x474),
                            *(undefined8 *)(param_2 + 0x1e0),uVar17,&local_68);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      if ((*(byte *)(param_2 + 0xf63) >> 2 & 1) != 0) {
        FUN_0014d550(param_2,4,*(undefined8 *)(param_2 + 0x1e0),local_68);
      }
      *(ulong *)(param_2 + 0x108) = *(long *)(param_2 + 0x108) + local_68;
      FUN_00146f3c(param_2);
      if (((*(ushort *)(param_2 + 0x660) & 0x140) != 0x40) &&
         (*(long *)(param_2 + 0x108) == *(long *)(param_2 + 0x1538))) {
        *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 4;
        FUN_0014d430(param_2,"We are completely uploaded and fine\n");
      }
      lVar11 = *(long *)(param_2 + 0x1d8) - local_68;
      if (lVar11 == 0) {
        lVar11 = *(long *)(param_2 + 0x1158);
        if (lVar11 == 0) {
          lVar11 = FUN_001432f0(*(undefined8 *)(param_2 + 0xc38));
          *(long *)(param_2 + 0x1158) = lVar11;
          if (lVar11 == 0) {
            return 0x1b;
          }
        }
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        *(long *)(param_2 + 0x1e0) = lVar11;
        if ((*(ushort *)(param_2 + 0x660) >> 2 & 1) != 0) goto LAB_00160df0;
      }
      else {
        *(long *)(param_2 + 0x1d8) = lVar11;
        *(ulong *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + local_68;
      }
    }
  }
LAB_00160e04:
  auVar20 = FUN_00147178();
  *(undefined1 (*) [16])(param_2 + 0x130) = auVar20;
  if (((uVar19 == 0) && (*(int *)(param_2 + 0x198) == 1)) &&
     (iVar8 = FUN_001471a8(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(param_2 + 0x188),
                           *(undefined8 *)(param_2 + 400)),
     *(long *)(param_2 + 0xf00) <= (long)iVar8)) {
    *(undefined4 *)(param_2 + 0x198) = 0;
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 2;
    thunk_FUN_00149f68(param_2,0);
    FUN_0014d430(param_2,"Done waiting for 100-continue\n");
  }
  iVar8 = FUN_001466d0(param_1);
  if (iVar8 == 0) {
    uVar10 = FUN_001628cc(param_2,*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138))
    ;
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if (*(int *)(param_2 + 0x1c0) == 0) {
      if ((*(byte *)(param_2 + 0xf63) & 1) == 0) {
        lVar11 = *plVar1;
        if (lVar11 != -1) {
          lVar14 = lVar11 - *(long *)(param_2 + 0x100);
          if (((lVar14 != 0) && (*(long *)(param_2 + 0x100) != *(long *)(param_2 + 0x1508) + lVar11)
              ) && (*(long *)(param_2 + 0x1d0) == 0)) {
            FUN_0014d5f8(param_2,"transfer closed with %ld bytes remaining to read",lVar14);
            return 0x12;
          }
        }
        if (((*(ushort *)(param_2 + 0x660) >> 5 & 1) != 0) && ((int)param_1[7] != 4)) {
          FUN_0014d5f8(param_2,"transfer closed with outstanding read data remaining");
          return 0x12;
        }
      }
      iVar8 = FUN_001466d0(param_1);
      if (iVar8 != 0) goto LAB_00160e68;
    }
    else {
      iVar8 = FUN_00157b2c(param_2,param_2 + 0x130,0);
      if (iVar8 < 0) {
        lVar11 = *(long *)(param_2 + 0xf0);
        uVar9 = FUN_001471a8(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138),
                             *(undefined8 *)(param_2 + 0x1028),*(undefined8 *)(param_2 + 0x1030));
        if (lVar11 == -1) {
          FUN_0014d5f8(param_2,"Operation timed out after %d milliseconds with %ld bytes received",
                       uVar9,*(undefined8 *)(param_2 + 0x100));
        }
        else {
          FUN_0014d5f8(param_2,
                       "Operation timed out after %d milliseconds with %ld out of %ld bytes received"
                       ,uVar9,*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0xf0));
        }
        return 0x1c;
      }
    }
    uVar10 = 0;
    bVar5 = (*(uint *)(param_2 + 0x1c0) & 0x33) == 0;
LAB_00160f44:
    *param_3 = bVar5;
  }
  else {
LAB_00160e68:
    uVar10 = 0x2a;
  }
  return uVar10;
}

