
void FUN_03a05000(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(uint *)(param_1 + 0x108) <= param_2) {
    param_2 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x110) + (long)(int)param_2 * 0x430;
  if ((*(byte *)(lVar4 + 0x3c8) & 1) != 0) {
    if (*(int *)(param_1 + 0x120) != 0) {
      lVar7 = (long)*(int *)(param_1 + 0x120) << 3;
      puVar5 = *(undefined8 **)(param_1 + 0x128);
      do {
        (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,lVar4);
        lVar7 = lVar7 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
    }
    if (0 < *(int *)(lVar4 + 0x10)) {
      uVar6 = 0;
      lVar7 = 0x60;
      uVar2 = *(uint *)(param_1 + 0x5598);
      do {
        lVar1 = *(long *)(lVar4 + 0x18) + lVar7;
        FUN_039eefb0(lVar4,uVar6 & 0xffffffff,lVar1 + -0x60,lVar1 + 0x60,lVar1,0,uVar2 >> 2 & 1);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x410;
      } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x10));
    }
    plVar3 = *(long **)(param_1 + 0x5590);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03a050f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x70))(plVar3,lVar4,param_1);
      return;
    }
  }
  return;
}

