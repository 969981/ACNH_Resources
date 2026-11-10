
uint FUN_002ca320(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_128;
  undefined *local_120;
  undefined4 local_118 [44];
  undefined8 local_68;
  
  local_68 = 0;
  FUN_002282f0(&local_68);
  lVar7 = param_1 + 8;
  for (lVar9 = *(long *)(param_1 + 0x10); lVar9 != lVar7; lVar9 = *(long *)(lVar9 + 8)) {
    uVar5 = FUN_002c9978(lVar9 + 0x18,param_2);
    if ((uVar5 & 1) != 0) goto LAB_002ca430;
  }
  iVar2 = FUN_002b43fc(param_2);
  for (lVar9 = *(long *)(param_1 + 0x10); lVar9 != lVar7; lVar9 = *(long *)(lVar9 + 8)) {
    iVar3 = FUN_002b43fc(lVar9 + 0x18);
    if (iVar3 == iVar2) goto LAB_002ca430;
  }
  lVar7 = (long)DAT_04be24f4;
  plVar6 = (long *)FUN_00228380();
  local_128 = *plVar6 * lVar7;
  FUN_002cac48(&local_120,param_2,&local_68,&local_128,param_3,DAT_04be24f8,0);
  uVar4 = FUN_002c9c20(param_1,&local_120);
  local_120 = PTR_DAT_04bce240 + 0x10;
  FUN_002b4104(local_118);
  goto LAB_002ca540;
LAB_002ca430:
  uVar4 = FUN_002cad48(lVar9 + 0x10,param_2);
  lVar1 = lVar9 + 0x18;
  FUN_002ca0a0(param_1,lVar1);
  *(undefined8 *)(lVar9 + 0x98) = local_68;
  lVar8 = (long)DAT_04be24f4;
  plVar6 = (long *)FUN_00228380();
  lVar10 = *plVar6;
  local_120 = (undefined *)0x0;
  FUN_002282f0(&local_120);
  *(undefined **)(lVar9 + 0xa0) = local_120 + lVar10 * lVar8;
  iVar2 = FUN_002b43fc(lVar1);
  if (*(long *)(param_1 + 0x10) != lVar7) {
    lVar9 = *(long *)(param_1 + 0x10);
    do {
      while ((*(long *)(lVar9 + 0x98) != 0 || (iVar3 = FUN_002b43fc(lVar9 + 0x18), iVar3 != iVar2)))
      {
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 == lVar7) goto LAB_002ca534;
      }
      local_118[0] = 0;
      local_120 = (undefined *)0x40000;
      (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(lVar9 + 0x10,&local_120);
      lVar8 = *(long *)(lVar9 + 8);
      (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
      FUN_00223704(lVar7,lVar9);
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar9 + *(int *)(param_1 + 0x34));
      lVar9 = lVar8;
    } while (lVar8 != lVar7);
  }
LAB_002ca534:
  FUN_002ca570(param_1,lVar1);
LAB_002ca540:
  return uVar4 & 1;
}

