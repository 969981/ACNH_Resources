
undefined8 FUN_003d25b0(long *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_003d27a4(param_1[1],param_3);
  uVar2 = FUN_003d27f4();
  uVar4 = FUN_003d2878();
  *param_2 = uVar4;
  uVar1 = FUN_003d2844(uVar2);
  *(undefined1 *)((long)param_2 + 9) = uVar1;
  uVar1 = FUN_003d285c(uVar2);
  *(undefined1 *)((long)param_2 + 10) = uVar1;
  FUN_003d2898(uVar2,(long)param_2 + 0xb,param_2 + 3,3);
  puVar3 = (undefined4 *)FUN_003d2954(uVar2);
  uVar4 = *puVar3;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 1);
  param_2[1] = uVar4;
  if (*(uint *)(*param_1 + 8) >> 8 < 0x101) {
    *(undefined2 *)((long)param_2 + 0xf) = 0x40;
    *(undefined1 *)((long)param_2 + 0x11) = 0;
    return 1;
  }
  uVar1 = FUN_003d29c4(uVar2);
  *(undefined1 *)((long)param_2 + 0xf) = uVar1;
  uVar1 = FUN_003d29ec(uVar2);
  *(undefined1 *)(param_2 + 4) = uVar1;
  uVar1 = FUN_003d2a18(uVar2);
  *(undefined1 *)((long)param_2 + 0x11) = uVar1;
  return 1;
}

