
void FUN_003d372c(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)((long)param_1 + 0x16c) != '\x02') {
    if (*(char *)((long)param_1 + 0x16c) != '\x01') goto LAB_003d3820;
    lVar5 = param_1[0x2e];
    if (lVar5 == 0) {
      return;
    }
    plVar6 = *(long **)(lVar5 + 0x30);
    if (plVar6 == (long *)(lVar5 + 0x28)) {
      return;
    }
    plVar2 = (long *)plVar6[1];
    lVar5 = *plVar2;
    *(long **)(*plVar6 + 8) = plVar2;
    *plVar2 = *plVar6;
    *(long **)(lVar5 + 8) = plVar6;
    *plVar6 = lVar5;
    param_1[0x2f] = (long)(plVar6 + -0x7e);
    *(undefined1 *)((long)param_1 + 0x16c) = 2;
    FUN_003d3d80(plVar6 + -0x7e,param_1 + 0x30);
  }
  uVar3 = FUN_003d3e3c(param_1[0x2f]);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar5 = param_1[0x2f];
  if (*(char *)(lVar5 + 0x98) == '\0') {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    if (*(char *)((long)param_1 + 0x16e) != '\0') {
      uVar4 = FUN_003ca198();
      FUN_003ca594(uVar4,param_1 + 0x1b);
      *(undefined1 *)((long)param_1 + 0x16e) = 0;
    }
    if (*(char *)((long)param_1 + 0x39) == '\0') {
      return;
    }
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    return;
  }
  lVar1 = *(long *)(lVar5 + 0x78);
  lVar5 = *(long *)(lVar5 + 0x80);
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    if (*(char *)((long)param_1 + 0x16e) != '\0') {
      uVar4 = FUN_003ca198();
      FUN_003ca594(uVar4,param_1 + 0x1b);
      *(undefined1 *)((long)param_1 + 0x16e) = 0;
    }
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
  }
  param_1[0x1f] = lVar1;
  param_1[0x20] = lVar5;
  *(undefined1 *)((long)param_1 + 0x16c) = 3;
  *(undefined1 *)((long)param_1 + 0xf3) = 0;
  (**(code **)(*param_1 + 0x38))(param_1,1);
  uVar4 = FUN_003c0010();
  FUN_003c0080(uVar4,param_1 + 0x18);
LAB_003d3820:
  if ((int)param_1[0x23] < 1) {
    if (((char)param_1[7] != '\0') && (*(char *)((long)param_1 + 0x39) != '\0')) {
      if ((*(char *)((long)param_1 + 0x3a) == '\0') &&
         ((((char)param_1[0x1e] != '\0' && (param_1[0x2c] == 0)) ||
          (((char)param_1[0x1e] == '\0' && (uVar3 = FUN_003d38e0(param_1), (uVar3 & 1) == 0)))))) {
        FUN_003d338c(param_1);
        return;
      }
      FUN_003d3ae0(param_1);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x23) = (int)param_1[0x23] + -1;
  }
  return;
}

