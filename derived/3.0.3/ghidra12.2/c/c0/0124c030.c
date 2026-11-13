
void FUN_0124c030(undefined8 *param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  *param_1 = &PTR_LAB_04989040;
  *(undefined2 *)(param_1 + 1) = *param_2;
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 2);
  puVar1 = PTR_DAT_04bbbc68;
  lVar4 = *(long *)PTR_DAT_04bbbc68;
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0xb0) == 0)) ||
     (*(long *)(*(long *)(lVar4 + 0xb0) + 8) == 0)) {
LAB_0124c0d0:
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_0277d6c4(param_2);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (*(uint *)(lVar4 + 0x1d8) <= uVar2) goto LAB_0124c0d0;
    lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8);
    param_1[2] = lVar4;
    if (lVar4 != 0) {
      return;
    }
  }
  local_38 = 0xea71;
  FUN_0277d4ac(&local_38);
  *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
  *(undefined4 *)((long)param_1 + 0xc) = local_38._4_4_;
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    if ((*(long *)(lVar4 + 0xb0) == 0) || (uVar3 = 0, *(long *)(*(long *)(lVar4 + 0xb0) + 8) == 0))
    goto LAB_0124c138;
    uVar2 = FUN_0277d6c4(param_1 + 1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (uVar2 < *(uint *)(lVar4 + 0x1d8)) {
      uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8);
      goto LAB_0124c138;
    }
  }
  uVar3 = 0;
LAB_0124c138:
  param_1[2] = uVar3;
  return;
}

