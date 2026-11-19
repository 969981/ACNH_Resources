
void FUN_03c835a0(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int local_a0;
  int local_98;
  int aiStack_94 [17];
  
  local_98 = 0;
  cVar2 = (char)param_1[4];
  local_a0 = 0x10;
  do {
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(*param_1 + 0x50))
                        (param_1,*(undefined4 *)((long)param_1 + 0x24),(int)param_1[5]);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (1 < local_98) {
        lVar5 = 0;
        do {
          iVar1 = 0;
          if (0xf < (int)lVar5) {
            iVar1 = local_a0;
          }
          if (aiStack_94[lVar5 - iVar1] == *(int *)((long)param_1 + 0x24)) {
            return;
          }
          lVar5 = lVar5 + 1;
        } while (local_98 + -1 != (int)lVar5);
      }
      FUN_03c83a50(param_1,0);
      if ((char)param_1[4] != '\0') goto LAB_03c83660;
    }
    else {
LAB_03c83660:
      if (*(int *)((long)param_1 + 0x2c) == -0x80000000) {
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined4 *)((long)param_1 + 0x24));
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 5) = uVar3;
      *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_1 + 0x34);
      *(int *)((long)param_1 + 0x34) = (int)param_1[6];
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)((long)param_1 + 0x24),uVar3);
      if ((long *)param_1[10] != param_1 + 9) {
        lVar5 = (long)*(int *)((long)param_1 + 0x5c);
        plVar6 = (long *)(param_1[10] - lVar5);
        do {
          (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)((long)param_1 + 0x24),uVar3);
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar5 + 8) - lVar5);
        } while (plVar6 != (long *)((long)(param_1 + 9) - lVar5));
      }
    }
    if (0xf < local_98) {
      return;
    }
    iVar1 = 0;
    if (0xf < local_98) {
      iVar1 = local_a0;
    }
    aiStack_94[local_98 - iVar1] = *(int *)((long)param_1 + 0x24);
    cVar2 = (char)param_1[4];
    local_98 = local_98 + 1;
  } while( true );
}

