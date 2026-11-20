
bool FUN_03f33290(long param_1,long *param_2)

{
  void *__src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  void *__dest;
  long lVar9;
  
  lVar9 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))();
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    do {
      if (*(char *)(lVar9 + uVar7) == '.') {
        uVar6 = (int)uVar7 + 1;
        goto LAB_03f3330c;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
    uVar6 = uVar2;
  }
LAB_03f3330c:
  bVar5 = lVar9 != *param_2;
  if ((bVar5) || (uVar6 != uVar3)) {
    if (bVar5) {
LAB_03f33390:
      pcVar8 = (char *)(lVar9 + (int)uVar6);
      uVar7 = 0;
      bVar4 = true;
LAB_03f333b4:
      if (pcVar8[uVar7] != '\0') {
        if (pcVar8[uVar7] == '/') {
          if (bVar4) goto LAB_03f333a4;
          goto LAB_03f33410;
        }
        if (pcVar8[uVar7 + 1] == '\0') goto LAB_03f33410;
        if (pcVar8[uVar7 + 1] == '/') goto LAB_03f333a4;
        if (pcVar8[uVar7 + 2] == '\0') goto LAB_03f33410;
        if (pcVar8[uVar7 + 2] == '/') goto LAB_03f333a4;
        bVar4 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
        if (uVar7 != 0x80001) goto LAB_03f333b4;
      }
LAB_03f33410:
      uVar7 = 0;
      bVar4 = true;
      while( true ) {
        if (pcVar8[uVar7] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7] == '\\') break;
        if (pcVar8[uVar7 + 1] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7 + 1] == '\\') goto LAB_03f333a4;
        if (pcVar8[uVar7 + 2] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7 + 2] == '\\') goto LAB_03f333a4;
        bVar4 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
        if (uVar7 == 0x80001) goto LAB_03f33324;
      }
      if (!bVar4) goto LAB_03f33324;
LAB_03f333a4:
      uVar7 = 0;
      bVar4 = true;
      if ((int)uVar6 < (int)uVar2) goto LAB_03f33470;
      goto LAB_03f333b4;
    }
    do {
      uVar7 = 0;
      pcVar8 = (char *)(lVar9 + (int)uVar6);
      bVar4 = true;
      do {
        if (pcVar8[uVar7] == '\0') break;
        if (pcVar8[uVar7] == '/') {
          if (bVar4) goto LAB_03f33550;
          break;
        }
        if (pcVar8[uVar7 + 1] == '\0') break;
        if (pcVar8[uVar7 + 1] == '/') goto LAB_03f33550;
        if (pcVar8[uVar7 + 2] == '\0') break;
        if (pcVar8[uVar7 + 2] == '/') goto LAB_03f33550;
        bVar4 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar7 = 0;
      bVar4 = true;
      while( true ) {
        if (pcVar8[uVar7] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7] == '\\') break;
        if (pcVar8[uVar7 + 1] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7 + 1] == '\\') goto LAB_03f33550;
        if (pcVar8[uVar7 + 2] == '\0') goto LAB_03f33324;
        if (pcVar8[uVar7 + 2] == '\\') goto LAB_03f33550;
        bVar4 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
        if (uVar7 == 0x80001) goto LAB_03f33324;
      }
      if (!bVar4) goto LAB_03f33324;
LAB_03f33550:
      if ((int)uVar6 < (int)uVar2) {
        do {
          uVar6 = uVar6 + 1;
          if (*pcVar8 == '.') goto LAB_03f33490;
          pcVar8 = pcVar8 + 1;
        } while (uVar2 != uVar6);
        uVar6 = uVar2;
      }
LAB_03f33490:
    } while (uVar6 != uVar3);
  }
  uVar6 = uVar3;
LAB_03f33324:
  if (bVar5 || uVar6 != uVar3) {
    __dest = *(void **)(param_1 + 8);
    __src = (void *)(lVar9 + (int)uVar6);
    if (__dest != __src) {
      lVar9 = 0;
      do {
        if (*(char *)((long)__src + lVar9) == '\0') goto LAB_03f3358c;
        if (*(char *)((long)__src + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03f3358c;
        }
        if (*(char *)((long)__src + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03f3358c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03f3358c:
      iVar1 = (int)lVar9;
      if (*(int *)(param_1 + 0x10) <= (int)lVar9) {
        iVar1 = *(int *)(param_1 + 0x10) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
  }
  return bVar5 || uVar6 != uVar3;
  while (pcVar8 = pcVar8 + 1, uVar2 != uVar6) {
LAB_03f33470:
    uVar6 = uVar6 + 1;
    if (*pcVar8 == '.') goto LAB_03f33390;
  }
  uVar6 = uVar2;
  goto LAB_03f33390;
}

