
void FUN_001b8590(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char *__haystack;
  undefined8 *puVar9;
  undefined1 local_9c [4];
  undefined1 auStack_98 [24];
  char acStack_80 [64];
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_001e1538(*(undefined8 *)(param_1 + 8));
  puVar8 = (undefined8 *)(param_1 + 0x20);
  FUN_001dbbb8(param_1 + 0x18,*puVar8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar9 = (undefined8 *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  *puVar8 = 0;
  FUN_001dbfc8(param_1 + 0x30,*puVar9);
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar8 = (undefined8 *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *puVar9 = 0;
  FUN_001dbfc8(param_1 + 0x48,*puVar8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar8;
  *puVar8 = 0;
  FUN_001b9520(auStack_98,param_1,acStack_80,0x40);
  local_9c[0] = 1;
  uVar2 = FUN_0018aad8(auStack_98,local_9c);
  if ((uVar2 & 1) == 0) {
LAB_001b8670:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar1 = strcmp(acStack_80,"prudp");
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    else {
      iVar1 = strcmp(acStack_80,"prudps");
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      else {
        iVar1 = strcmp(acStack_80,"udp");
        if (iVar1 != 0) goto LAB_001b8670;
        uVar7 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    pcVar3 = strstr(*(char **)(param_1 + 0x60),":/");
    sVar4 = strlen(":/");
    pcVar3 = pcVar3 + sVar4;
    pcVar5 = strstr(pcVar3,"#");
    if (pcVar5 == (char *)0x0) {
      do {
        pcVar5 = strstr(pcVar3,";");
        if (pcVar5 == (char *)0x0) {
          sVar4 = strlen(pcVar3);
          if (sVar4 == 0) goto LAB_001b87e4;
          pcVar3[sVar4] = '\0';
          uVar2 = FUN_001b9628(param_1,pcVar3,0);
          goto joined_r0x001b87e0;
        }
        if (pcVar3 == pcVar5) {
          return;
        }
        *pcVar5 = '\0';
        uVar2 = FUN_001b9628(param_1,pcVar3,0);
        pcVar3 = pcVar5 + 1;
        *pcVar5 = ';';
      } while ((uVar2 & 1) != 0);
    }
    else {
      __haystack = pcVar5 + 1;
      pcVar6 = strstr(__haystack,"#");
      if (pcVar6 == (char *)0x0) {
        *pcVar5 = '\0';
        do {
          pcVar6 = strstr(pcVar3,";");
          if (pcVar6 == (char *)0x0) {
            sVar4 = strlen(pcVar3);
            if (sVar4 == 0) {
              *pcVar5 = '#';
              pcVar3 = strstr(__haystack,";");
              goto joined_r0x001b888c;
            }
            pcVar3[sVar4] = '\0';
            uVar2 = FUN_001b9628(param_1,pcVar3,0);
            *pcVar5 = '#';
            while( true ) {
              if ((uVar2 & 1) == 0) {
                return;
              }
              pcVar3 = strstr(__haystack,";");
joined_r0x001b888c:
              if (pcVar3 == (char *)0x0) break;
              if (__haystack == pcVar3) {
                return;
              }
              *pcVar3 = '\0';
              uVar2 = FUN_001b9628(param_1,__haystack,1);
              __haystack = pcVar3 + 1;
              *pcVar3 = ';';
            }
            sVar4 = strlen(__haystack);
            if (sVar4 != 0) {
              __haystack[sVar4] = '\0';
              uVar2 = FUN_001b9628(param_1,__haystack,1);
joined_r0x001b87e0:
              if ((uVar2 & 1) == 0) {
                return;
              }
            }
LAB_001b87e4:
            *(undefined2 *)(param_1 + 0x69) = 0x101;
            return;
          }
          if (pcVar3 == pcVar6) break;
          *pcVar6 = '\0';
          uVar2 = FUN_001b9628(param_1,pcVar3,0);
          pcVar3 = pcVar6 + 1;
          *pcVar6 = ';';
        } while ((uVar2 & 1) != 0);
        *pcVar5 = '#';
        return;
      }
    }
  }
  return;
}

