
/* WARNING: Removing unreachable block (ram,0x0377607c) */

long FUN_03775e20(long param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = DAT_05ab7608;
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || (DAT_05ab7608 == 0)) {
LAB_0377604c:
    lVar6 = 0;
    if (DAT_05574040 != 0) {
      uVar3 = *(ushort *)(param_1 + 8);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
        lVar6 = 0;
        if ((uVar3 < 500) && (lVar7 != 0)) {
          lVar6 = lVar7 + (ulong)uVar3 * 0x2d48 + 0x4cc10;
        }
      }
      else {
        lVar6 = 0;
      }
    }
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + 0xa8;
    }
    return lVar7;
  }
  lVar7 = *(long *)(DAT_05ab7608 + 8);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar4 == (undefined8 *)0x0)) {
      if (*(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2) ==
          *(short *)(param_1 + 8)) goto LAB_03775fc4;
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      sVar1 = *(short *)(param_1 + 8);
      sVar2 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      if (sVar2 == sVar1) {
LAB_03775fc4:
        return lVar7 + 0xa8;
      }
    }
  }
  lVar8 = *(long *)(lVar6 + 0x10);
  lVar7 = lVar8 + 0x1188;
  if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar4 == (undefined8 *)0x0)) {
    if (*(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2) ==
        *(short *)(param_1 + 8)) goto LAB_03776108;
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    sVar1 = *(short *)(param_1 + 8);
    sVar2 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (sVar2 == sVar1) goto LAB_03776108;
  }
  lVar8 = *(long *)(lVar6 + 0x18);
  lVar7 = lVar8 + 0x1188;
  if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar4 == (undefined8 *)0x0)) {
    if (*(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2) ==
        *(short *)(param_1 + 8)) goto LAB_03776108;
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    sVar1 = *(short *)(param_1 + 8);
    sVar2 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (sVar2 == sVar1) goto LAB_03776108;
  }
  lVar6 = *(long *)(lVar6 + 0x20);
  lVar7 = lVar6 + 0x1188;
  if ((*(long **)(lVar6 + 0x11b0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x11b0), puVar4 == (undefined8 *)0x0)) {
    if (*(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2) !=
        *(short *)(param_1 + 8)) goto LAB_0377604c;
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    sVar1 = *(short *)(param_1 + 8);
    sVar2 = *(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x11b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x11b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (sVar2 != sVar1) goto LAB_0377604c;
  }
LAB_03776108:
  return lVar7 + 0x70;
}

