
void FUN_02189664(undefined8 param_1,ushort *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_48[0] = *param_2 & 0x7f;
  if ((param_3 & 1) == 0) {
    uVar3 = FUN_026585a0(param_1);
    local_18 = 0;
    uVar2 = FUN_01df3070(&local_18);
    uStack_38 = local_18;
    if ((uVar2 & 1) == 0) {
      uStack_38 = 0;
    }
  }
  else {
    uVar3 = 0;
    uStack_38 = 0;
  }
  puVar1 = PTR_DAT_04bb27d0;
  uVar2 = (ulong)local_18 >> 0x30;
  local_18 = CONCAT26((ushort)uVar2 & 0xff00,0xff0000000000);
  local_40 = uVar3;
  if (-1 < DAT_053fbcf0) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbcf0,&local_18,local_48,0x18,0);
  }
  if (1 < *(uint *)(*(long *)puVar1 + 0x80)) {
    uVar4 = *(undefined8 *)PTR_DAT_04bb3708;
    uVar3 = FUN_02582a24(param_1,1);
    FUN_007f11c4(uVar4,uVar3,param_2,1);
  }
  return;
}

