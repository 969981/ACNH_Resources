
void FUN_039bb430(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar6 = 0;
  plVar8 = (long *)0x0;
  uVar5 = 0;
  puVar1 = PTR_DAT_04bd1150 + 0x10;
  plVar4 = (long *)0x0;
  do {
    plVar3 = plVar4;
    if (((uint)uVar6 == (uint)*(byte *)(param_1 + (long)(int)(uint)uVar6 * 0x38 + 0x41)) &&
       (plVar7 = *(long **)(param_2 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)),
       *plVar7 != 0)) {
      plVar7[0x9c] = (long)puVar1;
      plVar3 = plVar7;
      plVar2 = plVar7;
      if (plVar4 != (long *)0x0) {
        plVar3 = plVar4;
        plVar2 = plVar8;
      }
      plVar8 = plVar2;
      plVar7[0x9d] = 0;
      plVar7[0x9e] = 0;
      plVar7[0x9f] = 0;
      plVar7[0xa0] = 0;
      plVar7[0x50] = (long)puVar1;
      plVar7[0x51] = 0;
      *(byte *)(plVar7 + 0xe7) =
           *(byte *)(plVar7 + 0xe7) & 0xfc | *(int *)((long)plVar7 + 0x72c) != 0;
      plVar7[0x52] = 0;
      plVar7[0x53] = 0;
      plVar7[0x54] = 0;
      plVar7[4] = (long)puVar1;
      plVar7[5] = 0;
      *(byte *)(plVar7 + 0x9b) =
           *(byte *)(plVar7 + 0x9b) & 0xfc | *(int *)((long)plVar7 + 0x4cc) != 0;
      plVar7[8] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      *(byte *)(plVar7 + 0x4f) =
           *(byte *)(plVar7 + 0x4f) & 0xfc | *(int *)((long)plVar7 + 0x26c) != 0;
    }
    *(undefined8 *)(param_2 + (long)(int)uVar5 * 8) = 0;
    uVar6 = uVar5 + 1;
    uVar5 = uVar6 & 0xffffffff;
    plVar4 = plVar3;
  } while ((int)uVar6 != 0x40);
  FUN_038f4ad0(plVar8 + -7);
                    /* WARNING: Could not recover jumptable at 0x039bb554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar8[-7] + 8))(plVar8 + -7);
  return;
}

