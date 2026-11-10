
int FUN_0025ac68(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  
  plVar10 = *(long **)(param_1 + 0x310);
  iVar9 = 0;
  if (plVar10 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar10 + 0x20))(plVar10,0);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),1);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),2);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),3);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),4);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),5);
    uVar7 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),6);
    uVar8 = (**(code **)(**(long **)(param_1 + 0x310) + 0x20))(*(long **)(param_1 + 0x310),7);
    iVar9 = (uVar1 & 1) + (uVar2 & 1) + (uVar3 & 1) + (uVar4 & 1) +
            (uVar5 & 1) + (uVar6 & 1) + (uVar7 & 1) + (uVar8 & 1);
  }
  return iVar9;
}

