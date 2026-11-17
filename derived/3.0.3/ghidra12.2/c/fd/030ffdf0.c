
void FUN_030ffdf0(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = 0;
  do {
    if ((&DAT_056f1348)[(long)iVar8 * 6] == param_2) {
      (**(code **)(*param_1 + 0x10))(param_1,&DAT_056f14c8);
      lVar5 = param_1[1];
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_030ffecc;
        lVar7 = param_1[1] + lVar6;
        if (*(char *)(lVar7 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_030ffecc;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_030ffecc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_030ffecc:
      uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_056f14d8 + 0x18))(&DAT_056f14d8);
      lVar6 = 0;
      do {
        if (*(char *)((long)DAT_056f14e0 + lVar6) == '\0') goto LAB_030fff2c;
        if (*(char *)((long)DAT_056f14e0 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_030fff2c;
        }
        if (*(char *)((long)DAT_056f14e0 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_030fff2c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_030fff2c:
      uVar4 = (uint)lVar6;
      if ((int)((int)param_1[2] - uVar3) <= (int)(uint)lVar6) {
        uVar4 = (int)param_1[2] + ~uVar3;
      }
      if (0 < (int)uVar4) {
        (**(code **)(DAT_056f14d8 + 0x18))(&DAT_056f14d8);
        memcpy((void *)(lVar5 + (ulong)uVar3),DAT_056f14e0,(ulong)uVar4);
        *(undefined1 *)(lVar5 + (int)(uVar4 + uVar3)) = 0;
      }
      lVar5 = param_1[1];
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_030fffdc;
        lVar7 = param_1[1] + lVar6;
        if (*(char *)(lVar7 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_030fffdc;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_030fffdc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_030fffdc:
      uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_056f14f8 + 0x18))(&DAT_056f14f8);
      lVar6 = 0;
      do {
        if (*(char *)((long)DAT_056f1500 + lVar6) == '\0') goto LAB_0310003c;
        if (*(char *)((long)DAT_056f1500 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0310003c;
        }
        if (*(char *)((long)DAT_056f1500 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0310003c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0310003c:
      uVar4 = (uint)lVar6;
      if ((int)((int)param_1[2] - uVar3) <= (int)(uint)lVar6) {
        uVar4 = (int)param_1[2] + ~uVar3;
      }
      if (0 < (int)uVar4) {
        (**(code **)(DAT_056f14f8 + 0x18))(&DAT_056f14f8);
        memcpy((void *)(lVar5 + (ulong)uVar3),DAT_056f1500,(ulong)uVar4);
        *(undefined1 *)(lVar5 + (int)(uVar4 + uVar3)) = 0;
      }
      plVar1 = &DAT_056f1350 + (long)iVar8 * 3;
      lVar5 = param_1[1];
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_031000f0;
        lVar7 = param_1[1] + lVar6;
        if (*(char *)(lVar7 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_031000f0;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_031000f0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_031000f0:
      uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      lVar6 = 0;
      lVar7 = (&DAT_056f1358)[(long)iVar8 * 3];
      do {
        if (*(char *)(lVar7 + lVar6) == '\0') goto LAB_0310015c;
        lVar2 = lVar7 + lVar6;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0310015c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0310015c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0310015c:
      uVar4 = (uint)lVar6;
      if ((int)((int)param_1[2] - uVar3) <= (int)(uint)lVar6) {
        uVar4 = (int)param_1[2] + ~uVar3;
      }
      if (0 < (int)uVar4) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        memcpy((void *)(lVar5 + (ulong)uVar3),(void *)(&DAT_056f1358)[(long)iVar8 * 3],(ulong)uVar4)
        ;
        *(undefined1 *)(lVar5 + (int)(uVar4 + uVar3)) = 0;
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x10) {
      return;
    }
  } while( true );
}

