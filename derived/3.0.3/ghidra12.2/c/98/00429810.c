
undefined1  [16] FUN_00429810(ulong *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  puVar2 = (undefined1 *)*param_1;
  puVar3 = (undefined1 *)param_1[1];
  if (puVar2 != puVar3) {
    for (; puVar4 = puVar3, puVar2 < puVar3; puVar2 = puVar2 + 1) {
      uVar1 = FUN_0043a090(*puVar2);
      if ((uVar1 & 1) == 0) break;
    }
    do {
      puVar3 = puVar4;
      puVar4 = puVar3 + -1;
      if (puVar4 <= puVar2) break;
      uVar1 = FUN_0043a090(*puVar4);
    } while ((uVar1 & 1) != 0);
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}

