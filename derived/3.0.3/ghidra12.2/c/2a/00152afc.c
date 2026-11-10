
undefined8 FUN_00152afc(long param_1,long param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  byte *__s;
  byte *pbVar11;
  byte *pbVar12;
  char *local_68;
  char *local_60;
  long local_58;
  
  local_58 = 0;
  local_60 = (char *)0x0;
  pcVar6 = strstr((char *)param_3,"://");
  if (pcVar6 == (char *)0x0) {
    pbVar12 = param_3;
LAB_00152b6c:
    bVar4 = param_4 == 2;
    if ((bVar4) && ((*(uint *)(PTR_DAT_04be2008 + 0x10) >> 4 & 1) == 0)) {
      FUN_0014d5f8(param_1,
                   "Unsupported proxy \'%s\', libcurl is built without the HTTPS-proxy support.",
                   param_3);
      return 4;
    }
  }
  else {
    pbVar12 = (byte *)(pcVar6 + 3);
    iVar5 = thunk_FUN_00144b34(&DAT_040f72ef,param_3,5);
    if (iVar5 != 0) {
      param_4 = 2;
      goto LAB_00152b6c;
    }
    iVar5 = thunk_FUN_00144b34("socks5h",param_3,7);
    if (iVar5 == 0) {
      iVar5 = thunk_FUN_00144b34("socks5",param_3,6);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN_00144b34("socks4a",param_3,7);
        if (iVar5 == 0) {
          iVar5 = thunk_FUN_00144b34("socks4",param_3,6);
          if ((iVar5 == 0) && (iVar5 = thunk_FUN_00144b34("socks",param_3,5), iVar5 == 0)) {
            iVar5 = thunk_FUN_00144b34("http:",param_3,5);
            if (iVar5 == 0) {
              FUN_0014d5f8(param_1,"Unsupported proxy scheme for \'%s\'",param_3);
              return 7;
            }
            goto LAB_00152b6c;
          }
          bVar4 = false;
          param_4 = 4;
        }
        else {
          bVar4 = false;
          param_4 = 6;
        }
      }
      else {
        bVar4 = false;
        param_4 = 5;
      }
    }
    else {
      bVar4 = false;
      param_4 = 7;
    }
  }
  pcVar6 = strchr((char *)pbVar12,0x40);
  if (pcVar6 != (char *)0x0) {
    uVar7 = FUN_0014fed4(pbVar12,(long)pcVar6 - (long)pbVar12,&local_58,&local_60,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pbVar12 = (byte *)(pcVar6 + 1);
  }
  __s = pbVar12;
  if (*pbVar12 == 0x5b) {
    __s = pbVar12 + 1;
    pbVar11 = __s;
    if (*__s != 0) {
      pbVar12 = pbVar12 + 2;
      do {
        pbVar11 = pbVar12;
        iVar5 = FUN_00146594();
        if (((iVar5 == 0) && (bVar3 = pbVar11[-1], bVar3 != 0x2e)) && (bVar3 != 0x3a)) {
          if (bVar3 != 0x25) {
            pbVar11 = pbVar11 + -1;
            goto LAB_00152f88;
          }
          iVar5 = strncmp("%25",(char *)(pbVar11 + -1),3);
          if (iVar5 != 0) {
            FUN_0014d430(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
          }
          bVar3 = *pbVar11;
          goto joined_r0x00152f40;
        }
        pbVar12 = pbVar11 + 1;
      } while (*pbVar11 != 0);
    }
    goto LAB_00152cc8;
  }
  goto LAB_00152cdc;
joined_r0x00152f40:
  if (bVar3 == 0) goto LAB_00152cc8;
  iVar5 = FUN_001465e8();
  if ((iVar5 == 0) && (iVar5 = FUN_00146594(*pbVar11), iVar5 == 0)) {
    bVar3 = *pbVar11;
    if ((1 < bVar3 - 0x2d) && ((bVar3 != 0x7e && (bVar3 != 0x5f)))) goto LAB_00152f88;
  }
  pbVar11 = pbVar11 + 1;
  bVar3 = *pbVar11;
  goto joined_r0x00152f40;
LAB_00152f88:
  if (bVar3 == 0x5d) {
    pbVar12 = pbVar11 + 1;
    *pbVar11 = 0;
  }
  else {
LAB_00152cc8:
    FUN_0014d430(param_1,"Invalid IPv6 address format\n");
    pbVar12 = pbVar11;
  }
LAB_00152cdc:
  pcVar6 = strchr((char *)pbVar12,0x3a);
  if (pcVar6 == (char *)0x0) {
    if (*__s == 0x2f) {
      FUN_00143300(local_58);
      local_58 = 0;
      FUN_00143300(local_60);
      return 5;
    }
    pcVar6 = strchr((char *)__s,0x2f);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    uVar8 = 0x1bb;
    if (!bVar4) {
      uVar8 = 0x438;
    }
    if (*(ulong *)(param_1 + 0x680) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x680);
    }
  }
  else {
    local_68 = (char *)0x0;
    *pcVar6 = '\0';
    uVar8 = strtol(pcVar6 + 1,&local_68,10);
    if (((local_68 == (char *)0x0) || (cVar2 = *local_68, cVar2 == '\0')) || (cVar2 == '/')) {
      if (uVar8 < 0x10000) goto LAB_00152db4;
    }
    else if (((cVar2 == ' ') && (-1 < (long)uVar8)) && ((long)uVar8 < 0x10000)) {
LAB_00152db4:
      *(ulong *)(param_2 + 400) = uVar8;
      goto LAB_00152db8;
    }
    FUN_0014d430(param_1,"No valid port number in proxy string (%s)\n",pcVar6 + 1);
  }
LAB_00152db8:
  if (*__s == 0) {
LAB_00152ecc:
    FUN_00143300(local_58);
    local_58 = 0;
    FUN_00143300(local_60);
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x110);
    if ((param_4 & 0xfffffffc) != 4) {
      plVar1 = (long *)(param_2 + 0x150);
    }
    *(uint *)(plVar1 + 5) = param_4;
    if (local_58 == 0) {
LAB_00152e84:
      if ((-1 < (long)uVar8) &&
         (((plVar1[4] = uVar8, (param_4 & 0xfffffffc) == 4 || (*(long *)(param_2 + 400) < 0)) ||
          (*(long *)(param_2 + 0x110) == 0)))) {
        *(ulong *)(param_2 + 400) = uVar8;
      }
      FUN_00143300(*plVar1);
      *plVar1 = 0;
      lVar9 = FUN_00143320(__s);
      *plVar1 = lVar9;
      plVar1[2] = lVar9;
      if (lVar9 != 0) goto LAB_00152ecc;
    }
    else {
      FUN_00143300(plVar1[6]);
      plVar1[6] = 0;
      lVar9 = FUN_00144c7c(param_1,local_58,0,0);
      plVar1[6] = lVar9;
      FUN_00143300(local_58);
      local_58 = 0;
      if (plVar1[6] == 0) {
        FUN_00143300(local_60);
      }
      else {
        FUN_00143300(plVar1[7]);
        pcVar6 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (char *)0x0) || (sVar10 = strlen(local_60), 0xff < sVar10)) {
          lVar9 = FUN_00143320(&DAT_0407ebb1);
        }
        else {
          lVar9 = FUN_00144c7c(param_1,pcVar6,0,0);
        }
        plVar1[7] = lVar9;
        FUN_00143300(local_60);
        local_60 = (char *)0x0;
        if (plVar1[7] != 0) {
          *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 0x100;
          goto LAB_00152e84;
        }
      }
    }
    uVar7 = 0x1b;
  }
  return uVar7;
}

