
void FUN_003d3270(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined1 *)((long)param_1 + 0x3b) = 1;
  if (*(char *)((long)param_1 + 0x16e) != '\0') {
    uVar4 = FUN_003ca198();
    FUN_003ca594(uVar4,param_1 + 0x1b);
    *(undefined1 *)((long)param_1 + 0x16e) = 0;
  }
  if (*(char *)((long)param_1 + 0x39) != '\0') {
    *(undefined1 *)((long)param_1 + 0x39) = 0;
  }
  if ((char)param_1[7] == '\0') goto LAB_003d3308;
  uVar4 = FUN_003c0010();
  FUN_003c00a0(uVar4,param_1 + 0x18);
  if (param_1[0x2c] != 0) {
    if (*(char *)(param_1[0x2c] + 0xc1) != '\0') {
      FUN_003d3ae0(param_1);
      FUN_003bf544(param_1[0x2c]);
      if (param_1[0x2c] == 0) goto LAB_003d32f4;
    }
    FUN_003bfbc0();
    param_1[0x2c] = 0;
  }
LAB_003d32f4:
  (**(code **)(*param_1 + 0x38))(param_1,0);
LAB_003d3308:
  if (*(char *)((long)param_1 + 0x16d) != '\0') {
    FUN_003c5db8(param_1);
    *(undefined1 *)((long)param_1 + 0x16d) = 0;
  }
  if (param_1[0x2f] != 0) {
    FUN_003d3e0c();
    lVar7 = param_1[0x2f];
    if (lVar7 != 0) {
      lVar8 = param_1[0x2e];
      uVar5 = FUN_003d3ea8(lVar7);
      bVar3 = (uVar5 & 1) == 0;
      lVar1 = 0x38;
      if (bVar3) {
        lVar1 = 0x28;
      }
      lVar6 = *(long *)(lVar7 + 0x3f0);
      *(undefined8 *)(lVar7 + 0x3f0) = *(undefined8 *)(lVar8 + lVar1);
      lVar2 = lVar8 + 0x38;
      if (bVar3) {
        lVar2 = lVar8 + 0x28;
      }
      *(long *)(lVar6 + 8) = lVar2;
      *(long *)(*(long *)(lVar8 + lVar1) + 8) = lVar7 + 0x3f0;
      *(long *)(lVar8 + lVar1) = lVar6;
      param_1[0x2f] = 0;
    }
  }
  return;
}

