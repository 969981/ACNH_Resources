
void FUN_038be2e0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined **local_70;
  char *local_68;
  
  puVar4 = PTR_DAT_04bd0ca0;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x70);
  uVar3 = *(uint *)puVar4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (0 < (int)uVar3) {
    lVar10 = 0;
    uVar11 = 0;
    puVar12 = (undefined8 *)(param_3 + 0x10);
    do {
      puVar1 = puVar12;
      if (*(uint *)puVar4 <= uVar11) {
        puVar1 = (undefined8 *)(param_3 + 0x10);
      }
      if (*(char *)((long)puVar1 + 0x16) == '\0') {
        plVar9 = (long *)*puVar1;
        if (plVar9 == (long *)0x0) {
          puVar2 = (undefined8 *)(param_1 + 0xe8 + lVar10);
          if (*(long *)(param_3 + 0x78) != 0) {
            puVar2 = (undefined8 *)(*(long *)(param_3 + 0x78) + lVar10 + 0x88);
          }
          plVar9 = (long *)*puVar2;
          if (plVar9 == (long *)0x0) goto LAB_038be364;
        }
        uVar8 = 0xffffffff;
        if (*(char *)((long)puVar1 + 0x15) == '\0') {
          uVar8 = 1;
        }
        uVar6 = (ulong)*(uint *)(puVar1 + 1);
        if (*(int *)((long)puVar1 + 0xc) != 0 && *(uint *)(puVar1 + 1) == 0) {
          uVar5 = (**(code **)(*plVar9 + 0x80))(plVar9,8);
          uVar6 = uVar5 - *(uint *)((long)puVar1 + 0xc);
          if (uVar5 < *(uint *)((long)puVar1 + 0xc) || uVar6 == 0) goto LAB_038be364;
        }
        local_70 = &PTR_LAB_048f9770;
        local_68 = "TaskHeap";
        uVar7 = FUN_038c6d48(uVar6,&local_70,plVar9,8,uVar8,0);
      }
      else {
LAB_038be364:
        uVar7 = 0;
      }
      *(undefined8 *)(param_2 + lVar10) = uVar7;
      lVar10 = lVar10 + 8;
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 3;
    } while ((ulong)uVar3 * 8 != lVar10);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

