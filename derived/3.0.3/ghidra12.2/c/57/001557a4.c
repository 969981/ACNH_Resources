
undefined8
FUN_001557a4(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6,undefined8 *param_7,size_t *param_8,code *param_9
            ,code *param_10)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  char local_1e8 [72];
  undefined8 local_1a0;
  undefined8 local_198;
  char local_18c [65];
  undefined1 auStack_14b [65];
  undefined1 auStack_10a [65];
  undefined1 auStack_c9 [65];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_1a0 = 0;
  local_198 = 0;
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  memset(auStack_c9,0,0x41);
  memset(auStack_10a,0,0x41);
  memset(auStack_14b,0,0x41);
  memset(local_18c,0,0x41);
  if (param_6[1] == 0) {
    local_1e8[0x20] = 0;
    local_1e8[0x10] = '\0';
    local_1e8[0x11] = '\0';
    local_1e8[0x12] = '\0';
    local_1e8[0x13] = '\0';
    local_1e8[0x14] = '\0';
    local_1e8[0x15] = '\0';
    local_1e8[0x16] = '\0';
    local_1e8[0x17] = '\0';
    local_1e8[0x18] = '\0';
    local_1e8[0x19] = '\0';
    local_1e8[0x1a] = '\0';
    local_1e8[0x1b] = '\0';
    local_1e8[0x1c] = '\0';
    local_1e8[0x1d] = '\0';
    local_1e8[0x1e] = '\0';
    local_1e8[0x1f] = '\0';
    local_1e8[0] = '\0';
    local_1e8[1] = '\0';
    local_1e8[2] = '\0';
    local_1e8[3] = '\0';
    local_1e8[4] = '\0';
    local_1e8[5] = '\0';
    local_1e8[6] = '\0';
    local_1e8[7] = '\0';
    local_1e8[8] = '\0';
    local_1e8[9] = '\0';
    local_1e8[10] = '\0';
    local_1e8[0xb] = '\0';
    local_1e8[0xc] = '\0';
    local_1e8[0xd] = '\0';
    local_1e8[0xe] = '\0';
    local_1e8[0xf] = '\0';
    uVar5 = FUN_00154eb0(param_1,local_1e8,0x21);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    sVar8 = strlen(local_1e8);
    uVar5 = FUN_00155d24(param_1,local_1e8,sVar8,&local_198,&local_1a0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    param_6[1] = local_198;
  }
  pcVar6 = param_2;
  if ((*(byte *)((long)param_6 + 0x3c) >> 1 & 1) != 0) {
    lVar3 = FUN_00146120("%s:%s",param_2,param_6[2]);
    if (lVar3 == 0) {
      return 0x1b;
    }
    (*param_10)(&local_88,lVar3);
    FUN_00143300(lVar3);
    (*param_9)(&local_88,local_18c);
    if ((*(byte *)((long)param_6 + 0x3c) & 2) != 0) {
      pcVar6 = local_18c;
    }
  }
  lVar3 = FUN_00146120("%s:%s:%s",pcVar6,param_6[2],param_3);
  if (lVar3 == 0) {
    return 0x1b;
  }
  (*param_10)(&local_88,lVar3);
  FUN_00143300(lVar3);
  (*param_9)(&local_88,auStack_10a);
  if ((*(uint *)(param_6 + 3) < 6) && ((1 << (ulong)(*(uint *)(param_6 + 3) & 0x1f) & 0x2aU) != 0))
  {
    lVar3 = FUN_00146120("%s:%s:%s",auStack_10a,*param_6,param_6[1]);
    if (lVar3 == 0) {
      return 0x1b;
    }
    (*param_10)(&local_88,lVar3);
    FUN_00143300(lVar3);
    (*param_9)(&local_88,auStack_10a);
  }
  lVar3 = FUN_00146120("%s:%s",param_4,param_5);
  if (lVar3 == 0) {
    return 0x1b;
  }
  lVar4 = lVar3;
  if ((param_6[5] != 0) && (iVar2 = FUN_00144a90(param_6[5],"auth-int"), iVar2 != 0)) {
    memset(local_1e8,0,0x41);
    (*param_10)(&local_88,&DAT_0407ebb1);
    (*param_9)(&local_88,local_1e8);
    lVar4 = FUN_00146120("%s:%s",lVar3,local_1e8);
    FUN_00143300(lVar3);
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  (*param_10)(&local_88,lVar4);
  FUN_00143300(lVar4);
  (*param_9)(&local_88,auStack_14b);
  if (param_6[5] == 0) {
    lVar3 = FUN_00146120("%s:%s:%s",auStack_10a,*param_6,auStack_14b);
  }
  else {
    lVar3 = FUN_00146120("%s:%s:%08x:%s:%s:%s",auStack_10a,*param_6,*(undefined4 *)(param_6 + 7),
                         param_6[1],param_6[5],auStack_14b);
  }
  if (lVar3 == 0) {
    return 0x1b;
  }
  (*param_10)(&local_88,lVar3);
  FUN_00143300(lVar3);
  (*param_9)(&local_88,auStack_c9);
  lVar3 = 1;
  if ((*(byte *)((long)param_6 + 0x3c) & 2) != 0) {
    param_2 = local_18c;
  }
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\"') {
LAB_00155ad0:
      lVar3 = lVar3 + 2;
    }
    else {
      if (cVar1 == '\0') {
        pcVar6 = (char *)FUN_001432f0(lVar3);
        if (pcVar6 == (char *)0x0) {
          return 0x1b;
        }
        pcVar7 = pcVar6;
        do {
          cVar1 = *param_2;
          if ((cVar1 == '\"') || (cVar1 == '\\')) {
            pcVar9 = pcVar7 + 1;
            *pcVar7 = '\\';
            cVar1 = *param_2;
          }
          else {
            pcVar9 = pcVar7;
            if (cVar1 == '\0') {
              *pcVar7 = '\0';
              if (param_6[5] == 0) {
                pcVar7 = (char *)FUN_00146120("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                              ,pcVar6,param_6[2],*param_6,param_5,auStack_c9);
              }
              else {
                pcVar7 = (char *)FUN_00146120("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                              ,pcVar6,param_6[2],*param_6,param_5,param_6[1],
                                              *(undefined4 *)(param_6 + 7),param_6[5],auStack_c9);
                iVar2 = FUN_00144a90(param_6[5],&DAT_040e1e41);
                if (iVar2 != 0) {
                  *(int *)(param_6 + 7) = *(int *)(param_6 + 7) + 1;
                }
              }
              FUN_00143300(pcVar6);
              if (pcVar7 == (char *)0x0) {
                return 0x1b;
              }
              pcVar6 = pcVar7;
              if (param_6[4] != 0) {
                pcVar6 = (char *)FUN_00146120("%s, opaque=\"%s\"",pcVar7);
                FUN_00143300(pcVar7);
                if (pcVar6 == (char *)0x0) {
                  return 0x1b;
                }
              }
              pcVar7 = pcVar6;
              if (param_6[6] != 0) {
                pcVar7 = (char *)FUN_00146120("%s, algorithm=\"%s\"",pcVar6);
                FUN_00143300(pcVar6);
                if (pcVar7 == (char *)0x0) {
                  return 0x1b;
                }
              }
              pcVar6 = pcVar7;
              if ((*(byte *)((long)param_6 + 0x3c) >> 1 & 1) != 0) {
                pcVar6 = (char *)FUN_00146120("%s, userhash=true",pcVar7);
                FUN_00143300(pcVar7);
                if (pcVar6 == (char *)0x0) {
                  return 0x1b;
                }
              }
              *param_7 = pcVar6;
              sVar8 = strlen(pcVar6);
              *param_8 = sVar8;
              return 0;
            }
          }
          param_2 = param_2 + 1;
          pcVar7 = pcVar9 + 1;
          *pcVar9 = cVar1;
        } while( true );
      }
      if (cVar1 == '\\') goto LAB_00155ad0;
      lVar3 = lVar3 + 1;
    }
    pcVar6 = pcVar6 + 1;
  } while( true );
}

