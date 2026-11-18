
void FUN_03302efc(long param_1)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *local_a0;
  undefined ***local_98;
  undefined **local_90;
  long lStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined ***local_68;
  undefined **local_60;
  long lStack_58;
  code *local_50;
  undefined8 uStack_48;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bc1118;
  lVar6 = *(long *)PTR_DAT_04bc1118;
  if (*(char *)(param_1 + 0x16430) == '\0') {
    if ((lVar6 != 0) &&
       (*(uint *)(lVar6 + 0x3c) < 0x2f &&
        (1L << ((ulong)*(uint *)(lVar6 + 0x3c) & 0x3f) & 0x420c0030a83fU) != 0)) {
      FUN_033675d0(param_1 + 0x16438);
      *(undefined1 *)(param_1 + 0x16431) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x16430) = 1;
    if (*(int *)(lVar6 + 0x38) != 0) goto LAB_03302f3c;
LAB_03302f98:
    FUN_032fc1e0(lVar6);
    lVar5 = *(long *)puVar2;
    local_24 = 0;
    if (lVar5 != 0) goto LAB_03302fac;
  }
  else {
    if (*(int *)(lVar6 + 0x38) == 0) goto LAB_03302f98;
LAB_03302f3c:
    lVar5 = lVar6;
LAB_03302fac:
    local_24 = 0;
    if ((*(uint *)(lVar5 + 0x3c) < 0x2f &&
         (1L << ((ulong)*(uint *)(lVar5 + 0x3c) & 0x3f) & 0x420c0030a83fU) != 0) &&
       (uVar3 = FUN_033677c0(param_1 + 0x16438,&local_24), (uVar3 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x17e0) = 1;
      local_68 = &local_60;
      *(undefined4 *)(param_1 + 0x16420) = local_24;
      local_60 = &PTR_LAB_04b1d9b8;
      local_70 = PTR_DAT_04bc90b0 + 0x10;
      local_50 = FUN_03302d80;
      uStack_48 = 0;
      lStack_58 = param_1;
      FUN_033030f0(param_1,1,&local_70);
      pppuVar1 = local_68;
      goto joined_r0x03303054;
    }
  }
  if (*(int *)(lVar6 + 0x3c) == 0) {
    uVar4 = 1;
  }
  else {
    if (*(int *)(lVar6 + 0x3c) != 1) {
      FUN_032fc524(*(undefined8 *)puVar2,0);
      return;
    }
    uVar4 = 3;
  }
  *(undefined4 *)(param_1 + 0x16420) = uVar4;
  local_a0 = PTR_DAT_04bc90b0;
  *(undefined4 *)(param_1 + 0x17e0) = 2;
  local_98 = &local_90;
  local_90 = &PTR_LAB_04b1d9b8;
  local_a0 = local_a0 + 0x10;
  local_80 = FUN_03302d80;
  uStack_78 = 0;
  lStack_88 = param_1;
  FUN_033030f0(param_1,2,&local_a0);
  pppuVar1 = local_98;
joined_r0x03303054:
  if (pppuVar1 != (undefined ***)0x0) {
    (*(code *)(*pppuVar1)[1])();
  }
  return;
}

