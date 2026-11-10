
undefined8 FUN_0014a9a0(long param_1)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  char *__s;
  char *local_2c0;
  char local_2b8 [70];
  char acStack_272 [262];
  undefined4 local_16c;
  char local_168 [264];
  
  local_16c = 0;
  plVar8 = *(long **)(param_1 + 0xf80);
  *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfb;
  if (plVar8 != (long *)0x0) {
    memset(local_168,0,0x100);
    do {
      memset(acStack_272,0,0x106);
      pcVar7 = (char *)*plVar8;
      if (pcVar7 != (char *)0x0) {
        if (*pcVar7 == '-') {
          iVar1 = sscanf(pcVar7 + 1,"%255[^:]:%d",local_168,&local_16c);
          if (iVar1 == 2) {
            FUN_0014a624(local_168,local_16c,acStack_272);
            sVar2 = strlen(acStack_272);
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_0014b7c4(param_1,3,2);
            }
            FUN_0014b02c(*(undefined8 *)(param_1 + 200),acStack_272,sVar2 + 1);
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_0014b80c(param_1,3);
            }
          }
          else {
            FUN_0014d430(param_1,"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",*plVar8);
          }
        }
        else {
          local_2b8[0x30] = '\0';
          local_2b8[0x31] = '\0';
          local_2b8[0x32] = '\0';
          local_2b8[0x33] = '\0';
          local_2b8[0x34] = '\0';
          local_2b8[0x35] = '\0';
          local_2b8[0x36] = '\0';
          local_2b8[0x37] = '\0';
          local_2b8[0x38] = '\0';
          local_2b8[0x39] = '\0';
          local_2b8[0x3a] = '\0';
          local_2b8[0x3b] = '\0';
          local_2b8[0x3c] = '\0';
          local_2b8[0x3d] = '\0';
          local_2b8[0x3e] = '\0';
          local_2b8[0x3f] = '\0';
          local_2c0 = (char *)0x0;
          local_2b8[0x20] = '\0';
          local_2b8[0x21] = '\0';
          local_2b8[0x22] = '\0';
          local_2b8[0x23] = '\0';
          local_2b8[0x24] = '\0';
          local_2b8[0x25] = '\0';
          local_2b8[0x26] = '\0';
          local_2b8[0x27] = '\0';
          local_2b8[0x28] = '\0';
          local_2b8[0x29] = '\0';
          local_2b8[0x2a] = '\0';
          local_2b8[0x2b] = '\0';
          local_2b8[0x2c] = '\0';
          local_2b8[0x2d] = '\0';
          local_2b8[0x2e] = '\0';
          local_2b8[0x2f] = '\0';
          local_2b8[0x10] = '\0';
          local_2b8[0x11] = '\0';
          local_2b8[0x12] = '\0';
          local_2b8[0x13] = '\0';
          local_2b8[0x14] = '\0';
          local_2b8[0x15] = '\0';
          local_2b8[0x16] = '\0';
          local_2b8[0x17] = '\0';
          local_2b8[0x18] = '\0';
          local_2b8[0x19] = '\0';
          local_2b8[0x1a] = '\0';
          local_2b8[0x1b] = '\0';
          local_2b8[0x1c] = '\0';
          local_2b8[0x1d] = '\0';
          local_2b8[0x1e] = '\0';
          local_2b8[0x1f] = '\0';
          local_2b8[0] = '\0';
          local_2b8[1] = '\0';
          local_2b8[2] = '\0';
          local_2b8[3] = '\0';
          local_2b8[4] = '\0';
          local_2b8[5] = '\0';
          local_2b8[6] = '\0';
          local_2b8[7] = '\0';
          local_2b8[8] = '\0';
          local_2b8[9] = '\0';
          local_2b8[10] = '\0';
          local_2b8[0xb] = '\0';
          local_2b8[0xc] = '\0';
          local_2b8[0xd] = '\0';
          local_2b8[0xe] = '\0';
          local_2b8[0xf] = '\0';
          pcVar10 = (char *)*plVar8;
          pcVar7 = strchr(pcVar10,0x3a);
          lVar9 = 0;
          if (pcVar7 != (char *)0x0) {
            if ((long)pcVar7 - (long)pcVar10 < 0x100) {
              memcpy(local_168,pcVar10,(long)pcVar7 - (long)pcVar10);
              pcVar7[(long)(local_168 + -*plVar8)] = '\0';
              uVar3 = strtoul(pcVar7 + 1,&local_2c0,10);
              if (uVar3 >> 0x10 == 0) {
                if ((local_2c0 != pcVar7 + 1) && (*local_2c0 == ':')) {
                  local_16c = (undefined4)uVar3;
                  pcVar7 = local_2c0 + 1;
                  if (*local_2c0 != '\0') {
                    lVar9 = 0;
                    lVar6 = 0;
                    pcVar10 = local_2c0;
                    do {
                      __s = pcVar10 + 1;
                      pcVar4 = strchr(__s,0x2c);
                      if (pcVar4 == (char *)0x0) {
                        sVar2 = strlen(__s);
                        pcVar4 = __s + sVar2;
                      }
                      if (*__s == '[') {
                        if (pcVar4 != __s) {
                          if (pcVar4[-1] == ']') {
                            __s = pcVar10 + 2;
                            pcVar10 = pcVar4 + -1;
                            goto LAB_0014abbc;
                          }
LAB_0014ad84:
                          __s = pcVar4;
                        }
                        local_2c0 = __s;
                        goto LAB_0014ad60;
                      }
                      pcVar10 = pcVar4;
LAB_0014abbc:
                      uVar3 = (long)pcVar10 - (long)__s;
                      lVar5 = lVar6;
                      if (uVar3 != 0) {
                        if (0x3f < uVar3) goto LAB_0014ad84;
                        memcpy(local_2b8,__s,uVar3);
                        local_2b8[uVar3] = '\0';
                        pcVar10 = strchr(local_2b8,0x3a);
                        if (pcVar10 == (char *)0x0) {
                          lVar5 = FUN_0014b598(local_2b8,local_16c);
                          if (lVar5 == 0) {
                            local_2c0 = pcVar4;
                            FUN_0014d430(param_1,"Resolve address \'%s\' found illegal!\n",local_2b8
                                        );
                            goto LAB_0014ad60;
                          }
                          if (lVar6 == 0) {
                            lVar9 = lVar5;
                          }
                          else {
                            *(long *)(lVar6 + 0x28) = lVar5;
                          }
                        }
                        else {
                          FUN_0014d430(param_1,
                                       "Ignoring resolve address \'%s\', missing IPv6 support.\n",
                                       local_2b8);
                        }
                      }
                      lVar6 = lVar5;
                      pcVar10 = pcVar4;
                    } while (*pcVar4 != '\0');
                    local_2c0 = pcVar4;
                    if (lVar9 != 0) {
                      FUN_0014a624(local_168,local_16c,acStack_272);
                      sVar2 = strlen(acStack_272);
                      if (*(long *)(param_1 + 0xe8) != 0) {
                        FUN_0014b7c4(param_1,3,2);
                      }
                      lVar6 = FUN_0014b0d0(*(undefined8 *)(param_1 + 200),acStack_272,sVar2 + 1);
                      if (lVar6 != 0) {
                        FUN_0014d430(param_1,"RESOLVE %s:%d is - old addresses discarded!\n",
                                     local_168,local_16c);
                        FUN_0014b02c(*(undefined8 *)(param_1 + 200),acStack_272,sVar2 + 1);
                      }
                      lVar6 = FUN_0014a41c(param_1,lVar9,local_168,local_16c);
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 8) = 0;
                        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
                      }
                      if (*(long *)(param_1 + 0xe8) != 0) {
                        FUN_0014b80c(param_1,3);
                      }
                      if (lVar6 == 0) {
                        FUN_0014b378(lVar9);
                        return 0x1b;
                      }
                      FUN_0014d430(param_1,"Added %s:%d:%s to DNS cache\n",local_168,local_16c,
                                   pcVar7);
                      if ((local_168[0] == '*') && (local_168[1] == '\0')) {
                        FUN_0014d430(param_1,"RESOLVE %s:%d is wildcard, enabling wildcard checks\n"
                                     ,local_168,local_16c);
                        *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) | 4;
                      }
                      goto LAB_0014ad78;
                    }
                    goto LAB_0014ad60;
                  }
                }
                lVar9 = 0;
                goto LAB_0014ad60;
              }
            }
            lVar9 = 0;
          }
LAB_0014ad60:
          FUN_0014d430(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*plVar8);
          FUN_0014b378(lVar9);
        }
      }
LAB_0014ad78:
      plVar8 = (long *)plVar8[1];
    } while (plVar8 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xf80) = 0;
  return 0;
}

