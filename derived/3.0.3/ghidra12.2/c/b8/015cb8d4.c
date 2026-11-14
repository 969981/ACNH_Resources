
/* WARNING: Removing unreachable block (ram,0x015cb914) */
/* WARNING: Removing unreachable block (ram,0x015cb934) */

undefined1  [16] FUN_015cb8d4(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_01;
  undefined1 auVar3 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 local_18 [4];
  undefined4 local_14;
  
  if ((*(long *)PTR_DAT_04bb2200 == 0) ||
     (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar2 == 0)) {
    if ((param_2 & 1) == 0) {
      if (((DAT_04cfae30 != 0) && (lVar2 = *(long *)(DAT_04cfae30 + 0xa8), lVar2 != 0)) &&
         (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) goto LAB_015cb9e8;
    }
    else if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
            (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
      FUN_0093a950(DAT_04cfae30 + 0x28,param_1,0);
      auVar3._4_4_ = extraout_var;
      auVar3._0_4_ = extraout_s0;
      auVar3._8_8_ = extraout_var_01;
      return auVar3;
    }
  }
  else {
    if (*(long *)(lVar2 + 0x118) != 0) {
      local_14 = 0;
      if ((*(long *)(lVar2 + 0x118) == 0) || (*(char *)(*(long *)(lVar2 + 0x118) + 0xe0b) != '\0'))
      {
        FUN_015bc77c(*(long *)(lVar2 + 0x118),param_1,param_2 & 1,&local_14);
        uVar5 = 0;
        uVar6 = 0;
        goto LAB_015cba6c;
      }
    }
    lVar2 = *(long *)(DAT_04cfae30 + 0xa8);
    if (lVar2 != 0) {
LAB_015cb9e8:
      local_18[0] = 0;
      if (DAT_04c487d4 == -1) {
        local_14 = 7;
      }
      else {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        local_14 = 7;
        if ((*puVar1 & 2) != 0) {
          local_14 = 5;
        }
      }
      FUN_00962700(lVar2,param_1,&local_14,1,local_18);
      local_14 = extraout_s0_00;
      uVar5 = extraout_var_00;
      uVar6 = extraout_var_02;
      goto LAB_015cba6c;
    }
  }
  local_14 = 0xc3fa0000;
  uVar5 = 0;
  uVar6 = 0;
LAB_015cba6c:
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = local_14;
  auVar4._8_8_ = uVar6;
  return auVar4;
}

