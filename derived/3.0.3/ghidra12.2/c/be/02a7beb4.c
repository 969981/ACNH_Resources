
/* WARNING: Removing unreachable block (ram,0x02a7bfac) */
/* WARNING: Removing unreachable block (ram,0x02a7bf5c) */
/* WARNING: Removing unreachable block (ram,0x02a7c020) */

bool FUN_02a7beb4(long param_1,float *param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined *local_38;
  int local_30;
  int iStack_2c;
  uint local_24;
  uint local_8 [2];
  
  local_38 = PTR_DAT_04bb2010 + 0x10;
  local_30 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_2c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
      if (*(long *)(param_1 + 0xc0) != 0) {
        local_8[1] = 0;
        lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 200);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x48) != '\0')) {
          uVar1 = FUN_02ad8220(param_1 + 0xb8,local_8,&local_24,&local_38,0);
          if ((uVar1 & 1) == 0) {
            return false;
          }
          local_8[1] = 0;
          lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 200);
          if (lVar4 == 0) {
            return false;
          }
          if (*(char *)(lVar4 + 0x48) == '\0') {
            return false;
          }
          if (*(uint *)(lVar4 + 0x30) <= local_8[0]) {
            return false;
          }
          if (local_24 < *(uint *)(lVar4 + 0x34)) {
            pcVar2 = (char *)(**(code **)(**(long **)(*(long *)(lVar4 + 0x90) +
                                                     (long)(int)(local_8[0] +
                                                                *(uint *)(lVar4 + 0x30) * local_24)
                                                     * 8) + 0xf0))();
            return *pcVar2 != '\0';
          }
          return false;
        }
      }
      if ((*(int *)(param_1 + 0x28) <= local_30 && local_30 <= *(int *)(param_1 + 0x38)) &&
          *(int *)(param_1 + 0x2c) <= iStack_2c) {
        iVar3 = *(int *)(param_1 + 0x3c);
LAB_02a7c068:
        return iStack_2c <= iVar3;
      }
    }
    else if ((*(int *)(param_1 + 0x360) <= local_30 && local_30 <= *(int *)(param_1 + 0x370)) &&
            (*(int *)(param_1 + 0x364) <= iStack_2c)) {
      iVar3 = *(int *)(param_1 + 0x374);
      goto LAB_02a7c068;
    }
  }
  return false;
}

