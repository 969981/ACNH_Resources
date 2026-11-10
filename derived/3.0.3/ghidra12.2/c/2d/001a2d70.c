
undefined1  [16] FUN_001a2d70(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar4 = param_1 + 1;
  if ((long *)*plVar4 == (long *)0x0) {
    plVar5 = plVar4;
  }
  else {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, (ulong)plVar4[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar4[4]) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = plVar4;
          return auVar7;
        }
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar5 = plVar4 + 1;
          goto LAB_001a2dd8;
        }
      }
      plVar1 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_001a2dd8:
  auVar6._0_8_ = (undefined8 *)FUN_00187df4(0x60);
  param_4 = (undefined8 *)*param_4;
  auVar6._0_8_[5] = PTR_DAT_04bcbc48 + 0x10;
  auVar6._0_8_[4] = *param_4;
  *(undefined4 *)(auVar6._0_8_ + 6) = 1;
  *(undefined1 *)((long)auVar6._0_8_ + 0x34) = 0;
  auVar6._0_8_[10] = 0;
  *(undefined1 *)(auVar6._0_8_ + 0xb) = 0;
  auVar6._0_8_[5] = &PTR_FUN_048393d8;
  uVar2 = DAT_04be21f8;
  auVar6._0_8_[8] = 0;
  auVar6._0_8_[9] = uVar2;
  uVar2 = FUN_00196a4c();
  auVar6._0_8_[7] = uVar2;
  *(undefined2 *)((long)auVar6._0_8_ + 0x59) = 0;
  auVar6._0_8_[2] = plVar4;
  *auVar6._0_8_ = 0;
  auVar6._0_8_[1] = 0;
  *plVar5 = (long)auVar6._0_8_;
  puVar3 = auVar6._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar3 = (undefined8 *)*plVar5;
  }
  FUN_03876250(param_1[1],puVar3);
  param_1[2] = param_1[2] + 1;
  auVar6._8_8_ = 1;
  return auVar6;
}

