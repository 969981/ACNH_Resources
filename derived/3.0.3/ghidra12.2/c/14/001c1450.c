
void FUN_001c1450(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_d0 [144];
  
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 != *(long *)(param_1 + 0x2d0)) {
    iVar1 = *(int *)PTR_DAT_04bcbfe8;
    do {
      plVar4 = *(long **)(lVar5 + 8);
      FUN_001c16a0(plVar4,*(undefined4 *)(param_1 + 0x98));
      FUN_001e1500(auStack_d0);
      uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
      if ((uVar3 & 1) != 0) {
        do {
          *(undefined8 *)(param_1 + 0x530) = 0;
          *(undefined2 *)(param_1 + 0x549) = 0;
          *(undefined8 *)(param_1 + 0x540) = 0;
          *(byte *)(param_1 + 0x548) = *(byte *)(param_1 + 0x548) & 4;
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + 0x518,auStack_d0);
          if (iVar2 == iVar1) {
            FUN_001c0c30(param_1,plVar4,param_1 + 0x518,auStack_d0);
            *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + 1;
          }
          uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
        } while (((uVar3 & 1) != 0) && (iVar2 == iVar1));
      }
      FUN_001e1868(auStack_d0);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != *(long *)(param_1 + 0x2d0));
  }
  return;
}

