
void FUN_01c81860(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  long *plVar7;
  void *__src;
  ulong local_1960;
  undefined1 *local_1958;
  long *local_1950;
  long *local_1948;
  long local_1940 [14];
  long alStack_18d0 [679];
  undefined8 local_398;
  undefined1 local_360 [800];
  
  *(undefined4 *)(param_1 + 0x40f) = 0;
  local_1950 = local_1940;
  lVar6 = 99;
  local_1960 = 0;
  local_1958 = (undefined1 *)0x0;
  plVar7 = alStack_18d0;
  do {
    plVar7[-7] = (long)plVar7;
    plVar7[-0xe] = (long)(plVar7 + -7);
    lVar6 = lVar6 + -3;
    *plVar7 = (long)(plVar7 + 7);
    plVar7 = plVar7 + 0x15;
  } while (lVar6 != 0);
  local_398 = 0;
  if (local_360 != (undefined1 *)0x0) {
    local_1960 = 0x6400000000;
    local_1958 = local_360;
  }
  __dest = (void *)param_1[0x3ed];
  local_1948 = local_1950;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01c8195c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01c8195c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01c8195c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01c8195c:
    iVar2 = (int)lVar6;
    if ((int)param_1[0x3ee] <= (int)lVar6) {
      iVar2 = (int)param_1[0x3ee] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  if (0 < (int)local_1960) {
    lVar6 = 0;
    do {
      plVar7 = *(long **)(local_1958 + lVar6 * 8);
      (**(code **)*plVar7)(plVar7);
      lVar6 = lVar6 + 1;
      *plVar7 = (long)local_1950;
      local_1950 = plVar7;
    } while (lVar6 < (int)local_1960);
  }
  local_1960 = local_1960 & 0xffffffff00000000;
  lVar6 = *(long *)PTR_DAT_04bb2710;
  *(undefined1 *)(lVar6 + 0x2d4) = 0;
  uVar4 = FUN_03c0bb90(lVar6,&local_1960,param_1 + 0x3ec);
  if ((0 < (int)uVar4) && (uVar3 = *(uint *)(param_1 + 0x40f), uVar3 < 100)) {
    lVar6 = 0;
    while( true ) {
      if ((ulong)uVar3 < 100) {
        plVar7 = param_1 + (ulong)uVar3 * 10 + 4;
        *(undefined1 *)((long)plVar7 + 0x4c) = 0;
        plVar7[8] = 0;
        uVar5 = (**(code **)(*param_1 + 0x10))
                          (param_1,plVar7,*(undefined8 *)(local_1958 + lVar6 * 8));
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 0x40f) = (int)param_1[0x40f] + 1;
        }
      }
      if ((ulong)uVar4 - 1 == lVar6) break;
      uVar3 = *(uint *)(param_1 + 0x40f);
      lVar6 = lVar6 + 1;
    }
  }
  if (0 < (int)local_1960) {
    lVar6 = 0;
    do {
      (**(code **)**(undefined8 **)(local_1958 + lVar6 * 8))();
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)local_1960);
  }
  return;
}

