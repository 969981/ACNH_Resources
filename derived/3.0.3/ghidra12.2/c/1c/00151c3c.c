
undefined8 FUN_00151c3c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *local_68;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  do {
    pcVar9 = (char *)*param_3;
    if (*pcVar9 == ':') {
LAB_00151cfc:
      pcVar5 = pcVar9 + 1;
      if (*pcVar5 != ':') {
        pcVar9 = strchr(pcVar5,0x3a);
        if (pcVar9 != (char *)0x0) {
          local_68 = (char *)0x0;
          lVar8 = strtol(pcVar5,&local_68,10);
          if ((local_68 == pcVar9) && (lVar8 == *(int *)(param_2 + 0x198))) {
            pcVar9 = pcVar9 + 1;
            goto LAB_00151d10;
          }
        }
        goto LAB_00151e48;
      }
      pcVar9 = pcVar9 + 2;
LAB_00151d10:
      if (*pcVar9 == '\0') goto LAB_00151e48;
      pcVar9 = (char *)FUN_00143320();
      if (pcVar9 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar9 == '[') {
        FUN_0014d5f8(param_1,"Use of IPv6 in *_CONNECT_TO without IPv6 support built-in!");
        uVar10 = 4;
        goto LAB_00151ed8;
      }
      pcVar5 = strchr(pcVar9,0x3a);
      if (pcVar5 == (char *)0x0) {
LAB_00151dd0:
        uVar7 = 0xffffffff;
      }
      else {
        *pcVar5 = '\0';
        local_68 = (char *)0x0;
        pcVar5 = pcVar5 + 1;
        if (*pcVar5 == '\0') goto LAB_00151dd0;
        uVar7 = strtol(pcVar5,&local_68,10);
        if (local_68 == (char *)0x0) {
          if (uVar7 >> 0x10 != 0) goto LAB_00151e28;
        }
        else if (((*local_68 != '\0') || ((long)uVar7 < 0)) || (0xffff < (long)uVar7)) {
LAB_00151e28:
          FUN_0014d430(param_1,"No valid port number in connect to host string (%s)\n",pcVar5);
          FUN_00143300(pcVar9);
          goto LAB_00151e48;
        }
      }
      iVar4 = (int)uVar7;
      pcVar5 = (char *)FUN_00143320(pcVar9);
      if (pcVar5 == (char *)0x0) {
        uVar10 = 0x1b;
LAB_00151ed8:
        FUN_00143300(pcVar9);
        return uVar10;
      }
      FUN_00143300(pcVar9);
      if (*pcVar5 == '\0') goto LAB_00151e4c;
      *(char **)(param_2 + 0xf0) = pcVar5;
      *(char **)(param_2 + 0x100) = pcVar5;
      *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 4;
      FUN_0014d430(param_1,"Connecting to hostname: %s\n",pcVar5);
    }
    else {
      bVar3 = (*(uint *)(param_2 + 0x41c) & 0x200) != 0;
      puVar1 = &DAT_0407ebb1;
      if (bVar3) {
        puVar1 = (undefined8 *)&DAT_0408f254;
      }
      puVar2 = &DAT_0407ebb1;
      if (bVar3) {
        puVar2 = (undefined8 *)&DAT_040bd946;
      }
      pcVar5 = (char *)FUN_00146120("%s%s%s",puVar1,*(undefined8 *)(param_2 + 0xd0),puVar2);
      if (pcVar5 == (char *)0x0) {
        return 0x1b;
      }
      sVar6 = strlen(pcVar5);
      iVar4 = FUN_00144b34(pcVar9,pcVar5,sVar6);
      FUN_00143300(pcVar5);
      if ((iVar4 != 0) && (pcVar9 = pcVar9 + sVar6, *pcVar9 == ':')) goto LAB_00151cfc;
LAB_00151e48:
      pcVar5 = (char *)0x0;
      iVar4 = -1;
LAB_00151e4c:
      *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) & 0xfffffffb;
      FUN_00143300(pcVar5);
      pcVar5 = (char *)0x0;
    }
    if (-1 < iVar4) {
      *(int *)(param_2 + 0x19c) = iVar4;
      *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) | 8;
      FUN_0014d430(param_1,"Connecting to port: %d\n",iVar4);
      return 0;
    }
    *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) & 0xfffffff7;
    if (pcVar5 != (char *)0x0) {
      return 0;
    }
    param_3 = (undefined8 *)param_3[1];
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}

