
void FUN_03406060(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint in_w8;
  uint *puVar5;
  undefined8 *puVar6;
  uint unaff_w22;
  undefined8 local_48;
  undefined8 *puStack_40;
  uint local_38;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 1) {
LAB_034060b4:
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = (int)unaff_w22 / (int)uVar1;
    }
    uVar2 = unaff_w22 - iVar3 * uVar1;
    if (uVar2 < uVar1) {
      puVar5 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8);
      goto LAB_034060d4;
    }
  }
  else {
    iVar3 = *(int *)**(undefined8 **)(param_1 + 2);
    unaff_w22 = 0;
    if (iVar3 != 0) {
      unaff_w22 = *param_2 / iVar3;
    }
    if (unaff_w22 != param_1[0x28]) {
      return;
    }
    in_w8 = *param_2 - unaff_w22 * iVar3;
    if (-1 < (int)unaff_w22) goto LAB_034060b4;
  }
  puVar5 = (uint *)0x0;
LAB_034060d4:
  if (in_w8 < *puVar5) {
    puVar6 = *(undefined8 **)(*(long *)(puVar5 + 2) + (long)(int)in_w8 * 8);
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4d90), (uVar4 & 1) != 0)) {
    if (param_2[1] != 0) {
      *(byte *)((long)puVar6 + 0x2c4) = *(byte *)((long)puVar6 + 0x2c4) | 1;
    }
    local_38 = param_1[0x1c];
    local_48 = *(undefined8 *)(param_1 + 0x1e);
    puStack_40 = puVar6;
    FUN_032017e0(&local_48);
    param_1[0x28] = unaff_w22;
  }
  return;
}

