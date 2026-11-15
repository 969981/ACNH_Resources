
void FUN_01fd4134(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 local_4c;
  undefined4 local_48 [2];
  
  if (*(int *)(param_1 + 0xaf88) != 0) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = *(long *)PTR_DAT_04bb3968;
    *(undefined1 *)(param_1 + 0x789c) = 1;
    piVar9 = (int *)(**(code **)(*(long *)(lVar11 + 0x2688) + 0xf0))(lVar11 + 0x2688);
    iVar2 = *piVar9;
    piVar9 = (int *)(**(code **)(*(long *)(lVar11 + 0x2688) + 0xf0))(lVar11 + 0x2688);
    uVar3 = *(uint *)(lVar12 + 0x288);
    iVar4 = *piVar9;
    local_4c = 0;
    local_48[0] = 0;
    uVar5 = *(uint *)(lVar12 + 0x294);
    *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
    uVar6 = *(undefined4 *)(lVar12 + 0x290);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(uint *)(lVar12 + 0x290) = uVar5;
    *(undefined4 *)(lVar12 + 0x28c) = uVar6;
    uVar3 = uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5;
    *(uint *)(lVar12 + 0x294) = uVar3;
    *(undefined4 *)(param_1 + 0xaf84) = 0;
    *(int *)(param_1 + 0x787c) = iVar2 + (int)((ulong)uVar3 * (ulong)((iVar4 - iVar2) + 1) >> 0x20);
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,local_48,&local_4c,
                 PTR_DAT_04bc1600,6);
    return;
  }
  lVar12 = *(long *)(param_1 + 0x18);
  local_4c = *(undefined4 *)(lVar12 + 0x294);
  local_48[0] = 0;
  *(undefined4 *)(lVar12 + 0x294) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  uVar10 = FUN_02085a50(lVar11,1,0);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(lVar11 + 0x801) = 1;
    lVar1 = lVar11 + 0x10 + (ulong)*(uint *)(lVar11 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar11 + 0x294)) {
      lVar1 = lVar11 + 0x10;
    }
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  puVar7 = PTR_PTR_04bb2238;
  *(undefined4 *)(lVar12 + 0x294) = local_4c;
  puVar8 = PTR_DAT_04bb32e0;
  *(undefined4 *)(param_1 + 0x123b8) = 2;
  *(undefined8 *)(param_1 + 0xb098) = 0;
  *(undefined4 *)(param_1 + 0x1203c) = 0x708;
  FUN_01ea5c80(param_1,puVar7,puVar7,1,0,puVar8);
  return;
}

