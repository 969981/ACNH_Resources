
void FUN_0036c4d0(long param_1,undefined8 param_2,long param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x40);
  lVar1 = param_1 + 0x38;
  if (lVar8 == lVar1) {
    bVar4 = false;
  }
  else {
    do {
      lVar5 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))
                        (*(long **)(param_3 + 0x18),*(undefined8 *)(lVar8 + 0x10),1);
      if (lVar5 == 0) {
        return;
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != lVar1);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == lVar1) {
      *(undefined1 *)(param_1 + 0x10f) = 0;
      *(long *)(param_1 + 0x10) = param_3;
      cVar2 = *param_4;
      goto joined_r0x0036c698;
    }
    do {
      bVar4 = *(int *)(lVar8 + 0x18) == 0x1b;
      if (bVar4) break;
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != lVar1);
  }
  *(bool *)(param_1 + 0x10f) = bVar4;
  *(long *)(param_1 + 0x10) = param_3;
  cVar2 = *param_4;
joined_r0x0036c698:
  if (cVar2 == '\0') {
    iVar7 = 0;
  }
  else if (param_4[1] == '\0') {
    iVar7 = 1;
  }
  else if (param_4[2] == '\0') {
    iVar7 = 2;
  }
  else if (param_4[3] == '\0') {
    iVar7 = 3;
  }
  else if (param_4[4] == '\0') {
    iVar7 = 4;
  }
  else if (param_4[5] == '\0') {
    iVar7 = 5;
  }
  else if (param_4[6] == '\0') {
    iVar7 = 6;
  }
  else if (param_4[7] == '\0') {
    iVar7 = 7;
  }
  else if (param_4[8] == '\0') {
    iVar7 = 8;
  }
  else if (param_4[9] == '\0') {
    iVar7 = 9;
  }
  else if (param_4[10] == '\0') {
    iVar7 = 10;
  }
  else if (param_4[0xb] == '\0') {
    iVar7 = 0xb;
  }
  else if (param_4[0xc] == '\0') {
    iVar7 = 0xc;
  }
  else if (param_4[0xd] == '\0') {
    iVar7 = 0xd;
  }
  else if (param_4[0xe] == '\0') {
    iVar7 = 0xe;
  }
  else if (param_4[0xf] == '\0') {
    iVar7 = 0xf;
  }
  else if (param_4[0x10] == '\0') {
    iVar7 = 0x10;
  }
  else if (param_4[0x11] == '\0') {
    iVar7 = 0x11;
  }
  else if (param_4[0x12] == '\0') {
    iVar7 = 0x12;
  }
  else if (param_4[0x13] == '\0') {
    iVar7 = 0x13;
  }
  else if (param_4[0x14] == '\0') {
    iVar7 = 0x14;
  }
  else if (param_4[0x15] == '\0') {
    iVar7 = 0x15;
  }
  else if (param_4[0x16] == '\0') {
    iVar7 = 0x16;
  }
  else if (param_4[0x17] == '\0') {
    iVar7 = 0x17;
  }
  else if (param_4[0x18] == '\0') {
    iVar7 = 0x18;
  }
  else if (param_4[0x19] == '\0') {
    iVar7 = 0x19;
  }
  else if (param_4[0x1a] == '\0') {
    iVar7 = 0x1a;
  }
  else if (param_4[0x1b] == '\0') {
    iVar7 = 0x1b;
  }
  else if (param_4[0x1c] == '\0') {
    iVar7 = 0x1c;
  }
  else if (param_4[0x1d] == '\0') {
    iVar7 = 0x1d;
  }
  else if (param_4[0x1e] == '\0') {
    iVar7 = 0x1e;
  }
  else {
    iVar7 = 0x1f;
    if (param_4[0x1f] != '\0') {
      iVar7 = 0x20;
    }
  }
  pcVar6 = (char *)(**(code **)PTR_DAT_04bd0800)(iVar7 + 1,4,*(undefined8 *)PTR_DAT_04bd0810);
  bVar4 = cVar2 != '\0';
  pcVar3 = pcVar6;
  for (; (bVar4 && (*param_4 != '\0')); param_4 = param_4 + 1) {
    iVar7 = iVar7 + -1;
    bVar4 = iVar7 != 0;
    *pcVar3 = *param_4;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  do {
    cVar2 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar2 != '\0');
  *(char **)(param_1 + 0x18) = pcVar6;
  FUN_00386660(param_1 + 0x48,param_3,lVar1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x10d) = 0;
  FUN_0036d430(param_1 + 0x130,lVar1);
  return;
}

