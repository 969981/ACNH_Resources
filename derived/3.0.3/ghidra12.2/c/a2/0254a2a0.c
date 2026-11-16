
void FUN_0254a2a0(uint *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  
  if ((*param_2 < 8) && (uVar3 = FUN_02582d8c(param_2,1), puVar2 = PTR_DAT_04bb4fb8, uVar3 < 8)) {
    if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0') {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6);
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) goto LAB_0254a34c;
      uVar3 = FUN_02582d8c(param_2,1);
      if ((uVar3 < 8) && (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
        uVar3 = *(uint *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x4dc);
        goto LAB_0254a34c;
      }
    }
  }
  uVar3 = 0;
LAB_0254a34c:
  *param_1 = uVar3;
  return;
}

