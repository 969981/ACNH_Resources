
void FUN_01b36330(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar3 = (long)*(int *)(param_1 + 0x2c);
    plVar5 = (long *)(*(long *)(param_1 + 0x20) - lVar3);
    lVar4 = (long)plVar5 + lVar3;
    uVar8 = (param_4 ^ param_4 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar9 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar8 = uVar8 ^ uVar8 << 0xb;
      lVar4 = *(long *)(lVar4 + 8);
      uVar2 = uVar6 >> 0x13 ^ uVar8 >> 8 ^ uVar6 ^ uVar8;
      (**(code **)(*plVar5 + 0x38))(plVar5,param_2,param_3,uVar2);
      plVar1 = (long *)((long)plVar5 + (long)*(int *)(param_1 + 0x2c));
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar5 = (long *)(lVar4 - lVar3);
      uVar8 = uVar7;
      uVar7 = uVar9;
      uVar9 = uVar6;
      uVar6 = uVar2;
    } while (plVar5 != (long *)((param_1 + 0x18) - lVar3));
  }
  return;
}

