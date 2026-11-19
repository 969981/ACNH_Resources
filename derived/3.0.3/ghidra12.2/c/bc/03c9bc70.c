
int FUN_03c9bc70(long param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  sVar1 = FUN_0036013c(param_2);
  if (sVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    uVar10 = 0;
    do {
      lVar4 = FUN_00360154(param_2);
      lVar4 = FUN_00367720(uVar6,lVar4 + uVar10 * 0x24);
      if (lVar4 != 0) {
        for (lVar11 = *(long *)(lVar4 + 0x20); lVar11 != lVar4 + 0x18;
            lVar11 = *(long *)(lVar11 + 8)) {
          plVar8 = *(long **)(lVar11 + 0x10);
          plVar9 = *(long **)((long)plVar8 + 0xc9);
          lVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
          if (*(long *)(lVar5 + 0x18) != 0) {
            plVar9 = *(long **)(*(long *)(lVar5 + 0x18) + 0xc9);
          }
          if ((plVar9[1] == param_3) &&
             (*(long *)(*(long *)((long)plVar8 + 0xc9) + 0x10) == param_1)) {
            uVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
            iVar7 = iVar7 + (uVar3 & 0xff) + 1;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar2 = FUN_0036013c(param_2);
    } while (uVar10 < uVar2);
  }
  return iVar7;
}

