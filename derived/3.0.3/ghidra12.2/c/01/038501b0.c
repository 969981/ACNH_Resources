
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038501b0(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  if (*(char *)(param_2 + 0xae) != '\0') {
    if ((int)param_3 < 0) {
      uVar3 = 0;
      lVar1 = *(long *)(param_2 + 0x78);
      if (lVar1 != 0) goto LAB_03850274;
      while ((int)uVar3 < 0) {
        while( true ) {
          if ((int)uVar3 < (int)*(uint *)(lVar1 + 0x18)) {
            uVar2 = uVar3;
            if (*(uint *)(lVar1 + 0x18) <= uVar3) {
              uVar2 = 0;
            }
            *(undefined4 *)(*(long *)(*(long *)(lVar1 + 0x20) + (ulong)uVar2 * 0x10) + 0xa8) =
                 param_1;
            lVar1 = *(long *)(param_2 + 0x78);
          }
          else {
            local_55 = 0;
            local_158 = 0x100;
            local_154[0] = 0;
            local_168 = &PTR_LAB_048f9a70;
            lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0x50) + 0x10) + 8);
            puStack_160 = local_154;
            FUN_038d1270(&local_168,"%s.as",
                         lVar1 + *(int *)(lVar1 + 0x24) + (long)*(int *)(lVar1 + 8));
            lVar1 = *(long *)(param_2 + 0x78);
          }
          uVar3 = uVar3 + 1;
          if (lVar1 == 0) break;
LAB_03850274:
          if (*(int *)(lVar1 + 0x18) <= (int)uVar3) {
            return;
          }
        }
      }
    }
    else {
      lVar1 = *(long *)(param_2 + 0x78);
      if (lVar1 == 0) {
        uVar3 = 0;
        uVar2 = _SUB_00000018;
      }
      else {
        uVar3 = *(uint *)(lVar1 + 0x18);
        uVar2 = uVar3;
      }
      if (uVar3 <= param_3) {
        param_3 = 0;
      }
      if ((int)param_3 < (int)uVar2) {
        if (uVar2 <= param_3) {
          param_3 = 0;
        }
        *(undefined4 *)(*(long *)(*(long *)(lVar1 + 0x20) + (ulong)param_3 * 0x10) + 0xa8) = param_1
        ;
      }
      else {
        local_55 = 0;
        local_158 = 0x100;
        puStack_160 = local_154;
        local_154[0] = 0;
        local_168 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
        lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_168,"%s.as",lVar1 + *(int *)(lVar1 + 0x24) + (long)*(int *)(lVar1 + 8));
      }
    }
  }
  return;
}

