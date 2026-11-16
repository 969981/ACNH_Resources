
void FUN_02938f10(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  long *plVar5;
  char *__src;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined **local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [56];
  ulong local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (param_3 < *(uint *)(param_1 + 0x78)) {
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar2 = 0;
    }
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x60) + 0xf0))();
    *(undefined4 *)((long)param_2 + 0xc) = *puVar3;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar2 = 0;
    }
    puVar4 = (undefined2 *)(**(code **)(*(long *)(lVar2 + 0xf0) + 0xf0))();
    *(undefined2 *)(param_2 + 3) = *puVar4;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar2 = 0;
    }
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x90) + 0xf0))();
    *(undefined4 *)(param_2 + 2) = *puVar3;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar2 = 0;
    }
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0xc0) + 0xf0))();
    *(undefined4 *)((long)param_2 + 0x14) = *puVar3;
    *(short *)((long)param_2 + 0x1a) = (short)*(undefined4 *)(param_1 + 0x58);
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar2 = 0;
    }
    plVar5 = (long *)(**(code **)(*(long *)(lVar2 + 0x120) + 0xf0))(lVar2 + 0x120);
    local_a8 = 0x40;
    local_6c = local_6c & 0xffffffffffffff;
    local_b8 = &PTR_LAB_048fd2d8;
    local_b0 = local_a4;
    (**(code **)(*plVar5 + 0x18))();
    pcVar8 = (char *)plVar5[1];
    __src = local_b0;
    if (local_a4 != pcVar8) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar2 = 0;
      do {
        if (*(char *)(plVar5[1] + lVar2) == '\0') goto LAB_02939184;
        lVar1 = plVar5[1] + lVar2;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_02939184;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_02939184;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_02939184:
      iVar6 = (int)lVar2;
      if (local_a8 <= (int)lVar2) {
        iVar6 = local_a8 + -1;
      }
      memcpy(local_a4,pcVar8,(long)iVar6);
      local_a4[iVar6] = '\0';
      __src = local_b0;
    }
    pcVar8 = (char *)param_2[5];
    local_b8 = &PTR_LAB_048fb9f8;
    __src[(long)local_a8 + -1] = '\0';
    if (pcVar8 == __src) {
      return;
    }
    local_b0 = __src;
    (*(code *)PTR_FUN_048fba10)(&local_b8);
    lVar2 = 0;
    do {
      if (local_b0[lVar2] == '\0') goto LAB_02939230;
      if (local_b0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_02939230;
      }
      if (local_b0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_02939230;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_02939230:
    iVar6 = (int)lVar2;
    iVar7 = *(int *)(param_2 + 6);
  }
  else {
    local_b8 = (undefined **)0x0;
    local_b0 = (char *)0x0;
    pcVar8 = (char *)param_2[5];
    lVar2 = 0;
    local_a8 = -1;
    local_a4[0] = -1;
    local_a4[1] = -1;
    local_a4[2] = -1;
    local_a4[3] = -1;
    local_a4[4] = '\0';
    local_a4[5] = '\0';
    local_a4[6] = '\0';
    local_a4[7] = '\0';
    __src = local_a4 + 0x20;
    *(undefined8 *)((long)param_2 + 0x14) = 0xffffffff;
    local_44 = 0;
    local_4c = 0;
    local_54 = 0;
    local_5c = 0;
    local_64 = 0;
    local_6c = 0;
    local_a4[0x30] = '\0';
    local_a4[0x31] = '\0';
    local_a4[0x32] = '\0';
    local_a4[0x33] = '\0';
    local_a4[0x34] = '\0';
    local_a4[0x35] = '\0';
    local_a4[0x36] = '\0';
    local_a4[0x37] = '\0';
    local_a4[0x28] = '\0';
    local_a4[0x29] = '\0';
    local_a4[0x2a] = '\0';
    local_a4[0x2b] = '\0';
    local_a4[0x2c] = '\0';
    local_a4[0x2d] = '\0';
    local_a4[0x2e] = '\0';
    local_a4[0x2f] = '\0';
    local_a4[0x20] = '\0';
    local_a4[0x21] = '\0';
    local_a4[0x22] = '\0';
    local_a4[0x23] = '\0';
    local_a4[0x24] = '\0';
    local_a4[0x25] = '\0';
    local_a4[0x26] = '\0';
    local_a4[0x27] = '\0';
    local_a4[0x18] = '\0';
    local_a4[0x19] = '\0';
    local_a4[0x1a] = '\0';
    local_a4[0x1b] = '\0';
    local_a4[0x1c] = '\0';
    local_a4[0x1d] = '\0';
    local_a4[0x1e] = '\0';
    local_a4[0x1f] = '\0';
    local_a4[0x10] = '\0';
    local_a4[0x11] = '\0';
    local_a4[0x12] = '\0';
    local_a4[0x13] = '\0';
    local_a4[0x14] = '\0';
    local_a4[0x15] = '\0';
    local_a4[0x16] = '\0';
    local_a4[0x17] = '\0';
    local_a4[8] = '\0';
    local_a4[9] = '\0';
    local_a4[10] = '\0';
    local_a4[0xb] = '\0';
    local_a4[0xc] = '\0';
    local_a4[0xd] = '\0';
    local_a4[0xe] = '\0';
    local_a4[0xf] = '\0';
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_2 + 1) = 0;
    do {
      if (local_a4[lVar2 + 0x20] == '\0') goto LAB_0293916c;
      if (local_a4[lVar2 + 0x21] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_0293916c;
      }
      if (local_a4[lVar2 + 0x22] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_0293916c;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_0293916c:
    iVar6 = (int)lVar2;
    iVar7 = *(int *)(param_2 + 6);
  }
  if (iVar7 <= iVar6) {
    iVar6 = iVar7 + -1;
  }
  memcpy(pcVar8,__src,(long)iVar6);
  pcVar8[iVar6] = '\0';
  return;
}

