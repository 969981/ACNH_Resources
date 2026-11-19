
void FUN_03bf8b70(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))();
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Friends_Work";
  uVar2 = FUN_038c6d48(uVar1,&local_40,0,8,1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  nn::friends::Initialize();
  nn::friends::SetAllocator
            ((_func_void_ptr_ulong *)&LAB_03bf8cf0,(_func_void_void_ptr_ulong *)&LAB_03bf8d10);
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x3840);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_03bf8ca8;
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x3840,8);
  }
  if (pvVar5 != (void *)0x0) {
    lVar6 = -0x3840;
    do {
      lVar3 = lVar6 + 0x60;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3850) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3848) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3840) = 0;
      *(undefined4 *)((long)pvVar5 + lVar6 + 0x3858) = 2;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3860) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3868) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3870) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3878) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3880) = 0;
      *(undefined4 *)((long)pvVar5 + lVar6 + 0x3888) = 2;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3890) = 0;
      *(undefined8 *)((long)pvVar5 + lVar6 + 0x3898) = 0;
      lVar6 = lVar3;
    } while (lVar3 != 0);
    *(void **)(param_1 + 0x258a0) = pvVar5;
    *(undefined4 *)(param_1 + 0x258a8) = 300;
  }
LAB_03bf8ca8:
  *(undefined8 *)(param_1 + 0x258ac) = 0;
  uVar2 = *(undefined8 *)(DAT_05aed930 + 0xf8);
  *(undefined8 *)(param_1 + 0x26398) = *(undefined8 *)(DAT_05aed930 + 0x100);
  *(undefined8 *)(param_1 + 0x26390) = uVar2;
  *(undefined8 *)(param_1 + 0x26380) = 0;
  *(undefined8 *)(param_1 + 0x26388) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}

