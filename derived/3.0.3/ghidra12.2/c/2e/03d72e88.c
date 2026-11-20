
void FUN_03d72e88(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x100) + 0xf0))
                        (*(long *)(param_1 + 0x28) + 0x100);
      puVar3 = (undefined1 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x188) + 0xf0))
                         (*(long *)(param_1 + 0x28) + 0x188);
      FUN_03ea4bd0(lVar5,uVar2,*puVar3);
      lVar5 = *(long *)(param_1 + 0x10);
      __ptr = *(undefined8 **)(param_1 + 0x18);
      FUN_03ea4ab0(__ptr,*(undefined1 *)
                          (*(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x50) + 0x40) + 0x70));
      uVar2 = *__ptr;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      *(undefined8 *)(lVar5 + 0x28) = 0;
      plVar4 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
    lVar5 = plVar4[3];
    lVar6 = *(long *)(param_1 + 8);
    FUN_03c5d720(lVar5);
    plVar4[3] = 0;
    plVar1 = (long *)((long)*(int *)(lVar6 + 0x20c) + (long)plVar4);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar6 + 0x208) = *(int *)(lVar6 + 0x208) + -1;
    (**(code **)(*plVar4 + 8))(plVar4);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(long *)(param_2 + 0x1f0) = lVar5;
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(lVar5 + 0x1b0) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

