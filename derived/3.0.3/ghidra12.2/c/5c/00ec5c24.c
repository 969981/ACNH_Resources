
bool FUN_00ec5c24(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if (*(int *)(lVar9 + 0x550) < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = *(int *)(lVar9 + 0x550) + *(int *)(lVar9 + 0x54c) + -1;
    iVar1 = 0;
    if (*(int *)(lVar9 + 0x548) <= iVar4) {
      iVar1 = *(int *)(lVar9 + 0x548);
    }
    piVar8 = (int *)(*(long *)(lVar9 + 0x540) + (long)(iVar4 - iVar1) * 0x14);
    if ((char)piVar8[4] == '\0') {
      iVar7 = *piVar8;
    }
  }
  if ((iVar7 < 0x1b) && (*(int *)(lVar9 + 0x4e8) == 0)) {
    piVar8 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x25f8) + 0xf0))
                              (*(long *)PTR_DAT_04bb3968 + 0x25f8);
    iVar7 = *piVar8 * 3;
    if (*(int *)(lVar9 + 0x524) != 5) {
      iVar7 = *piVar8;
    }
    puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar2 = *puVar6 ^ *puVar6 << 0xb;
    uVar3 = puVar6[3];
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar6[2] = uVar3;
    puVar6[3] = uVar2;
    bVar5 = (int)((ulong)uVar2 * 100 >> 0x20) < iVar7;
    *(bool *)(*param_1 + 0x8ae) = bVar5;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

