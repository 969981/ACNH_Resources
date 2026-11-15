
void FUN_020cdd30(long param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x020cddec;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cddec;
    }
  }
  uVar9 = 0;
joined_r0x020cddec:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if ((((uVar9 & uVar3) == 1) &&
        (pfVar5 = (float *)FUN_0252d9bc(0), fVar10 = *(float *)(plVar8[0xd] + 0x278) - *pfVar5,
        fVar11 = *(float *)(plVar8[0xd] + 0x280) - pfVar5[2],
        fVar11 * fVar11 + fVar10 * fVar10 <= **(float **)(param_1 + 8) * **(float **)(param_1 + 8)))
       && ((lVar6 = plVar8[0x77], *(int *)(lVar6 + 0x77b0) == 0x2f && (*(int *)(lVar6 + 0xaf20) < 0)
           ))) {
      lVar7 = *(long *)(lVar6 + 8);
      uVar9 = *(uint *)(lVar7 + 0x288);
      *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
      uVar9 = uVar9 ^ uVar9 << 0xb;
      *(undefined4 *)(lVar7 + 0x28c) = *(undefined4 *)(lVar7 + 0x290);
      uVar3 = *(uint *)(lVar7 + 0x294);
      *(uint *)(lVar7 + 0x290) = uVar3;
      uVar9 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3;
      *(uint *)(lVar7 + 0x294) = uVar9;
      *(int *)(lVar6 + 0xaf20) = (int)((ulong)uVar9 * 0x5a >> 0x20);
    }
  }
  return;
}

