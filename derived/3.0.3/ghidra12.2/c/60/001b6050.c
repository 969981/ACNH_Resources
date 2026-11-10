
void FUN_001b6050(long param_1,long param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  for (lVar7 = *(long *)(param_1 + 0xd8); lVar7 != param_1 + 0xd0; lVar7 = *(long *)(lVar7 + 8)) {
    uVar4 = FUN_001b9898(lVar7 + 0x10,param_2);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar7 + 0x78) == '\0') {
        FUN_001b8590(lVar7 + 0x10);
        sVar3 = FUN_001e14f8(*(undefined8 *)(lVar7 + 0x18));
        cVar1 = *(char *)(param_2 + 0x68);
      }
      else {
        sVar3 = FUN_001e14f8(*(undefined8 *)(lVar7 + 0x18));
        cVar1 = *(char *)(param_2 + 0x68);
      }
      if (cVar1 == '\0') {
        FUN_001b8590(param_2);
      }
      sVar2 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
      if (sVar3 == sVar2) goto LAB_001b6160;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x88) + 0x10))(plVar6);
  plVar5 = (long *)FUN_00187df4(0x80);
  *plVar5 = 0;
  FUN_001b8358(plVar5 + 2,param_2);
  lVar7 = *(long *)(param_1 + 0xd0);
  *plVar5 = lVar7;
  plVar5[1] = param_1 + 0xd0;
  *(long **)(lVar7 + 8) = plVar5;
  *(long **)(param_1 + 0xd0) = plVar5;
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
  (**(code **)(*(long *)(param_1 + 0x88) + 0x20))(plVar6);
LAB_001b6160:
                    /* WARNING: Could not recover jumptable at 0x001b617c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

