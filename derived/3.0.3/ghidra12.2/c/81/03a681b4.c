
void FUN_03a681b4(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined *local_70;
  char *pcStack_68;
  
  puVar9 = PTR_DAT_04bbd510;
  lVar14 = *(long *)(param_1 + 0x528);
  if (*(uint *)(param_1 + 0x520) <= param_3) {
    param_3 = 0;
  }
  plVar15 = (long *)(lVar14 + (long)(int)param_3 * 0x338 + 0x30);
  if (*plVar15 != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *plVar15 = 0;
  }
  lVar13 = *(long *)puVar9;
  uVar5 = *(ushort *)(param_4 + 0x30);
  sVar6 = *(short *)(param_4 + 0x3a);
  uVar7 = *(ushort *)(param_4 + 0x32);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  uVar8 = *(undefined2 *)(param_4 + 0x98);
  pcStack_68 = "radial_blur";
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar11 == 0) {
    iVar10 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar10 = (int)lVar11 + -1;
  }
  uVar1 = uVar7;
  if (sVar6 != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  puVar12 = (undefined4 *)
            FUN_03948e10(lVar13,param_2,lVar13 + (long)iVar10 * 0x290 + 0x10,&local_70,uVar8,1,uVar5
                         ,uVar1,1,0,1,0,1,0,0,0);
  *plVar15 = (long)puVar12;
  uVar2 = puVar12[1];
  lVar14 = lVar14 + (long)(int)param_3 * 0x338;
  uVar3 = *(undefined8 *)(puVar12 + 2);
  uVar4 = *(undefined8 *)(puVar12 + 4);
  *(undefined4 *)(lVar14 + 0x38) = *puVar12;
  *(undefined4 *)(lVar14 + 0x3c) = uVar2;
  *(undefined8 *)(lVar14 + 0x40) = uVar3;
  *(undefined8 *)(lVar14 + 0x48) = uVar4;
  return;
}

