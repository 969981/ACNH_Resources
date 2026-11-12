
void FUN_0073d3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(long *)(param_1 + 0x1150) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30), 0 < (int)uVar1)) {
    uVar6 = 0;
    uVar10 = 0xffff;
    uVar9 = 0xffff;
    sVar2 = -1;
    do {
      plVar7 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar6 * 8);
      uVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7);
      if (0 < (int)uVar3) {
        iVar5 = 0;
        uVar8 = 0;
        do {
          if (((uVar10 == 0xffff) || (uVar9 == 0xffff)) || (sVar2 == -1)) {
            plVar4 = (long *)**(undefined8 **)
                               (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                               (long)(short)uVar6 * 8);
            sVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4,iVar5 >> 0x10,param_2);
            uVar9 = uVar8 & 0xffff;
            uVar10 = (uint)uVar6 & 0xffff;
          }
          if (((uVar10 != 0xffff) && (uVar9 != 0xffff)) && (sVar2 != -1)) {
            (**(code **)(*plVar7 + 0x158))(plVar7,uVar8,(int)sVar2,param_3);
          }
          uVar8 = uVar8 + 1;
          iVar5 = iVar5 + 0x10000;
        } while (uVar3 != uVar8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}

