
void FUN_012e19c0(long param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float fVar7;
  undefined **local_70;
  int local_68;
  int iStack_64;
  
  uVar4 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar4 & 0xfffffffc;
  if (((((char)param_2[1] == '\0') ||
       (*(int *)(param_3 + 8) < *(int *)(DAT_050d57c8 + 0x28) ||
        *(int *)(DAT_050d57c8 + 0x38) < *(int *)(param_3 + 8))) ||
      (*(int *)(param_3 + 0xc) < *(int *)(DAT_050d57c8 + 0x2c))) ||
     (*(int *)(DAT_050d57c8 + 0x3c) < *(int *)(param_3 + 0xc))) {
    if ((*param_2 != 0) && (lVar3 = *(long *)(*param_2 + 0x150), lVar3 != 0)) {
      local_70 = &PTR_FUN_048f9730;
      fVar7 = (float)*(int *)(param_3 + 8) * 0.5;
      uVar4 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar4 = (uint)(fVar7 < 0.0);
      }
      local_68 = (int)fVar7 - uVar4;
      fVar7 = (float)*(int *)(param_3 + 0xc) * 0.5;
      uVar4 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar4 = (uint)(fVar7 < 0.0);
      }
      iStack_64 = (int)fVar7 - uVar4;
      iVar1 = *(int *)(lVar3 + 0x48030);
      if (iVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x48038);
        iVar5 = 0;
        do {
          puVar6 = (uint *)(lVar3 + (long)iVar5 * 0x718 + 8);
          if ((*(byte *)puVar6 & 1) != 0) {
            uVar2 = FUN_02a7c8c0(lVar3 + (long)iVar5 * 0x718,param_3);
            if ((uVar2 & 1) == 0) {
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
            }
            if ((((*puVar6 ^ 0xffffffff) & 3) == 0) &&
               (uVar2 = FUN_02ad806c(lVar3 + (long)iVar5 * 0x718 + 0xb8,5,&local_70),
               (uVar2 & 1) != 0)) {
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
    }
  }
  else {
    *(uint *)(param_1 + 8) = uVar4 | 3;
  }
  return;
}

