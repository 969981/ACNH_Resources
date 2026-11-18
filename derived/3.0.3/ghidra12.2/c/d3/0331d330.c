
void FUN_0331d330(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *local_60;
  char *pcStack_58;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  puVar3 = PTR_DAT_04bc8e70;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_04bb2120;
  param_1[6] = puVar3 + 0x10;
  param_1[7] = 0;
  puVar3 = PTR_DAT_04bc8e68;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = param_3;
  param_1[0xc] = puVar3 + 0x10;
  param_1[0xd] = puVar2;
  param_1[0xe] = 0x100000000;
  *(undefined1 *)((long)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  (**(code **)(*param_6 + 0x18))(param_6);
  (**(code **)(*param_6 + 0x18))(param_6);
  param_6 = param_6 + 1;
  if (((char *)*param_6 == "") || (*(char *)*param_6 == '\0')) {
    param_6 = (long *)(param_5 + 8);
    uVar5 = *(undefined8 *)(param_4 + 0xf0);
    pcStack_58 = puVar2;
    if ((char *)*param_6 != (char *)0x0) {
      pcStack_58 = (char *)*param_6;
    }
    if (*pcStack_58 != '\0') {
      local_60 = puVar3 + 0x10;
      lVar4 = FUN_032cb8e0(auStack_68,&local_60);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0xe8);
      }
    }
    puVar6 = &uStack_70;
  }
  else {
    uVar5 = *(undefined8 *)(param_4 + 0xf0);
    pcVar1 = puVar2;
    if (*(char **)(param_5 + 8) != (char *)0x0) {
      pcVar1 = *(char **)(param_5 + 8);
    }
    if (*pcVar1 != '\0') {
      local_60 = puVar3 + 0x10;
      pcStack_58 = pcVar1;
      lVar4 = FUN_032cb8e0(auStack_68,&local_60);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0xe8);
      }
    }
    if (*(char *)*param_6 != '\0') {
      lVar4 = FUN_0036ab80(uVar5);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0xe8);
      }
    }
    puVar6 = &local_78;
  }
  pcStack_58 = (char *)*param_6;
  param_1[1] = uVar5;
  *puVar6 = pcStack_58;
  if (*pcStack_58 == '\0') {
    lVar4 = *(long *)(param_4 + 0xf0);
LAB_0331d4e0:
    lVar7 = *(long *)(param_4 + 0x110);
    if (*(undefined **)(lVar4 + 0x30) != (undefined *)0x0) {
      puVar2 = *(undefined **)(lVar4 + 0x30);
    }
    for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
      while (puVar2 < *(undefined **)(lVar7 + 0x20)) {
        lVar7 = *(long *)(lVar7 + 8);
        if (lVar7 == 0) goto LAB_0331d52c;
      }
      if (puVar2 <= *(undefined **)(lVar7 + 0x20)) {
        lVar7 = lVar7 + 0x28;
        goto LAB_0331d530;
      }
    }
  }
  else {
    local_60 = puVar3 + 0x10;
    lVar4 = FUN_032cb8e0(auStack_68,&local_60,*(undefined8 *)(param_4 + 0xf0));
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xe8);
      if (lVar4 == 0) {
        lVar7 = 0;
        goto LAB_0331d530;
      }
      goto LAB_0331d4e0;
    }
  }
LAB_0331d52c:
  lVar7 = 0;
LAB_0331d530:
  uVar5 = *(undefined8 *)(param_2 + 0x398);
  param_1[2] = lVar7;
  param_1[4] = param_2 + 0x3a0;
  param_1[5] = uVar5;
  return;
}

