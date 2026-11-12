
void FUN_007596e0(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  char *pcVar7;
  void *__dest;
  void *__src;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = &PTR_LAB_048fcfd0;
  param_1[2] = 0;
  pcVar7 = (char *)((long)param_1 + 0x6c);
  param_1[0xc] = pcVar7;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar4 = s_Component_040afd3c._0_8_;
  if (pcVar7 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar7 = uVar4;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  param_1[0x2e] = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bb21f8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0xb] = puVar1 + 0x10;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar1 = PTR_DAT_04bb3100 + 0x10;
  param_1[0x4a] = 0;
  param_1[0x4d] = puVar1;
  param_1[0x4e] = param_1;
  puVar1 = PTR_LAB_04bb30d8;
  param_1[0x30] = &PTR_LAB_048fe328;
  param_1[0x31] = param_1;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x32] = puVar1;
  param_1[0x33] = 0;
  param_1[0x37] = &PTR_LAB_048fe328;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = &LAB_00705dbc;
  param_1[0x3a] = 0;
  param_1[0x3e] = &PTR_LAB_048fe328;
  param_1[0x46] = param_1;
  param_1[0x40] = &LAB_00705dc8;
  param_1[0x45] = &PTR_LAB_048fe328;
  param_1[0x47] = &LAB_00705dd4;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  *param_1 = &PTR_LAB_049064f0;
  uVar5 = DAT_04cb6038;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x4f) = uVar5;
  FUN_007ef010(param_1 + 0x54);
  puVar1 = PTR_DAT_04bb2f70;
  *(undefined1 *)((long)param_1 + 0x2fb) = 0;
  __dest = (void *)((long)param_1 + 700);
  param_1[0x55] = puVar1 + 0x10;
  param_1[0x56] = __dest;
  *(undefined4 *)(param_1 + 0x57) = 0x40;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_0075992c;
      lVar2 = param_3[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0075992c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0075992c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0075992c:
    iVar3 = (int)lVar6;
    if (*(int *)(param_1 + 0x57) <= (int)lVar6) {
      iVar3 = *(int *)(param_1 + 0x57) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  pcVar7 = (char *)param_1[0xc];
  *(byte *)(param_1 + 0x60) = param_4 & 1;
  *(undefined2 *)((long)param_1 + 0x301) = 0;
  param_1[0x55] = puVar1 + 0x10;
  if (pcVar7 != "MyDesignTexture") {
    iVar3 = 0xf;
    if (*(int *)(param_1 + 0xd) < 0x10) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar7,"MyDesignTexture",(long)iVar3);
    pcVar7[iVar3] = '\0';
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0;
  return;
}

