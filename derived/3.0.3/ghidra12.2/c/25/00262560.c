
void FUN_00262560(undefined8 param_1,long param_2,long param_3,void *param_4)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if ((param_3 == 0) || (param_4 == (void *)0x0)) {
    local_44 = 0x10c07;
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x8d78);
    nn::os::LockMutex(pMVar1);
    for (lVar2 = *(long *)(param_2 + 0x438); lVar2 != param_2 + 0x430; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x440) == param_3) {
        nn::os::UnlockMutex(pMVar1);
        memcpy(param_4,(void *)(lVar2 + 0x10),0x20);
        (**(code **)(*(long *)((long)param_4 + 0x2e0) + 0x10))
                  (&local_44,(long)param_4 + 0x2e0,lVar2 + 0x2f0);
        (**(code **)(*(long *)((long)param_4 + 0x120) + 0x10))
                  (&local_44,(long)param_4 + 0x120,lVar2 + 0x130);
        *(undefined1 *)((long)param_4 + 0x400) = *(undefined1 *)(lVar2 + 0x410);
        memcpy((void *)((long)param_4 + 0x20),(void *)(lVar2 + 0x30),0x40);
        *(undefined8 *)((long)param_4 + 0x410) = *(undefined8 *)(lVar2 + 0x420);
        (**(code **)(*(long *)((long)param_4 + 0x328) + 0x10))
                  (&local_44,(long)param_4 + 0x328,lVar2 + 0x338);
        (**(code **)(*(long *)((long)param_4 + 400) + 0x10))
                  (&local_44,(long)param_4 + 400,lVar2 + 0x1a0);
        *(undefined1 *)((long)param_4 + 0x401) = *(undefined1 *)(lVar2 + 0x411);
        memcpy((void *)((long)param_4 + 0x60),(void *)(lVar2 + 0x70),0x40);
        *(undefined8 *)((long)param_4 + 0x418) = *(undefined8 *)(lVar2 + 0x428);
        (**(code **)(*(long *)((long)param_4 + 0x370) + 0x10))
                  (&local_44,(long)param_4 + 0x370,lVar2 + 0x380);
        (**(code **)(*(long *)((long)param_4 + 0x200) + 0x10))
                  (&local_44,(long)param_4 + 0x200,lVar2 + 0x210);
        *(undefined1 *)((long)param_4 + 0x402) = *(undefined1 *)(lVar2 + 0x412);
        memcpy((void *)((long)param_4 + 0xa0),(void *)(lVar2 + 0xb0),0x40);
        *(undefined8 *)((long)param_4 + 0x420) = *(undefined8 *)(lVar2 + 0x430);
        (**(code **)(*(long *)((long)param_4 + 0x3b8) + 0x10))
                  (&local_44,(long)param_4 + 0x3b8,lVar2 + 0x3c8);
        (**(code **)(*(long *)((long)param_4 + 0x270) + 0x10))
                  (&local_44,(long)param_4 + 0x270,lVar2 + 0x280);
        *(undefined1 *)((long)param_4 + 0x403) = *(undefined1 *)(lVar2 + 0x413);
        memcpy((void *)((long)param_4 + 0xe0),(void *)(lVar2 + 0xf0),0x40);
        local_44 = 0;
        *(undefined8 *)((long)param_4 + 0x428) = *(undefined8 *)(lVar2 + 0x438);
        *(undefined1 *)((long)param_4 + 0x404) = *(undefined1 *)(lVar2 + 0x414);
        *(undefined2 *)((long)param_4 + 0x405) = *(undefined2 *)(lVar2 + 0x415);
        *(undefined4 *)((long)param_4 + 0x408) = *(undefined4 *)(lVar2 + 0x418);
        goto LAB_002625ec;
      }
    }
    nn::os::UnlockMutex(pMVar1);
    local_44 = 0x2c09;
  }
LAB_002625ec:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

