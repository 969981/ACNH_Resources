
undefined8 FUN_0277eec0(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar1 = DAT_05150358;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_0277efc4;
  }
  if (((DAT_05150358 != 0) &&
      ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        (*(long *)(DAT_05150358 + 0x488) != 0)) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
     (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
    uVar2 = FUN_0277d6c4(param_1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_0277efc4;
  }
  local_38 = *param_1;
  uStack_34 = param_1[1];
  iVar3 = FUN_0277d6c4(&local_38);
  if (6 < iVar3 - 0xf619U) {
    return 0;
  }
LAB_0277efc4:
  *param_2 = 0xfffe;
  FUN_0277d4ac(param_2);
  *(undefined2 *)param_2 = 0xfffd;
  uVar2 = *(uint *)(param_3 + 8);
  if (((int)uVar2 < 0x100) && (iVar3 = *(int *)(param_3 + 0xc), iVar3 < 0x100)) {
    uVar4 = FUN_0277d6c4(param_1);
    *(uint *)((long)param_2 + 4) = (uVar2 & 0xff) << 0x10 | iVar3 << 0x18 | uVar4 & 0xffff;
  }
  return 1;
}

