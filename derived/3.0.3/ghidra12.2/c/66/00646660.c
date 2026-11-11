
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646660(undefined8 *param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_24;
  
  puVar1 = &DAT_040b3e5e;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_040d3199;
  }
  *param_1 = puVar1;
  FUN_0043bce0(param_1 + 1,puVar1,0xffffffff);
  if ((param_2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00438810(0x18);
    *puVar2 = &PTR_LAB_048e10f0;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 1;
  }
  param_1[2] = puVar2;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  local_24 = 1;
  pbVar3 = (byte *)FUN_00421ed0(PTR_DAT_048607b8,1,&local_24);
  param_1[3] = pbVar3;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = local_24;
  *pbVar3 = param_2 & 1;
  FUN_004385d0(param_1 + 8);
  uVar4 = _DAT_04101fa0;
  param_1[7] = _UNK_04101fa8;
  param_1[6] = uVar4;
  puVar1 = PTR_DAT_04bd4c80;
  uVar4 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x200);
  uVar6 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x218);
  uVar5 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x210);
  param_1[9] = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x208);
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar4 = _DAT_04102200;
  uVar6 = *(undefined8 *)(puVar1 + 0x228);
  uVar5 = *(undefined8 *)(puVar1 + 0x220);
  uVar8 = *(undefined8 *)(puVar1 + 0x238);
  uVar7 = *(undefined8 *)(puVar1 + 0x230);
  param_1[0x11] = _UNK_04102208;
  param_1[0x10] = uVar4;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  return;
}

