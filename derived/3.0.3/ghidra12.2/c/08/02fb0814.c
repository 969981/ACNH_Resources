
void FUN_02fb0814(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  void *__ptr;
  
  pbVar2 = (byte *)param_1[0x4f];
  if (pbVar2 != (byte *)0x0) {
    *pbVar2 = *pbVar2 & 0xfd;
    FUN_03f45838(pbVar2 + 0x10);
    if (*(long *)(pbVar2 + 8) != 0) {
      *pbVar2 = *pbVar2 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(pbVar2 + 8),0);
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
    __ptr = (void *)param_1[0x4f];
    if (__ptr != (void *)0x0) {
      FUN_03838610(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        plVar1 = (long *)param_1[0x42];
        goto joined_r0x02fb08b4;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  plVar1 = (long *)param_1[0x42];
joined_r0x02fb08b4:
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 8))();
  }
  if ((long *)param_1[0x44] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x44] + 8))();
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

