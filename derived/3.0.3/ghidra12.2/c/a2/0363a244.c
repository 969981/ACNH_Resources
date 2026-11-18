
void FUN_0363a244(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0xc) != 0) {
      FUN_03603800(*(undefined8 *)(lVar3 + 0x10));
      *(undefined4 *)(lVar3 + 0xc) = 0;
      lVar3 = *(long *)(param_1 + 0xb0);
    }
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  FUN_0367fbc4(param_1 + 0xc0);
  __ptr = *(void **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      bVar1 = *(byte *)(param_1 + 0x1c0);
      goto joined_r0x0363a2c4;
    }
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x1c0);
joined_r0x0363a2c4:
  if ((bVar1 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x1c8) + 0x18))
              (*(long **)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d0));
  }
  if (*(char *)(param_1 + 0xf8) != '\0') {
    nn::mem::StandardAllocator::Finalize();
  }
  plVar2 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 0xb6) = 1;
    *(undefined4 *)(plVar2 + 0x8a) = 1;
    FUN_04002c24(plVar2 + 0x3d);
    nn::audio::StopAudioOut((AudioOut *)(plVar2 + 1));
    nn::audio::CloseAudioOut((AudioOut *)(plVar2 + 1));
    if (plVar2[0x95] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
    }
    if (plVar2[0x96] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 0x6a) = (int)plVar2[0x6a] + 1;
    if ((int)plVar2[199] != 0) {
      FUN_03fffbc0(plVar2 + 0x50);
    }
    plVar2[0x69] = 0;
    plVar2[0x59] = 0;
    plVar2[0x5a] = 0;
    plVar2[0x61] = 0;
    plVar2[0x62] = 0;
    plVar2[0x51] = 0;
    plVar2[0x52] = 0;
    if (plVar2[100] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
      plVar2[100] = 0;
    }
    if (plVar2[3] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[3] = 0;
    }
    *(undefined1 *)(plVar2 + 0x10) = 0;
    (**(code **)(*plVar2 + 0x68))(plVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_036031f0(puVar4);
    nn::os::FinalizeMutex((MutexType *)(puVar4 + 0x18b));
    nn::os::FinalizeLightEvent((LightEventType *)(puVar4 + 0x187));
    puVar4[0x13a] = PTR_DAT_04bdf380 + 0x10;
    FUN_04002c24(puVar4 + 0x13a);
    *puVar4 = &PTR_LAB_04bb1578;
    if ((*(byte *)(puVar4 + 7) & 1) != 0) {
      (**(code **)(*(long *)puVar4[8] + 0x18))((long *)puVar4[8],puVar4[9]);
    }
    if (DAT_05ae7600 == 0) {
      free(puVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,puVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar2 = DAT_05b059a0;
  if (plVar5 != (long *)0x0) {
    puVar4 = (undefined8 *)plVar5[5];
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar4);
    }
    plVar5[4] = 0;
    plVar5[5] = 0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_0367c540(param_1);
  return;
}

