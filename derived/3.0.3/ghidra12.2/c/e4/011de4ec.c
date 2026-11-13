
bool FUN_011de4ec(long param_1,undefined4 *param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined2 local_47;
  long *local_40;
  char local_38;
  char local_37;
  undefined4 local_14;
  
  lVar8 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar8 + 0x488) != 0 && (*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar8 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)))))) {
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(&local_98,param_2);
      iVar4 = FUN_0123db50(&local_90,CONCAT44(uStack_84,local_88));
      if ((iVar4 == 0x2d) ||
         (iVar4 = FUN_0123db50(&local_90,CONCAT44(uStack_84,local_88)), iVar4 - 0x23U < 9)) {
        uVar7 = 2;
        puVar6 = &DAT_050dfb30;
        goto LAB_011de5d0;
      }
    }
  }
  uVar7 = 1;
  puVar6 = &DAT_050dfb2c;
LAB_011de5d0:
  local_14 = *puVar6;
  local_98 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_40,&local_14,&local_98,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
    if ((uVar5 & 1) == 0) {
      local_37 = '\0';
    }
  }
  bVar2 = false;
  if (((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) {
    uStack_8c = 0x3f800000;
    local_88 = 0;
    uStack_84 = 0xfffe;
    uStack_80 = 0;
    FUN_0277d4ac(&uStack_84);
    local_4b = 0;
    local_64 = 0xffffffff00000000;
    local_68 = 0xff;
    local_98 = param_2[10];
    uStack_94 = param_2[0xb];
    local_4c = 0xff;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_47 = 0;
    uStack_50 = 0xff00ffff;
    uStack_84 = *param_2;
    uStack_80 = param_2[1];
    local_90 = param_2[0xc];
    local_70 = param_2[6];
    uStack_6c = param_2[7];
    local_5c = param_2[8];
    uStack_58 = 0;
    if ((((byte)DAT_050dfb34 >> 5 & 1) != 0) && ((*(ushort *)(param_2 + 0x1a) >> 0xd & 1) != 0)) {
      local_47 = 1;
    }
    local_54 = uVar7;
    iVar4 = FUN_011c74a0(local_40,&local_98,0);
    bVar2 = iVar4 != -1;
    if (bVar2) {
      param_2[0x16] = iVar4;
    }
  }
  return bVar2;
}

