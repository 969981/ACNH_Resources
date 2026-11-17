
undefined8 * FUN_02e1d9ec(long param_1,int param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  
  if (*(int *)(param_1 + 0x228) == param_2) {
    bVar4 = *(byte *)(param_1 + 0x22c);
    bVar5 = *param_3;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 == bVar5) {
      puVar2 = (undefined8 *)
               FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                            *(undefined4 *)(param_1 + 0x210),PTR_DAT_04bb32e0);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7c40);
      }
      uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bb7c38);
      if ((uVar3 & 1) == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}

