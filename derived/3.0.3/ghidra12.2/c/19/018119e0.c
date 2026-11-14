
/* WARNING: Removing unreachable block (ram,0x01811a28) */

undefined8 FUN_018119e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar2 = 1;
  *param_1 = 1;
  *param_2 = 1;
  if ((DAT_05574040 != 0) && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) {
    lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if ((*(long **)(lVar3 + 0x5d4288) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x5d4288), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      uVar5 = (uint)*(byte *)(*(long *)(lVar3 + 0x5d4270) + *(long *)(lVar3 + 0x5d4268));
      if (2 < uVar5) {
        uVar5 = 3;
      }
      *param_1 = uVar5;
      uVar5 = (uint)*(byte *)(*(long *)(lVar3 + 0x5d4270) + *(long *)(lVar3 + 0x5d4268) + 1);
      if (2 < uVar5) {
        uVar5 = 3;
      }
      *param_2 = uVar5;
      if (((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x5d4288) != 0)) {
        puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x5d4288) + 8);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        (**(code **)*puVar4)();
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

