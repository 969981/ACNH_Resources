
undefined1  [16] FUN_001ddba0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar7 = (ulong *)(param_1 + 1);
  puVar2 = (ulong *)*puVar7;
  if ((ulong *)*puVar7 == (ulong *)0x0) {
    puVar8 = puVar7;
  }
  else {
    do {
      while( true ) {
        puVar8 = puVar2;
        uVar3 = FUN_0018b4e0(param_2,puVar8 + 4);
        if ((uVar3 & 1) != 0) break;
        uVar3 = FUN_0018b4e0(puVar8 + 4,param_2);
        if ((uVar3 & 1) == 0) {
          if (*puVar7 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *puVar7;
            return auVar10;
          }
          goto LAB_001ddc18;
        }
        puVar7 = puVar8 + 1;
        puVar2 = (ulong *)*puVar7;
        if ((ulong *)*puVar7 == (ulong *)0x0) goto LAB_001ddc18;
      }
      puVar2 = (ulong *)*puVar8;
      puVar7 = puVar8;
    } while ((ulong *)*puVar8 != (ulong *)0x0);
  }
LAB_001ddc18:
  auVar9._0_8_ = (undefined8 *)FUN_00187df4(0x70);
  puVar1 = PTR_DAT_04bc0ec8;
  lVar6 = *param_4;
  *(undefined1 *)(auVar9._0_8_ + 5) = 0;
  auVar9._0_8_[7] = auVar9._0_8_ + 5;
  auVar9._0_8_[8] = 0x10;
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  auVar9._0_8_[4] = puVar1 + 0x10;
  FUN_0018b070(auVar9._0_8_ + 4,uVar4,0xffffffffffffffff);
  *auVar9._0_8_ = 0;
  auVar9._0_8_[1] = 0;
  auVar9._0_8_[2] = puVar8;
  auVar9._0_8_[9] = puVar1 + 0x10;
  *(undefined1 *)(auVar9._0_8_ + 10) = 0;
  auVar9._0_8_[0xc] = auVar9._0_8_ + 10;
  auVar9._0_8_[0xd] = 0x10;
  *puVar7 = (ulong)auVar9._0_8_;
  puVar5 = auVar9._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*puVar7;
  }
  FUN_03876250(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  auVar9._8_8_ = 1;
  return auVar9;
}

