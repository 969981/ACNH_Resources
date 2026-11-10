
void FUN_0036d620(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar3 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar3 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar3 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar3 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar3 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar3 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar3 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar3 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar3 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar3 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar3 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar3 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar3 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar3 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar3 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar3 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar3 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar3 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar3 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar3 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar3 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar3 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar3 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar3 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar3 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar3 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar3 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar3 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar3 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar3 = 0x1e;
  }
  else {
    iVar3 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar3 = 0x20;
    }
  }
  pcVar2 = (char *)(**(code **)PTR_DAT_04bd0800)(iVar3 + 1,4,*(undefined8 *)PTR_DAT_04bd0810);
  pcVar4 = pcVar2;
  pcVar5 = pcVar2;
  if (cVar1 != '\0') {
    do {
      cVar1 = *param_2;
      pcVar5 = pcVar4;
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar4 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar5;
    } while (iVar3 != 0);
  }
  *pcVar5 = '\0';
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x10) = pcVar2;
  FUN_0036d430(param_1 + 0x18,param_3);
  return;
}

