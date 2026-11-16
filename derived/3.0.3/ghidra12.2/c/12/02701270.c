
void FUN_02701270(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (long *)0x0) {
    lVar6 = (long)(int)param_2;
    if (9 < param_2) {
      lVar6 = 0;
    }
    plVar1 = &DAT_05573e38 + lVar6 * 2;
    lVar5 = param_1[1];
    (**(code **)(*param_1 + 0x18))();
    lVar7 = 0;
    do {
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_02701300;
      lVar8 = param_1[1] + lVar7;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02701300;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02701300;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02701300:
    uVar3 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar7 = 0;
    lVar8 = (&DAT_05573e40)[lVar6 * 2];
    do {
      if (*(char *)(lVar8 + lVar7) == '\0') goto LAB_0270135c;
      lVar2 = lVar8 + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0270135c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0270135c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0270135c:
    uVar4 = (uint)lVar7;
    if ((int)((int)param_1[2] - uVar3) <= (int)(uint)lVar7) {
      uVar4 = (int)param_1[2] + ~uVar3;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      memcpy((void *)(lVar5 + (ulong)uVar3),(void *)(&DAT_05573e40)[lVar6 * 2],(ulong)uVar4);
      *(undefined1 *)(lVar5 + (int)(uVar4 + uVar3)) = 0;
    }
    lVar7 = param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    do {
      if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_027013fc;
      lVar5 = param_1[1] + lVar6;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_027013fc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_027013fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_027013fc:
    uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_05573ed8 + 0x18))(&DAT_05573ed8);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_05573ee0 + lVar6) == '\0') goto LAB_0270145c;
      if (*(char *)((long)DAT_05573ee0 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0270145c;
      }
      if (*(char *)((long)DAT_05573ee0 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0270145c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0270145c:
    uVar4 = (uint)lVar6;
    if ((int)((int)param_1[2] - uVar3) <= (int)(uint)lVar6) {
      uVar4 = (int)param_1[2] + ~uVar3;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_05573ed8 + 0x18))(&DAT_05573ed8);
      memcpy((void *)(lVar7 + (ulong)uVar3),DAT_05573ee0,(ulong)uVar4);
      *(undefined1 *)(lVar7 + (int)(uVar4 + uVar3)) = 0;
    }
  }
  return;
}

