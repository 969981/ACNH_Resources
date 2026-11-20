
void FUN_03efc8b0(long param_1,long *param_2,undefined4 param_3,int param_4,long *param_5)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "phive::MemoryAllocator";
  plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x28,0x10);
  puVar3 = PTR_DAT_04bdefa8;
  if (plVar4 != (long *)0x0) {
    FUN_00421d30(plVar4);
    plVar4[2] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
    plVar4[1] = (long)(puVar3 + 0xc0);
    plVar4[3] = 0;
    plVar4[4] = 0;
    lVar5 = FUN_038c6d48(param_3,&local_60,param_2,8,1,1);
    plVar4[2] = lVar5;
  }
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
  }
  *(long **)(param_1 + 8) = plVar6;
  if (param_5 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*param_5 + 0x30))(param_5,0x28,0x10);
    if (plVar6 != (long *)0x0) {
      FUN_00421d30(plVar6);
      plVar6[2] = (long)param_5;
      *plVar6 = (long)(puVar3 + 0x10);
      plVar6[1] = (long)(puVar3 + 0xc0);
      plVar6[3] = 0;
      plVar6[4] = 0;
    }
    *(long **)(param_1 + 0x58) = plVar6;
    plVar2 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
    }
    *(long **)(param_1 + 0x10) = plVar2;
  }
  uVar7 = (**(code **)(*param_2 + 0x30))(param_2,0x1570,0x10);
  FUN_00471b60();
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  FUN_00471d40(uVar7,plVar4,0,0);
  uVar7 = (**(code **)(*param_2 + 0x30))(param_2,0x32a0,0x10);
  FUN_00475030(uVar7,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x60),0,5);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  FUN_0043c5e0(uVar7);
  local_60 = (undefined *)0x800000000000;
  uVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),&local_60,3);
  FUN_00442ee0(uVar7,&LAB_03efcc50,0);
  puVar8 = (undefined8 *)FUN_00438810(0x70);
  FUN_0046fce0(puVar8,&LAB_03efcc50,0);
  *puVar8 = &PTR_LAB_04ba7820;
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  if ((DAT_04c6f258 != puVar8) &&
     (bVar1 = DAT_04c6f258 != (undefined8 *)0x0, DAT_04c6f258 = puVar8, bVar1)) {
    FUN_004435c0();
  }
  puVar3 = PTR_DAT_04bb2698;
  if (0 < param_4) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      pvVar9 = malloc((long)(param_4 << 3));
    }
    else {
      pvVar9 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(param_4 << 3),8);
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0x80) = pvVar9;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(int *)(param_1 + 0x7c) = param_4;
    }
  }
  if (0 < *(int *)(param_1 + 0x7c)) {
    uVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    if (*(long *)puVar3 == 0) {
      puVar8 = malloc(0x18);
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    }
    *puVar8 = uVar7;
    puVar8[1] = uVar10;
    *(undefined4 *)(puVar8 + 2) = 1;
    iVar12 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x78) < iVar12) {
      *(undefined8 **)(*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78) * 8) = puVar8;
      iVar12 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    if (1 < iVar12) {
      iVar12 = 1;
      do {
        uVar7 = (**(code **)(*param_2 + 0x30))(param_2,0x78,0x10);
        FUN_00438960();
        if (*(long *)puVar3 == 0) {
          puVar8 = malloc(0x18);
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
        }
        *puVar8 = uVar7;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 0;
        iVar11 = *(int *)(param_1 + 0x7c);
        if (*(int *)(param_1 + 0x78) < iVar11) {
          *(undefined8 **)(*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78) * 8) = puVar8;
          iVar11 = *(int *)(param_1 + 0x7c);
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar11);
    }
  }
  return;
}

