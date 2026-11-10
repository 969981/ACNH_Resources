
int FUN_0017b314(long *param_1,int param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  long lVar18;
  ulong local_268 [2];
  ulong local_258;
  ulong local_250;
  ulong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined2 local_228;
  long local_138;
  long local_128;
  undefined8 local_74;
  uint local_6c [3];
  
  if (param_3 == (undefined1 *)0x0) {
    return 4;
  }
  plVar1 = param_1 + (long)param_2 * 3 + 0x52;
  if ((int)*plVar1 == 2) {
    *param_3 = 1;
    return 0;
  }
  lVar18 = (long)param_2;
  puVar2 = (undefined4 *)((long)param_1 + (long)param_2 * 0x18 + 0x294);
  if (*(int *)((long)param_1 + (long)param_2 * 0x18 + 0x294) != 0) {
LAB_0017b388:
    lVar14 = param_1[(long)param_2 * 3 + 0x53];
    local_6c[0] = 4;
    if (lVar14 == 0) {
LAB_0017b55c:
      iVar5 = 0x62;
      goto LAB_0017b7a0;
    }
    lVar15 = *param_1;
    iVar5 = FUN_00157b2c(lVar15,0,1);
    if (iVar5 < 0) {
      iVar5 = 0x1c;
      goto LAB_0017b7a0;
    }
    *(undefined8 *)(lVar15 + 0xaa0) = 0;
    *(undefined8 *)(lVar15 + 0xad8) = 0;
    local_74 = 0;
    uVar8 = nnsslConnectionDoHandshakeWithCertBuffer(lVar14,(long)&local_74 + 4,&local_74);
    uVar8 = uVar8 & 0xffffffff;
    bVar4 = nnResultIsFailure(uVar8);
    if ((bVar4 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x41f) >> 5 & 1) != 0) {
        local_228 = 0;
        local_268[0] = local_268[0] & 0xffffffff00000000;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_258 = 0;
        local_250 = 0;
        uVar7 = nnsslConnectionGetNextAlpnProto(lVar14,local_6c,&local_258,local_268,0x32);
        uVar8 = nnResultIsSuccess(uVar7);
        if (((uVar8 & 1) != 0) && ((local_6c[0] | 2) == 3)) {
          if ((*(long *)(lVar15 + 0xa40) < 3) || ((int)local_268[0] != 2)) {
            if (((int)local_268[0] == 8) && (local_258 == 0x312e312f70747468)) {
              uVar7 = 2;
              goto LAB_0017b6b4;
            }
          }
          else if ((short)local_258 == 0x3268) {
            uVar7 = 3;
LAB_0017b6b4:
            *(undefined4 *)(param_1 + 0xd1) = uVar7;
          }
        }
      }
      iVar5 = 0;
LAB_0017b6bc:
      if (((int)param_1[0x2f] == 2) &&
         ((int)param_1[(ulong)(*(int *)((long)param_1 + 0x25c) != -1) * 3 + 0x58] != 2)) {
        puVar13 = (undefined8 *)(lVar15 + 0xd98);
      }
      else {
        puVar13 = (undefined8 *)(lVar15 + 0xd90);
      }
      plVar17 = (long *)*puVar13;
      if (plVar17 == (long *)0x0) {
LAB_0017b888:
        if (*(code **)(lVar15 + 0xab0) != (code *)0x0) {
          local_248 = local_74 & 0xffffffff;
          local_250 = local_74 >> 0x20;
          local_258 = (ulong)((bVar4 ^ 1) & 1);
          iVar6 = (**(code **)(lVar15 + 0xab0))
                            (*param_1,lVar14,*(undefined8 *)(*param_1 + 0xab8),&local_258);
          if (iVar6 != 0) {
            iVar6 = 0x2a;
            goto LAB_0017b79c;
          }
        }
        if (iVar5 == 0) {
          *param_3 = 1;
          param_1[lVar18 + 0x4e] = (long)&LAB_0017bc2c;
          param_1[lVar18 + 0x50] = (long)FUN_0017bccc;
          *puVar2 = 0;
          *(int *)plVar1 = 2;
          return 0;
        }
        goto LAB_0017b7a0;
      }
      sVar10 = strlen((char *)plVar17);
      if ((8 < sVar10) && (*plVar17 == 0x2f2f363532616873)) {
        local_268[0] = 0;
        local_268[1] = 0;
        uVar7 = nnsslConnectionGetServerCertDetail(lVar14,local_268,0,0);
        uVar8 = nnResultIsFailure(uVar7);
        if ((uVar8 & 1) == 0) {
          uVar11 = FUN_0017bebc(local_268);
          lVar12 = FUN_0017bebc(local_268);
          uVar8 = FUN_0017beb0(local_268);
          memset(&local_258,0,0x1e0);
          iVar6 = FUN_0017bec8(&local_258,uVar11,lVar12 + (uVar8 & 0xffffffff));
          if (iVar6 == 0) {
            FUN_00146488("pPinnedPubKey: %s\n\n",plVar17);
            iVar6 = FUN_0014446c(lVar15,plVar17,local_138,local_128 - local_138);
            if (iVar6 != 0) goto LAB_0017b79c;
            goto LAB_0017b888;
          }
        }
      }
      iVar6 = 0x5a;
    }
    else {
      uVar9 = FUN_0017b2a8(uVar8,0x1987b);
      if ((uVar9 & 1) == 0) {
        *(ulong *)(lVar15 + 0xaa0) = uVar8;
        uVar8 = FUN_0017b2a8(uVar8,0x19e7b);
        iVar5 = 0x3c;
        if ((uVar8 & 1) == 0) {
          iVar5 = 0x23;
        }
        goto LAB_0017b6bc;
      }
      iVar6 = 0x51;
    }
LAB_0017b79c:
    iVar5 = iVar6;
    goto LAB_0017b7a0;
  }
  local_268[0] = 0;
  lVar14 = param_1[(long)param_2 * 3 + 0x53];
  if (lVar14 == 0) goto LAB_0017b55c;
  lVar12 = *param_1;
  lVar15 = *(long *)(lVar12 + 0xa98);
  if (lVar15 == 0) {
    *(undefined1 *)(lVar14 + 0x108) = 0;
    *(long *)(lVar14 + 0x100) = lVar14 + 0x80;
    uVar7 = nnsslContextGetContextId(lVar14 + 0x80,local_268);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b62c;
    plVar17 = (long *)(lVar14 + 0x100);
    if (local_268[0] != 0) {
      uVar7 = nnsslContextDestroy(*plVar17);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) != 0) goto LAB_0017b62c;
    }
    if ((*(code **)(lVar12 + 0xaf0) == (code *)0x0) && (*(long *)(lVar12 + 0xa98) == 0)) {
      iVar5 = 0x5e;
      goto LAB_0017b7a0;
    }
    iVar5 = (**(code **)(lVar12 + 0xaf0))(lVar12,*plVar17,*(undefined8 *)(lVar12 + 0xaf8));
    if (iVar5 == 0) {
      lVar15 = *plVar17;
      goto LAB_0017b438;
    }
LAB_0017b67c:
    iVar5 = 0x2a;
LAB_0017b7a0:
    if (iVar5 == 0x51) {
      return 0;
    }
    if (iVar5 != 0x3c) goto LAB_0017bbb4;
    if (param_1[(long)param_2 * 3 + 0x53] != 0) {
      local_258 = local_258 & 0xffffffff00000000;
      uVar7 = nnsslConnectionGetVerifyCertError(param_1[(long)param_2 * 3 + 0x53],&local_258);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) == 0) {
        *(ulong *)(*param_1 + 0xad8) = local_258 & 0xffffffff;
        uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0x25a7b);
        if (((((uVar8 & 1) == 0) &&
             (uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0x2607b), (uVar8 & 1) == 0)) &&
            (uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0x25e7b), (uVar8 & 1) == 0)) &&
           ((uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0x2867b), (uVar8 & 1) != 0 ||
            ((uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0x2687b), (uVar8 & 1) == 0 &&
             (((uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0xbca7b), (uVar8 & 1) != 0 ||
               (uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0xbd07b), (uVar8 & 1) != 0)) ||
              (uVar8 = FUN_0017b2a8(local_258 & 0xffffffff,0xbce7b), (uVar8 & 1) != 0)))))))) {
          iVar5 = 0x3a;
          goto LAB_0017bbb4;
        }
      }
      iVar5 = 0x3c;
      goto LAB_0017bbb4;
    }
  }
  else {
    *(long *)(lVar14 + 0x100) = lVar15;
    *(undefined1 *)(lVar14 + 0x108) = 1;
LAB_0017b438:
    puVar13 = (undefined8 *)(lVar14 + 0x100);
    uVar7 = nnsslContextGetContextId(lVar15,local_268);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) {
LAB_0017b62c:
      iVar5 = 0x60;
      goto LAB_0017b7a0;
    }
    if (local_268[0] == 0) {
      iVar5 = 0x5f;
      goto LAB_0017b7a0;
    }
    uVar7 = nnsslConnectionCreate(lVar14,*(undefined8 *)(lVar14 + 0x100));
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) {
LAB_0017b554:
      iVar5 = 0x23;
      goto LAB_0017b7a0;
    }
    nnsocketFcntl(*(undefined4 *)((long)param_1 + lVar18 * 4 + 600),4,0);
    uVar7 = nnsslConnectionSetOption(lVar14,0,1);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    uVar7 = nnsslConnectionSetSocketDescriptor
                      (lVar14,*(undefined4 *)((long)param_1 + lVar18 * 4 + 600));
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    pcVar16 = (char *)param_1[0x1b];
    sVar10 = strlen(pcVar16);
    uVar7 = nnsslConnectionSetHostName(lVar14,pcVar16,sVar10);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    uVar7 = nnsslConnectionSetOption(lVar14,2,*(undefined1 *)(*param_1 + 0xac0));
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    bVar3 = *(byte *)(*param_1 + 0xad0);
    bVar4 = bVar3 & 3;
    if (*(char *)(*param_1 + 0xa90) != '\0') {
      bVar4 = bVar3 & 3 | 4;
    }
    uVar7 = nnsslConnectionSetVerifyOption(lVar14,bVar4);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    uVar7 = nnsslConnectionSetSessionCacheMode(lVar14,*(byte *)(*param_1 + 0xad0) >> 3 & 1);
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_0017b554;
    pcVar16 = *(char **)(lVar12 + 0xca0);
    if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
      uVar7 = FUN_0017c2b0(*puVar13,pcVar16,*(undefined8 *)(lVar12 + 0xd18));
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) == 0) goto LAB_0017b970;
LAB_0017b9c0:
      uVar8 = FUN_0017bd6c(uVar7);
      iVar6 = 0x4d;
LAB_0017b9d0:
      iVar5 = 0x1b;
      if ((uVar8 & 1) == 0) {
        iVar5 = iVar6;
      }
      goto LAB_0017b7a0;
    }
LAB_0017b970:
    if ((*(char **)(lVar12 + 0xde8) != (char *)0x0) && (**(char **)(lVar12 + 0xde8) != '\0')) {
      uVar7 = FUN_0017c450(*puVar13);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) != 0) goto LAB_0017b9c0;
    }
    if ((*(char **)(lVar12 + 0xd70) != (char *)0x0) && (**(char **)(lVar12 + 0xd70) != '\0')) {
      uVar7 = FUN_0017c4e0(*puVar13);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) != 0) goto LAB_0017b9c0;
    }
    if ((*(char **)(lVar12 + 0xdd8) != (char *)0x0) && (**(char **)(lVar12 + 0xdd8) != '\0')) {
      uVar7 = FUN_0017c6bc(*puVar13);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_0017bd6c(uVar7);
        iVar6 = 0x52;
        goto LAB_0017b9d0;
      }
    }
    if ((*(byte *)((long)param_1 + 0x41f) >> 5 & 1) != 0) {
      memset(&local_258,0,0x80);
      uVar7 = nnsslConnectionSetOption(lVar14,3,1);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(lVar12 + 0xa40) < 3) {
          uVar8 = 0;
        }
        else {
          local_258 = CONCAT53(local_258._3_5_,0x326802);
          uVar8 = 3;
        }
        *(undefined1 *)(uVar8 | (ulong)&local_258) = 8;
        *(undefined8 *)((undefined1 *)(uVar8 | (ulong)&local_258) + 1) = 0x312e312f70747468;
        uVar7 = nnsslConnectionSetNextAlpnProto(lVar14,&local_258,(int)uVar8 + 9);
        uVar8 = nnResultIsFailure(uVar7);
        if ((uVar8 & 1) == 0) goto LAB_0017ba20;
      }
      goto LAB_0017b554;
    }
LAB_0017ba20:
    lVar15 = *param_1;
    if ((*(code **)(lVar15 + 0xaa8) != (code *)0x0) &&
       (iVar5 = (**(code **)(lVar15 + 0xaa8))(lVar15,lVar14,*(undefined8 *)(lVar15 + 0xab8)),
       iVar5 != 0)) goto LAB_0017b67c;
    if ((int)param_1[0x2f] == 2) {
      lVar15 = *param_1;
      if ((int)param_1[(ulong)(*(int *)((long)param_1 + 0x25c) != -1) * 3 + 0x58] == 2)
      goto LAB_0017bac8;
      puVar13 = (undefined8 *)(lVar15 + 0xd98);
    }
    else {
      lVar15 = *param_1;
LAB_0017bac8:
      puVar13 = (undefined8 *)(lVar15 + 0xd90);
    }
    if (((char *)*puVar13 != (char *)0x0) && (*(char *)*puVar13 != '\0')) {
      lVar15 = *(long *)(lVar15 + 0xac8);
      if (lVar15 == 0) {
        uVar11 = FUN_001432f0(0x2000);
        *(undefined8 *)(*param_1 + 0xac8) = uVar11;
        lVar15 = *(long *)(*param_1 + 0xac8);
        if (lVar15 == 0) {
          iVar5 = 0x1b;
          goto LAB_0017b7a0;
        }
      }
      uVar7 = nnsslConnectionSetServerCertBuffer(lVar14,lVar15,0x2000);
      uVar8 = FUN_0017bdb4(uVar7);
      if ((uVar8 & 1) == 0) {
        nnResultIsFailure(uVar7);
      }
      else {
        FUN_00143300(*(undefined8 *)(*param_1 + 0xac8));
        *(undefined8 *)(*param_1 + 0xac8) = 0;
      }
    }
    if (param_1[(long)param_2 * 3 + 0x53] != 0) {
      uVar7 = nnsslConnectionSetIoMode(param_1[(long)param_2 * 3 + 0x53],2);
      uVar8 = nnResultIsFailure(uVar7);
      if ((uVar8 & 1) != 0) {
        iVar5 = 0x23;
        goto LAB_0017bbb4;
      }
      *puVar2 = 1;
      goto LAB_0017b388;
    }
  }
  iVar5 = 0x62;
LAB_0017bbb4:
  lVar18 = param_1[(long)param_2 * 3 + 0x53];
  if ((lVar18 != 0) && (FUN_0017bdfc(plVar1), *(char *)(lVar18 + 0x108) == '\0')) {
    FUN_0017be54(plVar1);
  }
  FUN_00146488("[%s - %d]\n","nnssl_connect_common",0x449);
  return iVar5;
}

