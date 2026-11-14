
uint FUN_01c27f3c(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar1;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      if ((param_3 & 1) == 0) {
        local_48 = 0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        uVar2 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 == 0) {
LAB_01c280dc:
          uVar5 = 0xbc;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01c280dc;
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
             (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8),
             puVar7 == (uint *)0x0)) goto LAB_01c280dc;
          uVar5 = 0;
          uVar2 = *puVar7;
          if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
            uVar5 = 0;
            if (*puVar8 != 0) {
              uVar2 = puVar8[1];
              if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar2 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar2);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < DAT_05326ec0) &&
                     (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar5 < 0xbd))
                  goto LAB_01c280e8;
                }
              }
              uVar5 = 0;
            }
          }
        }
LAB_01c280e8:
        if ((uVar5 == 0x70) &&
           (uVar4 = FUN_01c1e750(*(undefined8 *)PTR_DAT_04bb4830,param_2), (uVar4 & 1) == 0))
        goto LAB_01c28194;
      }
      if (DAT_05574040 != 0) {
        puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar9 = (**(code **)(*(long *)*puVar6 + 0x38))();
          if (lVar9 == 0) goto LAB_01c28194;
          lVar9 = lVar9 + 0x70;
        }
        else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
                (lVar9 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar9 == 0))
        goto LAB_01c28194;
        if ((*(long **)(lVar9 + 0x1bf1b8) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar9 + 0x1bf1b8), puVar6 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar6)();
          uVar3 = uVar3 ^ 1;
        }
        uVar2 = FUN_027bf130(*(long *)(lVar9 + 0x1bf1a0) + *(long *)(lVar9 + 0x1bf198),param_2);
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar9 + 0x1bf1b8) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x1bf1b8) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
        goto LAB_01c28198;
      }
    }
  }
LAB_01c28194:
  uVar2 = 0;
LAB_01c28198:
  return uVar2 & 1;
}

