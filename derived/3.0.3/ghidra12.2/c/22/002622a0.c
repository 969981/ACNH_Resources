
void FUN_002622a0(undefined8 param_1,long param_2,long *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_34;
  
  if (param_3 == (long *)0x0) {
    local_34 = 0;
    local_50 = CONCAT44(local_50._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
    FUN_002296c4(param_1,&local_50);
    return;
  }
  local_48 = 0;
  local_50 = 0x200000000000;
  (**(code **)(*param_3 + 0x28))(param_3,&local_50);
  nn::os::LockMutex((MutexType *)(param_2 + 0x8d78));
  lVar2 = *(long *)(param_2 + 0x438);
  lVar1 = param_2 + 0x430;
  if (lVar2 != lVar1) {
    lVar3 = lVar2;
    do {
      if (*(long **)(lVar3 + 0x440) == param_3) goto LAB_002623a4;
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar1);
    for (; lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
      if (*(long *)(lVar2 + 0x440) == 0) {
        lVar3 = lVar2;
LAB_002623a4:
        *(long **)(lVar3 + 0x440) = param_3;
        memcpy((void *)(lVar3 + 0x10),param_4,0x20);
        (**(code **)(*(long *)(lVar3 + 0x2f0) + 0x10))
                  (&local_50,lVar3 + 0x2f0,(long)param_4 + 0x2e0);
        (**(code **)(*(long *)(lVar3 + 0x130) + 0x10))
                  (&local_50,lVar3 + 0x130,(long)param_4 + 0x120);
        *(undefined1 *)(lVar3 + 0x410) = *(undefined1 *)((long)param_4 + 0x400);
        memcpy((void *)(lVar3 + 0x30),(void *)((long)param_4 + 0x20),0x40);
        *(undefined8 *)(lVar3 + 0x420) = *(undefined8 *)((long)param_4 + 0x410);
        (**(code **)(*(long *)(lVar3 + 0x338) + 0x10))
                  (&local_50,lVar3 + 0x338,(long)param_4 + 0x328);
        (**(code **)(*(long *)(lVar3 + 0x1a0) + 0x10))(&local_50,lVar3 + 0x1a0,(long)param_4 + 400);
        *(undefined1 *)(lVar3 + 0x411) = *(undefined1 *)((long)param_4 + 0x401);
        memcpy((void *)(lVar3 + 0x70),(void *)((long)param_4 + 0x60),0x40);
        *(undefined8 *)(lVar3 + 0x428) = *(undefined8 *)((long)param_4 + 0x418);
        (**(code **)(*(long *)(lVar3 + 0x380) + 0x10))
                  (&local_50,lVar3 + 0x380,(long)param_4 + 0x370);
        (**(code **)(*(long *)(lVar3 + 0x210) + 0x10))
                  (&local_50,lVar3 + 0x210,(long)param_4 + 0x200);
        *(undefined1 *)(lVar3 + 0x412) = *(undefined1 *)((long)param_4 + 0x402);
        memcpy((void *)(lVar3 + 0xb0),(void *)((long)param_4 + 0xa0),0x40);
        *(undefined8 *)(lVar3 + 0x430) = *(undefined8 *)((long)param_4 + 0x420);
        (**(code **)(*(long *)(lVar3 + 0x3c8) + 0x10))
                  (&local_50,lVar3 + 0x3c8,(long)param_4 + 0x3b8);
        (**(code **)(*(long *)(lVar3 + 0x280) + 0x10))
                  (&local_50,lVar3 + 0x280,(long)param_4 + 0x270);
        *(undefined1 *)(lVar3 + 0x413) = *(undefined1 *)((long)param_4 + 0x403);
        memcpy((void *)(lVar3 + 0xf0),(void *)((long)param_4 + 0xe0),0x40);
        local_50 = local_50 & 0xffffffff00000000;
        *(undefined8 *)(lVar3 + 0x438) = *(undefined8 *)((long)param_4 + 0x428);
        *(undefined1 *)(lVar3 + 0x414) = *(undefined1 *)((long)param_4 + 0x404);
        *(undefined2 *)(lVar3 + 0x415) = *(undefined2 *)((long)param_4 + 0x405);
        *(undefined4 *)(lVar3 + 0x418) = *(undefined4 *)((long)param_4 + 0x408);
        goto LAB_00262524;
      }
    }
  }
  local_50 = CONCAT44(local_50._4_4_,0x10c08);
LAB_00262524:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x8d78));
  return;
}

