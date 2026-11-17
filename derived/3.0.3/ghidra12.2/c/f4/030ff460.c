
void FUN_030ff460(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar10 = *(long **)(param_1 + 0x410);
  if (plVar10 != (long *)0x0) {
    local_48 = PTR_DAT_04bc4e68 + 0x10;
    local_40 = 1;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_48);
    (**(code **)(plVar10[3] + 400))(0x3f800000,plVar10[1]);
  }
  uVar9 = *(uint *)(param_1 + 0x458);
  if (0xf < uVar9) {
    uVar9 = 0;
  }
  FUN_030fee80(param_1,(&DAT_056f1348)[(ulong)uVar9 * 6],1);
  plVar10 = *(long **)(param_1 + 0x1d0);
  local_48 = PTR_DAT_04bc0cb8 + 0x10;
  local_40 = 0x29;
  (**(code **)(*plVar10 + 0x20))(plVar10,&local_48);
  (**(code **)(plVar10[3] + 0x2b0))(&local_48,plVar10[1]);
  lVar4 = DAT_05739190;
  uVar5 = (undefined4)local_48;
  uVar6 = local_48._4_4_;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar8 == 0) {
    iVar7 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar7 = (int)lVar8 + -1;
  }
  uVar9 = 1;
  if (iVar7 != 1) {
    uVar9 = 2;
  }
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = uVar9;
  }
  pbVar1 = (byte *)(lVar4 + 0x288);
  pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
  if (2 < uVar2) {
    pbVar3 = pbVar1;
  }
  *(undefined4 *)(pbVar3 + 8) = uVar5;
  *(undefined4 *)(pbVar3 + 0xc) = uVar6;
  pbVar3[4] = pbVar3[4] | 1;
  pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
  if (2 < uVar2) {
    pbVar3 = pbVar1;
  }
  *pbVar3 = *pbVar3 | 1;
  return;
}

