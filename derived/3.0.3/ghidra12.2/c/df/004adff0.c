
void FUN_004adff0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bd59f0 + 0x10);
  uVar5 = FUN_00471150(plVar8);
  iVar4 = FUN_00471230(plVar8,uVar5);
  puVar3 = PTR_DAT_04bd4d18;
  puVar2 = PTR_DAT_04bd4d10;
  while (iVar4 != 0) {
    iVar4 = FUN_004711c0(plVar8,uVar5);
    if (iVar4 != 0) {
      uVar6 = FUN_004711a0(plVar8,uVar5);
      lVar7 = FUN_0043c4e0(*(undefined2 *)puVar2);
      lVar1 = *(long *)puVar3;
      if (lVar7 != 0) {
        lVar1 = lVar7;
      }
      FUN_00438ad0(*(undefined8 *)(lVar1 + 0x58),uVar6);
    }
    uVar5 = FUN_004711e0(plVar8,uVar5);
    iVar4 = FUN_00471230(plVar8,uVar5);
  }
  FUN_00471120(plVar8);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  *param_1 = (long)(PTR_DAT_04bd8108 + 0x10);
  return;
}

