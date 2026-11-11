
void FUN_0047f980(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = *(undefined8 *)*param_1;
  pauVar2 = param_1 + 1;
  uVar5 = *(undefined8 *)*pauVar2;
  pauVar1 = param_1 + 2;
  uVar4 = *(undefined8 *)*pauVar1;
  auVar7 = NEON_ext(*pauVar2,*pauVar2,8,1);
  auVar8 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar6 = NEON_ext(*param_1,*param_1,8,1);
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = (int)((ulong)uVar4 >> 0x20);
  *(long *)(param_1[2] + 8) = auVar8._0_8_;
  *(ulong *)param_1[2] = CONCAT44(auVar7._0_4_,auVar6._0_4_);
  *(undefined8 *)(*param_1 + 8) = uVar4;
  *(ulong *)*param_1 = CONCAT44((int)uVar5,(int)uVar3);
  *(long *)(param_1[1] + 8) = auVar9._0_8_;
  *(ulong *)param_1[1] = CONCAT44((int)((ulong)uVar5 >> 0x20),(int)((ulong)uVar3 >> 0x20));
  return;
}

