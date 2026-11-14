
uint FUN_01dbebf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  long *local_178;
  undefined1 auStack_170 [304];
  uint local_40;
  uint local_38;
  long local_30;
  long **local_28;
  
  *(undefined4 *)(param_3 + 0x138) = 0;
  local_30 = param_3;
  if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x18c) == 3) {
    local_38 = 0;
    uVar2 = FUN_01dbe988(param_1,param_2,auStack_170);
    if ((uVar2 & 1) == 0) goto LAB_01dbeca0;
    if (local_38 == 0xffffffff) {
LAB_01dbecb4:
      local_178 = &local_30;
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    ppuVar3 = &PTR_LAB_04a5b1f0;
    uVar1 = local_38;
  }
  else {
    local_40 = 0;
    uVar2 = FUN_01dbe5e4(param_1,param_2,auStack_170);
    if ((uVar2 & 1) == 0) goto LAB_01dbeca0;
    if (local_40 == 0xffffffff) goto LAB_01dbecb4;
    ppuVar3 = &PTR_LAB_04a5b208;
    uVar1 = local_40;
  }
  local_178 = &local_30;
  local_28 = &local_178;
  (*(code *)ppuVar3[uVar1])(&local_28,auStack_170);
LAB_01dbeca0:
  return uVar2 & 1;
}

