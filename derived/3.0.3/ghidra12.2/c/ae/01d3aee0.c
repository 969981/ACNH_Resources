
int FUN_01d3aee0(undefined1 *param_1,int param_2,long *param_3,int param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined *local_78;
  undefined1 *puStack_70;
  int local_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar2 = 0;
  do {
    if (*(char *)(param_3[1] + lVar2) == '\0') goto LAB_01d3af70;
    lVar1 = param_3[1] + lVar2;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_01d3af70;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_01d3af70;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_01d3af70:
  uVar3 = 2;
  if ((param_5 & 1) == 0) {
    uVar3 = 0;
  }
  iVar5 = (int)lVar2 + (uVar3 | param_4 << 2);
  if (iVar5 < param_2) {
    uVar4 = (long)param_2 - 1U & 0xffffffff;
    param_1[uVar4] = 0;
    local_78 = PTR_DAT_04bb2030;
    *param_1 = 0;
    local_78 = local_78 + 0x10;
    puStack_70 = param_1;
    local_68 = param_2;
    if (0 < param_4) {
      uVar7 = 0;
      param_1[uVar4] = 0;
      do {
        if (param_1[uVar7] == '\0') goto LAB_01d3b014;
        if (param_1[uVar7 + 1] == '\0') {
          uVar7 = uVar7 + 1;
          goto LAB_01d3b014;
        }
        if (param_1[uVar7 + 2] == '\0') {
          uVar7 = uVar7 + 2;
          goto LAB_01d3b014;
        }
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar7 = 0;
LAB_01d3b014:
      uVar6 = (uint)uVar7;
      uVar3 = param_4 * 4;
      if ((int)(param_2 - uVar6) <= param_4 * 4) {
        uVar3 = ~uVar6 + param_2;
      }
      if (0 < (int)uVar3) {
        memset(param_1 + (uVar7 & 0xffffffff),0x20,(ulong)uVar3);
      }
      param_1[(int)(uVar3 + uVar6)] = 0;
    }
    if ((param_5 & 1) == 0) {
      lVar2 = 0;
      param_1[(long)param_2 - 1U] = 0;
      do {
        if (param_1[lVar2] == '\0') goto LAB_01d3b0bc;
        if (param_1[lVar2 + 1] == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_01d3b0bc;
        }
        if (param_1[lVar2 + 2] == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_01d3b0bc;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_01d3b0bc:
      uVar3 = (uint)lVar2 & ((int)(uint)lVar2 >> 0x1f ^ 0xffffffffU);
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar2 = 0;
      do {
        if (*(char *)(param_3[1] + lVar2) == '\0') goto LAB_01d3b11c;
        lVar1 = param_3[1] + lVar2;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_01d3b11c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_01d3b11c;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_01d3b11c:
      uVar6 = (uint)lVar2;
      if ((int)(param_2 - uVar3) <= (int)(uint)lVar2) {
        uVar6 = ~uVar3 + param_2;
      }
      if (0 < (int)uVar6) {
        (**(code **)(*param_3 + 0x18))(param_3);
        memcpy(param_1 + uVar3,(void *)param_3[1],(ulong)uVar6);
        param_1[(int)(uVar6 + uVar3)] = 0;
      }
    }
    else {
      (**(code **)(*param_3 + 0x18))(param_3);
      FUN_038d13f0(&local_78,&DAT_040e1e8e,param_3[1]);
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}

