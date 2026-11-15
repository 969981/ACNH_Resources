
void FUN_021d2c14(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
        local_38 = lVar4;
      }
    }
  }
  FUN_01adea90(auStack_58,&local_48);
  pcVar1 = "TshirtsH";
  if (*local_50 != '\0') {
    pcVar1 = local_50;
  }
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = pcVar1;
  return;
}

