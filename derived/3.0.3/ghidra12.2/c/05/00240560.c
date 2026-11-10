
void FUN_00240560(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  FUN_0023fc98(local_44);
  if (local_44[0] != 0) {
    piVar1 = local_44;
    goto LAB_00240638;
  }
  if (param_4 < 0x18) {
LAB_00240614:
    local_54 = 0x10c07;
  }
  else {
    uVar2 = (*(uint *)(param_3 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x18) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(ushort *)(param_2 + 0x1c) =
         *(ushort *)(param_3 + 0x10) >> 8 | *(ushort *)(param_3 + 0x10) << 8;
    *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(param_3 + 0x12);
    *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_3 + 0x13);
    uVar2 = (*(uint *)(param_3 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x14) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (799 < uVar2) {
      uVar2 = 800;
    }
    *(uint *)(param_2 + 0x340) = uVar2;
    if ((param_4 < uVar2 + 0x18) ||
       (memcpy((void *)(param_2 + 0x20),(void *)(param_3 + 0x18),(ulong)uVar2),
       param_4 < (uint)(((int)(void *)(param_3 + 0x18) + *(int *)(param_2 + 0x340)) - (int)param_3))
       ) goto LAB_00240614;
    local_54 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
  piVar1 = &local_54;
LAB_00240638:
  FUN_002296c4(param_1,piVar1);
  return;
}

