
void FUN_02a5b080(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_7c;
  long *local_78;
  char local_70;
  char local_6f;
  int local_64;
  
  if (param_2 != 0) {
    nn::os::LockMutex((MutexType *)(param_2 + 0x2c0));
    puVar3 = PTR_DAT_04bb2e60;
    puVar2 = PTR_DAT_04bb2e58;
    if (*(long *)(param_2 + 0x290) != param_2 + 0x288) {
      lVar8 = (long)*(int *)(param_2 + 0x29c);
      lVar9 = *(long *)(param_2 + 0x290) - lVar8;
      puVar1 = PTR_DAT_04bb2000 + 0x10;
      do {
        local_64 = *(int *)(*(long *)(lVar9 + 0x48) + 0x230);
        if (local_64 != 0) {
          local_7c = *(undefined4 *)(param_1 + 0x230);
          FUN_0071c8d0(&local_78,&local_64,&local_7c,0);
          plVar4 = local_78;
          if (local_78 != (long *)0x0) {
            if ((*puVar3 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar3);
              if (iVar5 != 0) {
                *(undefined **)puVar2 = puVar1;
                __cxa_guard_release(puVar3);
              }
            }
            uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
            if ((uVar6 & 1) == 0) {
              local_6f = '\0';
            }
          }
          if (((local_78 != (long *)0x0) && (local_70 != '\0')) && (local_6f != '\0')) {
            lVar7 = local_78[0xc];
            if (lVar7 != 0) {
              *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) & 0xfffffffe | param_3 & 1;
            }
            if (local_78[0x11] != 0) {
              FUN_02a5b080(param_1,local_78[0x11],param_3 & 1);
            }
          }
        }
        lVar9 = *(long *)(lVar9 + lVar8 + 8) - lVar8;
      } while (lVar9 != (param_2 + 0x288) - lVar8);
    }
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x2c0));
  }
  return;
}

