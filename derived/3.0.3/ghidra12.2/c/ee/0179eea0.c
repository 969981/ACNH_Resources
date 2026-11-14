
void FUN_0179eea0(long param_1,char *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  void *__dest;
  void *__src;
  long *plVar8;
  long lVar9;
  
  if (*param_2 == '\0') {
    lVar9 = 0;
    pcVar5 = param_2;
  }
  else if (param_2[0x1a0] == '\0') {
    lVar9 = 1;
    pcVar5 = param_2 + 0x1a0;
  }
  else if (param_2[0x340] == '\0') {
    lVar9 = 2;
    pcVar5 = param_2 + 0x340;
  }
  else if (param_2[0x4e0] == '\0') {
    lVar9 = 3;
    pcVar5 = param_2 + 0x4e0;
  }
  else if (param_2[0x680] == '\0') {
    lVar9 = 4;
    pcVar5 = param_2 + 0x680;
  }
  else if (param_2[0x820] == '\0') {
    lVar9 = 5;
    pcVar5 = param_2 + 0x820;
  }
  else if (param_2[0x9c0] == '\0') {
    lVar9 = 6;
    pcVar5 = param_2 + 0x9c0;
  }
  else {
    if (param_2[0xb60] != '\0') {
      return;
    }
    lVar9 = 7;
    pcVar5 = param_2 + 0xb60;
  }
  *pcVar5 = '\x01';
  if (param_1 != 0) {
    uVar3 = param_3[1];
    if (*(int *)(param_2 + lVar9 * 0x1a0 + 0x14) == 0) {
      *(int *)(param_2 + lVar9 * 0x1a0 + 0x14) = *(int *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0x10) = uVar3;
  }
  *(undefined1 **)(param_2 + lVar9 * 0x1a0 + 0x88) = &LAB_0178f13c;
  pcVar4 = param_2 + lVar9 * 0x1a0 + 0x90;
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  *(undefined ***)(param_2 + lVar9 * 0x1a0 + 0x78) = &PTR_LAB_049c3940;
  *(char **)(param_2 + lVar9 * 0x1a0 + 0x80) = pcVar5;
  __dest = *(void **)(param_2 + lVar9 * 0x1a0 + 0x100);
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 200) = *param_3;
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xcc) = param_3[1];
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xd0) = param_3[2];
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xd4) = param_3[3];
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xd8) = param_3[4];
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xdc) = param_3[5];
  *(undefined4 *)(param_2 + lVar9 * 0x1a0 + 0xe0) = param_3[6];
  uVar6 = *(undefined8 *)(param_3 + 7);
  *(undefined8 *)(param_2 + lVar9 * 0x1a0 + 0xec) = *(undefined8 *)(param_3 + 9);
  *(undefined8 *)(param_2 + lVar9 * 0x1a0 + 0xe4) = uVar6;
  plVar8 = (long *)(param_3 + 0xc);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  __src = *(void **)(param_3 + 0xe);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0xc) + 0x18))(plVar8);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 0xe) + lVar7) == '\0') goto LAB_0179f07c;
      lVar1 = *(long *)(param_3 + 0xe) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0179f07c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0179f07c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0179f07c:
    iVar2 = (int)lVar7;
    if (*(int *)(param_2 + lVar9 * 0x1a0 + 0x108) <= (int)lVar7) {
      iVar2 = *(int *)(param_2 + lVar9 * 0x1a0 + 0x108) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x34);
  *(undefined8 *)(param_2 + lVar9 * 0x1a0 + 400) = *(undefined8 *)(param_3 + 0x32);
  *(undefined8 *)(param_2 + lVar9 * 0x1a0 + 0x198) = uVar6;
  return;
}

