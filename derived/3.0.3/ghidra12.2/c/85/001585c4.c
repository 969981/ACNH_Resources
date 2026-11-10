
undefined8 FUN_001585c4(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_4c0 [128];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined6 uStack_418;
  undefined2 local_412;
  undefined6 uStack_410;
  undefined4 local_408;
  int local_404;
  int local_400;
  undefined4 local_3f8;
  undefined1 auStack_3f4 [256];
  undefined1 auStack_2f4 [128];
  undefined4 local_274;
  undefined4 local_270 [64];
  long *local_170;
  undefined4 local_168;
  undefined1 auStack_164 [260];
  
  memset(&local_404,0,0x110);
  lVar13 = *param_1;
  local_408 = 0;
  uStack_410 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_412 = 0;
  local_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  memset(auStack_4c0,0,0x80);
  *param_3 = 0xffffffff;
  iVar4 = FUN_00158e04(param_1,param_2,&local_404,&local_408);
  if (iVar4 != 0) {
    return 0;
  }
  local_440 = 0;
  uVar8 = FUN_00157eb4(auStack_3f4,&local_438,&local_440);
  if ((uVar8 & 1) == 0) {
    piVar9 = __errno_location();
    iVar4 = *piVar9;
    uVar18 = FUN_0014df28(iVar4,auStack_4c0,0x80);
    FUN_0014d5f8(lVar13,"sa_addr inet_ntop() failed with errno %d: %s",iVar4,uVar18);
    FUN_00158430(param_1,local_408);
    return 0;
  }
  FUN_0014d430(lVar13,"  Trying %s...\n",&local_438);
  uVar2 = local_408;
  if ((local_404 == 2) && (local_400 == 1)) {
    if ((*(byte *)(lVar13 + 0xf64) >> 3 & 1) != 0) {
      lVar15 = *param_1;
      local_270[0] = 1;
      memset(&local_168,0,0x80);
      iVar4 = nnsocketSetSockOpt(uVar2,6,1,local_270,4);
      if (iVar4 < 0) {
        uVar18 = nnsocketGetLastErrno();
        uVar18 = FUN_0014df28(uVar18,&local_168,0x80);
        FUN_0014d430(lVar15,"Could not set TCP_NODELAY: %s\n",uVar18);
      }
      else {
        FUN_0014d430(lVar15,"TCP_NODELAY set\n");
      }
    }
    FUN_00158fe0(param_1,uVar2);
    if ((*(ulong *)(lVar13 + 0xf60) >> 0x2c & 1) != 0) {
      local_168 = (uint)(*(ulong *)(lVar13 + 0xf60) >> 0x2c) & 1;
      iVar4 = nnsocketSetSockOpt(uVar2,0xffff,8,&local_168,4);
      if (iVar4 < 0) {
        pcVar11 = "Failed to set SO_KEEPALIVE on fd %d\n";
      }
      else {
        local_168 = FUN_00146668(*(undefined8 *)(lVar13 + 0xee8));
        iVar4 = nnsocketSetSockOpt(uVar2,6,0x100,&local_168,4);
        if (iVar4 < 0) {
          FUN_0014d430(lVar13,"Failed to set TCP_KEEPIDLE on fd %d\n",uVar2);
        }
        local_168 = FUN_00146668(*(undefined8 *)(lVar13 + 0xef0));
        iVar4 = nnsocketSetSockOpt(uVar2,6,0x200,&local_168,4);
        if (-1 < iVar4) goto LAB_0015882c;
        pcVar11 = "Failed to set TCP_KEEPINTVL on fd %d\n";
      }
      FUN_0014d430(lVar13,pcVar11,uVar2);
    }
  }
  else {
    FUN_00158fe0(param_1,local_408);
  }
LAB_0015882c:
  if (*(long *)(lVar13 + 0x748) == 0) {
LAB_00158888:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FUN_00149fe4(lVar13,1);
    iVar4 = (**(code **)(lVar13 + 0x748))(*(undefined8 *)(lVar13 + 0x750),uVar2,0);
    FUN_00149fe4(lVar13,0);
    if (iVar4 == 0) goto LAB_00158888;
    if (iVar4 != 2) {
      FUN_00158430(param_1,uVar2);
      return 0x2a;
    }
  }
  if (local_404 == 2) {
    uVar5 = FUN_00159514(auStack_3f4);
    lVar15 = *param_1;
    local_170 = (long *)0x0;
    uVar16 = (uint)*(ushort *)(lVar15 + 0x700);
    iVar4 = *(int *)(lVar15 + 0x704);
    pcVar11 = *(char **)(lVar15 + 0xce0);
    uVar17 = (uint)*(ushort *)(lVar15 + 0x700);
    if ((pcVar11 != (char *)0x0) || (uVar17 != 0)) {
      memset(&local_168,0,0x100);
      if ((pcVar11 != (char *)0x0) && (sVar10 = strlen(pcVar11), sVar10 < 0xff)) {
        memset(local_270,0,0x100);
        iVar6 = strncmp("if!",pcVar11,3);
        if (iVar6 != 0) {
          iVar7 = strncmp("host!",pcVar11,5);
          if (iVar7 != 0) goto LAB_00158b88;
          pcVar11 = pcVar11 + 5;
          goto LAB_00158c04;
        }
        pcVar11 = pcVar11 + 3;
LAB_00158b88:
        iVar7 = FUN_0015951c(2,uVar5,(int)param_1[0x17],pcVar11,local_270,0x100);
        if (iVar7 == 2) {
          FUN_0014d430(lVar15,"Local Interface %s is ip %s using address family %i\n",pcVar11,
                       local_270,2);
LAB_00158c8c:
          iVar6 = FUN_0014b5f8(2,local_270,auStack_164);
          if (iVar6 < 1) {
            uVar18 = 0;
          }
          else {
            local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
            uVar3 = nnsocketInetHtons(uVar16);
            local_168 = CONCAT22(uVar3,(undefined2)local_168);
            uVar18 = 0x10;
          }
          goto LAB_00158950;
        }
        if (iVar7 == 1) goto LAB_00158bc8;
        if (iVar7 == 0) {
          if (iVar6 != 0) {
LAB_00158c04:
            lVar14 = param_1[0x8a];
            param_1[0x8a] = 1;
            iVar6 = FUN_0014a68c(param_1,pcVar11,0,&local_170);
            if (iVar6 == 1) {
              FUN_00157480(param_1,&local_170);
            }
            param_1[0x8a] = lVar14;
            if (local_170 != (long *)0x0) {
              FUN_0014a1dc(*local_170,local_270,0x100);
              FUN_0014d430(lVar15,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar11,2,
                           local_270,*(undefined4 *)(*local_170 + 4));
              FUN_0014a8a0(lVar15,local_170);
              goto LAB_00158c8c;
            }
            goto LAB_00158cc4;
          }
          pcVar12 = "Couldn\'t bind to interface \'%s\'";
        }
        else {
          if (iVar6 != 0) goto LAB_00158c04;
LAB_00158cc4:
          pcVar12 = "Couldn\'t bind to \'%s\'";
          *(ushort *)(lVar15 + 0x15c4) = *(ushort *)(lVar15 + 0x15c4) & 0xfff7;
        }
        FUN_0014d5f8(lVar15,pcVar12,pcVar11);
LAB_00158b70:
        FUN_00158430(param_1,uVar2);
        return 0x2d;
      }
      local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
      uVar3 = nnsocketInetHtons(uVar16);
      uVar18 = 0x10;
      local_168 = CONCAT22(uVar3,(undefined2)local_168);
LAB_00158950:
      iVar6 = nnsocketBind(uVar2,&local_168,uVar18);
      if (iVar6 < 0) {
        iVar4 = iVar4 + 1;
        uVar17 = uVar16;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 < 2) {
            memset(local_270,0,0x80);
            uVar8 = nnsocketGetLastErrno();
            *(int *)(lVar15 + 0x11e0) = (int)uVar8;
            uVar18 = FUN_0014df28(uVar8,local_270,0x80);
            pcVar11 = "bind failed with errno %d: %s";
            goto LAB_00158b64;
          }
          uVar16 = uVar17 & 0xffff;
          uVar17 = uVar17 + 1;
          FUN_0014d430(lVar15,"Bind to local port %hu failed, trying next\n",uVar16);
          if (local_168._1_1_ == '\x02') {
            uVar3 = nnsocketInetNtohs(uVar17);
            local_168 = CONCAT22(uVar3,(undefined2)local_168);
          }
          iVar6 = nnsocketBind(uVar2,&local_168,uVar18);
        } while (iVar6 < 0);
      }
      local_274 = 0x100;
      memset(local_270,0,0x100);
      iVar4 = nnsocketGetSockName(uVar2,local_270,&local_274);
      if (iVar4 < 0) {
        memset(auStack_2f4,0,0x80);
        uVar8 = nnsocketGetLastErrno();
        *(int *)(lVar15 + 0x11e0) = (int)uVar8;
        uVar18 = FUN_0014df28(uVar8,auStack_2f4,0x80);
        pcVar11 = "getsockname() failed with errno %d: %s";
LAB_00158b64:
        FUN_0014d5f8(lVar15,pcVar11,uVar8 & 0xffffffff,uVar18);
        goto LAB_00158b70;
      }
      FUN_0014d430(lVar15,"Local port: %hu\n",uVar17 & 0xffff);
      *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x1000000;
    }
  }
  FUN_00159524(uVar2,1);
  auVar19 = FUN_00147178();
  *(undefined1 (*) [16])(param_1 + 0x84) = auVar19;
  if (1 < (int)param_1[0x86]) {
    FUN_00147570(lVar13,param_1[0x87],3);
  }
  if ((((bVar1) || (*(int *)((long)param_1 + 0xbc) != 1)) ||
      (((*(byte *)((long)param_1 + 0x41f) >> 3 & 1) == 0 &&
       (iVar4 = nnsocketConnect(uVar2,auStack_3f4,local_3f8), iVar4 != -1)))) ||
     ((iVar4 = nnsocketGetLastErrno(), iVar4 == 0xb || (iVar4 == 0x73)))) {
    *param_3 = uVar2;
    return 0;
  }
  uVar18 = FUN_0014df28(iVar4,auStack_4c0,0x80);
  FUN_0014d430(lVar13,"Immediate connect fail for %s: %s\n",&local_438,uVar18);
  *(int *)(lVar13 + 0x11e0) = iVar4;
LAB_00158bc8:
  FUN_00158430(param_1,uVar2);
  return 7;
}

