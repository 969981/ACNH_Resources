
void FUN_002ca680(long param_1,long *param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_70;
  undefined4 local_68;
  undefined8 local_58;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar1 = param_1 + 8;
  while( true ) {
    if (lVar9 == lVar1) {
      local_68 = 0;
      local_70 = 0x40000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_70);
      return;
    }
    lVar2 = lVar9 + 0x18;
    uVar5 = FUN_002c98cc(lVar2,param_2);
    if ((uVar5 & 1) != 0) break;
    lVar9 = *(long *)(lVar9 + 8);
  }
  FUN_002caf24(lVar9 + 0x10,param_2);
  FUN_002ca0a0(param_1,lVar2);
  local_58 = 0;
  FUN_002282f0(&local_58);
  if (*param_3 != 0) {
    FUN_002cb0d8(lVar9 + 0x10,&local_58,param_3);
  }
  *(undefined8 *)(lVar9 + 0x98) = local_58;
  lVar7 = (long)DAT_04be24f4;
  plVar6 = (long *)FUN_00228380();
  lVar8 = *plVar6;
  local_70 = 0;
  FUN_002282f0(&local_70);
  *(undefined1 *)(lVar9 + 0xb0) = param_4;
  *(long *)(lVar9 + 0xa0) = local_70 + lVar8 * lVar7;
  iVar3 = FUN_002b43fc(lVar2);
  if (*(long *)(param_1 + 0x10) != lVar1) {
    lVar9 = *(long *)(param_1 + 0x10);
    do {
      while ((*(long *)(lVar9 + 0x98) != 0 || (iVar4 = FUN_002b43fc(lVar9 + 0x18), iVar4 != iVar3)))
      {
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 == lVar1) goto LAB_002ca824;
      }
      local_68 = 0;
      local_70 = 0x40000;
      (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(lVar9 + 0x10,&local_70);
      lVar7 = *(long *)(lVar9 + 8);
      (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
      FUN_00223704(lVar1,lVar9);
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar9 + *(int *)(param_1 + 0x34));
      lVar9 = lVar7;
    } while (lVar7 != lVar1);
  }
LAB_002ca824:
  FUN_002ca570(param_1,lVar2);
  return;
}

