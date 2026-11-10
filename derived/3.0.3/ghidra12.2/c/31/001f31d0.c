
undefined8
FUN_001f31d0(long param_1,char *param_2,long param_3,char *param_4,long param_5,ulong *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  char cVar11;
  size_t sVar12;
  long lVar13;
  char local_a0 [32];
  char local_80 [32];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  memset((char *)(param_1 + 0x34),0,0x400);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar10 = *param_2;
  if (cVar10 == '\0') {
    return 0;
  }
  lVar13 = 0;
  do {
    cVar11 = '\r';
    if (cVar10 == '\r') {
      cVar10 = param_2[lVar13 + 1];
      if (cVar10 != '\n') {
LAB_001f3278:
        cVar11 = '\n';
        goto LAB_001f327c;
      }
      if (param_2[lVar13 + 2] == '\r') {
        cVar10 = '\0';
        if (param_2[lVar13 + 3] != '\0') {
          cVar10 = param_2[lVar13 + 3];
        }
        goto LAB_001f3278;
      }
      if (param_2[lVar13 + 2] == '\r') goto LAB_001f32ac;
    }
    else {
LAB_001f327c:
      if (cVar11 == cVar10) {
LAB_001f32ac:
        if (lVar13 < 0) {
          return 0;
        }
        iVar3 = strncmp(param_2,"HTTP/",5);
        if (iVar3 != 0) {
          return 0;
        }
        pcVar4 = strchr(param_2,0x20);
        if (pcVar4 == (char *)0x0) {
          iVar3 = *(int *)(param_1 + 0x30);
        }
        else {
          iVar3 = atoi(pcVar4 + 1);
          *(int *)(param_1 + 0x30) = iVar3;
        }
        if ((iVar3 - 0x12dU < 8) && ((1 << (ulong)(iVar3 - 0x12dU & 0x1f) & 0xc3U) != 0)) {
          if (*param_2 == '\0') {
            return 0;
          }
          lVar13 = FUN_00192290(param_2,"Location:",0xffffffffffffffff);
          if (lVar13 == 0) {
            return 0;
          }
          if (lVar13 - (long)param_2 < 0) {
            return 0;
          }
          sVar12 = (lVar13 - (long)param_2) + 9;
          sVar5 = strlen(param_2);
          iVar3 = (int)sVar12;
          if ((int)sVar5 <= iVar3) goto LAB_001f33ac;
          sVar12 = (size_t)iVar3;
          iVar3 = (((int)sVar5 + (int)param_2) - (int)lVar13) + -9;
          break;
        }
        if (iVar3 != 0x65) {
          return 0;
        }
        if (*param_2 == '\0') {
          return 0;
        }
        lVar6 = FUN_00192290(param_2,"Upgrade: websocket",0xffffffffffffffff);
        lVar9 = lVar6 - (long)param_2;
        if (lVar6 == 0) {
          lVar9 = -1;
        }
        if (lVar9 < 0) {
          return 0;
        }
        lVar6 = lVar13 + 3;
        if (lVar6 < lVar9) {
          return 0;
        }
        lVar9 = FUN_001f3fe0(param_2,"Connection: Upgrade",0);
        if (lVar9 < 0) {
          return 0;
        }
        if (lVar6 < lVar9) {
          return 0;
        }
        lVar9 = FUN_001f3fe0(param_2,"Sec-Websocket-Accept:",0);
        if (lVar9 < 0) {
          return 0;
        }
        if (lVar6 < lVar9) {
          return 0;
        }
        iVar3 = FUN_001f4030(param_2,lVar9 + 0x15);
        uVar7 = FUN_001f3f00(param_2,&DAT_040a395c,(long)iVar3);
        if ((long)uVar7 < 0) {
          return 0;
        }
        uVar8 = (int)uVar7 - 1;
        if ((int)uVar8 < 0) goto LAB_001f34f0;
        uVar8 = 0xffffffff;
        goto LAB_001f34d0;
      }
    }
    cVar10 = param_2[lVar13 + 1];
    if (cVar10 == '\0') {
      return 0;
    }
    bVar2 = lVar13 == -2;
    lVar13 = lVar13 + 1;
    if (bVar2) {
      return 0;
    }
  } while( true );
  while( true ) {
    sVar12 = sVar12 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
    if (param_2[sVar12] != ' ') goto LAB_001f33ac;
  }
  sVar12 = sVar5;
LAB_001f33ac:
  param_2 = param_2 + (int)sVar12;
  if (*param_2 == '\0') {
    return 0;
  }
  lVar13 = FUN_00192290(param_2,&DAT_04064ffd,0xffffffffffffffff);
  if (lVar13 == 0) {
    return 0;
  }
  uVar7 = lVar13 - (long)param_2;
  if (uVar7 < 0x400) {
    strncpy((char *)(param_1 + 0x34),param_2,uVar7);
    *(undefined1 *)(param_1 + uVar7 + 0x34) = 0;
    return 0;
  }
  return 0;
  while (0 < (int)uVar1) {
LAB_001f34d0:
    uVar1 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar1;
    if (param_2[uVar7] != ' ') {
      uVar8 = uVar1;
      break;
    }
  }
LAB_001f34f0:
  if ((int)uVar8 <= iVar3) {
    return 0;
  }
  if (uVar8 - iVar3 != 0x1b) {
    return 0;
  }
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[8] = '\0';
  local_80[9] = '\0';
  local_80[10] = '\0';
  local_80[0xb] = '\0';
  local_80[0xc] = '\0';
  local_80[0xd] = '\0';
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  strncpy(local_80,param_2 + iVar3,0x1c);
  local_a0[0x18] = '\0';
  local_a0[0x19] = '\0';
  local_a0[0x1a] = '\0';
  local_a0[0x1b] = '\0';
  local_a0[0x1c] = '\0';
  local_a0[8] = '\0';
  local_a0[9] = '\0';
  local_a0[10] = '\0';
  local_a0[0xb] = '\0';
  local_a0[0xc] = '\0';
  local_a0[0xd] = '\0';
  local_a0[0xe] = '\0';
  local_a0[0xf] = '\0';
  local_a0[0x10] = '\0';
  local_a0[0x11] = '\0';
  local_a0[0x12] = '\0';
  local_a0[0x13] = '\0';
  local_a0[0x14] = '\0';
  local_a0[0x15] = '\0';
  local_a0[0x16] = '\0';
  local_a0[0x17] = '\0';
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  FUN_001f4080(*(undefined8 *)(param_1 + 0x20),local_a0);
  iVar3 = strcmp(local_80,local_a0);
  if (iVar3 != 0) {
    return 0;
  }
  if (lVar6 < param_3 + -1) {
    uVar7 = (param_3 - lVar13) - 4;
    *param_6 = uVar7;
    if (param_5 + 1U < uVar7) {
      return 0;
    }
    strncpy(param_4,param_2 + lVar13 + 4,uVar7);
    param_4[*param_6] = '\0';
  }
  return 1;
}

