
void FUN_03143874(void)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb7ff8;
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x588) == 3)) &&
     (puVar3 = (undefined8 *)
               FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0xb,PTR_DAT_04bb32e0),
     puVar3 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_04bc84e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc84e8);
    }
    uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc84e0);
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)(lVar5 + 0x5d8);
      *(byte *)(lVar5 + 0x5d8) = bVar1 ^ 1;
      FUN_03148988(puVar3,1,bVar1 == 0);
      return;
    }
  }
  return;
}

