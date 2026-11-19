
void FUN_03840030(undefined8 *param_1,undefined4 param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined *local_60;
  char *local_58;
  
  uVar2 = param_4;
  if (0x13 < param_4) {
    uVar2 = 0;
  }
  (**(code **)((&DAT_05ae0d58)[(ulong)uVar2 * 2] + 0x18))(&DAT_05ae0d58 + (ulong)uVar2 * 2);
  puVar4 = PTR_DAT_04bb2028;
  uVar7 = (&DAT_05ae0d60)[(ulong)uVar2 * 2];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  *param_1 = &PTR_LAB_04b5da78;
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((long)param_1 + 0x1c) = param_4;
  param_1[4] = param_3;
  param_1[2] = uVar7;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar4 + 0x10);
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = (undefined1 *)((long)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 7) = 0x20;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = param_1 + 0xe;
  param_1[0xd] = 0x4000000000;
  uVar5 = (**(code **)(*param_3 + 0x150))(param_3);
  *(undefined4 *)(param_1 + 1) = uVar5;
  local_58 = (char *)(**(code **)(*param_3 + 0x140))(param_3,param_4);
  if (local_58 != (char *)0x0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    if (*local_58 != '\0') {
      *(undefined1 *)param_1[6] = 0;
      lVar3 = param_1[6];
      (**(code **)(param_1[5] + 0x18))(plVar8);
      lVar9 = param_1[6];
      lVar6 = 0;
      do {
        if (*(char *)(lVar9 + lVar6) == '\0') goto LAB_0384018c;
        if (*(char *)(lVar9 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0384018c;
        }
        if (*(char *)(lVar9 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0384018c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0384018c:
      uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      uVar1 = 3;
      if ((int)(*(int *)(param_1 + 7) - uVar2) < 4) {
        uVar1 = *(int *)(param_1 + 7) + ~uVar2;
      }
      if (0 < (int)uVar1) {
        memcpy((void *)(lVar3 + (ulong)uVar2),&DAT_040dc36d,(ulong)uVar1);
        *(undefined1 *)(lVar3 + (ulong)uVar1 + (ulong)uVar2) = 0;
        lVar9 = param_1[6];
      }
      (**(code **)(param_1[5] + 0x18))(plVar8);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[6] + lVar6) == '\0') goto LAB_0384022c;
        lVar3 = param_1[6] + lVar6;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0384022c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0384022c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0384022c:
      uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar6 = 0;
      do {
        if (local_58[lVar6] == '\0') goto LAB_0384028c;
        if (local_58[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0384028c;
        }
        if (local_58[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0384028c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0384028c:
      uVar1 = (uint)lVar6;
      if ((int)(*(int *)(param_1 + 7) - uVar2) <= (int)(uint)lVar6) {
        uVar1 = *(int *)(param_1 + 7) + ~uVar2;
      }
      if (0 < (int)uVar1) {
        (**(code **)(local_60 + 0x18))(&local_60);
        memcpy((void *)(lVar9 + (ulong)uVar2),local_58,(ulong)uVar1);
        *(undefined1 *)(lVar9 + (int)(uVar1 + uVar2)) = 0;
      }
      lVar3 = param_1[6];
      (**(code **)(param_1[5] + 0x18))(plVar8);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[6] + lVar6) == '\0') goto LAB_0384032c;
        lVar9 = param_1[6] + lVar6;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0384032c;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0384032c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0384032c:
      uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      uVar2 = *(int *)(param_1 + 7) + ~uVar1;
      if (1 < (int)(*(int *)(param_1 + 7) - uVar1)) {
        uVar2 = 1;
      }
      if (0 < (int)uVar2) {
        memcpy((void *)(lVar3 + (ulong)uVar1),&DAT_040bd946,(ulong)uVar2);
        *(undefined1 *)(lVar3 + (ulong)uVar2 + (ulong)uVar1) = 0;
      }
      (**(code **)(param_1[5] + 0x18))(plVar8);
      param_1[2] = param_1[6];
    }
  }
  return;
}

