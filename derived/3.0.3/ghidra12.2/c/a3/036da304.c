
void FUN_036da304(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte local_44 [4];
  byte local_40 [4];
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined1 local_24;
  
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
      ((*(int *)(param_1 + 0x14) == 4 || (*(int *)(param_1 + 0x14) == 5)))) &&
     (FUN_036a16dc(param_1 + 0x390), (*(uint *)(param_1 + 0x1a70) & 0x30) == 0x10)) {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar3 + 7) == -0x7975b8e8) {
      *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) | 0x20;
    }
  }
  if ((*(byte *)(param_1 + 0x1a70) >> 6 & 1) != 0) {
    local_34 = *(undefined4 *)(param_1 + 0x1a7c);
    local_3c = *(undefined8 *)(param_1 + 0x1a74);
    local_28 = 0;
    local_24 = 0;
    local_2b = 1;
    local_30 = *(undefined4 *)(param_1 + 0x1a80);
    FUN_0252d11c(local_44);
    local_2c = 1;
    local_40[0] = local_44[0];
    if (7 < local_44[0]) {
      local_40[0] = 0xff;
    }
    uVar2 = FUN_0255c85c(local_40);
    if ((uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xffffffbf;
    }
  }
  return;
}

