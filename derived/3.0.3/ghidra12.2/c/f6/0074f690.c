
undefined8 FUN_0074f690(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  undefined *local_e0;
  char *local_d8;
  int local_d0;
  char local_cc [127];
  undefined1 local_4d;
  int local_48;
  
  local_d0 = 0x80;
  local_4d = 0;
  local_e0 = PTR_DAT_04bb2e90 + 0x10;
  local_d8 = local_cc;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar10 = (char *)param_2[1];
  if (local_cc != pcVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0074f74c;
      lVar9 = param_2[1] + lVar5;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0074f74c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0074f74c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0074f74c:
    iVar2 = (int)lVar5;
    if (local_d0 <= (int)lVar5) {
      iVar2 = local_d0 + -1;
    }
    memcpy(local_cc,pcVar10,(long)iVar2);
    local_cc[iVar2] = '\0';
  }
  local_e0 = PTR_DAT_04bb2d88 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = FUN_006bd550(param_2[1],0);
  if (*(long *)(param_1 + 0x280) != param_1 + 0x278) {
    lVar9 = (long)*(int *)(param_1 + 0x28c);
    lVar5 = *(long *)(param_1 + 0x280) - lVar9;
    do {
      if (*(int *)(lVar5 + 0x100) == local_48) {
        plVar8 = (long *)(lVar5 + 0x68);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar10 = *(char **)(lVar5 + 0x70);
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar10 == local_d8) {
LAB_0074f8ac:
          if ((*(byte *)(lVar5 + 0x30) >> 1 & 1) == 0) {
            return 0;
          }
          uVar3 = FUN_03f2d924(lVar5 + 0x28);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          puVar4 = (undefined8 *)FUN_03f2d7f0(lVar5 + 0x28);
          if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4be8);
          }
          if (puVar4 == (undefined8 *)0x0) {
            return 0;
          }
          uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4be0);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          return puVar4[6];
        }
        cVar1 = **(char **)(lVar5 + 0x70);
        if (cVar1 == *local_d8) {
          if (cVar1 == '\0') goto LAB_0074f8ac;
          lVar7 = 0x7fffe;
          pcVar10 = local_d8;
          pcVar6 = *(char **)(lVar5 + 0x70);
          while( true ) {
            if (pcVar6[1] != pcVar10[1]) break;
            if (pcVar6[1] == '\0') goto LAB_0074f8ac;
            if (pcVar6[2] != pcVar10[2]) break;
            if (pcVar6[2] == '\0') goto LAB_0074f8ac;
            if ((lVar7 == 0) || (cVar1 = pcVar6[3], cVar1 != pcVar10[3])) break;
            lVar7 = lVar7 + -3;
            pcVar10 = pcVar10 + 3;
            pcVar6 = pcVar6 + 3;
            if (cVar1 == '\0') goto LAB_0074f8ac;
          }
        }
      }
      lVar5 = *(long *)(lVar5 + lVar9 + 8) - lVar9;
    } while (lVar5 != (param_1 + 0x278) - lVar9);
  }
  return 0;
}

