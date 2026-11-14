
long FUN_015f0610(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7a2338));
  if (*(int *)(&LAB_007a2358 + param_1) != 0) {
    plVar8 = *(long **)(&LAB_007a2360 + param_1);
    plVar1 = plVar8 + *(int *)(&LAB_007a2358 + param_1);
    do {
      lVar7 = *plVar8;
      plVar4 = (long *)(**(code **)(*(long *)(*(long *)(lVar7 + 0x10) + 0x188) + 0xf0))
                                 (*(long *)(lVar7 + 0x10) + 0x188);
      (**(code **)(*plVar4 + 0x18))();
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar9 = plVar4[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      if (lVar9 == lVar5) goto LAB_015f0744;
      uVar6 = 0;
      bVar3 = true;
      do {
        lVar9 = plVar4[1] + 2 + uVar6;
        cVar2 = *(char *)(lVar9 + -2);
        if (cVar2 != *(char *)(lVar5 + uVar6)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_015f0744;
          break;
        }
        cVar2 = *(char *)(lVar9 + -1);
        if (cVar2 != *(char *)(lVar5 + uVar6 + 1)) break;
        if (cVar2 == '\0') goto LAB_015f0744;
        cVar2 = *(char *)(plVar4[1] + 2 + uVar6);
        if (cVar2 != *(char *)(lVar5 + uVar6 + 2)) break;
        if (cVar2 == '\0') goto LAB_015f0744;
        bVar3 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  lVar7 = 0;
LAB_015f0744:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a2338));
  return lVar7;
}

