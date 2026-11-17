
/* WARNING: Removing unreachable block (ram,0x02b6119c) */
/* WARNING: Removing unreachable block (ram,0x02b611a4) */

bool FUN_02b61120(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined **local_78;
  char *pcStack_70;
  undefined *local_58;
  char *pcStack_50;
  char local_14 [4];
  
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "BridgeBuilt";
  uVar4 = FUN_0273f0a0(&local_58);
  bVar2 = true;
  if ((uVar4 & 1) == 0) {
    local_14[0] = '\0';
    pcStack_70 = local_14;
    local_78 = &PTR_FUN_04aa4b50;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    bVar2 = false;
    if (puVar1[1] != 0) {
      plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar3 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          FUN_01360490(&local_58,puVar1[1],iVar6);
          uVar4 = (*(code *)*local_78)(&local_78,&local_58);
          if ((uVar4 & 1) != 0) break;
          bVar2 = iVar3 + -1 != iVar6;
          iVar6 = iVar6 + 1;
        } while (bVar2);
      }
      bVar2 = local_14[0] != '\0';
    }
  }
  return bVar2;
}

