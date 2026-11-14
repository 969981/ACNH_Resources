
void FUN_01738690(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x50) < 0)) &&
     (lVar6 = *(long *)(param_2 + 0x1150), lVar6 != 0)) {
    if (((DAT_05280510 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05280510), iVar4 != 0)) {
      DAT_05280500 = PTR_DAT_04bb2020 + 0x10;
      DAT_05280508 = "const_float7";
      __cxa_guard_release(&DAT_05280510);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = *(uint *)(lVar6 + 0x30);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        plVar5 = (long *)**(long **)(*(long *)(lVar6 + 0x38) + uVar7 * 8);
        if ((plVar5 != (long *)0x0) && (uVar2 = (**(code **)(*plVar5 + 0xb8))(), 0 < (int)uVar2)) {
          uVar8 = 0;
          do {
            plVar5 = (long *)**(undefined8 **)(*(long *)(lVar6 + 0x38) + (long)(short)uVar7 * 8);
            uVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5,(int)uVar8 >> 0x10,&DAT_05280500);
            if (((((uVar7 & 0xffff) != 0xffff) && ((int)uVar8 != -0x10000)) &&
                ((uVar3 & 0xffff) != 0xffff)) && (*(uint *)(param_1 + 0x50) < 10)) {
              *(ulong *)(param_1 + (ulong)*(uint *)(param_1 + 0x50) * 8) =
                   uVar8 & 0xffffffff | (ulong)(uVar3 & 0xffff) << 0x20 | uVar7 & 0xffff;
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            }
            uVar8 = uVar8 + 0x10000;
          } while ((ulong)uVar2 * 0x10000 != uVar8);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  return;
}

