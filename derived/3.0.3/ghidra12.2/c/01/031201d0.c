
void FUN_031201d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  
  puVar1 = PTR_DAT_04bb37e0;
  lVar5 = param_1 + 0x260;
  if (*(long *)(param_1 + 0x1068) == 0) {
    pvVar7 = *(void **)(param_1 + 800);
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(lVar5);
    pvVar8 = *(void **)(param_1 + 0x268);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(lVar5);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x268) + lVar5) == '\0') goto LAB_0312065c;
        lVar3 = *(long *)(param_1 + 0x268) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0312065c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0312065c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0312065c:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0x328) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0x328) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0x3b0) = 1;
    *(undefined4 *)(param_1 + 0x3b4) = 2;
    pvVar7 = *(void **)(param_1 + 0x518);
    (**(code **)(*(long *)(param_1 + 0x458) + 0x18))(param_1 + 0x458);
    pvVar8 = *(void **)(param_1 + 0x460);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0x458) + 0x18))(param_1 + 0x458);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x460) + lVar5) == '\0') goto LAB_0312070c;
        lVar3 = *(long *)(param_1 + 0x460) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0312070c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0312070c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0312070c:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0x520) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0x520) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0x5a8) = 1;
    *(undefined4 *)(param_1 + 0x5ac) = 2;
    pvVar7 = *(void **)(param_1 + 0x710);
    (**(code **)(*(long *)(param_1 + 0x650) + 0x18))(param_1 + 0x650);
    pvVar8 = *(void **)(param_1 + 0x658);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0x650) + 0x18))(param_1 + 0x650);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x658) + lVar5) == '\0') goto LAB_031207bc;
        lVar3 = *(long *)(param_1 + 0x658) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_031207bc;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_031207bc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_031207bc:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0x718) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0x718) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0x7a0) = 1;
    *(undefined4 *)(param_1 + 0x7a4) = 2;
    pvVar7 = *(void **)(param_1 + 0x908);
    (**(code **)(*(long *)(param_1 + 0x848) + 0x18))(param_1 + 0x848);
    pvVar8 = *(void **)(param_1 + 0x850);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0x848) + 0x18))(param_1 + 0x848);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x850) + lVar5) == '\0') goto LAB_0312086c;
        lVar3 = *(long *)(param_1 + 0x850) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0312086c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0312086c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0312086c:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0x910) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0x910) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0x998) = 1;
    *(undefined4 *)(param_1 + 0x99c) = 2;
    pvVar7 = *(void **)(param_1 + 0xb00);
    (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
    pvVar8 = *(void **)(param_1 + 0xa48);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0xa48) + lVar5) == '\0') goto LAB_0312091c;
        lVar3 = *(long *)(param_1 + 0xa48) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0312091c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0312091c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0312091c:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0xb08) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0xb08) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0xb90) = 1;
    *(undefined4 *)(param_1 + 0xb94) = 2;
    pvVar7 = *(void **)(param_1 + 0xcf8);
    (**(code **)(*(long *)(param_1 + 0xc38) + 0x18))(param_1 + 0xc38);
    pvVar8 = *(void **)(param_1 + 0xc40);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0xc38) + 0x18))(param_1 + 0xc38);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0xc40) + lVar5) == '\0') goto LAB_031209cc;
        lVar3 = *(long *)(param_1 + 0xc40) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_031209cc;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_031209cc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_031209cc:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0xd00) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0xd00) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0xd88) = 1;
    *(undefined4 *)(param_1 + 0xd8c) = 2;
    pvVar7 = *(void **)(param_1 + 0xef0);
    (**(code **)(*(long *)(param_1 + 0xe30) + 0x18))(param_1 + 0xe30);
    pvVar8 = *(void **)(param_1 + 0xe38);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_1 + 0xe30) + 0x18))(param_1 + 0xe30);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0xe38) + lVar5) == '\0') goto LAB_03120a7c;
        lVar3 = *(long *)(param_1 + 0xe38) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_03120a7c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_03120a7c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_03120a7c:
      iVar9 = (int)lVar5;
      if (*(int *)(param_1 + 0xef8) <= (int)lVar5) {
        iVar9 = *(int *)(param_1 + 0xef8) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar9);
      *(undefined1 *)((long)pvVar7 + (long)iVar9) = 0;
    }
    *(undefined1 *)(param_1 + 0xf80) = 1;
    *(undefined4 *)(param_1 + 0xf84) = 2;
  }
  else {
    sVar4 = *(short *)PTR_DAT_04bb37e0;
    if (**(char **)(param_1 + 0x268) == '\0' && sVar4 == -2) {
      iVar9 = -1;
      sVar4 = -2;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      lVar3 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar3 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar2 = lVar3 + (long)iVar6 * 0x1a8, (*(byte *)(lVar2 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar2,lVar5,PTR_DAT_04bb37e0,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_03120300;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar6 != 0x10e);
      iVar9 = -1;
    }
LAB_03120300:
    *(int *)(param_1 + 0x2b8) = iVar9;
    if ((**(char **)(param_1 + 0x460) == '\0') && (sVar4 == -2)) {
      iVar6 = -1;
      sVar4 = -2;
    }
    else {
      iVar6 = 0;
      iVar9 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar9 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar9 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0x458,puVar1,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_03120388;
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar9 != 0x10e);
      iVar6 = -1;
    }
LAB_03120388:
    *(int *)(param_1 + 0x4b0) = iVar6;
    if (**(char **)(param_1 + 0x658) == '\0' && sVar4 == -2) {
      iVar9 = -1;
      sVar4 = -2;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar6 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0x650,puVar1,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_03120410;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar6 != 0x10e);
      iVar9 = -1;
    }
LAB_03120410:
    *(int *)(param_1 + 0x6a8) = iVar9;
    if (**(char **)(param_1 + 0x850) == '\0' && sVar4 == -2) {
      iVar9 = -1;
      sVar4 = -2;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar6 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0x848,puVar1,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_031204a0;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar6 != 0x10e);
      iVar9 = -1;
    }
LAB_031204a0:
    *(int *)(param_1 + 0x8a0) = iVar9;
    if (**(char **)(param_1 + 0xa48) == '\0' && sVar4 == -2) {
      iVar9 = -1;
      sVar4 = -2;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar6 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0xa40,puVar1,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_03120530;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar6 != 0x10e);
      iVar9 = -1;
    }
LAB_03120530:
    *(int *)(param_1 + 0xa98) = iVar9;
    if (**(char **)(param_1 + 0xc40) == '\0' && sVar4 == -2) {
      iVar9 = -1;
      sVar4 = -2;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar6 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0xc38,puVar1,0x10);
          sVar4 = *(short *)puVar1;
          goto LAB_031205c0;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar6 != 0x10e);
      iVar9 = -1;
    }
LAB_031205c0:
    *(int *)(param_1 + 0xc90) = iVar9;
    if (**(char **)(param_1 + 0xe38) == '\0' && sVar4 == -2) {
      *(undefined4 *)(param_1 + 0xe88) = 0xffffffff;
    }
    else {
      iVar6 = 0;
      iVar9 = 0;
      lVar5 = *(long *)(param_1 + 0x1068) + 8;
      do {
        if ((*(int *)(lVar5 + (long)iVar9 * 0x1a8 + 0x1a0) == 0) &&
           (lVar3 = lVar5 + (long)iVar9 * 0x1a8, (*(byte *)(lVar3 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar3,param_1 + 0xe30,PTR_DAT_04bb37e0,0x10);
          *(int *)(param_1 + 0xe88) = iVar6;
          return;
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar9 != 0x10e);
      *(undefined4 *)(param_1 + 0xe88) = 0xffffffff;
    }
  }
  return;
}

