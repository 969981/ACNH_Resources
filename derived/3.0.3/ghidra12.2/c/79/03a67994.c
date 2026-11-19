
void FUN_03a67994(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  puVar9 = PTR_DAT_04bbd510;
  lVar14 = *(long *)(param_1 + 0x528);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x520) <= param_3) {
    uVar2 = 0;
  }
  lVar13 = lVar14 + (long)(int)uVar2 * 0x338;
  puVar1 = (undefined8 *)(lVar13 + 0x318);
  if (*(long *)(lVar13 + 0x318) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *puVar1 = 0;
  }
  lVar13 = *(long *)puVar9;
  uVar7 = *(ushort *)(param_5 + 0x32);
  uVar12 = (uint)*(ushort *)(param_5 + 0x30);
  if (*(ushort *)(param_5 + 0x30) < 2) {
    uVar12 = 0;
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  uVar8 = *(undefined2 *)(param_5 + 0x98);
  uVar3 = (uint)uVar7;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar3 = 1;
  }
  pcStack_70 = "radial_blur_HalfBuffer";
  if (uVar3 == uVar7 || uVar3 < uVar7) {
    uVar3 = (uint)uVar7;
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar10 == 0) {
    local_64 = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_64 = (int)lVar10 + -1;
  }
  puVar11 = (undefined4 *)
            FUN_03948e10(lVar13,param_2,lVar13 + (long)local_64 * 0x290 + 0x10,&local_78,uVar8,1,
                         uVar12 >> 1,uVar3 >> 1,1,0,1,0,1,0,0,0);
  *puVar1 = puVar11;
  uVar4 = puVar11[1];
  uVar5 = *(undefined8 *)(puVar11 + 2);
  uVar6 = *(undefined8 *)(puVar11 + 4);
  lVar14 = lVar14 + (long)(int)uVar2 * 0x338;
  *(undefined4 *)(lVar14 + 800) = *puVar11;
  *(undefined4 *)(lVar14 + 0x324) = uVar4;
  *(undefined8 *)(lVar14 + 0x328) = uVar5;
  *(undefined8 *)(lVar14 + 0x330) = uVar6;
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x520) <= param_3) {
    uVar2 = 0;
  }
  FUN_03a67ba0(*(long *)(param_1 + 0x528) + (long)(int)uVar2 * 0x338,param_2);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x520) <= param_3) {
    uVar2 = 0;
  }
  lVar14 = *(long *)(param_1 + 0x528) + (long)(int)uVar2 * 0x338;
  FUN_03a67ffc(lVar14,param_2,param_3,param_1 + 8,param_4,*(undefined8 *)(lVar14 + 0x318));
  if (*(uint *)(param_1 + 0x520) <= param_3) {
    param_3 = 0;
  }
  lVar14 = *(long *)(param_1 + 0x528) + (long)(int)param_3 * 0x338;
  if (*(long *)(lVar14 + 0x318) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(lVar14 + 0x318) = 0;
  }
  return;
}

