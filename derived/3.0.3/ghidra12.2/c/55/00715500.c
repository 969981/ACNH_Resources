
void FUN_00715500(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  short local_68 [2];
  short local_64 [2];
  
  *(undefined4 *)(param_1 + 0x958) = 0;
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) {
        return;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return;
      }
      lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar7 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar7 + 0x205260) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x205260), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    puVar3 = PTR_DAT_04bb3170;
    lVar11 = 0;
    uVar12 = 0;
    lVar1 = param_1 + 0x778;
    uVar9 = *(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x100);
    do {
      lVar2 = lVar1 + (ulong)uVar12 * 0x30;
      if (9 < uVar12) {
        lVar2 = lVar1;
      }
      FUN_007ef010(local_64,lVar2 + 0x28);
      local_68[0] = *(short *)(*(long *)(lVar7 + 0x205248) + *(long *)(lVar7 + 0x205240) + lVar11);
      if (local_68[0] != *(short *)puVar3) {
        if (local_64[0] != local_68[0]) {
          *(short *)(lVar2 + 0x28) = local_68[0];
          if ((*(byte *)(lVar2 + 0x10) >> 1 & 1) != 0) {
            FUN_015a30c0(uVar9,lVar2);
          }
          uVar5 = FUN_015a2df4(uVar9,lVar2,local_68,&DAT_0414e698,0,1);
          if ((uVar5 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x95c) = 1;
          }
        }
        uVar12 = uVar12 + 1;
      }
      lVar11 = lVar11 + 2;
    } while (lVar11 != 0x14);
    if ((int)uVar12 < 10) {
      uVar6 = *(undefined2 *)puVar3;
      uVar10 = uVar12;
      do {
        lVar11 = lVar1 + (ulong)uVar10 * 0x30;
        if (9 < uVar10) {
          lVar11 = lVar1;
        }
        *(undefined2 *)(lVar11 + 0x28) = uVar6;
        if ((*(ushort *)(lVar11 + 0x10) >> 1 & 1) != 0) {
          FUN_015a30c0(uVar9);
          uVar6 = *(undefined2 *)puVar3;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 10);
    }
    *(uint *)(param_1 + 0x958) = uVar12;
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x205260) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x205260) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

