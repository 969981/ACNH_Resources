
void FUN_03b0f0c8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  FUN_0037bb50();
  *param_1 = (long)(PTR_DAT_04bd0890 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0037ca20(param_1,param_2,0,0,0);
  *param_1 = (long)(PTR_DAT_04bd08a8 + 0x10);
  FUN_00388e3c(param_1,param_2,uVar5);
  *param_1 = (long)&DAT_04b734b0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  lVar4 = *(long *)(param_3 + 0x88);
  if (((lVar4 != 0) &&
      (lVar2 = FUN_0037e610(param_1,"LetterAnimOn"), uVar5 = DAT_04c62f60, lVar2 != 0)) &&
     (plVar3 = *(long **)(param_3 + 0x88), plVar3 != (long *)0x0)) {
    plVar1 = (long *)(lVar4 + 0x38);
    uVar6 = *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar2 + 4));
    lVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,DAT_04c62f60);
    FUN_03b101a4(lVar4,uVar5,param_1,param_3);
    plVar3 = (long *)(lVar4 + 8);
    lVar2 = *plVar3;
    *(undefined4 *)(lVar4 + 0x40) = uVar6;
    *(undefined4 *)(lVar4 + 0x44) = uVar6;
    *plVar3 = *plVar1;
    *(long **)(lVar2 + 8) = plVar1;
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar1 = lVar2;
  }
  return;
}

