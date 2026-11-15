
ulong FUN_0211b8d0(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "NpcPlayer") {
LAB_0211b970:
    if (*(int *)(param_1 + 0xf8) == param_3) {
      uVar5 = 0xfffffffe;
      goto LAB_0211bad8;
    }
    if (0 < (int)*(uint *)(param_1 + 0x1e8)) {
      uVar6 = 0;
      uVar5 = 0xffffffff;
      do {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1f0) + uVar6 * 8) + 0xf0) == param_3) {
          uVar5 = uVar6 & 0xffffffff;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (*(uint *)(param_1 + 0x1e8) != uVar6);
      goto LAB_0211bad8;
    }
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      cVar2 = ((char *)param_2[1])[uVar5];
      if (cVar2 != "NpcPlayer"[uVar5]) break;
      if (cVar2 == '\0') {
        if (bVar3) goto LAB_0211b970;
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    uVar1 = *(uint *)(param_1 + 0x1e8);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar5 < *(uint *)(param_1 + 0x1e8)) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x1f0) + uVar5 * 8);
        }
        else {
          lVar9 = 0;
        }
        plVar7 = (long *)(lVar9 + 0xf8);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar8 = *(long *)(lVar9 + 0x100);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar4 = param_2[1];
        if (lVar8 == lVar4) goto LAB_0211bad8;
        uVar6 = 0;
        bVar3 = true;
        lVar9 = *(long *)(lVar9 + 0x100) + 2;
        do {
          lVar8 = lVar9 + uVar6;
          cVar2 = *(char *)(lVar8 + -2);
          if (cVar2 != *(char *)(lVar4 + uVar6)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_0211bad8;
            break;
          }
          cVar2 = *(char *)(lVar8 + -1);
          if (cVar2 != *(char *)(lVar4 + uVar6 + 1)) break;
          if (cVar2 == '\0') goto LAB_0211bad8;
          cVar2 = *(char *)(lVar9 + uVar6);
          if (cVar2 != *(char *)(lVar4 + uVar6 + 2)) break;
          if (cVar2 == '\0') goto LAB_0211bad8;
          bVar3 = uVar6 < 0x7fffe;
          uVar6 = uVar6 + 3;
        } while (uVar6 != 0x80001);
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar1);
      uVar5 = 0xffffffff;
      goto LAB_0211bad8;
    }
  }
  uVar5 = 0xffffffff;
LAB_0211bad8:
  return uVar5 & 0xffffffff;
}

