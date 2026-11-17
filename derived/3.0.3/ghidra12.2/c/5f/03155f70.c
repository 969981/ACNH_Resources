
void FUN_03155f70(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x14,PTR_DAT_04bb32e0);
  if (((*PTR_DAT_04bc7718 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7718), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7710 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7718);
  }
  if ((((puVar3 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc7710), (uVar4 & 1) != 0)) &&
      (puVar3[0x45] != 0)) && (lVar5 = *(long *)(puVar3[0x45] + 0x220), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0x2c0);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    *(int *)(lVar5 + 0x2c0) = iVar2 + 1;
    pcStack_28 = "MainmenuCamera1stPersonView";
    iVar1 = FUN_0274bce0(lVar5 + 0x1f8,&local_30);
    iVar2 = 8;
    if (iVar1 != 0) {
      iVar2 = 0xc;
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(lVar5 + 0x2c0) / iVar2;
    }
    *(int *)(lVar5 + 0x2c0) = *(int *)(lVar5 + 0x2c0) - iVar1 * iVar2;
    FUN_03148410(lVar5);
  }
  return;
}

