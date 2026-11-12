
void FUN_007e4920(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined1 auStack_28 [2];
  undefined1 auStack_26 [2];
  uint local_24;
  
  FUN_007ef010();
  puVar1 = param_1 + 0xc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar10 = param_1 + 4;
  puVar10[0] = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  FUN_007e9590(puVar1,0,0);
  puVar2 = param_1 + 0x5bc;
  *(undefined ***)(param_1 + 0xc) = &PTR_LAB_04917010;
  FUN_007e9bd0(puVar2,0,0);
  *(undefined ***)(param_1 + 0x5bc) = &PTR_LAB_04916ef0;
  uVar8 = (ulong)*param_1;
  uVar7 = (uint)*param_1;
  if (uVar7 != DAT_04cb6038) {
    pbVar6 = &DAT_04c8c100;
    if ((DAT_04c8c100 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04c8c100);
      uVar8 = (ulong)uVar7;
      pbVar6 = PTR_DAT_04bb3128;
      if (iVar3 != 0) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
        uVar8 = (ulong)uVar7;
        pbVar6 = PTR_DAT_04bb3128;
      }
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar9 * 4) == (int)(uVar8 >> 0xb)) goto LAB_007e49fc;
        uVar9 = uVar9 + 1;
      } while (DAT_04c8c0f0 != uVar9);
    }
    uVar9 = 0;
LAB_007e49fc:
    local_24 = (uint)uVar9;
    if (((*pbVar6 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar7 = local_24;
    if (DAT_04c8c0f0 <= local_24) {
      uVar7 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar7 * 4) == 0x11) {
      if (((uint)((ulong)*param_2 & 0x7f) < *DAT_04cb4960) &&
         (lVar5 = *(long *)(*(long *)(DAT_04cb4960 + 2) + ((ulong)*param_2 & 0x7f) * 8), lVar5 != 0)
         ) {
        if (*(char *)(lVar5 + 10) == '\0') {
          FUN_02640070(puVar1,0,lVar5 + 0x10,0,1);
          FUN_02640130(puVar1,*(long *)PTR_DAT_04bb46b0 + 0x28);
          *(ushort **)puVar10 = puVar1;
        }
        else {
          FUN_02640070(puVar2,0,lVar5 + 0x10,0,1);
          FUN_02640130(puVar2,*(long *)PTR_DAT_04bb46b0 + 0x28);
          *(ushort **)(param_1 + 8) = puVar2;
        }
      }
    }
    else {
      uVar8 = FUN_007ef180(param_1);
      if ((uVar8 & 1) == 0) {
        FUN_007ef010(auStack_28,param_2);
        lVar5 = FUN_0264e170(auStack_28);
        *(long *)puVar10 = lVar5;
      }
      else {
        FUN_007ef010(auStack_26,param_2);
        uVar4 = FUN_0264e8e0(auStack_26);
        *(undefined8 *)(param_1 + 8) = uVar4;
      }
    }
  }
  return;
}

