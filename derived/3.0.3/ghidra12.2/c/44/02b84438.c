
/* WARNING: Removing unreachable block (ram,0x02b844d4) */
/* WARNING: Removing unreachable block (ram,0x02b844e4) */

undefined8 FUN_02b84438(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined **local_78;
  undefined1 local_70;
  int local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined2 local_54 [2];
  
  if (*(int *)(param_1 + 0x550) != 0x1b || *(short *)(param_1 + 0xcc0) == -1) {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x13f0);
  if (uVar3 < *(uint *)(lVar5 + 0x13d0)) {
    uVar4 = 0;
    if ((*(long *)(*(long *)(lVar5 + 0x13d8) + (long)(int)uVar3 * 8) != 0) &&
       ((uint)*(ushort *)(param_1 + 0x448) != (param_2 & 0xffff))) {
      local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
      puVar1 = &DAT_05636dd8;
      if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
      }
      if (puVar1[1] == 0) {
        puVar6 = &DAT_0560ab7c;
        local_70 = DAT_0560ab60;
        local_6c = DAT_0560ab64;
        local_60 = (undefined4)DAT_0560ab70;
        uStack_5c = DAT_0560ab70._4_4_;
        local_58 = DAT_0560ab78;
      }
      else {
        FUN_01360490(&local_78,puVar1[1],*(undefined4 *)(param_1 + 0x174));
        puVar6 = local_54;
      }
      uVar2 = *puVar6;
      FUN_02b81fc4(param_1);
      *(short *)(param_1 + 0x448) = (short)param_2;
      local_78 = &PTR_LAB_04a9ce20;
      local_68 = &DAT_048f9750;
      local_54[0] = uVar2;
      if (local_6c == 0x1b) {
        local_54[0] = (short)param_2;
      }
      FUN_02b945b0(*(undefined4 *)(param_1 + 0x174),param_2);
      FUN_02b81bf0(param_1,&local_78);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

