
void FUN_02b9ceb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined *puVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_38;
  long local_18;
  
  puVar5 = PTR_DAT_04bb30a0;
  puVar4 = (undefined8 *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
  local_38 = *puVar4;
  if ('\x10' < (char)((ulong)local_38 >> 0x20)) {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + 0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  lVar6 = *(long *)puVar5;
  uVar3 = FUN_00a8d9f0(lVar6,lVar6 + 0x651f0,&local_38);
  local_18._0_4_ = uVar3;
  uVar3 = FUN_00a8ab58(lVar6,&local_18,&local_38);
  local_18 = CONCAT44(local_18._4_4_,uVar3);
  switch(uVar3) {
  case 0:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d2dc;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d2dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d2dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d2dc:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_04097e69;
    break;
  case 1:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d320;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d320;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d320;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d320:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_040636df;
    break;
  case 2:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d364;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d364;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d364;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d364:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_04100074;
    break;
  case 3:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d3a8;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d3a8;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d3a8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d3a8:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_0407d782;
    break;
  case 4:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d3ec;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d3ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d3ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d3ec:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_040e5e0c;
    break;
  case 5:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d430;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d430;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d430;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d430:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_04068e66;
    break;
  case 6:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d474;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d474;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d474;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d474:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_040fae7c;
    break;
  case 7:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d4b8;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d4b8;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d4b8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d4b8:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_04082de4;
    break;
  case 8:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d4fc;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d4fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d4fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d4fc:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_040eaeb2;
    break;
  case 9:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d540;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d540;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d540;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d540:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_040bc40d;
    break;
  case 10:
    lVar7 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02b9d584;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02b9d584;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02b9d584;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02b9d584:
    uVar8 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)((int)param_2[2] - uVar8) < 3) {
      uVar2 = (int)param_2[2] + ~uVar8;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) {
      return;
    }
    __dest = (void *)(lVar7 + (ulong)uVar8);
    puVar5 = &DAT_0409305f;
    break;
  default:
    goto switchD_02b9cf5c_default;
  }
  memcpy(__dest,puVar5,__n);
  *(undefined1 *)(lVar7 + (ulong)((int)__n + uVar8)) = 0;
switchD_02b9cf5c_default:
  return;
}

