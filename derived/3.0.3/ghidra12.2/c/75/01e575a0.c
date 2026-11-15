
void FUN_01e575a0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *__s;
  void *pvVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (0x22 < *(int *)(param_1 + 0x378)) goto LAB_01e57a60;
  if (*(int *)(param_1 + 0x378) != 0xe) {
    if ((*(int *)(param_1 + 0x360) == 0xc) && (*(int *)(*(long *)(param_1 + 0x370) + 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bb43c0;
      uVar1 = FUN_0277d6c4(param_1 + 0x5f8);
      if (*(long *)puVar3 == 0) goto LAB_01e57658;
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((*(uint *)(lVar5 + 0x1d8) <= uVar1) ||
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar1 * 8) == 0)) goto LAB_01e57658;
      puVar3 = *(undefined **)(param_1 + 0x5a8);
      puVar6 = (undefined *)(param_1 + 0x600);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = puVar3;
      }
    }
    else {
LAB_01e57658:
      puVar3 = PTR_DAT_04bb43c0;
      lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x1480);
      if (*(char *)(lVar5 + 0x1d5) == '\0') {
LAB_01e576d8:
        puVar6 = (undefined *)(lVar5 + 0xd4);
      }
      else {
        puVar6 = (undefined *)(lVar5 + 0xcc);
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        uVar1 = FUN_0277d6c4(puVar6);
        if (*(long *)puVar3 == 0) {
LAB_01e576b8:
          iVar2 = FUN_0277d6c4(puVar6);
          if (iVar2 != 0xfffd) goto LAB_01e576d8;
          puVar6 = PTR_DAT_04bb37e0;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((*(uint *)(lVar10 + 0x1d8) <= uVar1) ||
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar1 * 8) == 0)) goto LAB_01e576b8;
        }
      }
      puVar3 = *(undefined **)(param_1 + 0x5a8);
    }
    if ((puVar3 != (undefined *)0x0) && (uVar4 = FUN_0277d7b4(puVar3,puVar6), (uVar4 & 1) == 0)) {
      FUN_01e57c78(param_1,*(undefined8 *)(param_1 + 0x5a8),0,1);
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x378) != 0xf) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x1490);
    if (*(char *)(lVar5 + 0x1d5) == '\0') {
LAB_01e57794:
      puVar6 = (undefined *)(lVar5 + 0xd4);
    }
    else {
      puVar6 = (undefined *)(lVar5 + 0xcc);
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar1 = FUN_0277d6c4(puVar6);
      if (*(long *)puVar3 == 0) {
LAB_01e57774:
        iVar2 = FUN_0277d6c4(puVar6);
        if (iVar2 != 0xfffd) goto LAB_01e57794;
        puVar6 = PTR_DAT_04bb37e0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar1) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar1 * 8) == 0)) goto LAB_01e57774;
      }
    }
    if ((*(long *)(param_1 + 0x5b0) != 0) &&
       (uVar4 = FUN_0277d7b4(*(long *)(param_1 + 0x5b0),puVar6), (uVar4 & 1) == 0)) {
      FUN_01e57c78(param_1,*(undefined8 *)(param_1 + 0x5b0),1,1);
    }
  }
  pvVar7 = *(void **)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x43c) = *(undefined8 *)(param_1 + 0x39c);
  *(undefined8 *)(param_1 + 0x444) = *(undefined8 *)(param_1 + 0x3a4);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x3ac);
  (**(code **)(*(long *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
  pvVar9 = *(void **)(param_1 + 0x3b8);
  if (pvVar7 != pvVar9) {
    (**(code **)(*(long *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x3b8) + lVar5) == '\0') goto LAB_01e5788c;
      lVar10 = *(long *)(param_1 + 0x3b8) + lVar5;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01e5788c;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01e5788c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01e5788c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x460) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x460) + -1;
    }
    memcpy(pvVar7,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x40c);
  pvVar7 = *(void **)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x430);
  *(undefined2 *)(param_1 + 0x4b0) = *(undefined2 *)(param_1 + 0x410);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x434);
  *(undefined1 *)(param_1 + 0x4b2) = *(undefined1 *)(param_1 + 0x412);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x4dc) = *(undefined8 *)(param_1 + 0x43c);
  *(undefined8 *)(param_1 + 0x4e4) = *(undefined8 *)(param_1 + 0x444);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x44c);
  (**(code **)(*(long *)(param_1 + 0x450) + 0x18))(param_1 + 0x450);
  pvVar9 = *(void **)(param_1 + 0x458);
  if (pvVar7 != pvVar9) {
    (**(code **)(*(long *)(param_1 + 0x450) + 0x18))(param_1 + 0x450);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x458) + lVar5) == '\0') goto LAB_01e57990;
      lVar10 = *(long *)(param_1 + 0x458) + lVar5;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01e57990;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01e57990;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01e57990:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x500) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x500) + -1;
    }
    memcpy(pvVar7,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined2 *)(param_1 + 0x550) = *(undefined2 *)(param_1 + 0x4b0);
  *(undefined1 *)(param_1 + 0x552) = *(undefined1 *)(param_1 + 0x4b2);
  iVar2 = *(int *)(param_1 + 0x378);
  if ((iVar2 < 0) || (0x22 < iVar2)) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x360) = iVar2;
  FUN_03ebb160(param_1 + 0x278,*(undefined4 *)(param_1 + 0x360));
  if ((2 < *(int *)(param_1 + 0x360) - 0xeU) && (*(char *)(param_1 + 0x59f) != '\0')) {
    *(undefined1 *)(param_1 + 0x59f) = 0;
    plVar8 = *(long **)(param_1 + 0x48);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar4 & 1) != 0)) {
      FUN_01e3e328(plVar8);
    }
  }
LAB_01e57a60:
  __s = *(undefined8 **)(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0x378) = 0x23;
  *(undefined4 *)(param_1 + 0x388) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 6;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_1 + 0x59e);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (__s != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x3c0) < 1) {
      iVar2 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memset(__s,0,(long)iVar2);
    *(undefined1 *)((long)__s + (long)iVar2) = 0;
  }
  *(undefined8 *)(param_1 + 0x408) = 0xfffe;
  FUN_0277d4ac(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x412) = 0;
  *(undefined2 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x418) = 0;
  return;
}

