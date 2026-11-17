
void FUN_03067cf4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (((*PTR_DAT_04bc7fd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7fd8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7fd0 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7fd8);
  }
  if ((param_2 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*param_2)(param_2,PTR_DAT_04bc7fd0), (uVar3 & 1) != 0)) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      puVar5 = malloc(0x48);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar5 = (undefined8 *)(lVar6 + 8);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar4 + 0xa8);
      }
      puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x48,8);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar1 = PTR_LAB_04bcb548;
    *(undefined2 *)(puVar5 + 8) = 1;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = param_2;
    puVar5[5] = puVar1;
    puVar1 = PTR_DAT_04bcb570 + 0x10;
    puVar5[2] = 0;
    puVar5[3] = puVar1;
    FUN_03d59778(param_2,0,1,puVar5);
    *(undefined8 **)(param_1 + 0x1c3f0) = puVar5;
    *(undefined4 *)((long)param_2 + 0x3ec) = 0x24;
  }
  return;
}

