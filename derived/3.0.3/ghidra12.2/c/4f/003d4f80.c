
undefined8 FUN_003d4f80(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar2 = (int *)FUN_003d5094(*param_1);
  iVar1 = *piVar2;
  *param_2 = iVar1;
  if (0 < iVar1) {
    uVar6 = 0;
    piVar2 = param_2 + 4;
    do {
      uVar3 = FUN_003d50a0(*param_1,uVar6 & 0xffffffff);
      piVar4 = (int *)FUN_003d50cc();
      iVar1 = *piVar4;
      param_2[uVar6 * 0x3d + 1] = iVar1;
      if (0 < iVar1) {
        uVar7 = 0;
        piVar4 = piVar2;
        do {
          piVar5 = (int *)FUN_003d50d8(uVar3,uVar7 & 0xffffffff);
          uVar7 = uVar7 + 1;
          piVar4[-2] = *piVar5;
          piVar4[-1] = piVar5[1];
          *piVar4 = piVar5[2];
          piVar4[1] = piVar5[3];
          piVar4[2] = piVar5[4];
          *(char *)(piVar4 + 3) = (char)piVar5[5];
          *(undefined1 *)((long)piVar4 + 0xd) = *(undefined1 *)((long)piVar5 + 0x15);
          piVar4 = piVar4 + 6;
        } while ((long)uVar7 < (long)param_2[uVar6 * 0x3d + 1]);
      }
      uVar6 = uVar6 + 1;
      piVar2 = piVar2 + 0x3d;
    } while ((long)uVar6 < (long)*param_2);
  }
  return 1;
}

