
bool FUN_02b61020(uint param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  undefined **local_78;
  char *pcStack_70;
  uint local_58 [10];
  char local_14 [4];
  
  local_14[0] = '\0';
  pcStack_70 = local_14;
  local_78 = &PTR_FUN_04aa4b50;
  if (param_1 == 0) {
    plVar4 = (long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar4 = (long *)(DAT_0519d040 + 0x30) + param_1;
    if (0x38 < param_1) {
      plVar4 = (long *)(DAT_0519d040 + 0x30);
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*plVar4 != 0) {
    puVar1 = (undefined8 *)(*plVar4 + 0x148);
  }
  bVar2 = false;
  if (puVar1[1] != 0) {
    local_58[0] = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_58,puVar1[1],iVar6);
        uVar5 = (*(code *)*local_78)(&local_78,local_58);
        if ((uVar5 & 1) != 0) break;
        bVar2 = iVar3 + -1 != iVar6;
        iVar6 = iVar6 + 1;
      } while (bVar2);
    }
    bVar2 = local_14[0] != '\0';
  }
  return bVar2;
}

