
undefined8
FUN_00174528(ulong param_1,char *param_2,char *param_3,uint param_4,int param_5,long *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar6;
  char *pcVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  long *local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  char local_2be [6];
  undefined2 local_2b8;
  undefined1 local_2b6 [598];
  
  lVar11 = param_6[0x27];
  lVar10 = *param_6;
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 600);
  bVar2 = (int)lVar11 == 5;
  __n = strlen(param_3);
  uVar13 = *(ulong *)(lVar10 + 0x6c8);
  if ((*(byte *)((long)param_6 + 0x41c) >> 5 & 1) != 0) {
    FUN_0014d430(lVar10,"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,param_4);
  }
  if (((int)lVar11 != 5) && (0xff < __n)) {
    FUN_0014d430(*param_6,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,__n);
    bVar2 = true;
  }
  iVar3 = FUN_00157b2c(lVar10,0,1);
  if (iVar3 < 0) {
    pcVar7 = "Connection time-out";
LAB_00174640:
    FUN_0014d5f8(lVar10,pcVar7);
    return 0x1c;
  }
  FUN_00159524(uVar1,1);
  uVar4 = FUN_00159114(0xffffffff,0xffffffff,uVar1,iVar3);
  if (uVar4 == 0) {
    lVar10 = *param_6;
    pcVar7 = "SOCKS5: connection timeout";
    goto LAB_00174640;
  }
  if (uVar4 == 0xffffffff) {
    lVar10 = *param_6;
    pcVar7 = "SOCKS5: no connection here";
    goto LAB_0017475c;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar10 = *param_6;
    pcVar7 = "SOCKS5: error occurred during connection";
    goto LAB_0017475c;
  }
  if ((uVar13 & 0xfffffffffffffffa) != 0) {
    FUN_0014d430(*param_6,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n",uVar13);
  }
  memset(&local_2c0,0,600);
  local_2be[0] = '\0';
  pcVar7 = (char *)(-(uVar13 & 1) & param_1);
  if (pcVar7 == (char *)0x0) {
    cVar12 = '\x01';
  }
  else {
    cVar12 = '\x02';
    local_2be[1] = '\x02';
  }
  local_2d0 = 0;
  local_2c0 = CONCAT11(cVar12,5);
  FUN_00159524(uVar1,0);
  FUN_0014d430(lVar10,"SOCKS5 communication to %s:%d\n",param_3,param_4);
  iVar5 = FUN_0014d840(param_6,uVar1,&local_2c0,cVar12 + '\x02',&local_2d0);
  if ((iVar5 != 0) || (local_2d0 != (ulong)local_2c0._1_1_ + 2)) {
    pcVar7 = "Unable to send initial SOCKS5 request.";
    goto LAB_0017475c;
  }
  FUN_00159524(uVar1,1);
  uVar4 = FUN_00159114(uVar1,0xffffffff,0xffffffff,iVar3);
  if (uVar4 == 0) {
    lVar10 = *param_6;
    pcVar7 = "SOCKS5 read timeout";
    goto LAB_00174640;
  }
  if (uVar4 == 0xffffffff) {
    lVar10 = *param_6;
    pcVar7 = "SOCKS5 nothing to read";
    goto LAB_0017475c;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    FUN_0014d5f8(*param_6,"SOCKS5 read error occurred");
    return 0x38;
  }
  local_2c8 = 0;
  FUN_00159524(uVar1,0);
  iVar3 = FUN_00173fec(param_6,uVar1,&local_2c0,2,&local_2c8);
  if ((iVar3 != 0) || (local_2c8 != 2)) {
    pcVar7 = "Unable to receive initial SOCKS5 response.";
    goto LAB_0017475c;
  }
  if ((char)local_2c0 != '\x05') {
    pcVar7 = "Received invalid version in initial SOCKS5 response.";
    goto LAB_0017475c;
  }
  if (local_2c0._1_1_ < 2) {
    if (local_2c0._1_1_ != 0) {
      if (local_2c0._1_1_ == 1) {
        pcVar7 = "SOCKS5 GSSAPI per-message authentication is not supported.";
        goto LAB_0017475c;
      }
LAB_001748c4:
      pcVar7 = "Undocumented SOCKS5 mode attempted to be used by server.";
      goto LAB_0017475c;
    }
  }
  else {
    if (local_2c0._1_1_ == 0xff) {
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
        pcVar7 = 
        "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
        ;
      }
      else {
        pcVar7 = "No authentication method was acceptable.";
      }
      goto LAB_0017475c;
    }
    if (local_2c0._1_1_ != 2) goto LAB_001748c4;
    if ((param_2 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
      __n_01 = 0;
      local_2be[0] = '\0';
      local_2c0 = 1;
      lVar11 = 3;
    }
    else {
      __n_00 = strlen(pcVar7);
      __n_01 = strlen(param_2);
      local_2c0 = CONCAT11((char)__n_00,1);
      if (__n_00 != 0) {
        memcpy((void *)((ulong)&local_2c0 | 2),pcVar7,__n_00);
      }
      lVar11 = __n_00 + 3;
      local_2be[__n_00] = (char)__n_01;
      if (__n_01 != 0) {
        memcpy(local_2be + __n_00 + 1,param_2,__n_01);
      }
    }
    iVar3 = FUN_0014d840(param_6,uVar1,&local_2c0,__n_01 + lVar11,&local_2d0);
    if ((iVar3 != 0) || (__n_01 + lVar11 != local_2d0)) {
      pcVar7 = "Failed to send SOCKS5 sub-negotiation request.";
      goto LAB_0017475c;
    }
    iVar3 = FUN_00173fec(param_6,uVar1,&local_2c0,2,&local_2c8);
    if ((iVar3 != 0) || (local_2c8 != 2)) {
      pcVar7 = "Unable to receive SOCKS5 sub-negotiation response.";
      goto LAB_0017475c;
    }
    if (local_2c0._1_1_ != '\0') {
      FUN_0014d5f8(lVar10,"User was rejected by the SOCKS5 server (%d %d).",(char)local_2c0);
      return 7;
    }
  }
  local_2be[0] = '\0';
  local_2c0 = 0x105;
  if (bVar2) {
    local_2d8 = (long *)0x0;
    iVar3 = FUN_0014a68c(param_6,param_3,param_4,&local_2d8);
    if (iVar3 == -1) {
      return 6;
    }
    if ((iVar3 == 1) && (uVar6 = FUN_00157480(param_6,&local_2d8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((local_2d8 == (long *)0x0) || (lVar11 = *local_2d8, lVar11 == 0)) {
LAB_00174b50:
      FUN_0014d5f8(lVar10,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
      return 6;
    }
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    FUN_0014a1dc(lVar11,&local_318,0x40);
    if (*(int *)(lVar11 + 4) != 2) {
      FUN_0014d5f8(lVar10,"SOCKS5 connection to %s not supported\n",&local_318);
      FUN_0014a8a0(lVar10,local_2d8);
      goto LAB_00174b50;
    }
    local_2be[1] = '\x01';
    lVar9 = *(long *)(lVar11 + 0x20);
    lVar11 = 0;
    do {
      local_2be[lVar11 + 2] = *(char *)(lVar9 + 4 + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    FUN_0014d430(lVar10,"SOCKS5 connect to IPv4 %s (locally resolved)\n",&local_318);
    FUN_0014a8a0(lVar10,local_2d8);
    lVar11 = 8;
  }
  else {
    local_2be[2] = (char)__n;
    local_2be[1] = '\x03';
    memcpy(local_2be + 3,param_3,__n);
    lVar11 = __n + 5;
  }
  *(ushort *)(local_2be + lVar11 + -2) =
       (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xff00ff) << 8);
  iVar3 = FUN_0014d840(param_6,uVar1,&local_2c0,lVar11 + 2,&local_2d0);
  if ((iVar3 == 0) && (lVar11 + 2 == local_2d0)) {
    iVar3 = FUN_00173fec(param_6,uVar1,&local_2c0,10,&local_2c8);
    if ((iVar3 == 0) && (local_2c8 == 10)) {
      if ((char)local_2c0 != '\x05') {
        pcVar7 = "SOCKS5 reply has wrong version, version should be 5.";
        goto LAB_0017475c;
      }
      if (local_2be[1] == '\x04') {
        lVar11 = 0x16;
      }
      else {
        if (local_2be[1] != '\x03') {
          lVar11 = 10;
          goto LAB_00174bb0;
        }
        lVar11 = (ulong)(byte)local_2be[2] + 7;
        if ((ulong)(byte)local_2be[2] < 4) goto LAB_00174bb0;
      }
      iVar3 = FUN_00173fec(param_6,uVar1,local_2b6,lVar11 + -10,&local_2c8);
      if ((iVar3 == 0) && (lVar11 + -10 == local_2c8)) {
LAB_00174bb0:
        if (local_2c0._1_1_ == '\0') {
          FUN_0014d430(lVar10,"SOCKS5 request granted.\n");
          FUN_00159524(uVar1,1);
          return 0;
        }
        if (local_2be[1] == '\x04') {
          pcVar7 = 
          "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
          ;
          uVar8 = local_2b8 & 0xff;
        }
        else {
          if (local_2be[1] == '\x03') {
            uVar8 = *(ushort *)(local_2be + lVar11 + -4);
            local_2be[lVar11 + -4] = '\0';
            FUN_0014d5f8(lVar10,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",local_2be + 3,
                         uVar8 >> 8 | uVar8 << 8,local_2c0._1_1_);
            return 7;
          }
          if (local_2be[1] != '\x01') {
            return 7;
          }
          pcVar7 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
          uVar8 = local_2b8 >> 8 | local_2b8 << 8;
          local_2b8._1_1_ = local_2c0._1_1_;
        }
        FUN_0014d5f8(lVar10,pcVar7,local_2be[2],local_2be[3],local_2be[4],local_2be[5],uVar8,
                     local_2b8._1_1_);
        return 7;
      }
    }
    pcVar7 = "Failed to receive SOCKS5 connect request ack.";
  }
  else {
    pcVar7 = "Failed to send SOCKS5 connect request.";
  }
LAB_0017475c:
  FUN_0014d5f8(lVar10,pcVar7);
  return 7;
}

