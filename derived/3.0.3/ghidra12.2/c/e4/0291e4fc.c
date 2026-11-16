
void FUN_0291e4fc(void)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar5 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x276cb8);
      if ((*(long **)(lVar5 + 0x276cd8) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x276cd8), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(*(long *)(lVar5 + 0x276cc0) + *plVar1 + 0x3c52f8,&local_50);
      DAT_055c1a98 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(*(long *)(lVar5 + 0x276cc0) + *plVar1 + 0x3c53d0,&local_50);
      DAT_055c1aa0 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c54a8 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1aa8 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c5580 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1ab0 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c5658 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1ab8 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c5730 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1ac0 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c5808 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1ac8 = (long)(iVar4 * 0x3c);
      pcStack_48 = "PlayTime";
      local_50 = puVar2;
      iVar4 = FUN_02750a60(&LAB_003c58e0 + *(long *)(lVar5 + 0x276cc0) + *plVar1,&local_50);
      DAT_055c1ad0 = (long)(iVar4 * 0x3c);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x276cd8) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x276cd8) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

