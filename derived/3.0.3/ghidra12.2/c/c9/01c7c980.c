
/* WARNING: Removing unreachable block (ram,0x01c7ce1c) */
/* WARNING: Removing unreachable block (ram,0x01c7cdcc) */
/* WARNING: Removing unreachable block (ram,0x01c7cd64) */
/* WARNING: Removing unreachable block (ram,0x01c7cd80) */
/* WARNING: Removing unreachable block (ram,0x01c7ce00) */
/* WARNING: Removing unreachable block (ram,0x01c7ce4c) */

void FUN_01c7c980(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  void *__ptr;
  long lVar8;
  undefined4 local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x13));
  puVar2 = PTR_DAT_04bb2698;
  if ((long *)param_1[0xd] != param_1 + 0xc) {
    lVar7 = (long)*(int *)((long)param_1 + 0x74);
    __ptr = (void *)(param_1[0xd] - lVar7);
    lVar8 = (long)__ptr + lVar7;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      if ((*(char *)((long)__ptr + 0x1b0) == '\0') &&
         ((*(char *)((long)__ptr + 0x48) == '\0' || (*(char *)((long)__ptr + 0x54) != '\0')))) {
        plVar3 = (long *)((long)__ptr + (long)*(int *)((long)param_1 + 0x74));
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
        if (*(char *)((long)__ptr + 0x48) != '\0') {
          if (*(uint *)((long)__ptr + 0x40) != 0xffffffff) {
            (*(code *)(&PTR_FUN_04a434e0)[*(uint *)((long)__ptr + 0x40)])(&local_44,__ptr);
          }
          *(undefined4 *)((long)__ptr + 0x40) = 0xffffffff;
          *(undefined1 *)((long)__ptr + 0x48) = 0;
        }
        if (*(char *)((long)__ptr + 0x54) != '\0') {
          *(undefined1 *)((long)__ptr + 0x54) = 0;
        }
        if (*(char *)((long)__ptr + 0x188) != '\0') {
          *(undefined1 *)((long)__ptr + 0x188) = 0;
        }
        if (*(char *)((long)__ptr + 0x19c) != '\0') {
          *(undefined1 *)((long)__ptr + 0x19c) = 0;
        }
        if (*(char *)((long)__ptr + 0x194) != '\0') {
          *(undefined1 *)((long)__ptr + 0x194) = 0;
        }
        if (*(long *)puVar2 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
      }
      __ptr = (void *)(lVar8 - lVar7);
    } while (__ptr != (void *)((long)(param_1 + 0xc) - lVar7));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x13));
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    while (0 < (int)param_1[3]) {
      plVar3 = (long *)param_1[2];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      if ((plVar3 == (long *)0x0) ||
         (lVar8 = (long)plVar3 - (long)*(int *)((long)param_1 + 0x1c), lVar8 == 0)) break;
      if (*(char *)(lVar8 + 0x54) == '\0') {
        *(undefined1 *)(lVar8 + 0x54) = 1;
      }
      *(undefined4 *)(lVar8 + 0x50) = 3;
    }
    goto LAB_01c7cef8;
  }
  cVar1 = *(char *)((long)plVar3 + 0x5c);
  if (((char)plVar3[10] != '\0') && (cVar1 == '\0')) {
    if (((int)plVar3[9] == 2) && ((char)plVar3[6] != '\0')) {
      if (*(char *)(DAT_053512e0 + 0x3f0) == '\0' && *(char *)(DAT_053512e0 + 0x418) == '\0') {
        if (*(char *)(DAT_053512e0 + 0x280) != '\0') goto LAB_01c7cef8;
      }
      else if (*(char *)(DAT_053512e0 + 0x421) == '\0') goto LAB_01c7cef8;
    }
    (**(code **)(*plVar3 + 0x18))();
    goto LAB_01c7cef8;
  }
  if ((char)param_1[0xf9] != '\0') {
    if ((char)param_1[0xf7] != '\0') {
      if ((char)param_1[0xf6] != '\0') {
        if ((char)param_1[0xf3] != '\0') {
          (**(code **)param_1[0xe4])(param_1 + 0xe4);
          *(undefined1 *)(param_1 + 0xf3) = 0;
        }
        *(undefined1 *)(param_1 + 0xf6) = 0;
      }
      if ((char)param_1[0xbd] != '\0') {
        if ((char)param_1[0xba] != '\0') {
          (**(code **)param_1[0xab])(param_1 + 0xab);
          *(undefined1 *)(param_1 + 0xba) = 0;
        }
        *(undefined1 *)(param_1 + 0xbd) = 0;
      }
      if ((char)param_1[0x84] != '\0') {
        if ((char)param_1[0x81] != '\0') {
          (**(code **)param_1[0x72])(param_1 + 0x72);
          *(undefined1 *)(param_1 + 0x81) = 0;
        }
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
      plVar3 = (long *)*param_1;
      *(undefined1 *)(param_1 + 0xf7) = 0;
    }
    *(undefined1 *)(param_1 + 0xf9) = 0;
    cVar1 = *(char *)((long)plVar3 + 0x5c);
  }
  if (cVar1 != '\0') {
    if ((int)param_1[3] < 1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)param_1[2];
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar3 = (long *)*param_1;
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    }
    lVar8 = 0;
    if (plVar5 != (long *)0x0) {
      lVar8 = (long)plVar5 - (long)*(int *)((long)param_1 + 0x1c);
    }
    if (*(char *)((long)plVar3 + 0x5c) == '\0') {
      *(undefined4 *)(plVar3 + 0xb) = 0;
LAB_01c7cd20:
      if (*(char *)(lVar8 + 0x48) == '\0') {
        *(undefined4 *)(lVar8 + 0x40) = 0;
      }
      else {
        if (*(int *)(lVar8 + 0x40) == 2) {
LAB_01c7ce60:
          lVar7 = *param_1;
        }
        else {
          if (*(int *)(lVar8 + 0x40) != 1) goto LAB_01c7cea0;
          lVar7 = *param_1;
          if (*(long *)(lVar8 + 8) != 0 || *(long *)(lVar8 + 0x18) != 0) {
            if (*(char *)(lVar7 + 0x19c) != '\0') {
              if (*(char *)(lVar7 + 0x19c) == '\0') {
                *(undefined4 *)(lVar7 + 0x198) = 0;
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(lVar7 + 0x198);
              }
              if (*(char *)(lVar8 + 0x194) == '\0') {
                *(undefined1 *)(lVar8 + 0x194) = 1;
              }
              *(undefined4 *)(lVar8 + 400) = uVar4;
              lVar7 = *param_1;
            }
            local_44 = 1;
            if (*(char *)(lVar7 + 0x1a4) != '\0') {
              if (*(char *)(lVar7 + 0x1a4) == '\0') {
                *(undefined4 *)(lVar7 + 0x1a0) = 0;
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(lVar7 + 0x1a0);
              }
              local_44 = 1;
              if (*(char *)(lVar8 + 0x19c) == '\0') {
                *(undefined1 *)(lVar8 + 0x19c) = 1;
              }
              *(undefined4 *)(lVar8 + 0x198) = uVar4;
              goto LAB_01c7ce60;
            }
          }
        }
        if (*(char *)(lVar7 + 400) == '\0') {
          memset((void *)(lVar7 + 0x60),0,0x130);
        }
        cVar1 = *(char *)(lVar8 + 0x188);
        memcpy((void *)(lVar8 + 0x58),(void *)(lVar7 + 0x60),0x130);
        if (cVar1 == '\0') {
          *(undefined1 *)(lVar8 + 0x188) = 1;
        }
      }
LAB_01c7cea0:
      uVar4 = 0;
LAB_01c7cea4:
      cVar1 = *(char *)(lVar8 + 0x54);
    }
    else {
      if ((int)plVar3[0xb] == 0) goto LAB_01c7cd20;
      piVar6 = (int *)(lVar8 + 0x40);
      if (*(char *)(lVar8 + 0x48) != '\0') {
        if (*piVar6 != 1) goto LAB_01c7cda0;
        piVar6 = (int *)(*param_1 + 0x58);
        if (*(char *)(*param_1 + 0x5c) == '\0') goto LAB_01c7cd9c;
        if (*piVar6 != 1) goto LAB_01c7cda0;
        uVar4 = 1;
        goto LAB_01c7cea4;
      }
LAB_01c7cd9c:
      *piVar6 = 0;
LAB_01c7cda0:
      uVar4 = 3;
      cVar1 = *(char *)(lVar8 + 0x54);
    }
    if (cVar1 == '\0') {
      *(undefined1 *)(lVar8 + 0x54) = 1;
    }
    *(undefined4 *)(lVar8 + 0x50) = uVar4;
    FUN_01c79be0(*param_1);
  }
  lVar8 = param_1[2];
  if ((int)param_1[3] < 1) {
    lVar8 = 0;
  }
  if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)((long)param_1 + 0x1c), lVar8 != 0)) {
    lVar7 = *param_1;
    if (*(char *)(lVar8 + 0x48) == '\0') {
      *(undefined4 *)(lVar8 + 0x40) = 0;
    }
    FUN_01c79a24(lVar7);
  }
LAB_01c7cef8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}

