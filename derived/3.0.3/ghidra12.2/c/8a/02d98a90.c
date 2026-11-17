
void FUN_02d98a90(undefined4 *param_1,ulong param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
        local_38 = lVar5;
      }
    }
  }
  uVar4 = FUN_01b020f0(&local_48);
  bVar2 = FUN_017c0a30(*(undefined8 *)PTR_DAT_04bb46d0,uVar4);
  if ((param_2 & 1) == 0) {
    if (DAT_05292338 == 0) {
      return;
    }
  }
  else {
    if (DAT_05292338 == 0) {
      return;
    }
    bVar2 = (*(byte *)(DAT_05292338 + 0xedc) & 0x40) == 0;
  }
  FUN_017ee430(DAT_05292338 + 0xda0,param_1,bVar2 & 1,1,1);
  return;
}

