
void FUN_0073d560(undefined4 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((*(long *)(param_2 + 0x1150) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_2 + 0x1150) + 0x30), 0 < (int)uVar1)) {
    uVar5 = 0;
    uVar8 = 0xffff;
    uVar10 = 0xffff;
    sVar2 = -1;
    do {
      plVar6 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x1150) + 0x38) + uVar5 * 8);
      uVar3 = (**(code **)(*plVar6 + 0xb8))(plVar6);
      if (0 < (int)uVar3) {
        iVar9 = 0;
        uVar7 = 0;
        do {
          if (((uVar8 == 0xffff) || (uVar10 == 0xffff)) || (sVar2 == -1)) {
            plVar4 = (long *)**(undefined8 **)
                               (*(long *)(*(long *)(param_2 + 0x1150) + 0x38) +
                               (long)(short)uVar5 * 8);
            sVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4,iVar9 >> 0x10,param_3);
            uVar10 = uVar7 & 0xffff;
            uVar8 = (uint)uVar5 & 0xffff;
          }
          if (((uVar8 != 0xffff) && (uVar10 != 0xffff)) && (sVar2 != -1)) {
            (**(code **)(*plVar6 + 0x118))(param_1,plVar6,uVar7,(int)sVar2);
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 0x10000;
        } while (uVar3 != uVar7);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  return;
}

