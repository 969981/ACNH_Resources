
void FUN_006fe720(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  void *__dest;
  undefined *local_168;
  void *local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_55;
  
  local_55 = 0;
  local_158 = 0x2f78664700000100;
  local_160 = (void *)((long)&local_158 + 4);
  local_150 = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  plVar6 = (long *)(**(code **)(*param_1 + 0x150))();
  pvVar5 = local_160;
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar7 = 0;
  do {
    if (*(char *)((long)local_160 + lVar7) == '\0') goto LAB_006fe7dc;
    if (*(char *)((long)local_160 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_006fe7dc;
    }
    if (*(char *)((long)local_160 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_006fe7dc;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_006fe7dc:
  uVar2 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar7 = 0;
  do {
    if (*(char *)(plVar6[1] + lVar7) == '\0') goto LAB_006fe83c;
    lVar1 = plVar6[1] + lVar7;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_006fe83c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_006fe83c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_006fe83c:
  uVar3 = (uint)lVar7;
  if ((int)((int)local_158 - uVar2) <= (int)(uint)lVar7) {
    uVar3 = (int)local_158 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    memcpy((void *)((long)pvVar5 + (ulong)uVar2),(void *)plVar6[1],(ulong)uVar3);
    *(undefined1 *)((long)pvVar5 + (long)(int)(uVar3 + uVar2)) = 0;
  }
  __dest = *(void **)(param_2 + 8);
  (**(code **)(local_168 + 0x18))(&local_168);
  pvVar5 = local_160;
  if (__dest != local_160) {
    (**(code **)(local_168 + 0x18))(&local_168);
    lVar7 = 0;
    do {
      if (*(char *)((long)local_160 + lVar7) == '\0') goto LAB_006fe8fc;
      if (*(char *)((long)local_160 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_006fe8fc;
      }
      if (*(char *)((long)local_160 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_006fe8fc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_006fe8fc:
    iVar4 = (int)lVar7;
    if (*(int *)(param_2 + 0x10) <= (int)lVar7) {
      iVar4 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,pvVar5,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  return;
}

