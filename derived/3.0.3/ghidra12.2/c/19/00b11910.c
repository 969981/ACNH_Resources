
void FUN_00b11910(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 auStack_288 [8];
  void *local_280;
  int local_278;
  void *local_248;
  int local_240;
  void *local_210;
  int local_208;
  void *local_1b8;
  int local_1b0;
  undefined1 local_168;
  undefined1 local_167;
  undefined4 local_160;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_b8;
  int local_b0;
  void *local_80;
  int local_78;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((plVar5 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb37d0), (uVar3 & 1) != 0)) {
    FUN_00b11e8c(auStack_288);
    plVar7 = (long *)(param_1 + 0xd8);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pvVar6 = *(void **)(param_1 + 0xe0);
    if (local_280 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(plVar7);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0xe0) + lVar4) == '\0') goto LAB_00b119fc;
        lVar1 = *(long *)(param_1 + 0xe0) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b119fc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b119fc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b119fc:
      iVar2 = (int)lVar4;
      if (local_278 <= (int)lVar4) {
        iVar2 = local_278 + -1;
      }
      memcpy(local_280,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_280 + (long)iVar2) = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(param_1 + 0x108);
    pvVar6 = *(void **)(param_1 + 0x110);
    if (local_248 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(param_1 + 0x108);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x110) + lVar4) == '\0') goto LAB_00b11a9c;
        lVar1 = *(long *)(param_1 + 0x110) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b11a9c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b11a9c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b11a9c:
      iVar2 = (int)lVar4;
      if (local_240 <= (int)lVar4) {
        iVar2 = local_240 + -1;
      }
      memcpy(local_248,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_248 + (long)iVar2) = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x138) + 0x18))(param_1 + 0x138);
    pvVar6 = *(void **)(param_1 + 0x140);
    if (local_210 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0x138) + 0x18))(param_1 + 0x138);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x140) + lVar4) == '\0') goto LAB_00b11b3c;
        lVar1 = *(long *)(param_1 + 0x140) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b11b3c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b11b3c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b11b3c:
      iVar2 = (int)lVar4;
      if (local_208 <= (int)lVar4) {
        iVar2 = local_208 + -1;
      }
      memcpy(local_210,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_210 + (long)iVar2) = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168);
    pvVar6 = *(void **)(param_1 + 0x170);
    if (local_1b8 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x170) + lVar4) == '\0') goto LAB_00b11bdc;
        lVar1 = *(long *)(param_1 + 0x170) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b11bdc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b11bdc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b11bdc:
      iVar2 = (int)lVar4;
      if (local_1b0 <= (int)lVar4) {
        iVar2 = local_1b0 + -1;
      }
      memcpy(local_1b8,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_1b8 + (long)iVar2) = 0;
    }
    local_168 = *(undefined1 *)(param_1 + 0x198);
    local_167 = *(undefined1 *)(param_1 + 0x1c0);
    local_148 = *(undefined4 *)(param_1 + 0x1e8);
    local_160 = *(undefined4 *)(param_1 + 0x1d0);
    local_144 = *(undefined4 *)(param_1 + 0x1ec);
    local_138 = *(undefined4 *)(param_1 + 0x1f8);
    local_124 = *(undefined8 *)(param_1 + 0x20c);
    local_130 = *(undefined4 *)(param_1 + 0x200);
    local_12c = *(undefined4 *)(param_1 + 0x204);
    local_128 = *(undefined4 *)(param_1 + 0x208);
    uStack_c8 = *(undefined8 *)(param_1 + 0x268);
    local_134 = *(undefined4 *)(param_1 + 0x1fc);
    local_fc = *(undefined4 *)(param_1 + 0x234);
    local_11c = *(undefined4 *)(param_1 + 0x214);
    uStack_110 = *(undefined8 *)(param_1 + 0x220);
    local_118 = *(undefined8 *)(param_1 + 0x218);
    local_108 = *(undefined4 *)(param_1 + 0x228);
    local_104 = *(undefined8 *)(param_1 + 0x22c);
    local_f8 = *(undefined1 *)(param_1 + 0x238);
    uStack_d8 = *(undefined8 *)(param_1 + 600);
    local_f4 = *(undefined8 *)(param_1 + 0x23c);
    local_ec = *(undefined4 *)(param_1 + 0x244);
    local_d0 = *(undefined8 *)(param_1 + 0x260);
    local_e8 = *(undefined8 *)(param_1 + 0x248);
    local_e0 = *(undefined8 *)(param_1 + 0x250);
    (**(code **)(*(long *)(param_1 + 0x270) + 0x18))(param_1 + 0x270);
    pvVar6 = *(void **)(param_1 + 0x278);
    if (local_b8 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0x270) + 0x18))(param_1 + 0x270);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x278) + lVar4) == '\0') goto LAB_00b11d5c;
        lVar1 = *(long *)(param_1 + 0x278) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b11d5c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b11d5c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b11d5c:
      iVar2 = (int)lVar4;
      if (local_b0 <= (int)lVar4) {
        iVar2 = local_b0 + -1;
      }
      memcpy(local_b8,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_b8 + (long)iVar2) = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
    pvVar6 = *(void **)(param_1 + 0x2b0);
    if (local_80 != pvVar6) {
      (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar4) == '\0') goto LAB_00b11dfc;
        lVar1 = *(long *)(param_1 + 0x2b0) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00b11dfc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00b11dfc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00b11dfc:
      iVar2 = (int)lVar4;
      if (local_78 <= (int)lVar4) {
        iVar2 = local_78 + -1;
      }
      memcpy(local_80,pvVar6,(long)iVar2);
      *(undefined1 *)((long)local_80 + (long)iVar2) = 0;
    }
    FUN_01f90400(plVar5[0x77] + 0x7910,auStack_288);
  }
  return;
}

