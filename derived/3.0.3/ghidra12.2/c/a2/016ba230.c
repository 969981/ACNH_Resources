
long FUN_016ba230(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar9 = 0;
    do {
      if (uVar9 < (uVar4 & 0xffffffff)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + uVar9 * 8);
      }
      else {
        lVar6 = 0;
      }
      plVar7 = (long *)(lVar6 + 0xb8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(lVar6 + 0xc0);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      if (lVar8 == lVar5) {
        return lVar6;
      }
      uVar4 = 0;
      bVar3 = true;
      lVar8 = *(long *)(lVar6 + 0xc0) + 2;
      do {
        lVar1 = lVar8 + uVar4;
        cVar2 = *(char *)(lVar1 + -2);
        if (cVar2 != *(char *)(lVar5 + uVar4)) break;
        if (cVar2 == '\0') {
          if (bVar3) {
            return lVar6;
          }
          break;
        }
        cVar2 = *(char *)(lVar1 + -1);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 1)) break;
        if (cVar2 == '\0') {
          return lVar6;
        }
        cVar2 = *(char *)(lVar8 + uVar4);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 2)) break;
        if (cVar2 == '\0') {
          return lVar6;
        }
        bVar3 = uVar4 < 0x7fffe;
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      uVar4 = (ulong)*(int *)(param_1 + 8);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar4);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x90);
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    uVar9 = 0;
    do {
      if (uVar9 < (uVar4 & 0xffffffff)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x98) + uVar9 * 8);
      }
      else {
        lVar6 = 0;
      }
      plVar7 = (long *)(lVar6 + 0xb8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(lVar6 + 0xc0);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      if (lVar8 == lVar5) {
        return lVar6;
      }
      uVar4 = 0;
      bVar3 = true;
      lVar8 = *(long *)(lVar6 + 0xc0) + 2;
      do {
        lVar1 = lVar8 + uVar4;
        cVar2 = *(char *)(lVar1 + -2);
        if (cVar2 != *(char *)(lVar5 + uVar4)) break;
        if (cVar2 == '\0') {
          if (bVar3) {
            return lVar6;
          }
          break;
        }
        cVar2 = *(char *)(lVar1 + -1);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 1)) break;
        if (cVar2 == '\0') {
          return lVar6;
        }
        cVar2 = *(char *)(lVar8 + uVar4);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 2)) break;
        if (cVar2 == '\0') {
          return lVar6;
        }
        bVar3 = uVar4 < 0x7fffe;
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      uVar4 = (ulong)*(int *)(param_1 + 0x90);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar4);
  }
  lVar5 = *(long *)(param_1 + 400);
  plVar7 = (long *)(lVar5 + 0xb8);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  lVar6 = *(long *)(lVar5 + 0xc0);
  (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar6 == param_2[1]) {
LAB_016ba4f0:
    lVar6 = *(long *)(param_1 + 400);
  }
  else {
    uVar4 = 0;
    bVar3 = true;
    do {
      cVar2 = *(char *)(*(long *)(lVar5 + 0xc0) + uVar4);
      if (cVar2 != *(char *)(param_2[1] + uVar4)) break;
      if (cVar2 == '\0') {
        if (bVar3) goto LAB_016ba4f0;
        break;
      }
      bVar3 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    lVar6 = 0;
  }
  return lVar6;
}

