
/* WARNING: Removing unreachable block (ram,0x02b5c4d0) */

void FUN_02b5c3a0(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined **local_60;
  undefined **ppuStack_58;
  undefined *local_40;
  uint local_38;
  undefined4 uStack_34;
  byte local_30;
  uint local_28;
  undefined4 local_24;
  
  uVar7 = 0;
  do {
    uVar6 = (uint)uVar7;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar7 * 4);
    if (0x38 < uVar6) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_2) goto LAB_02b5c3fc;
    uVar5 = 0x39;
    if ((int)uVar6 < 0x39) {
      uVar5 = uVar6 + 1;
    }
    uVar7 = (ulong)uVar5;
  } while (uVar5 != 0x39);
  uVar6 = 0;
LAB_02b5c3fc:
  if ((uVar6 == 0) && (DAT_055cdb30 != param_2)) {
    return;
  }
  local_40 = PTR_DAT_04bbfe68 + 0x10;
  puVar2 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)uVar6 * 4);
  if (0x38 < uVar6) {
    puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_34 = *puVar2;
  local_38 = uVar6;
  local_30 = FUN_017baf44();
  local_30 = local_30 & 1;
  ppuStack_58 = &local_40;
  local_60 = &PTR_LAB_04aa4b00;
  if (uVar6 != 0) {
    if (uVar6 == 0) {
      return;
    }
    local_28 = uVar6;
    if (uVar6 != 0) {
      plVar4 = (long *)(DAT_0519d040 + 0x30) + uVar6;
      if (0x38 < uVar6) {
        plVar4 = (long *)(DAT_0519d040 + 0x30);
      }
      goto LAB_02b5c4a8;
    }
  }
  plVar4 = (long *)(DAT_0519d040 + 0x1f8);
LAB_02b5c4a8:
  if (*plVar4 != 0) {
    local_24 = 0;
    lVar3 = *(long *)(*plVar4 + 0xd0);
    if (lVar3 != 0) {
      FUN_012e6150(lVar3,&local_60,param_1);
    }
  }
  return;
}

