
void FUN_038faf2c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  
  local_48 = 0;
  uVar1 = *(ushort *)(param_2 + 0x30) >> (ulong)(param_4 & 0x1f);
  uStack_3c = (uint)uVar1;
  if (uVar1 < 2) {
    uStack_3c = 1;
  }
  local_40 = 0;
  uVar1 = *(ushort *)(param_2 + 0x3a);
  local_38 = (uint)*(ushort *)(param_2 + 0x32);
  if (uVar1 != 3) {
    local_38 = 1;
  }
  uVar2 = *(ushort *)(param_2 + 0x32) >> (ulong)(param_4 & 0x1f);
  if (local_38 <= uVar2) {
    local_38 = (uint)uVar2;
  }
  if ((uVar1 - 8 < 2) || (uVar1 == 4)) {
    uVar3 = (uint)*(ushort *)(param_2 + 0x34);
    local_34 = uVar3;
  }
  else {
    if (uVar1 != 2) {
      local_34 = 1;
      goto LAB_038fafc8;
    }
    uVar3 = (uint)*(ushort *)(param_2 + 0x34);
    local_34 = 1;
  }
  uVar3 = uVar3 >> (ulong)(param_4 & 0x1f);
  if ((int)local_34 <= (int)uVar3) {
    local_34 = uVar3;
  }
LAB_038fafc8:
  (**(code **)PTR_DAT_04bcf220)(auStack_58);
  (**(code **)PTR_DAT_04bcf228)(auStack_58,param_4,1);
  uVar3 = *(int *)(param_2 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
  if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar3) {
    uVar3 = 0;
  }
  (*DAT_04c62380)(*(undefined8 *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar3 * 0x20 + 0x18),
                  auStack_58,&local_48,param_3);
  uVar3 = *(int *)(param_2 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
  if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar3) {
    uVar3 = 0;
  }
  (*DAT_04c623a0)(*(undefined8 *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar3 * 0x20 + 0x18),
                  auStack_58,&local_48);
  return;
}

