
undefined8 FUN_01f1d670(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  iVar5 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar5 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar5 = 0;
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(*(long *)puVar1 + 0x330);
          iVar5 = 0;
          if (lVar6 != 0) {
            iVar5 = *(int *)(lVar6 + 0x244);
          }
        }
      }
    }
  }
  if ((((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar5) &&
       ((*(byte *)(param_1 + 0xad5a) >> 1 & 1) == 0)) &&
      (uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x180))(), (uVar4 & 1) != 0)) &&
     ((uVar4 = FUN_0212ef10(param_1 + 0xaa50), (uVar4 & 1) == 0 &&
      (*(int *)(param_1 + 0x77f4) != 0x47)))) {
    if (*(int *)(param_1 + 0x77f4) == 0x46) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x77b0) & 0xfffffffe) == 0x46) {
      return 0;
    }
    iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x750);
    if (iVar5 - 1U < 2) {
      if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4) + 0x20000000U >> 0x1e != 2) {
LAB_01f1d7b8:
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "ExitStrc";
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_30,0,0,PTR_DAT_04bb32e0);
        return 1;
      }
    }
    else if (iVar5 != 3) goto LAB_01f1d7b8;
  }
  return 0;
}

