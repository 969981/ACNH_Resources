
void FUN_03f32d90(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x518));
  puVar2 = PTR_DAT_04bb3350;
  if (*(long *)(param_1 + 0x540) != param_1 + 0x538) {
    lVar6 = (long)*(int *)(param_1 + 0x54c);
    lVar8 = *(long *)(param_1 + 0x540) - lVar6;
    lVar7 = lVar8 + lVar6;
    do {
      lVar9 = *(long *)(lVar8 + 0x220);
      uVar5 = *(uint *)(lVar8 + 0x238);
      lVar7 = *(long *)(lVar7 + 8);
      local_68 = lVar8;
      if (lVar9 == 0 || uVar5 != 5) {
        bVar3 = false;
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        uVar5 = *(uint *)(lVar8 + 0x238);
        bVar3 = lVar9 == lVar4;
      }
      if (uVar5 < 7 && (1 << (ulong)(uVar5 & 0x1f) & 0x43U) != 0 || bVar3) {
        plVar1 = (long *)(*(int *)(param_1 + 0x54c) + local_68);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + -1;
        FUN_03f35374(param_1,&local_68,0);
      }
      lVar8 = lVar7 - lVar6;
    } while (lVar8 != (param_1 + 0x538) - lVar6);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x518));
  return;
}

