
undefined8 FUN_00975dc0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined4 local_38;
  uint local_34;
  undefined8 local_18;
  
  puVar3 = PTR_DAT_04bb27c8;
  if ((((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar8 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar8 != 0)) &&
      (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((uVar2 = *(uint *)(param_1 + 0xc), -1 < (int)uVar2 &&
      (uVar1 < *(uint *)(lVar8 + 0x38) && uVar2 < *(uint *)(lVar8 + 0x3c))))) {
    uVar1 = uVar1 + *(uint *)(lVar8 + 0x38) * uVar2;
    if ((uVar1 < *(uint *)(lVar8 + 0x68) && *(long *)(lVar8 + 0x70) != 0) &&
       ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar1 * 4) >> 2 & 1) != 0)) {
      return 0;
    }
  }
  local_18 = 0;
  local_34 = 0;
  local_38 = 0;
  uVar5 = FUN_01385fe0(param_1,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  lVar8 = *(long *)puVar3;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
     (uVar5 = FUN_009493f8(lVar8 + 0x28,param_1,(long)&local_18 + 4,&local_18,&local_34,&local_38),
     (uVar5 & 1) != 0)) {
    if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      if (((iVar4 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
         ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
          ((*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0 &&
           (uVar5 = FUN_0180c170(), (uVar5 & 1) != 0)))))) {
        if (DAT_05292338 == 0) {
          iVar7 = 0;
          iVar4 = 0;
          iVar10 = 0x10;
          iVar9 = 0x10;
        }
        else {
          iVar4 = *(int *)(DAT_05292338 + 0xd88);
          iVar7 = *(int *)(DAT_05292338 + 0xd8c);
          iVar10 = *(int *)(DAT_05292338 + 0xd98);
          iVar9 = *(int *)(DAT_05292338 + 0xd9c);
        }
        if (*(int *)(param_1 + 8) < iVar4) {
          return 0;
        }
        if (iVar10 < *(int *)(param_1 + 8)) {
          return 0;
        }
        if (*(int *)(param_1 + 0xc) < iVar7) {
          return 0;
        }
        if (iVar9 < *(int *)(param_1 + 0xc)) {
          return 0;
        }
      }
    }
    uVar5 = FUN_00980630(DAT_04cfab78,local_18._4_4_);
    if ((uVar5 & 1) == 0) {
      if (((((0x2e < local_18._4_4_) ||
            ((1L << ((ulong)local_18._4_4_ & 0x3f) & 0x480000000080U) == 0)) &&
           (uVar5 = FUN_00981090(DAT_04cfab78), (uVar5 & 1) != 0)) &&
          ((uVar5 = FUN_00980630(DAT_04cfab78,local_18 & 0xffffffff), (uVar5 & 1) == 0 &&
           ((0x2e < (uint)local_18 || ((1L << (local_18 & 0x3f) & 0x480000000080U) == 0)))))) &&
         ((uVar5 = FUN_00981090(DAT_04cfab78), (uVar5 & 1) != 0 &&
          ((((uVar5 = FUN_00980630(DAT_04cfab78,local_34), (uVar5 & 1) == 0 &&
             ((0x2e < local_34 || ((1L << ((ulong)local_34 & 0x3f) & 0x480000000080U) == 0)))) &&
            (uVar5 = FUN_00981090(DAT_04cfab78), (uVar5 & 1) != 0)) &&
           (uVar5 = FUN_00975b00(&local_38), (uVar5 & 1) != 0)))))) {
        return 1;
      }
    }
  }
  return 0;
}

