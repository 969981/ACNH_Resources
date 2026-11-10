
undefined1  [16] FUN_001dc4e0(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar5 = (ulong *)(param_1 + 1);
  puVar2 = (ulong *)*puVar5;
  if ((ulong *)*puVar5 == (ulong *)0x0) {
    puVar6 = puVar5;
  }
  else {
    do {
      while( true ) {
        puVar6 = puVar2;
        uVar3 = FUN_001dc410(param_2,puVar6 + 4);
        if ((uVar3 & 1) != 0) break;
        uVar3 = FUN_001dc410(puVar6 + 4,param_2);
        if ((uVar3 & 1) == 0) {
          if (*puVar5 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *puVar5;
            return auVar8;
          }
          goto LAB_001dc558;
        }
        puVar5 = puVar6 + 1;
        puVar2 = (ulong *)*puVar5;
        if ((ulong *)*puVar5 == (ulong *)0x0) goto LAB_001dc558;
      }
      puVar2 = (ulong *)*puVar6;
      puVar5 = puVar6;
    } while ((ulong *)*puVar6 != (ulong *)0x0);
  }
LAB_001dc558:
  auVar7._0_8_ = (undefined8 *)FUN_00187df4(0xc0);
  FUN_001e1564(auVar7._0_8_ + 4,param_3);
  uVar1 = *(undefined1 *)(param_3 + 0x90);
  *auVar7._0_8_ = 0;
  auVar7._0_8_[1] = 0;
  auVar7._0_8_[2] = puVar6;
  *(undefined1 *)(auVar7._0_8_ + 0x16) = uVar1;
  auVar7._0_8_[0x17] = *(undefined8 *)(param_3 + 0x98);
  *puVar5 = (ulong)auVar7._0_8_;
  puVar4 = auVar7._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_03876250(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  auVar7._8_8_ = 1;
  return auVar7;
}

