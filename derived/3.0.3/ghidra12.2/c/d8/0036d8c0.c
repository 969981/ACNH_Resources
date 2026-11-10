
void FUN_0036d8c0(long param_1,char *param_2,char *param_3,char *param_4,byte param_5,byte param_6,
                 byte param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = PTR_DAT_04bd0810;
  puVar2 = PTR_DAT_04bd0800;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar5 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar5 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar5 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar5 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar5 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar5 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar5 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar5 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar5 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar5 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar5 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar5 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar5 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar5 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar5 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar5 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar5 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar5 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar5 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar5 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar5 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar5 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar5 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar5 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar5 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar5 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar5 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar5 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar5 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar5 = 0x1e;
  }
  else {
    iVar5 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar5 = 0x20;
    }
  }
  pcVar4 = (char *)(**(code **)PTR_DAT_04bd0800)(iVar5 + 1,4,*(undefined8 *)PTR_DAT_04bd0810);
  pcVar7 = pcVar4;
  pcVar6 = pcVar4;
  if (cVar1 != '\0') {
    do {
      cVar1 = *param_2;
      pcVar6 = pcVar7;
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar6;
    } while (iVar5 != 0);
  }
  *pcVar6 = '\0';
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x10) = pcVar4;
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  else if (param_3[1] == '\0') {
    iVar5 = 1;
  }
  else if (param_3[2] == '\0') {
    iVar5 = 2;
  }
  else if (param_3[3] == '\0') {
    iVar5 = 3;
  }
  else if (param_3[4] == '\0') {
    iVar5 = 4;
  }
  else if (param_3[5] == '\0') {
    iVar5 = 5;
  }
  else if (param_3[6] == '\0') {
    iVar5 = 6;
  }
  else if (param_3[7] == '\0') {
    iVar5 = 7;
  }
  else if (param_3[8] == '\0') {
    iVar5 = 8;
  }
  else if (param_3[9] == '\0') {
    iVar5 = 9;
  }
  else if (param_3[10] == '\0') {
    iVar5 = 10;
  }
  else if (param_3[0xb] == '\0') {
    iVar5 = 0xb;
  }
  else if (param_3[0xc] == '\0') {
    iVar5 = 0xc;
  }
  else if (param_3[0xd] == '\0') {
    iVar5 = 0xd;
  }
  else if (param_3[0xe] == '\0') {
    iVar5 = 0xe;
  }
  else if (param_3[0xf] == '\0') {
    iVar5 = 0xf;
  }
  else if (param_3[0x10] == '\0') {
    iVar5 = 0x10;
  }
  else if (param_3[0x11] == '\0') {
    iVar5 = 0x11;
  }
  else if (param_3[0x12] == '\0') {
    iVar5 = 0x12;
  }
  else if (param_3[0x13] == '\0') {
    iVar5 = 0x13;
  }
  else if (param_3[0x14] == '\0') {
    iVar5 = 0x14;
  }
  else if (param_3[0x15] == '\0') {
    iVar5 = 0x15;
  }
  else if (param_3[0x16] == '\0') {
    iVar5 = 0x16;
  }
  else if (param_3[0x17] == '\0') {
    iVar5 = 0x17;
  }
  else if (param_3[0x18] == '\0') {
    iVar5 = 0x18;
  }
  else if (param_3[0x19] == '\0') {
    iVar5 = 0x19;
  }
  else if (param_3[0x1a] == '\0') {
    iVar5 = 0x1a;
  }
  else if (param_3[0x1b] == '\0') {
    iVar5 = 0x1b;
  }
  else if (param_3[0x1c] == '\0') {
    iVar5 = 0x1c;
  }
  else if (param_3[0x1d] == '\0') {
    iVar5 = 0x1d;
  }
  else if (param_3[0x1e] == '\0') {
    iVar5 = 0x1e;
  }
  else {
    iVar5 = 0x1f;
    if (param_3[0x1f] != '\0') {
      iVar5 = 0x20;
    }
  }
  pcVar4 = (char *)(**(code **)puVar2)(iVar5 + 1,4,*(undefined8 *)puVar3);
  pcVar7 = pcVar4;
  pcVar6 = pcVar4;
  if (cVar1 != '\0') {
    do {
      cVar1 = *param_3;
      pcVar6 = pcVar7;
      if (cVar1 == '\0') break;
      param_3 = param_3 + 1;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar6;
    } while (iVar5 != 0);
  }
  *pcVar6 = '\0';
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x18) = pcVar4;
  cVar1 = *param_4;
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  else if (param_4[1] == '\0') {
    iVar5 = 1;
  }
  else if (param_4[2] == '\0') {
    iVar5 = 2;
  }
  else if (param_4[3] == '\0') {
    iVar5 = 3;
  }
  else if (param_4[4] == '\0') {
    iVar5 = 4;
  }
  else if (param_4[5] == '\0') {
    iVar5 = 5;
  }
  else if (param_4[6] == '\0') {
    iVar5 = 6;
  }
  else if (param_4[7] == '\0') {
    iVar5 = 7;
  }
  else if (param_4[8] == '\0') {
    iVar5 = 8;
  }
  else if (param_4[9] == '\0') {
    iVar5 = 9;
  }
  else if (param_4[10] == '\0') {
    iVar5 = 10;
  }
  else if (param_4[0xb] == '\0') {
    iVar5 = 0xb;
  }
  else if (param_4[0xc] == '\0') {
    iVar5 = 0xc;
  }
  else if (param_4[0xd] == '\0') {
    iVar5 = 0xd;
  }
  else if (param_4[0xe] == '\0') {
    iVar5 = 0xe;
  }
  else if (param_4[0xf] == '\0') {
    iVar5 = 0xf;
  }
  else if (param_4[0x10] == '\0') {
    iVar5 = 0x10;
  }
  else if (param_4[0x11] == '\0') {
    iVar5 = 0x11;
  }
  else if (param_4[0x12] == '\0') {
    iVar5 = 0x12;
  }
  else if (param_4[0x13] == '\0') {
    iVar5 = 0x13;
  }
  else if (param_4[0x14] == '\0') {
    iVar5 = 0x14;
  }
  else if (param_4[0x15] == '\0') {
    iVar5 = 0x15;
  }
  else if (param_4[0x16] == '\0') {
    iVar5 = 0x16;
  }
  else if (param_4[0x17] == '\0') {
    iVar5 = 0x17;
  }
  else if (param_4[0x18] == '\0') {
    iVar5 = 0x18;
  }
  else if (param_4[0x19] == '\0') {
    iVar5 = 0x19;
  }
  else if (param_4[0x1a] == '\0') {
    iVar5 = 0x1a;
  }
  else if (param_4[0x1b] == '\0') {
    iVar5 = 0x1b;
  }
  else if (param_4[0x1c] == '\0') {
    iVar5 = 0x1c;
  }
  else if (param_4[0x1d] == '\0') {
    iVar5 = 0x1d;
  }
  else if (param_4[0x1e] == '\0') {
    iVar5 = 0x1e;
  }
  else {
    iVar5 = 0x1f;
    if (param_4[0x1f] != '\0') {
      iVar5 = 0x20;
    }
  }
  pcVar4 = (char *)(**(code **)puVar2)(iVar5 + 1,4,*(undefined8 *)puVar3);
  pcVar7 = pcVar4;
  pcVar6 = pcVar4;
  if (cVar1 != '\0') {
    do {
      cVar1 = *param_4;
      pcVar6 = pcVar7;
      if (cVar1 == '\0') break;
      param_4 = param_4 + 1;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar6;
    } while (iVar5 != 0);
  }
  *pcVar6 = '\0';
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x20) = pcVar4;
  *(byte *)(param_1 + 0x29) = param_6 & 1;
  *(byte *)(param_1 + 0x2a) = param_7 & 1;
  *(byte *)(param_1 + 0x28) = param_5 & 1;
  return;
}

