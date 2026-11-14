
void FUN_01d4d3c4(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(uint *)(param_1 + 0x380) < 0x2d &&
      (1L << ((ulong)*(uint *)(param_1 + 0x380) & 0x3f) & 0x180000060000U) != 0) {
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    FUN_03ebb160(param_1 + 0x378,7);
    if (*(int *)(param_1 + 0x3e0) == 7) {
      lVar2 = *(long *)(param_1 + 0x3f0);
      if (*(int *)(param_1 + 1000) == 0) {
        if (lVar2 == 0) goto LAB_01d4d478;
        uVar3 = 0;
        uVar4 = 0;
        uVar5 = 1;
      }
      else {
        if (lVar2 == 0) goto LAB_01d4d478;
        uVar3 = *(undefined4 *)(param_1 + 1000);
        uVar5 = 0xffffffff;
        uVar4 = *(undefined4 *)(param_1 + 0x3ec);
      }
      *(undefined4 *)(lVar2 + 8) = uVar5;
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      if (*(undefined8 **)(param_1 + 0x3f0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x3f0) = 0;
        *(undefined8 *)(param_1 + 0x3f0) = 0;
      }
    }
  }
LAB_01d4d478:
  *(undefined1 *)(param_1 + 0xab2) = 1;
  uVar1 = FUN_01d4cfe0(param_1,param_2 & 1,param_3);
  if (((uVar1 & 1) == 0) && (*(undefined1 *)(param_1 + 0xab2) = 0, param_3 != 0)) {
    *(undefined8 *)(param_3 + 8) = 0x32ffffffff;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return;
}

