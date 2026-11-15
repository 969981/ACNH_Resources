
void FUN_0247a7d4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = *(undefined8 *)(param_1 + 0x1902);
  lVar3 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x1901) == '\0') {
    FUN_02472404(0x3f800000,param_1);
  }
  else {
    FUN_0244d1b8(0x3f800000,param_1);
  }
  return;
}

