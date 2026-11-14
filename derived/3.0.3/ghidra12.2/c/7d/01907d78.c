
void FUN_01907d78(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_50;
  undefined4 local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = **(long **)(*(long *)param_1[7] + 0x60);
  }
  pcVar4 = (char *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
  if (*pcVar4 != '\0') {
    plVar8 = (long *)(lVar7 + 0x60);
    puVar5 = (uint *)(**(code **)(*plVar8 + 0xf0))(plVar8);
    puVar2 = PTR_DAT_04bb5ce0;
    if ((*puVar5 < 0x40 && *(long *)PTR_DAT_04bb5ce0 != 0) &&
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar5 * 0x14 + 0xc) != '\0')) {
      puVar5 = (uint *)(**(code **)(*plVar8 + 0xf0))(plVar8);
      uVar1 = *puVar5;
      if (((uVar1 < 0x40) && (*(long *)puVar2 != 0)) &&
         (lVar7 = *(long *)puVar2 + 0xc, *(char *)(lVar7 + (ulong)uVar1 * 0x14) != '\0')) {
        lVar7 = lVar7 + (ulong)uVar1 * 0x14;
        local_48 = *(undefined4 *)(lVar7 + 0xc);
        local_50 = *(undefined8 *)(lVar7 + 4);
      }
      goto LAB_01907e94;
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar7 + 0x90) + 0xf0))((long *)(lVar7 + 0x90));
  local_50 = *puVar6;
  local_48 = *(undefined4 *)(puVar6 + 1);
LAB_01907e94:
  iVar3 = (**(code **)(*param_1 + 0x158))(param_1);
  if ((iVar3 == 3) && (*(long *)(param_1[7] + 0x28) != 0)) {
    FUN_01912244(**(undefined8 **)(*(long *)(param_1[7] + 0x28) + 0x60),param_2,param_3,&local_50);
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x158))(param_1);
    if ((iVar3 == 4) && (*(long *)(param_1[7] + 0x30) != 0)) {
      FUN_019130e0(**(undefined8 **)(*(long *)(param_1[7] + 0x30) + 0x60),param_2,param_3,&local_50)
      ;
    }
  }
  return;
}

