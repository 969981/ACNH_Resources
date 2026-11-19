
ulong FUN_039852d0(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  void *__dest;
  undefined *puVar13;
  undefined *local_490;
  void *local_488;
  undefined *local_478;
  void *local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined8 local_458;
  ulong local_450;
  undefined4 local_448;
  undefined2 local_444;
  undefined8 local_440;
  undefined1 local_438;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  puVar2 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x10) == 0) {
    plVar6 = (long *)0x0;
    uVar11 = 0xffffffff;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
    if (*plVar6 == 0) {
      uVar11 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar11 = uVar9 + 1;
        if (*(int *)(param_1 + 0x10) == (int)uVar11) {
          plVar6 = (long *)0x0;
          uVar11 = 0xffffffff;
          goto LAB_0398536c;
        }
        uVar9 = uVar11 & 0xffffffff;
      } while (*(long *)((long)plVar6 +
                        (-(uVar11 >> 0x1f & 1) & 0xffffffe000000000 | uVar11 * 0x20 & 0x1fffffffe0))
               != 0);
      plVar6 = plVar6 + (long)(int)uVar11 * 4;
    }
  }
LAB_0398536c:
  local_490 = PTR_DAT_04bb2020 + 0x10;
  plVar4 = param_2 + 6;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  puVar13 = (undefined *)param_2[7];
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  if (puVar13 == PTR_DAT_04c4b988) {
LAB_03985410:
    plVar6 = param_2 + 4;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcVar10 = (char *)param_2[5];
    if ((pcVar10 == "") || (*pcVar10 == '\0')) {
      pcVar10 = (char *)param_2[1];
    }
    (**(code **)(param_2[2] + 0x18))(param_2 + 2);
    lVar12 = param_2[3];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_006e9454(&local_478,&DAT_040a3348,lVar12,&DAT_040ee601,pcVar10,lVar5,lVar8,param_2[1]);
    uVar11 = 0xffffffff;
  }
  else {
    pvVar7 = (void *)param_2[7];
    uVar9 = 0;
    bVar3 = true;
    do {
      if (*(char *)((long)pvVar7 + uVar9) != PTR_DAT_04c4b988[uVar9]) break;
      if (*(char *)((long)pvVar7 + uVar9) == '\0') {
        if (bVar3) goto LAB_03985410;
        break;
      }
      bVar3 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    uStack_468 = 0;
    plVar4 = *(long **)(param_1 + 8);
    local_478 = puVar2 + 0x10;
    local_444 = 0x101;
    local_460 = 0;
    local_440 = 0;
    local_458 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
    local_438 = 0;
    local_448 = 0;
    local_450 = (ulong)*(uint *)(param_2 + 9);
    local_488 = pvVar7;
    local_470 = pvVar7;
    if ((char)plVar4[0xf] == '\0') {
      *plVar6 = 0;
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_478);
      *plVar6 = lVar5;
      if (lVar5 != 0) {
        *(undefined4 *)(plVar6 + 1) = (undefined4)local_440;
        lVar5 = param_2[8];
        if (lVar5 != 0) {
          __dest = *(void **)(lVar5 + 8);
          (**(code **)(local_490 + 0x18))(&local_490);
          pvVar7 = local_488;
          if (__dest != local_488) {
            (**(code **)(local_490 + 0x18))(&local_490);
            lVar8 = 0;
            do {
              if (*(char *)((long)local_488 + lVar8) == '\0') goto LAB_039855c8;
              if (*(char *)((long)local_488 + lVar8 + 1) == '\0') {
                lVar8 = lVar8 + 1;
                goto LAB_039855c8;
              }
              if (*(char *)((long)local_488 + lVar8 + 2) == '\0') {
                lVar8 = lVar8 + 2;
                goto LAB_039855c8;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_039855c8:
            iVar1 = (int)lVar8;
            if (*(int *)(lVar5 + 0x10) <= (int)lVar8) {
              iVar1 = *(int *)(lVar5 + 0x10) + -1;
            }
            memcpy(__dest,pvVar7,(long)iVar1);
            *(undefined1 *)((long)__dest + (long)iVar1) = 0;
          }
        }
        *(char *)(plVar6 + 3) = (char)param_2[10];
        goto LAB_039855f8;
      }
    }
    uVar11 = 0xffffffff;
  }
LAB_039855f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return uVar11 & 0xffffffff;
}

