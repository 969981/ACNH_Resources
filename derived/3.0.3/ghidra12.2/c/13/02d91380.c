
void FUN_02d91380(long param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined *local_f08;
  char *pcStack_f00;
  uint local_794 [469];
  
  if (param_1 == 0) {
    return;
  }
  bVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  *(byte *)(param_1 + 0xe) = bVar2;
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      uVar9 = 0;
      goto LAB_02d91440;
    }
  }
  uVar9 = 1;
LAB_02d91440:
  pvVar7 = (void *)(param_1 + 0x790);
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  memset(pvVar7,0,2000);
  bVar2 = *param_2;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  local_f08 = (undefined *)CONCAT71(local_f08._1_7_,bVar2);
  lVar5 = FUN_02583354(DAT_055021a0,&local_f08,1);
  if (lVar5 != 0) {
    lVar8 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar8 = *(long *)(DAT_05574040 + 0x20);
      plVar10 = *(long **)(lVar8 + 0x1100);
    }
    else {
      plVar10 = *(long **)(lVar5 + 0x1a5b0);
    }
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
      memcpy(pvVar7,(void *)(*(long *)(lVar8 + 0x10e8) + *(long *)(lVar8 + 0x10e0)),2000);
    }
    else {
      uVar6 = (*(code *)**(undefined8 **)*plVar10)();
      memcpy(pvVar7,(void *)(*(long *)(lVar8 + 0x10e8) + *(long *)(lVar8 + 0x10e0)),2000);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x1100) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x1100) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  plVar10 = (long *)(param_1 + 0x20);
  pvVar7 = (void *)(**(code **)(*plVar10 + 0x18))(plVar10);
  memset(pvVar7,0,0x754);
  FUN_0264a400(&local_f08,param_2);
  pvVar7 = (void *)(**(code **)(*plVar10 + 0x18))(plVar10);
  lVar8 = (**(code **)(local_f08 + 0x20))(&local_f08);
  for (lVar5 = 0;
      *(uint *)((long)local_794 + lVar5) =
           *(uint *)(lVar8 + lVar5) | *(uint *)((long)pvVar7 + lVar5), lVar5 != 0x750;
      lVar5 = lVar5 + 8) {
    *(uint *)((long)local_794 + lVar5 + 4) =
         *(uint *)(lVar8 + lVar5 + 4) | *(uint *)((long)pvVar7 + lVar5 + 4);
  }
  memcpy(pvVar7,local_794,0x754);
  puVar1 = PTR_DAT_04bb2020;
  *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
  pcStack_f00 = "UnlockInterior_CeilingFurniture";
  local_f08 = puVar1 + 0x10;
  iVar3 = FUN_0274bce0(param_2,&local_f08);
  pcStack_f00 = "UnlockCatalogPokiBag";
  *(bool *)(param_1 + 0xf60) = iVar3 != 0;
  local_f08 = puVar1 + 0x10;
  iVar3 = FUN_0274bce0(param_2,&local_f08);
  *(bool *)(param_1 + 0xf61) = iVar3 != 0;
  bVar2 = FUN_02612720(param_2);
  *(byte *)(param_1 + 0xf62) = bVar2 & 1;
  return;
}

