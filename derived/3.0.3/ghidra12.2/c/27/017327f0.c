
void FUN_017327f0(long param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  void *__src;
  long *plVar8;
  long local_58;
  char local_50;
  char local_4f;
  int local_48;
  int local_44;
  
  uVar4 = FUN_0277d7b4(param_2,param_1 + 0xd4);
  if ((((uVar4 & 1) == 0) || (*(char *)((long)param_2 + 3) != *(char *)(param_1 + 0xd7))) ||
     (*(int *)(param_2 + 2) != *(int *)(param_1 + 0xd8))) {
    *(undefined2 *)(param_1 + 0xee) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d0) = param_5;
  iVar2 = *(int *)(param_1 + 0xe8);
  *(undefined2 *)(param_1 + 0xd4) = *param_2;
  *(undefined1 *)(param_1 + 0xd6) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)((long)param_2 + 3);
  uVar3 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0xe0) = param_5;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = *param_3;
  *(undefined4 *)(param_1 + 0xf8) = *param_4;
  __dest = *(void **)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0xfc) = param_4[1];
  *(undefined4 *)(param_1 + 0x100) = param_4[2];
  *(undefined4 *)(param_1 + 0x104) = param_4[3];
  *(undefined4 *)(param_1 + 0x108) = param_4[4];
  *(undefined4 *)(param_1 + 0x10c) = param_4[5];
  *(undefined4 *)(param_1 + 0x110) = param_4[6];
  uVar5 = *(undefined8 *)(param_4 + 7);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_4 + 9);
  *(undefined8 *)(param_1 + 0x114) = uVar5;
  plVar8 = (long *)(param_4 + 0xc);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  __src = *(void **)(param_4 + 0xe);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_4 + 0xc) + 0x18))(plVar8);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_4 + 0xe) + lVar6) == '\0') goto LAB_01732950;
      lVar7 = *(long *)(param_4 + 0xe) + lVar6;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01732950;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01732950;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01732950:
    iVar1 = (int)lVar6;
    if (*(int *)(param_1 + 0x138) <= (int)lVar6) {
      iVar1 = *(int *)(param_1 + 0x138) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x34);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_4 + 0x32);
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  if ((iVar2 == 1) && (*(int *)(param_1 + 0xe8) == 0)) {
    lVar6 = param_1 + 0x14 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar6 + 0x1d) == '\0') || (*(char *)(lVar6 + 0x1c) == '\0')) &&
       (local_44 = *(int *)(lVar6 + 0x14), local_44 != 0)) {
      local_48 = *(int *)(param_1 + 0xc);
      if (*(int *)PTR_DAT_04bb3238 != 0) {
        local_48 = *(int *)PTR_DAT_04bb3238;
      }
      FUN_0071c8d0(&local_58,&local_44,&local_48,0);
      if (((local_58 != 0) && (local_50 != '\0')) && (local_4f != '\0')) {
        lVar7 = *(long *)(local_58 + 0x60);
        *(char *)(lVar6 + 0x1c) = '\x01';
        *(char *)(lVar6 + 0x1d) = '\x01';
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) | 1;
        }
      }
    }
  }
  return;
}

