
void FUN_03908644(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_448 [1048];
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[10] = 0;
  *param_1 = (long)&PTR_FUN_04b65e80;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar3 = *(long *)PTR_DAT_04bd1158;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((lVar3 != 0) && (*(long *)(DAT_05ae92f0 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar3 + 8) + 0x18))((long *)(lVar3 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon = LAYOUT, Security = agl_shader",
                 *(undefined8 *)(lVar3 + 0x10));
  }
  return;
}

