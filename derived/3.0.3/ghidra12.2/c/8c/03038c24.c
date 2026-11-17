
void FUN_03038c24(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined8 *puStack_40;
  uint local_38;
  
  puVar1 = param_1 + (ulong)param_1[0x4b] * 8;
  if (1 < param_1[0x4b]) {
    puVar1 = param_1;
  }
  if (*param_2 < *puVar1) {
    puVar4 = *(undefined8 **)(*(long *)(puVar1 + 2) + (long)(int)*param_2 * 8);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90), (uVar3 & 1) != 0)) {
    if (param_2[1] != 0) {
      *(byte *)((long)puVar4 + 0x2c4) = *(byte *)((long)puVar4 + 0x2c4) | 1;
    }
    local_38 = param_1[0x1c];
    local_48 = *(undefined8 *)(param_1 + 0x1e);
    puStack_40 = puVar4;
    FUN_032017e0(&local_48);
  }
  return;
}

