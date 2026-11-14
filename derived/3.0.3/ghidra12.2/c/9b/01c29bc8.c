
uint FUN_01c29bc8(undefined8 param_1,undefined2 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  uVar6 = 0;
  if (((param_2 == (undefined2 *)0x0) || (param_3 == (undefined1 *)0x0)) ||
     (param_4 == (undefined1 *)0x0)) goto LAB_01c29c8c;
  if (DAT_05574040 == 0) {
LAB_01c29c88:
    uVar6 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar7 == 0) goto LAB_01c29c88;
      lVar7 = lVar7 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar7 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar7 == 0)) goto LAB_01c29c88;
    if ((*(long **)(lVar7 + 0x1bf1b8) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x1bf1b8), puVar11 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar11)();
      uVar5 = uVar5 ^ 1;
    }
    uVar8 = FUN_027bf380(*(long *)(lVar7 + 0x1bf1a0) + *(long *)(lVar7 + 0x1bf198),param_5);
    uVar10 = (uint)((ulong)uVar8 >> 0x18) & 0xff;
    uVar4 = (undefined2)uVar8;
    uVar1 = (uint)uVar8 & 0xffff;
    uVar3 = (uint)uVar8 >> 0x10 & 0xff;
    uVar6 = nn::time::IsValidDate(uVar1,uVar3,uVar10);
    if ((uVar6 & 1) != 0) {
      uVar2 = (undefined1)((ulong)uVar8 >> 0x10);
      uVar9 = nn::time::IsValidDate(uVar1,uVar3,uVar10);
      if ((uVar9 & 1) == 0) {
        uVar4 = 2000;
      }
      *param_2 = uVar4;
      uVar9 = nn::time::IsValidDate(uVar1,uVar3,uVar10);
      if ((uVar9 & 1) == 0) {
        uVar2 = 1;
      }
      *param_3 = uVar2;
      uVar9 = nn::time::IsValidDate(uVar1,uVar3,uVar10);
      if ((uVar9 & 1) == 0) {
        uVar10 = 1;
      }
      *param_4 = (char)uVar10;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1bf1b8) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x1bf1b8) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
  }
LAB_01c29c8c:
  return uVar6 & 1;
}

