
void FUN_0036cfe0(long param_1,char *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,uint param_7,long param_8)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  void *__s;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  
  puVar5 = PTR_DAT_04bd0810;
  puVar4 = PTR_DAT_04bd0800;
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    iVar9 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar9 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar9 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar9 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar9 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar9 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar9 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar9 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar9 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar9 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar9 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar9 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar9 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar9 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar9 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar9 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar9 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar9 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar9 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar9 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar9 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar9 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar9 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar9 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar9 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar9 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar9 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar9 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar9 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar9 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar9 = 0x1e;
  }
  else {
    iVar9 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar9 = 0x20;
    }
  }
  pcVar6 = (char *)(**(code **)PTR_DAT_04bd0800)(iVar9 + 1,4,*(undefined8 *)PTR_DAT_04bd0810);
  pcVar10 = pcVar6;
  pcVar11 = pcVar6;
  if (cVar3 != '\0') {
    do {
      cVar3 = *param_2;
      pcVar11 = pcVar10;
      if (cVar3 == '\0') break;
      param_2 = param_2 + 1;
      iVar9 = iVar9 + -1;
      pcVar11 = pcVar10 + 1;
      *pcVar10 = cVar3;
      pcVar10 = pcVar11;
    } while (iVar9 != 0);
  }
  *pcVar11 = '\0';
  do {
    cVar3 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  *(char **)(param_1 + 0x10) = pcVar6;
  uVar8 = *(undefined8 *)puVar5;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x1d) = param_5;
  puVar7 = (undefined8 *)(**(code **)puVar4)(0x10,4,uVar8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar7;
  *(undefined4 *)puVar7 = param_6;
  *(uint *)(*(long *)(param_1 + 0x28) + 4) = param_7;
  __s = (void *)(**(code **)puVar4)((long)(int)param_7,4,*(undefined8 *)puVar5);
  if (((int)param_7 < 1) || (__s == (void *)0x0)) {
    *(void **)(*(long *)(param_1 + 0x28) + 8) = __s;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    memset(__s,0,(ulong)param_7);
    *(void **)(*(long *)(param_1 + 0x28) + 8) = __s;
  }
  if (param_7 == 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)(param_8 + uVar12);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + uVar12) = *puVar1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + uVar12;
      uVar12 = uVar12 + 2;
      *(undefined1 *)(lVar2 + 1) = puVar1[1];
    } while (((ulong)param_7 & 0xfffffffe) != uVar12);
  }
  if ((param_7 & 1) != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + uVar12) =
         *(undefined1 *)(param_8 + uVar12);
  }
  return;
}

