
void FUN_0034610c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5
                 ,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar12 = *(undefined8 **)(param_3 + 0x4a8);
  if (*(int *)((long)puVar12 + 0x24) != 0) {
    lVar13 = *(long *)(*(long *)(param_3 + 0x240) + 0x348);
    FUN_0031e3e8(param_3);
    if (param_4 == 3) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_3 + 0x240) + (ulong)param_4 * 8 + 0x350);
    }
    uVar10 = *(undefined8 *)(param_6 + 0x28);
    uVar6 = FUN_0033779c(param_2,param_3,param_4,lVar11,param_5,param_6);
    if ((uVar6 & 1) != 0) {
      local_80 = 0;
      uStack_78 = 0;
      uVar14 = *(undefined4 *)(*(long *)(param_3 + 0x240) + 0x41c);
      FUN_0031edb4(param_3 + 0x838,&local_80,*(undefined4 *)(puVar12 + 5));
      FUN_0034836c(param_2,uVar14,&local_80,0x50,*(undefined8 *)(param_3 + 0x878));
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar9 = puVar12[2];
      uVar14 = *(undefined4 *)(param_3 + 0x44);
      iVar3 = *(int *)((long)puVar12 + 0x24);
      local_70 = 0;
      uStack_68 = 0;
      uVar8 = puVar12[3];
      iVar4 = *(int *)(*(long *)(param_3 + 0x240) + 0x420);
      puVar7 = (undefined8 *)FUN_00346e50(uVar10,&local_70,0x60);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0032c400(0,0x8000);
        iVar3 = *(int *)(lVar13 + 8);
      }
      else {
        *(undefined4 *)(puVar7 + 9) = 0;
        *puVar7 = uVar9;
        puVar7[1] = uVar8;
        *(float *)((long)puVar7 + 0x4c) = (float)iVar4;
        puVar7[2] = uVar1;
        puVar7[3] = uVar2;
        *(undefined4 *)(puVar7 + 8) = uVar14;
        *(float *)((long)puVar7 + 0x44) = (float)iVar3 * 0.5;
        puVar7[6] = &DAT_3f8000003f800000;
        puVar7[7] = &DAT_3f8000003f800000;
        puVar7[4] = &DAT_3f8000003f800000;
        puVar7[5] = &DAT_3f8000003f800000;
        cVar5 = *(char *)(lVar11 + 0x7f);
        if (*(char *)(lVar11 + 0x42) != -1) {
          FUN_00348cdc(param_2,(long)*(char *)(lVar11 + 0x42),0,&local_70,0x60);
        }
        if (cVar5 != -1) {
          FUN_00348cdc(param_2,(int)cVar5,4,&local_70,0x60);
        }
        FUN_00346f6c(uVar10);
        FUN_00347dbc(param_2,4,*(undefined4 *)((long)puVar12 + 0x24),0);
        iVar3 = *(int *)(lVar13 + 8);
      }
      if (iVar3 == 1) {
        uVar1 = puVar12[2];
        uVar8 = puVar12[3];
        uVar14 = *(undefined4 *)(param_3 + 0x44);
        iVar3 = *(int *)((long)puVar12 + 0x24);
        uVar2 = *puVar12;
        uVar9 = puVar12[1];
        local_70 = 0;
        uStack_68 = 0;
        iVar4 = *(int *)(*(long *)(param_3 + 0x240) + 0x420);
        puVar7 = (undefined8 *)FUN_00346e50(uVar10,&local_70,0x60);
        if (puVar7 == (undefined8 *)0x0) {
          FUN_0032c400(0,0x8000);
        }
        else {
          *(undefined4 *)(puVar7 + 8) = uVar14;
          *puVar7 = uVar1;
          puVar7[1] = uVar8;
          *(float *)((long)puVar7 + 0x4c) = (float)iVar4;
          puVar7[2] = uVar2;
          puVar7[3] = uVar9;
          *(float *)((long)puVar7 + 0x44) = (float)iVar3 * 0.5;
          puVar7[6] = &DAT_3f8000003f800000;
          puVar7[7] = &DAT_3f8000003f800000;
          puVar7[4] = &DAT_3f8000003f800000;
          puVar7[5] = &DAT_3f8000003f800000;
          *(undefined4 *)(puVar7 + 9) = 0x3f800000;
          cVar5 = *(char *)(lVar11 + 0x7f);
          if (*(char *)(lVar11 + 0x42) != -1) {
            FUN_00348cdc(param_2,(long)*(char *)(lVar11 + 0x42),0,&local_70,0x60);
          }
          if (cVar5 != -1) {
            FUN_00348cdc(param_2,(int)cVar5,4,&local_70,0x60);
          }
          FUN_00346f6c(uVar10);
          FUN_00347dbc(param_2,4,*(undefined4 *)((long)puVar12 + 0x24),0);
        }
      }
    }
  }
  return;
}

