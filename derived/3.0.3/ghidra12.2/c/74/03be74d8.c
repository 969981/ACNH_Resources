
bool FUN_03be74d8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  long lVar3;
  undefined1 (*pauVar4) [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = (**(code **)(*param_1 + 0x10))();
  if (param_3 != (undefined4 *)0x0 && lVar3 != 0) {
    pauVar4 = (undefined1 (*) [12])(**(code **)(*param_1 + 0x10))(param_1,param_2);
    auVar2 = *pauVar4;
    auVar1 = *pauVar4;
    uVar6 = *(undefined8 *)pauVar4[2];
    uVar5 = *(undefined8 *)(pauVar4[1] + 4);
    uVar8 = *(undefined8 *)(pauVar4[3] + 4);
    uVar7 = *(undefined8 *)(pauVar4[2] + 8);
    uVar10 = *(undefined8 *)(pauVar4[4] + 8);
    uVar9 = *(undefined8 *)pauVar4[4];
    *param_3 = auVar1._0_4_;
    param_3[1] = (int)uVar5;
    param_3[2] = (int)uVar7;
    param_3[3] = (int)uVar9;
    *(ulong *)(param_3 + 6) = CONCAT44((int)((ulong)uVar9 >> 0x20),(int)((ulong)uVar7 >> 0x20));
    *(ulong *)(param_3 + 4) = CONCAT44((int)((ulong)uVar5 >> 0x20),auVar1._4_4_);
    param_3[8] = auVar2._8_4_;
    param_3[9] = (int)uVar6;
    param_3[10] = (int)uVar8;
    param_3[0xb] = (int)uVar10;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
  return param_3 != (undefined4 *)0x0 && lVar3 != 0;
}

