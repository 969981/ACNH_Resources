
/* WARNING: Removing unreachable block (ram,0x02a7c108) */
/* WARNING: Removing unreachable block (ram,0x02a7c0bc) */
/* WARNING: Removing unreachable block (ram,0x02a7c17c) */

bool FUN_02a7c074(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  uint local_24;
  uint local_8 [2];
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return false;
  }
  if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
    if (*(long *)(param_1 + 0xc0) != 0) {
      local_8[1] = 0;
      lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 200);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x48) != '\0')) {
        uVar6 = FUN_02ad8220(param_1 + 0xb8,local_8,&local_24,param_2,0);
        if ((uVar6 & 1) == 0) {
          return false;
        }
        local_8[1] = 0;
        lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 200);
        if (lVar8 == 0) {
          return false;
        }
        if (*(char *)(lVar8 + 0x48) == '\0') {
          return false;
        }
        if (*(uint *)(lVar8 + 0x30) <= local_8[0]) {
          return false;
        }
        if (local_24 < *(uint *)(lVar8 + 0x34)) {
          pcVar7 = (char *)(**(code **)(**(long **)(*(long *)(lVar8 + 0x90) +
                                                   (long)(int)(local_8[0] +
                                                              *(uint *)(lVar8 + 0x30) * local_24) *
                                                   8) + 0xf0))();
          return *pcVar7 != '\0';
        }
        return false;
      }
    }
    if (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x28)) {
      return false;
    }
    if (*(int *)(param_1 + 0x38) < *(int *)(param_2 + 8)) {
      return false;
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      iVar3 = *(int *)(param_1 + 0x3c);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
      bVar5 = iVar2 == iVar3;
LAB_02a7c1f4:
      return bVar5 || iVar1 < 0 != bVar4;
    }
  }
  else if ((*(int *)(param_1 + 0x360) <= *(int *)(param_2 + 8) &&
            *(int *)(param_2 + 8) <= *(int *)(param_1 + 0x370)) &&
          (iVar2 = *(int *)(param_2 + 0xc), *(int *)(param_1 + 0x364) <= iVar2)) {
    iVar3 = *(int *)(param_1 + 0x374);
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    bVar5 = iVar2 == iVar3;
    goto LAB_02a7c1f4;
  }
  return false;
}

