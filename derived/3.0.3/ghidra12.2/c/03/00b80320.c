
void FUN_00b80320(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 local_40 [2];
  long local_38;
  
  lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x288);
  if (lVar11 == 0) {
    return;
  }
  uVar3 = *(ushort *)(lVar11 + 0x202);
  uVar10 = uVar3 & 0x3ff;
  puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar6[3];
  uVar4 = uVar10 - (uVar3 >> 1 & 0x155);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar8 = *puVar6 ^ *puVar6 << 0xb;
  uVar4 = uVar4 + (uVar4 >> 8);
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2;
  puVar6[2] = uVar2;
  puVar6[3] = uVar8;
  uVar8 = (uint)((ulong)uVar4 * (ulong)uVar8 >> 0x20);
  if (uVar4 <= uVar8 || (uVar3 & 0x3ff) == 0) {
    return;
  }
  iVar5 = uVar8 + 2;
  while (iVar5 = iVar5 + -1, 1 < iVar5) {
    uVar10 = uVar10 - 1 & uVar10;
    if (uVar10 == 0) {
      return;
    }
  }
  uVar4 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  if (9 < uVar4) {
    return;
  }
  local_40[0] = 10;
  lVar1 = lVar11 + (ulong)uVar4 * 0x120 + 0x208;
  local_38 = lVar11 + 0xa4;
  FUN_02906c90(local_40,lVar1);
  uVar9 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
  if (((DAT_0533a3c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0533a3c0), iVar5 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x6e) goto LAB_00b804ac;
      uVar7 = uVar7 + 1;
    } while (DAT_0533a3b0 != uVar7);
  }
  uVar7 = 0;
LAB_00b804ac:
  local_40[0] = (undefined4)uVar7;
  FUN_01bae480(uVar9,lVar1,0,local_40,3);
  return;
}

