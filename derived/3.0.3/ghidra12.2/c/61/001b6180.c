
undefined8 FUN_001b6180(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  short sVar6;
  short sVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  
  plVar9 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar1 = (long *)(param_1 + 0xd0);
  if (*(long **)(param_1 + 0xd8) == plVar1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    plVar10 = *(long **)(param_1 + 0xd8);
    do {
      while( true ) {
        plVar2 = plVar10 + 2;
        uVar8 = FUN_001b9898(plVar2,param_2);
        if ((uVar8 & 1) == 0) break;
        if ((char)plVar10[0xf] == '\0') {
          FUN_001b8590(plVar2);
          sVar6 = FUN_001e14f8(plVar10[3]);
          if (*(char *)(param_2 + 0x68) != '\0') goto LAB_001b620c;
LAB_001b6240:
          FUN_001b8590(param_2);
          sVar7 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
          if (sVar6 != sVar7) break;
        }
        else {
          sVar6 = FUN_001e14f8(plVar10[3]);
          if (*(char *)(param_2 + 0x68) == '\0') goto LAB_001b6240;
LAB_001b620c:
          sVar7 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
          if (sVar6 != sVar7) break;
        }
        lVar3 = *plVar10;
        plVar4 = (long *)plVar10[1];
        *(long **)(lVar3 + 8) = plVar4;
        puVar5 = (undefined8 *)plVar10[2];
        *(long *)plVar10[1] = lVar3;
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
        (*(code *)*puVar5)(plVar2);
        FUN_00187e4c(plVar10);
        uVar11 = 1;
        plVar10 = plVar4;
        if (plVar4 == plVar1) goto LAB_001b62a4;
      }
      plVar10 = (long *)plVar10[1];
    } while (plVar10 != plVar1);
  }
LAB_001b62a4:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar11;
}

