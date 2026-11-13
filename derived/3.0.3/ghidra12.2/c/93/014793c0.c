
void FUN_014793c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_54;
  long *local_50;
  char local_47;
  
  puVar3 = PTR_DAT_04bb5928;
  puVar2 = PTR_DAT_04bb5920;
  if ((*(int *)(param_1 + 0x300) != 0) &&
     (lVar8 = *(long *)(param_1 + 0x2f8), lVar8 != param_1 + 0x2f0)) {
    lVar7 = lVar8 + -8;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    do {
      local_54 = *(undefined4 *)(param_1 + 0x230);
      lVar8 = *(long *)(lVar8 + 8);
      FUN_0071c8d0(&local_50,lVar7,&local_54,0);
      plVar4 = local_50;
      if (local_50 != (long *)0x0) {
        if ((*puVar3 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar3);
          if (iVar5 != 0) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
        }
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
        if ((uVar6 & 1) == 0) {
          local_47 = '\0';
        }
      }
      if ((local_47 != '\0') && (local_50 != (long *)0x0)) {
        FUN_014793c0();
      }
      lVar7 = lVar8 + -8;
    } while (lVar7 != param_1 + 0x2e8);
  }
  FUN_006fb3d0(param_1);
  return;
}

