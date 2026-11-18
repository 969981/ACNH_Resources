
/* WARNING: Removing unreachable block (ram,0x03747a8c) */

void FUN_03747a3c(long param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  *(ushort *)(param_1 + 10) = *param_2;
  if (DAT_05574040 != 0) {
    uVar2 = *param_2;
    if (((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
        (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
        uVar2 < 500)) && (lVar4 != 0)) {
      lVar4 = lVar4 + (ulong)uVar2 * 0x2d48;
      if ((*(long **)(lVar4 + 0x4cc70) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4cc70), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      uVar6 = FUN_03770770(param_2,0);
      if ((uVar6 & 1) == 0) {
        *(undefined2 *)(param_1 + 0xc) =
             *(undefined2 *)(*(long *)(lVar4 + 0x4cc58) + *(long *)(lVar4 + 0x4cc50) + 4);
        puVar1 = (ushort *)(*(long *)(lVar4 + 0x4cc58) + *(long *)(lVar4 + 0x4cc50));
        uVar2 = 0x40;
        if (puVar1[2] != 0xffff && (*puVar1 & 1) == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 8) = uVar2 | *(ushort *)(param_1 + 8) & 0xffbf;
      }
      else {
        *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x40;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x4cc70) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4cc70) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03747b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar5)();
        return;
      }
    }
  }
  return;
}

