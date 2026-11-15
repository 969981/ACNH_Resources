
void FUN_01febe60(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04bb30a0;
  uVar2 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  if (((3 < uVar2) && (uVar2 = FUN_00a86724(*(undefined8 *)puVar1), (uVar2 & 0xfffffffe) != 6)) &&
     (iVar3 = FUN_0220f3c4(*(long *)(param_1 + 8) + 0x3e0,0), iVar3 != 3)) {
    FUN_021e67f0(&local_28,*(long *)(param_1 + 8) + 0x3e0);
    *(undefined4 *)(param_1 + 0xae84) = local_28;
    *(undefined4 *)(param_1 + 0xae88) = uStack_24;
    FUN_01e57c78(*(undefined8 *)(param_1 + 0x10),&local_28,0,1);
  }
  return;
}

