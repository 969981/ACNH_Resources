
void FUN_0351eebc(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), (uVar4 & 1) == 0)) {
    return;
  }
  uVar2 = *(uint *)(puVar6 + 0x42);
  lVar5 = puVar6[0x43];
  lVar1 = 0x18;
  if (uVar2 < 4) {
    lVar1 = 0;
  }
  FUN_03515b00(param_1 + 0x1d060,param_2,*(undefined8 *)(lVar5 + (ulong)(2 < uVar2) * 0x10),
               *(undefined8 *)(lVar5 + (ulong)(4 < uVar2) * 0x20),*(undefined8 *)(lVar5 + lVar1),
               *(long *)(param_1 + 0x1d058) + 0xe1b8);
  return;
}

