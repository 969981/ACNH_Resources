
void FUN_002cfc30(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_04bcea10;
  *(uint *)((long)param_1 + 0xc) = (uint)param_2 & 0xff;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10((param_2 & 0xff) << 3,uVar2);
  if (((param_2 & 0xff) != 0) && (lVar3 != 0)) {
    uVar5 = param_2 & 3;
    if (((uint)param_2 & 0xff) < 4) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar3 + 0x10);
      do {
        lVar6 = lVar6 + -4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while (-lVar6 != (param_2 & 0xfc));
      lVar6 = -lVar6;
    }
    if (uVar5 != 0) {
      puVar7 = (undefined8 *)(lVar3 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[2] = lVar3;
  if (*(int *)((long)param_1 + 0xc) != 0) {
    uVar5 = 0;
    do {
      uVar2 = FUN_0021f454();
      plVar4 = (long *)FUN_00285d10(0x688,uVar2);
      if (plVar4 != (long *)0x0) {
        FUN_002eb5f0(plVar4);
      }
      (**(code **)(*plVar4 + 0x80))(plVar4);
      *(long **)(param_1[2] + uVar5 * 8) = plVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((long)param_1 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x002cfd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}

