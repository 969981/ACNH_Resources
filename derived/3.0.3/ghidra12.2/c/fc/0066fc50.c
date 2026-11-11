
void FUN_0066fc50(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int local_68;
  int local_64;
  
  *param_1 = &PTR_LAB_048eb3c8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar2 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    FUN_004435a0();
  }
  FUN_0043bd50(param_1 + 4,param_2 + 0x20);
  FUN_0043bd50(param_1 + 5,param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    FUN_004435a0();
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  iVar9 = *(int *)(param_2 + 0x40);
  puVar7 = *(undefined8 **)(param_2 + 0x38);
  uVar6 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_64 = iVar9;
  if (iVar9 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    puVar3 = (undefined8 *)FUN_00421ed0(uVar6,0x10,&local_64);
    param_1[7] = puVar3;
    *(int *)(param_1 + 8) = iVar9;
    *(int *)((long)param_1 + 0x44) = local_64;
    do {
      *puVar3 = 0;
      puVar3[1] = 0x8000000000000000;
      if (puVar3 != puVar7) {
        uVar8 = *puVar7;
        iVar1 = *(int *)(puVar7 + 1);
        if (iVar1 < 1) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004267f0(uVar6,iVar1,2,0,0,(long)puVar3 + 0xc);
          *puVar3 = uVar4;
        }
        FUN_0043aa30(uVar4,uVar8,(long)iVar1 << 1);
        *(int *)(puVar3 + 1) = iVar1;
      }
      iVar9 = iVar9 + -1;
      puVar3 = puVar3 + 2;
      puVar7 = puVar7 + 2;
    } while (iVar9 != 0);
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  iVar9 = *(int *)(param_2 + 0x50);
  lVar2 = *(long *)(param_2 + 0x48);
  if (iVar9 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_68 = iVar9;
    lVar5 = FUN_00421ed0(uVar6,0x40,&local_68);
    param_1[9] = lVar5;
    *(int *)(param_1 + 10) = iVar9;
    *(int *)((long)param_1 + 0x54) = local_68;
    do {
      FUN_004385f0(lVar5,lVar2);
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      iVar9 = iVar9 + -1;
      lVar5 = lVar5 + 0x40;
      lVar2 = lVar2 + 0x40;
    } while (iVar9 != 0);
  }
  return;
}

