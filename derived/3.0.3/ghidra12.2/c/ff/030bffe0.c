
void FUN_030bffe0(long param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x388);
  if (plVar7 == (long *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*plVar7 + 0x80))(plVar7,0);
  iVar3 = (**(code **)(*plVar7 + 0x80))(plVar7,1);
  lVar5 = *(long *)(plVar7[0xd] + (long)(iVar2 + (int)plVar7[0xc] * iVar3) * 0x18);
  if (lVar5 == 0) {
    plVar7 = *(long **)(param_1 + 0x388);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x388);
    if (*(long *)(lVar5 + 8) != 0) {
      if ((char)plVar7[4] == '\0') {
        if ((uint)((int)plVar7[5] == 0) == (param_2 & 1)) {
          return;
        }
      }
      else {
        plVar6 = (long *)((long)plVar7 + 0x24);
        if (*(char *)((long)plVar7 + 0x21) != '\0') {
          plVar6 = plVar7 + 5;
        }
        if ((int)*plVar6 == 0) {
          if ((param_2 & 1) != 0) {
            return;
          }
        }
        else if ((param_2 & 1) == 0) {
          return;
        }
      }
      goto LAB_030c00b4;
    }
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
LAB_030c00b4:
  iVar2 = (**(code **)(*plVar7 + 0x80))(plVar7,0);
  iVar3 = (**(code **)(*plVar7 + 0x80))(plVar7,1);
  lVar5 = *(long *)(plVar7[0xd] + (long)(iVar2 + (int)plVar7[0xc] * iVar3) * 0x18);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
    plVar7 = *(long **)(param_1 + 0x388);
    *(uint *)((long)plVar7 + 0x2c) = (param_2 ^ 0xffffffff) & 1;
    uVar4 = FUN_03c83810(plVar7);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)((long)plVar7 + 0x24);
      *(int *)((long)plVar7 + 0x24) = (int)plVar7[5];
      *(undefined4 *)(plVar7 + 5) = uVar1;
      *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) ^ 1;
      (**(code **)(*plVar7 + 0x48))(plVar7);
      if ((long *)plVar7[10] != plVar7 + 9) {
        lVar5 = (long)*(int *)((long)plVar7 + 0x5c);
        plVar6 = (long *)(plVar7[10] - lVar5);
        do {
          (**(code **)(*plVar6 + 0x18))(plVar6,(int)plVar7[5],*(undefined4 *)((long)plVar7 + 0x24));
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar5 + 8) - lVar5);
        } while (plVar6 != (long *)((long)(plVar7 + 9) - lVar5));
      }
    }
    FUN_03c835a0(plVar7);
  }
  return;
}

