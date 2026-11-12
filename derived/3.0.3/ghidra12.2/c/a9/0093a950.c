
float FUN_0093a950(long param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  uint local_58;
  uint local_54;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    local_54 = 7;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    local_54 = 7;
    if ((*puVar1 & 2) != 0) {
      local_54 = 5;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_54;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
    bVar3 = false;
    fVar9 = -500.0;
  }
  else {
    lVar6 = (long)*(int *)(param_1 + 0x5c);
    plVar5 = (long *)(*(long *)(param_1 + 0x50) - lVar6);
    plVar7 = (long *)((param_1 + 0x48) - lVar6);
    if (param_3 == (uint *)0x0) {
      fVar8 = -500.0;
      do {
        local_58 = local_58 & 0xffffff00;
        fVar9 = (float)(**(code **)(*plVar5 + 0x30))(plVar5,param_2,&local_54,0,&local_58);
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) + -lVar6);
        fVar8 = fVar9;
      } while (plVar5 != plVar7);
      bVar3 = false;
    }
    else {
      bVar3 = false;
      fVar9 = -500.0;
      do {
        local_58 = local_58 & 0xffffff00;
        fVar8 = (float)(**(code **)(*plVar5 + 0x30))(plVar5,param_2,&local_54,0,&local_58);
        if (fVar9 < fVar8) {
          bVar3 = (char)local_58 != '\0';
          *param_3 = local_54;
          fVar9 = fVar8;
        }
        plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) + -lVar6);
      } while (plVar5 != plVar7);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  if ((param_3 != (uint *)0x0) && (!bVar3)) {
    local_58 = FUN_0097a980(param_2);
    if (local_58 != 7) {
      *param_3 = local_58;
    }
    uVar4 = FUN_0097aa70(param_2);
    if (uVar4 != 7) {
      *param_3 = uVar4;
    }
  }
  return fVar9;
}

