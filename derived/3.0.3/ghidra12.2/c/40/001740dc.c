
undefined8
FUN_001740dc(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  long local_1a8 [8];
  undefined2 local_168;
  undefined2 local_166;
  undefined4 local_164;
  char local_160;
  char acStack_15f [255];
  long *local_48;
  
  uVar10 = *param_5;
  iVar3 = *(int *)(param_5 + 0x27);
  uVar4 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 600);
  iVar5 = FUN_00157b2c(uVar10,0,1);
  if (iVar5 < 0) {
    FUN_0014d5f8(uVar10,"Connection time-out");
    return 0x1c;
  }
  if ((*(byte *)((long)param_5 + 0x41c) >> 5 & 1) != 0) {
    puVar2 = (undefined8 *)&DAT_0406a4a0;
    if (iVar3 != 6) {
      puVar2 = &DAT_0407ebb1;
    }
    FUN_0014d430(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar2,param_2,param_3);
  }
  memset(&local_164,0,0x102);
  FUN_00159524(uVar4,0);
  FUN_0014d430(uVar10,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_168 = 0x104;
  local_166 = CONCAT11((char)param_3,(char)((uint)param_3 >> 8));
  if (iVar3 != 6) {
    local_48 = (long *)0x0;
    iVar5 = FUN_0014a68c(param_5,param_2,param_3,&local_48);
    if (iVar5 == -1) {
      return 5;
    }
    if (iVar5 == 1) {
      FUN_00157480(param_5,&local_48);
    }
    if ((local_48 == (long *)0x0) || (lVar11 = *local_48, lVar11 == 0)) {
LAB_00174418:
      FUN_0014d5f8(uVar10,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    FUN_0014a1dc(lVar11,local_1a8,0x40);
    if (*(int *)(lVar11 + 4) != 2) {
      FUN_0014d5f8(uVar10,"SOCKS4 connection to %s not supported\n",local_1a8);
      FUN_0014a8a0(uVar10,local_48);
      goto LAB_00174418;
    }
    local_164 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 4);
    FUN_0014d430(uVar10,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_1a8);
    FUN_0014a8a0(uVar10,local_48);
  }
  local_160 = '\0';
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    if (0xfd < sVar6) {
      pcVar8 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_001743e8;
    }
    memcpy(&local_160,param_1,sVar6 + 1);
  }
  local_1a8[0] = 0;
  local_48 = (long *)0x0;
  sVar6 = strlen(&local_160);
  lVar11 = 0;
  if (iVar3 == 6) {
    local_164 = 0x1000000;
    sVar7 = strlen(param_2);
    lVar11 = sVar7 + 1;
    if ((long)(lVar11 + sVar6 + 9) < 0x107) {
      strcpy(acStack_15f + sVar6,param_2);
    }
    else {
      lVar11 = 0;
    }
  }
  plVar1 = (long *)(lVar11 + sVar6 + 9);
  iVar5 = FUN_0014d840(param_5,uVar4,&local_168,plVar1,&local_48);
  if ((iVar5 == 0) && (local_48 == plVar1)) {
    if ((iVar3 == 6) && (lVar11 == 0)) {
      sVar6 = strlen(param_2);
      iVar5 = FUN_0014d840(param_5,uVar4,param_2,(long *)(sVar6 + 1),&local_48);
      if ((iVar5 != 0) || (local_48 != (long *)(sVar6 + 1))) goto LAB_001743d4;
    }
    iVar5 = FUN_00173fec(param_5,uVar4,&local_168,8,local_1a8);
    if ((iVar5 == 0) && (local_1a8[0] == 8)) {
      if ((char)local_168 == '\0') {
        switch(local_168._1_1_) {
        case 0x5a:
          puVar2 = (undefined8 *)&DAT_0406a4a0;
          if (iVar3 != 6) {
            puVar2 = &DAT_0407ebb1;
          }
          FUN_0014d430(uVar10,"SOCKS4%s request granted.\n",puVar2);
          FUN_00159524(uVar4,1);
          return 0;
        case 0x5b:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          uVar9 = 0x5b;
          break;
        case 0x5c:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          uVar9 = 0x5c;
          break;
        case 0x5d:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          uVar9 = 0x5d;
          break;
        default:
          pcVar8 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
          uVar9 = local_168._1_1_;
        }
        FUN_0014d5f8(uVar10,pcVar8,(undefined1)local_164,local_164._1_1_,local_164._2_1_,
                     local_164._3_1_,local_166 >> 8 | local_166 << 8,uVar9);
        return 7;
      }
      pcVar8 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar8 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
LAB_001743d4:
    pcVar8 = "Failed to send SOCKS4 connect request.";
  }
LAB_001743e8:
  FUN_0014d5f8(uVar10,pcVar8);
  return 7;
}

