
void FUN_029a7d90(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint local_1a4;
  undefined **local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined8 uStack_188;
  undefined1 local_180 [256];
  undefined8 local_80;
  long *local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined1 *local_48;
  
  uVar1 = *param_3;
  local_180[0] = 0;
  local_190 = local_180;
  uStack_188 = 0x10000000000;
  local_1a4 = 0;
  if (uVar1 != 99999 && -1 < (int)uVar1) {
    local_1a4 = uVar1;
  }
  local_1a0 = &PTR_LAB_048f9770;
  puStack_198 = &DAT_0405db6e;
  FUN_02a21700(&local_190,&local_1a0,2,&local_1a4);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_70 = 0xff;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  ppuStack_50 = &PTR_LAB_048f9770;
  local_48 = local_190;
  uVar2 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_80,&ppuStack_50);
  plVar3 = (long *)0x0;
  if (((uVar2 & 1) != 0) && (plVar3 = local_78, local_78 != (long *)0x0)) {
    if (*(uint *)(local_78 + 3) == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)((ulong)*(uint *)(local_78 + 3) + (long)local_78);
      if (*plVar3 != 0x101feff464e494d) {
        plVar3 = (long *)0x0;
      }
    }
  }
  uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_2 + 0xc) = uVar1;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (((*(char *)(param_1 + 0x2794) != '\0') &&
        (*(int *)(param_1 + 0x2720) == *(int *)(param_2 + 0x18))) &&
       (*(char *)(param_1 + 0x2624) != '\0')) {
      *(uint *)(param_1 + 0x2628) = uVar1;
      *(uint *)(param_1 + 0x2718) = uVar1;
    }
  }
  else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
           (*(int *)(param_1 + 0x62e2c) == *(int *)(param_2 + 0x18))) &&
          (*(char *)(param_1 + 0x62d30) != '\0')) {
    *(uint *)(param_1 + 0x62d34) = uVar1;
    *(uint *)(param_1 + 0x62e24) = uVar1;
  }
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)((long)plVar3 + 0x14);
    *(int *)(param_2 + 0x128) = (int)plVar3[3];
    *(undefined4 *)(param_2 + 300) = *(undefined4 *)((long)plVar3 + 0x1c);
  }
  return;
}

