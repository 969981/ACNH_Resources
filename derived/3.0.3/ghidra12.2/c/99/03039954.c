
void FUN_03039954(uint *param_1,undefined8 param_2,char *param_3,int param_4,uint param_5,
                 long *param_6)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long local_28;
  
  puVar3 = PTR_DAT_04bb4ca8;
  if (param_1[0x24] != 0) {
    return;
  }
  if (*param_3 == '\0') {
    if (*(long *)(param_3 + 8) != 0) {
      local_28 = *(long *)(param_3 + 8);
      uVar5 = FUN_0344ea50(&local_28);
      puVar3 = PTR_DAT_04bb4ca8;
      if ((uVar5 & 1) == 0) {
        if (param_4 == 0) {
          local_28 = *(long *)(param_3 + 8);
          if (*param_3 != '\0') {
            local_28 = 0;
          }
          FUN_01d6cc7c(param_1,&local_28,param_5);
        }
        else {
          local_28 = *(long *)(param_3 + 8);
          if (*param_3 != '\0') {
            local_28 = 0;
          }
          FUN_01d6ccc4(param_1,&local_28,param_5);
        }
      }
      else if (param_4 == 0) {
        FUN_01d6cbf4(param_1,param_5);
      }
      else {
        if (*DAT_04cb54f0 == 0) goto LAB_03039b3c;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        lVar6 = *(long *)puVar3;
        param_1[0] = 0;
        param_1[1] = 0xffffffff;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        lVar6 = *(long *)(lVar6 + 0xd8);
        if ((((-1 < (int)param_5) && ((int)param_5 < *(int *)(lVar6 + 0x68))) &&
            (plVar7 = *(long **)(*(long *)(lVar6 + 0x70) + (ulong)param_5 * 8),
            plVar7 != (long *)0x0)) && (*plVar7 != 0)) {
          *param_1 = 1;
          plVar1 = &DAT_04178a58;
          if ((char)plVar7[0xd8] != '\0') {
            plVar1 = plVar7 + 1;
          }
          *(long *)(param_1 + 2) = *plVar1;
          *(long **)(param_1 + 4) = plVar7 + 1;
          goto LAB_03039b2c;
        }
        if ((int)param_5 < *(int *)(lVar6 + 0x9c)) {
          uVar4 = 3;
          goto LAB_03039bf0;
        }
      }
    }
LAB_03039bf8:
    uVar4 = *param_1;
    if (uVar4 - 4 < 2) {
LAB_03039c14:
      plVar7 = *(long **)(param_1 + 4);
      if (plVar7 == (long *)0x0) {
        return;
      }
    }
    else {
      if (uVar4 == 0) {
        return;
      }
      if (uVar4 == 1) goto LAB_03039c14;
      if (((uVar4 & 0xfffffffe) != 8) || (plVar7 = *(long **)(param_1 + 4), plVar7 == (long *)0x0))
      goto LAB_03039c58;
    }
    plVar1 = &DAT_04178a58;
    if ((char)plVar7[0xd7] != '\0') {
      plVar1 = plVar7;
    }
    if (*plVar1 != *(long *)(param_1 + 2)) {
      return;
    }
  }
  else {
    if (param_4 == 0) {
      if (*DAT_04cb54f0 == 0) goto LAB_03039b3c;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      lVar6 = *(long *)puVar3;
      param_1[0] = 0;
      param_1[1] = 0xffffffff;
      param_1[8] = 0;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      lVar6 = *(long *)(lVar6 + 0xf0);
      if (lVar6 != 0) {
        if (((-1 < (int)param_5) && ((int)param_5 < *(int *)(lVar6 + 0x58))) &&
           ((plVar7 = *(long **)(*(long *)(lVar6 + 0x60) + (ulong)param_5 * 8),
            plVar7 != (long *)0x0 && (*plVar7 != 0)))) {
          uVar4 = 8;
          goto LAB_03039b04;
        }
        if ((int)param_5 < *(int *)(lVar6 + 0x98)) {
          uVar4 = 8;
          goto LAB_03039bf0;
        }
      }
      goto LAB_03039bf8;
    }
    if (*DAT_04cb54f0 == 0) {
LAB_03039b3c:
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0xffffffff;
      param_1[8] = 0;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      return;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    lVar6 = *(long *)puVar3;
    param_1[0] = 0;
    param_1[1] = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    lVar6 = *(long *)(lVar6 + 0xf0);
    if (lVar6 == 0) goto LAB_03039bf8;
    if (((-1 < (int)param_5) && ((int)param_5 < *(int *)(lVar6 + 0x68))) &&
       ((plVar7 = *(long **)(*(long *)(lVar6 + 0x70) + (ulong)param_5 * 8), plVar7 != (long *)0x0 &&
        (*plVar7 != 0)))) {
      uVar4 = 9;
LAB_03039b04:
      *param_1 = uVar4;
      plVar1 = &DAT_04178a58;
      if ((char)plVar7[0xd8] != '\0') {
        plVar1 = plVar7 + 1;
      }
      lVar6 = *plVar1;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *(long *)(param_1 + 2) = lVar6;
      *(long **)(param_1 + 4) = plVar7 + 1;
LAB_03039b2c:
      param_1[1] = param_5;
      FUN_01d6cda0(param_1);
      goto LAB_03039bf8;
    }
    if (*(int *)(lVar6 + 0x9c) <= (int)param_5) goto LAB_03039bf8;
    uVar4 = 9;
LAB_03039bf0:
    *param_1 = uVar4;
    param_1[1] = param_5;
  }
LAB_03039c58:
  param_1[0xd] = param_5;
  (**(code **)(*param_6 + 0x10))(param_6,param_1 + 0x1c);
  local_28 = CONCAT44(local_28._4_4_,1);
  if (param_1[0x24] != 1) {
    param_1[0x24] = 1;
  }
  uVar4 = *param_1;
  if (uVar4 - 4 < 2) {
LAB_03039ca8:
    plVar7 = *(long **)(param_1 + 4);
    if (plVar7 == (long *)0x0) goto LAB_03039d0c;
LAB_03039cb0:
    plVar1 = &DAT_04178a58;
    if ((char)plVar7[0xd7] != '\0') {
      plVar1 = plVar7;
    }
    if (*plVar1 != *(long *)(param_1 + 2)) goto LAB_03039d0c;
  }
  else {
    if (uVar4 == 0) goto LAB_03039d0c;
    if (uVar4 == 1) goto LAB_03039ca8;
    if (((uVar4 & 0xfffffffe) == 8) && (plVar7 = *(long **)(param_1 + 4), plVar7 != (long *)0x0))
    goto LAB_03039cb0;
  }
  bVar2 = (byte)param_1[10];
  if ((bVar2 >> 2 & 1) == 0) {
    if (((bVar2 & 1) == 0) && (*(long *)(param_1 + 6) == 0)) {
      return;
    }
    if (((bVar2 >> 1 & 1) == 0) && (*(long *)(param_1 + 8) == 0)) {
      return;
    }
  }
LAB_03039d0c:
  uVar4 = FUN_03039d40(param_1,param_1);
  if (param_1[0x24] != uVar4) {
    param_1[0x24] = uVar4;
  }
  return;
}

