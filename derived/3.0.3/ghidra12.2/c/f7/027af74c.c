
void FUN_027af74c(undefined8 *param_1,ulong *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint local_38;
  uint local_34;
  
  uVar5 = *param_2;
  if (uVar5 != 0) {
    if (((long)uVar5 < 0) || (*(byte *)((long)param_1 + 1) < uVar5)) {
      *param_1 = 0;
      *(undefined2 *)((long)param_1 + 4) = 0xfffe;
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 7) = 0;
      FUN_0277d4ac((undefined2 *)((long)param_1 + 4));
      *(undefined4 *)((long)param_1 + 0xc) = 0xfffe0000;
    }
    else {
      *(undefined1 *)((long)param_1 + 2) = 0;
      *(byte *)((long)param_1 + 1) = (*(byte *)((long)param_1 + 1) - (char)uVar5) + '\x01';
      puVar3 = PTR_DAT_04bb43c0;
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4((long)param_1 + 4);
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_38 = 0;
          FUN_02b67a30(&local_38,param_3);
          local_34 = local_38;
          if (DAT_05574040 != 0) {
            puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
            if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
              lVar7 = (**(code **)(*(long *)*puVar6 + 0x38))();
              if (lVar7 == 0) {
                return;
              }
              lVar7 = lVar7 + 0x70;
            }
            else {
              if (puVar6 == (undefined8 *)0x0) {
                return;
              }
              if ((long *)puVar6[0x26] == (long *)0x0) {
                return;
              }
              lVar7 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
              if (lVar7 == 0) {
                return;
              }
            }
            if (local_34 < 10) {
              lVar2 = lVar7 + 0x1962d8 + (ulong)local_34 * 0x10d8;
              if (9 < local_34) {
                lVar2 = lVar7 + 0x1962d8;
              }
              if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
                 (puVar6 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar6 == (undefined8 *)0x0)) {
                uVar4 = 1;
              }
              else {
                uVar4 = (**(code **)*puVar6)();
                uVar4 = uVar4 ^ 1;
              }
              lVar7 = 0;
              do {
                lVar1 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + lVar7;
                uVar5 = FUN_0277d7b4(lVar1 + 0x14,(long)param_1 + 4);
                if ((((uVar5 & 1) != 0) && (*(char *)(lVar1 + 0x17) == *(char *)((long)param_1 + 7))
                    ) && (*(int *)(lVar1 + 0x18) == *(int *)(param_1 + 1))) {
                  *(undefined1 *)((long)param_1 + 2) = 1;
                }
                lVar7 = lVar7 + 0xc;
              } while (lVar7 != 0x1b0);
              if ((((uVar4 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
                 (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8),
                 puVar6 != (undefined8 *)0x0)) {
                (**(code **)*puVar6)();
              }
            }
          }
        }
      }
    }
  }
  return;
}

