
void FUN_0383f5a0(undefined8 *param_1,undefined4 param_2,long *param_3,uint param_4)

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
  (**(code **)((&DAT_05ae0be0)[(ulong)uVar2 * 2] + 0x18))(&DAT_05ae0be0 + (ulong)uVar2 * 2);
  puVar4 = PTR_DAT_04bb2028;
  uVar7 = (&DAT_05ae0be8)[(ulong)uVar2 * 2];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  *param_1 = &PTR_LAB_04b5da28;
  param_1[4] = param_3;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = uVar7;
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(uint *)((long)param_1 + 0x1c) = param_4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = (undefined1 *)((long)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 7) = 0x20;
  param_1[0xc] = param_1 + 0xe;
  param_1[0xd] = 0x4000000000;
  uVar5 = 0;
  if ((param_3[0x22a] != 0) && (lVar6 = *(long *)(param_3[0x22a] + 0x50), uVar5 = 0, lVar6 != 0)) {
    uVar5 = *(undefined4 *)(lVar6 + 0x80);
  }
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
        if (*(char *)(lVar9 + lVar6) == '\0') goto LAB_0383f6fc;
        if (*(char *)(lVar9 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0383f6fc;
        }
        if (*(char *)(lVar9 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0383f6fc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0383f6fc:
      uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      uVar1 = 8;
      if ((int)(*(int *)(param_1 + 7) - uVar2) < 9) {
        uVar1 = *(int *)(param_1 + 7) + ~uVar2;
      }
      if (0 < (int)uVar1) {
        memcpy((void *)(lVar3 + (ulong)uVar2),"SklAnim[",(ulong)uVar1);
        *(undefined1 *)(lVar3 + (ulong)uVar1 + (ulong)uVar2) = 0;
        lVar9 = param_1[6];
      }
      (**(code **)(param_1[5] + 0x18))(plVar8);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[6] + lVar6) == '\0') goto LAB_0383f79c;
        lVar3 = param_1[6] + lVar6;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0383f79c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0383f79c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0383f79c:
      uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar6 = 0;
      do {
        if (local_58[lVar6] == '\0') goto LAB_0383f7fc;
        if (local_58[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0383f7fc;
        }
        if (local_58[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0383f7fc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0383f7fc:
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
        if (*(char *)(param_1[6] + lVar6) == '\0') goto LAB_0383f89c;
        lVar9 = param_1[6] + lVar6;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0383f89c;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0383f89c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0383f89c:
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

