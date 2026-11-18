
int FUN_036ee480(long param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  iVar4 = 0;
  iVar5 = 0;
  uVar6 = 0;
  do {
    lVar7 = *(long *)(param_1 + 0x38 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3));
    if (*(long **)(lVar7 + 0x11a0) == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)**(long **)(lVar7 + 0x11a0);
      uVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar1)();
      }
    }
    uVar3 = (uint)*(ushort *)(*(long *)(lVar7 + 0x1188) + *(long *)(lVar7 + 0x1180) + 6);
    if (0x14 < uVar3) {
      uVar3 = 0;
    }
    if (param_2 == uVar3) {
      if (iVar5 == param_3) {
        if ((uVar2 & 1) == 0) {
          return iVar4;
        }
        if (*(long *)(lVar7 + 0x11a0) == 0) {
          return iVar4;
        }
        puVar1 = *(undefined8 **)(*(long *)(lVar7 + 0x11a0) + 8);
        if (puVar1 == (undefined8 *)0x0) {
          return iVar4;
        }
        (**(code **)*puVar1)();
        return iVar4;
      }
      iVar5 = iVar5 + 1;
    }
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar7 + 0x11a0) != 0)) &&
       (puVar1 = *(undefined8 **)(*(long *)(lVar7 + 0x11a0) + 8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
    }
    iVar4 = iVar4 + 1;
    uVar6 = (ulong)((int)uVar6 + 1);
    if (iVar4 == 10) {
      return -1;
    }
  } while( true );
}

