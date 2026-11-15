
bool FUN_021d7c00(undefined8 param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = FUN_0265c2a0(param_2);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
    FUN_038d1270(param_1,"-----");
    uVar5 = (ulong)*pbVar1;
    if (uVar5 < 0x23) {
      FUN_038d1270(param_1,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar5 * 8 + 0xb0),pbVar1[1]);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return lVar3 != 0;
}

