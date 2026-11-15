
void FUN_024bcb3c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  uVar4 = *(undefined2 *)param_2;
  uVar2 = *(undefined1 *)((long)param_2 + 2);
  local_60 = 0x8a5;
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  uVar5 = *param_2;
  uVar1 = param_2[1];
  local_58 = uVar4;
  local_56 = uVar2;
  local_55 = uVar3;
  local_54 = uVar1;
  FUN_0277d4ac(&local_60);
  puVar6 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_58);
  lVar8 = DAT_05150358;
  lVar9 = *(long *)puVar6;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_68 = 0;
      local_70 = uVar5;
      local_6c = uVar1;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar6 != 0) {
        lVar8 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
            local_68 = lVar8;
          }
        }
      }
      FUN_01afa900(&local_78,0);
      goto LAB_024bcd14;
    }
  }
  if (((DAT_05150358 != 0) &&
      ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        (*(long *)(DAT_05150358 + 0x488) != 0)) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
     (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
    uVar7 = FUN_0277d6c4(&local_58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      *(undefined2 *)param_1 = uVar4;
      *(undefined1 *)((long)param_1 + 2) = uVar2;
      *(undefined1 *)((long)param_1 + 3) = uVar3;
      param_1[1] = uVar1;
      return;
    }
  }
  local_70 = (undefined4)local_60;
  local_6c = local_60._4_4_;
LAB_024bcd14:
  *param_1 = local_70;
  param_1[1] = local_6c;
  return;
}

