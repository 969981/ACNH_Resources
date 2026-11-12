
float FUN_0093ae60(long param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    local_58 = 7;
  }
  else {
    local_54 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    local_58 = 7;
    if ((*puVar1 & 2) != 0) {
      local_58 = 5;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_58;
  }
  local_5c[0] = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
    fVar8 = -500.0;
  }
  else {
    lVar5 = (long)*(int *)(param_1 + 0x5c);
    plVar6 = (long *)((param_1 + 0x48) - lVar5);
    plVar4 = (long *)(*(long *)(param_1 + 0x50) - lVar5);
    fVar8 = -500.0;
    if (param_3 == (int *)0x0) {
      do {
        fVar7 = (float)(**(code **)(*plVar4 + 0x30))(plVar4,param_2,&local_58,0,local_5c);
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar7;
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) + -lVar5);
      } while (plVar4 != plVar6);
    }
    else {
      do {
        fVar7 = (float)(**(code **)(*plVar4 + 0x30))(plVar4,param_2,&local_58,0,local_5c);
        if (fVar8 < fVar7) {
          *param_3 = local_58;
          fVar8 = fVar7;
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) + -lVar5);
      } while (plVar4 != plVar6);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  if ((param_3 != (int *)0x0) && (iVar3 = FUN_0097a980(param_2), iVar3 != 7)) {
    *param_3 = iVar3;
  }
  return fVar8;
}

