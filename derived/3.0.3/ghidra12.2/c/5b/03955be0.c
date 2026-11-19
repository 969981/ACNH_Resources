
uint FUN_03955be0(long *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void *__ptr;
  long local_8e8;
  long local_8e0;
  undefined1 auStack_8d8 [8];
  undefined8 local_8d0;
  undefined1 auStack_4c0 [1048];
  undefined *local_a8;
  long lStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  local_60 = 0x20;
  lStack_a0 = param_1[10];
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_70 = *(undefined8 *)(param_2 + 8);
  local_5c = 0;
  local_58 = 0;
  puStack_90 = PTR_DAT_04c4b988;
  local_68 = param_1 + 0x16;
  lVar6 = *(long *)PTR_DAT_04bd0fe0;
  local_98 = local_a8;
  local_88 = local_a8;
  lStack_80 = lStack_a0;
  local_78 = local_a8;
  uVar2 = FUN_039852d0(lVar6,&local_a8);
  plVar4 = local_68;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*local_68 + 0x18))(local_68);
    FUN_006e9454(auStack_4c0,
                 "File = %s, Arg = %s %%AGL_ROOT%%/tools/temporary/param_temp, WaitEnd = True, WindowStyle = Hidden"
                 ,"%AGL_ROOT%/tools/bin/Win32/aglParameterBinaryConverter.exe",plVar4[1]);
    nn::os::LockMutex((MutexType *)(lVar6 + 0x40));
    if (*(uint *)(lVar6 + 0x10) <= uVar2) {
      uVar2 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x18) + (ulong)uVar2 * 0x20);
    __ptr = (void *)*puVar1;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x40));
    (**(code **)(param_1[9] + 0x18))(param_1 + 9);
    FUN_006e9454(auStack_8d8,"%%AGL_ROOT%%\\tools\\temporary\\param_temp.b%s",param_1[10]);
    local_70 = local_8d0;
    local_68 = (long *)0x0;
    uVar3 = FUN_039852d0(lVar6,&local_a8);
    uVar2 = ~uVar3 >> 0x1f;
    if (-1 < (int)uVar3) {
      if (*(uint *)(lVar6 + 0x10) <= uVar3) {
        uVar3 = 0;
      }
      FUN_03964240(&local_8e0,*(undefined8 *)(*(long *)(lVar6 + 0x18) + (ulong)uVar3 * 0x20));
      if ((param_3 & 1) != 0) {
        local_8e8 = local_8e0 + (ulong)*(uint *)(local_8e0 + 0x14) + 0x30;
        FUN_03963e90(&local_8e8,0,0);
      }
      (**(code **)(*param_1 + 0x50))(param_1,local_8e0);
      if ((((*(byte *)((long)param_1 + 0x1cc) >> 1 & 1) != 0) &&
          (plVar4 = *(long **)(lVar6 + 8), (char)plVar4[0xf] != '\0')) &&
         (uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), (uVar5 & 1) != 0)) {
        (**(code **)(*plVar4 + 0x80))(plVar4,auStack_8d8);
      }
    }
  }
  return uVar2;
}

