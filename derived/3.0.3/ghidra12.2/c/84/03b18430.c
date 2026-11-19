
void FUN_03b18430(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00367b6c();
  param_1[0x10] = 0;
  *param_1 = (long)&DAT_04b73988;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = *(long *)(param_2 + 0x88);
  lVar2 = *(long *)(param_2 + 0x90);
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  param_1[0x12] = lVar2;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)((long)param_1 + 0x99) = 2;
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = *(long *)(param_2 + 0x30);
  param_1[8] = *(long *)(param_2 + 0x40);
  lVar2 = FUN_03b14b60(*(undefined8 *)(param_2 + 0x18),param_1,1);
  param_1[3] = lVar2;
  if (param_3 != 0) {
    FUN_0037c2a0(lVar2,param_3);
  }
  lVar2 = FUN_00367b30(0x10);
  if (lVar2 != 0) {
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
  }
  param_1[4] = lVar2;
  lVar2 = *(long *)(param_2 + 0x20);
  for (lVar7 = *(long *)(lVar2 + 8); lVar7 != lVar2; lVar7 = *(long *)(lVar7 + 8)) {
    plVar4 = (long *)param_1[3];
    lVar1 = param_1[4];
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    lVar3 = FUN_00367b30(0x38);
    if (lVar3 != 0) {
      FUN_00367390(lVar3,uVar6);
    }
    for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != lVar7 + 0x10; lVar8 = *(long *)(lVar8 + 8)) {
      uVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,*(long *)(lVar8 + 0x10) + 0xb0,1);
      FUN_00367494(lVar3,uVar6);
    }
    FUN_00367700(lVar1,lVar3);
  }
  if ((param_1[0x12] != 0) && (lVar2 = FUN_03b181f0(param_1[3]), lVar2 != 0)) {
    plVar4 = (long *)(lVar2 + 0xd8);
    lVar2 = *plVar4;
    plVar5 = (long *)(param_1[0x12] + 0x48);
    *plVar4 = *plVar5;
    *(long **)(lVar2 + 8) = plVar5;
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar5 = lVar2;
  }
  param_1[7] = *(long *)(param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x03b185e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}

