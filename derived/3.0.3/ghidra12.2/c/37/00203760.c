
undefined1  [16] FUN_00203760(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar6 = (ulong *)(param_1 + 1);
  puVar2 = (ulong *)*puVar6;
  if ((ulong *)*puVar6 == (ulong *)0x0) {
    puVar7 = puVar6;
  }
  else {
    do {
      while( true ) {
        puVar7 = puVar2;
        uVar3 = FUN_0018b4e0(param_2,puVar7 + 4);
        if ((uVar3 & 1) != 0) break;
        uVar3 = FUN_0018b4e0(puVar7 + 4,param_2);
        if ((uVar3 & 1) == 0) {
          if (*puVar6 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *puVar6;
            return auVar9;
          }
          goto LAB_002037d8;
        }
        puVar6 = puVar7 + 1;
        puVar2 = (ulong *)*puVar6;
        if ((ulong *)*puVar6 == (ulong *)0x0) goto LAB_002037d8;
      }
      puVar2 = (ulong *)*puVar7;
      puVar6 = puVar7;
    } while ((ulong *)*puVar7 != (ulong *)0x0);
  }
LAB_002037d8:
  auVar8._0_8_ = (undefined8 *)FUN_00187df4(0x58);
  puVar1 = PTR_DAT_04bc0ec8;
  lVar5 = *param_4;
  *(undefined1 *)(auVar8._0_8_ + 5) = 0;
  auVar8._0_8_[4] = puVar1 + 0x10;
  auVar8._0_8_[7] = auVar8._0_8_ + 5;
  auVar8._0_8_[8] = 0x10;
  FUN_0018b070(auVar8._0_8_ + 4,*(undefined8 *)(lVar5 + 0x18),0xffffffffffffffff);
  FUN_0018d610(auVar8._0_8_ + 9);
  *auVar8._0_8_ = 0;
  auVar8._0_8_[1] = 0;
  auVar8._0_8_[2] = puVar7;
  *puVar6 = (ulong)auVar8._0_8_;
  puVar4 = auVar8._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar4 = (undefined8 *)*puVar6;
  }
  FUN_03876250(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  auVar8._8_8_ = 1;
  return auVar8;
}

