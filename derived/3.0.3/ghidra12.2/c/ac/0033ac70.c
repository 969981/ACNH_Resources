
void FUN_0033ac70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,long param_7,undefined8 *param_8,undefined8 param_9,
                 undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar16 = param_8[5];
  uVar15 = param_8[4];
  uVar12 = param_8[1];
  uVar9 = *param_8;
  uVar1 = *(undefined8 *)(param_7 + 0x20);
  uVar2 = *(undefined8 *)(param_7 + 0x28);
  uVar18 = *(undefined4 *)(param_8 + 0x10);
  uVar17 = *(undefined4 *)((long)param_8 + 0x84);
  iVar3 = *(int *)(param_8 + 0xe);
  uVar13 = param_8[3];
  uVar10 = param_8[2];
  iVar4 = *(int *)(param_6 + 0x28);
  iVar5 = *(int *)((long)param_8 + 0x7c);
  iVar6 = *(int *)(param_7 + 0x48);
  local_80 = 0;
  uStack_78 = 0;
  uVar14 = param_8[9];
  uVar11 = param_8[8];
  puVar8 = (undefined8 *)FUN_00346e50(param_3,&local_80,0x60);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0032c400(0,0x8000);
  }
  else {
    *(float *)(puVar8 + 9) = (float)iVar5;
    *(undefined4 *)((long)puVar8 + 0x4c) = uVar17;
    puVar8[1] = uVar16;
    *puVar8 = uVar15;
    *(float *)((long)puVar8 + 0x5c) = (float)iVar6;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    puVar8[5] = uVar12;
    puVar8[4] = uVar9;
    puVar8[7] = uVar13;
    puVar8[6] = uVar10;
    *(undefined4 *)(puVar8 + 8) = uVar18;
    *(float *)((long)puVar8 + 0x44) = (float)(iVar3 + iVar4 * (iVar3 + -1));
    puVar8[10] = uVar11;
    *(int *)(puVar8 + 0xb) = (int)uVar14;
    cVar7 = *(char *)(param_5 + 0x7f);
    if (*(char *)(param_5 + 0x42) != -1) {
      FUN_00348cdc(param_1,(long)*(char *)(param_5 + 0x42),0,&local_80,0x60);
    }
    if (cVar7 != -1) {
      FUN_00348cdc(param_1,(int)cVar7,4,&local_80,0x60);
    }
    FUN_00346f6c(param_3);
    FUN_00347e74(param_1,4,1,param_9,*(undefined4 *)(param_8 + 0xf),0);
    if (*(int *)(param_6 + 8) == 1) {
      FUN_00347e74(param_1,4,1,param_10,*(undefined4 *)(param_8 + 0xf),0);
    }
  }
  return;
}

