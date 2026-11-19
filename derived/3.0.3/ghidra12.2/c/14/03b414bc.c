
void FUN_03b414bc(long param_1,undefined4 *param_2)

{
  size_t __size;
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_4f;
  undefined1 local_4b;
  
  if (DAT_05aebc00 != '\0') {
    return;
  }
  FUN_003cc7ec(local_c8);
  local_c8[0] = *param_2;
  local_a0 = param_2[6];
  local_98 = *(undefined8 *)(param_2 + 8);
  local_c0 = *(undefined8 *)(param_2 + 2);
  local_60 = param_2[0x16];
  uStack_5c = param_2[0x16];
  local_78 = param_2[0x17];
  local_70 = param_2[0x18];
  local_4b = 1;
  local_4f = 1;
  uStack_b8 = (ulong)(uint)param_2[0x19];
  __size = FUN_003cc870(local_c8);
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(__size);
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar1 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xa8);
      }
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_03b415ac;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x30))(plVar1,__size,0x1000);
  }
LAB_03b415ac:
  *(void **)(param_1 + 0xc28) = pvVar3;
  FUN_003cd298(local_c8,pvVar3,__size);
  return;
}

