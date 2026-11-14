
uint FUN_01b04458(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if ((puVar4 != (uint *)0x0) && (uVar1 = *puVar4, uVar1 != 0 && puVar4 != (uint *)(ulong)uVar1)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar1);
    if ((*puVar7 != 0) && ((uVar1 = puVar7[1], uVar1 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar5 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar5 != 0) {
        uVar2 = 0;
        if ((ulong)uVar1 != 0) {
          uVar2 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar1);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 0x57)) {
          lVar5 = *(long *)PTR_DAT_04bb46b0;
          if (lVar5 == 0) {
LAB_01b04564:
            lVar5 = 0;
          }
          else {
            puVar6 = *(undefined8 **)(lVar5 + 0x10);
            if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
              lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
              lVar5 = 0;
              if (lVar3 != 0) {
                lVar5 = lVar3 + 0x70;
              }
            }
            else {
              if (puVar6 == (undefined8 *)0x0) goto LAB_01b04564;
              lVar5 = 0;
              if ((long *)puVar6[0x26] != (long *)0x0) {
                lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
              }
            }
          }
          if ((*(long **)(lVar5 + 0x1c24e8) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c24e8), puVar6 == (undefined8 *)0x0)) {
            uVar1 = 1;
          }
          else {
            uVar1 = (**(code **)*puVar6)();
            uVar1 = uVar1 ^ 1;
          }
          local_16 = 0;
          local_14 = 0;
          local_18 = *(undefined2 *)
                      (*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x900);
          FUN_0277d4ac(&local_18);
          uVar2 = FUN_0277d7b4(&local_18,param_1 + 8);
          if ((((uVar1 & 1) == 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 8),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
          goto LAB_01b04534;
        }
      }
    }
  }
  uVar2 = 0;
LAB_01b04534:
  return uVar2 & 1;
}

