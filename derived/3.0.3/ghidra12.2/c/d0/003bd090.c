
void FUN_003bd090(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_003b8394(param_4,*(undefined4 *)(param_3 + 0x110));
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0xe0);
  lVar5 = plVar2[1];
  if ((char)lVar5 == '\0') {
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 1;
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] != '\0') goto LAB_003bd0f0;
    lVar4 = 0;
    lVar3 = 0;
LAB_003bd164:
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  }
  else {
LAB_003bd0f0:
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxbnk_04bd02f0,0);
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxwar_04bd02f8,0);
    }
    if ((char)lVar5 == '\0') goto LAB_003bd164;
  }
  lVar5 = 0;
  lVar6 = 0;
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(undefined1 *)(param_2 + 0xa0) = 0;
    lVar5 = lVar3;
    lVar6 = lVar4;
  }
  *(long *)(param_2 + 0x28) = lVar5;
  *(long *)(param_2 + 0x68) = lVar6;
  plVar2 = *(long **)(param_1 + 0xe0);
  lVar5 = plVar2[1];
  if ((char)lVar5 == '\0') {
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 1;
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] != '\0') goto LAB_003bd1c4;
    lVar4 = 0;
    lVar3 = 0;
LAB_003bd238:
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  }
  else {
LAB_003bd1c4:
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxbnk_04bd02f0,1);
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxwar_04bd02f8,1);
    }
    if ((char)lVar5 == '\0') goto LAB_003bd238;
  }
  lVar5 = 0;
  lVar6 = 0;
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(undefined1 *)(param_2 + 0xa1) = 0;
    lVar5 = lVar3;
    lVar6 = lVar4;
  }
  *(long *)(param_2 + 0x38) = lVar5;
  *(long *)(param_2 + 0x78) = lVar6;
  plVar2 = *(long **)(param_1 + 0xe0);
  lVar5 = plVar2[1];
  if ((char)lVar5 == '\0') {
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 1;
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] != '\0') goto LAB_003bd298;
    lVar4 = 0;
    lVar3 = 0;
LAB_003bd30c:
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  }
  else {
LAB_003bd298:
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxbnk_04bd02f0,2);
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxwar_04bd02f8,2);
    }
    if ((char)lVar5 == '\0') goto LAB_003bd30c;
  }
  lVar5 = 0;
  lVar6 = 0;
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(undefined1 *)(param_2 + 0xa2) = 0;
    lVar5 = lVar3;
    lVar6 = lVar4;
  }
  *(long *)(param_2 + 0x48) = lVar5;
  *(long *)(param_2 + 0x88) = lVar6;
  plVar2 = *(long **)(param_1 + 0xe0);
  lVar5 = plVar2[1];
  if ((char)lVar5 == '\0') {
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 1;
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] != '\0') goto LAB_003bd36c;
    lVar1 = 0;
    lVar3 = 0;
  }
  else {
LAB_003bd36c:
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxbnk_04bd02f0,3);
    plVar2 = *(long **)(param_1 + 0xe0);
    if ((char)plVar2[1] == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,lVar1,PTR_DAT_04bd02d0,PTR_s_bxwar_04bd02f8,3);
    }
    if ((char)lVar5 != '\0') goto LAB_003bd3f0;
  }
  *(undefined1 *)(*(long *)(param_4 + 0x10) + 8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
LAB_003bd3f0:
  lVar5 = 0;
  lVar4 = 0;
  if ((lVar3 != 0) && (lVar1 != 0)) {
    *(undefined1 *)(param_2 + 0xa3) = 0;
    lVar5 = lVar3;
    lVar4 = lVar1;
  }
  *(long *)(param_2 + 0x58) = lVar5;
  *(long *)(param_2 + 0x98) = lVar4;
  return;
}

