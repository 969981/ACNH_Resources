
void FUN_01bdeff8(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint local_168 [70];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar2 = DAT_05ae7600;
  if (param_2 < 0x10 && (1 << (ulong)(param_2 & 0x1f) & 0xfbefU) != 0) {
    local_168[0] = param_2;
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x20);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar2 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
    }
    *(undefined1 *)(puVar5 + 3) = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar1 = PTR_DAT_04bb43e0;
    *(undefined8 **)(param_1 + 0x88) = puVar5;
    if (param_2 < 0x10) {
      puVar6 = *(undefined8 **)(puVar1 + (ulong)param_2 * 8 + 0x60);
    }
    else {
      puVar6 = &DAT_0407ebb1;
    }
    FUN_006e9528(local_168,"Message/Mail_%s.sarc.zs",puVar6);
    FUN_01ba6f64(puVar5,param_3,0x100000,local_168);
    lVar2 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x20);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar2 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
    }
    *(undefined1 *)(puVar5 + 3) = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined8 **)(param_1 + 0x90) = puVar5;
    if (param_2 < 0x10) {
      puVar6 = *(undefined8 **)(puVar1 + (ulong)param_2 * 8 + 0x60);
    }
    else {
      puVar6 = &DAT_0407ebb1;
    }
    FUN_006e9528(local_168,"Message/String_%s.sarc.zs",puVar6);
    FUN_01ba6f64(puVar5,param_3,0x200000,local_168);
    *(uint *)(param_1 + 0x98) = param_2;
  }
  return;
}

