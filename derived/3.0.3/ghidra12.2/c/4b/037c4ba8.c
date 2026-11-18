
/* WARNING: Removing unreachable block (ram,0x037c4c30) */
/* WARNING: Removing unreachable block (ram,0x037c4c40) */

uint FUN_037c4ba8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  int local_58 [3];
  int local_4c;
  undefined4 local_14;
  
  if ((*(long *)(param_1 + 0x220) != 0) && (uVar3 = FUN_0170a4f0(), (uVar3 & 1) != 0)) {
    local_58[0] = 0;
    if ((DAT_04cfae30 != 0) &&
       ((*(long *)(DAT_04cfae30 + 0xa8) != 0 && (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')))) {
      FUN_0093a950(DAT_04cfae30 + 0x28,param_3,local_58);
    }
    if (local_58[0] == 8) {
      local_58[0] = 0;
      puVar1 = &DAT_05636dd8;
      if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
      }
      FUN_02a58ea0(local_58,puVar1,param_3);
      if (local_4c != 0) {
        local_14 = 0;
        uVar2 = FUN_02b647b0(&local_14,local_58);
        if ((uVar2 & 1) != 0) {
          local_70 = *(undefined4 *)(param_3 + 1);
          local_68 = 0;
          local_5c = 0;
          local_60 = local_14;
          local_78 = *param_3;
          FUN_0359c3d4(param_2,&local_78);
        }
        goto LAB_037c4cc4;
      }
    }
  }
  uVar2 = 0;
LAB_037c4cc4:
  return uVar2 & 1;
}

