
undefined1  [16] FUN_001df650(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar5 = (ulong *)(param_1 + 1);
  puVar1 = (ulong *)*puVar5;
  if ((ulong *)*puVar5 == (ulong *)0x0) {
    puVar6 = puVar5;
  }
  else {
    do {
      while( true ) {
        puVar6 = puVar1;
        uVar2 = FUN_001df520(param_2,puVar6 + 4);
        if ((uVar2 & 1) != 0) break;
        uVar2 = FUN_001df520(puVar6 + 4,param_2);
        if ((uVar2 & 1) == 0) {
          if (*puVar5 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *puVar5;
            return auVar8;
          }
          goto LAB_001df6c8;
        }
        puVar5 = puVar6 + 1;
        puVar1 = (ulong *)*puVar5;
        if ((ulong *)*puVar5 == (ulong *)0x0) goto LAB_001df6c8;
      }
      puVar1 = (ulong *)*puVar6;
      puVar5 = puVar6;
    } while ((ulong *)*puVar6 != (ulong *)0x0);
  }
LAB_001df6c8:
  auVar7._0_8_ = (undefined8 *)FUN_00187df4(0x148);
  lVar4 = *param_4;
  FUN_001e1564(auVar7._0_8_ + 4,lVar4);
  FUN_001e1564(auVar7._0_8_ + 0x16,lVar4 + 0x90);
  *auVar7._0_8_ = 0;
  auVar7._0_8_[1] = 0;
  auVar7._0_8_[2] = puVar6;
  *puVar5 = (ulong)auVar7._0_8_;
  lVar4 = *(long *)*param_1;
  auVar7._0_8_[0x28] = 0;
  puVar3 = auVar7._0_8_;
  if (lVar4 != 0) {
    *param_1 = lVar4;
    puVar3 = (undefined8 *)*puVar5;
  }
  FUN_03876250(param_1[1],puVar3);
  param_1[2] = param_1[2] + 1;
  auVar7._8_8_ = 1;
  return auVar7;
}

