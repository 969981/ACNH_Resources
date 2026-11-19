
undefined8 FUN_03ca6268(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR_DAT_04bd3ef0;
  local_40 = *(undefined8 *)(**(long **)(param_1 + 0x18) + 0x10);
  local_38 = 0;
  local_50 = PTR_DAT_04bd3ee0 + 0x10;
  local_48 = 0;
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar3 != 0))
  {
    FUN_03c7fd94(puVar2);
    puVar1 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar2 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar2 + 0x658) = puVar1;
    *(undefined **)(puVar2 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (local_38 != 0) {
    (**(code **)(local_38 + 8))(local_48);
  }
  lVar4 = FUN_03d17da4(param_2);
  (**(code **)(puVar2 + 8))(0);
  puVar5 = (undefined8 *)(**(long **)(param_1 + 0x18) + 0x30);
  local_48 = param_2;
  local_38 = lVar4;
  uVar6 = (**(code **)*puVar5)(puVar5,&local_50);
  if ((uVar6 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      if (**(long **)(param_1 + 8) == 0) {
        **(long **)(param_1 + 8) = param_2;
        goto LAB_03ca63b0;
      }
      lVar4 = *(long *)PTR_DAT_04bb2698;
      if (lVar4 == 0) {
        pvVar8 = malloc(0x18);
      }
      else {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar5 = (undefined8 *)(lVar4 + 8);
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)(lVar7 + 0xa8);
        }
        pvVar8 = (void *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x18,8);
      }
      *(void **)((long)pvVar8 + 8) = pvVar8;
      *(undefined8 *)((long)pvVar8 + 0x10) = 0;
      *(void **)pvVar8 = pvVar8;
      *plVar9 = (long)pvVar8;
      FUN_03d17c30(**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 8));
      lVar4 = **(long **)(param_1 + 0x10);
    }
    FUN_03d17c30(lVar4,param_2);
  }
LAB_03ca63b0:
  local_50 = PTR_DAT_04bc9c60 + 0x10;
  if (local_38 != 0) {
    (**(code **)(local_38 + 8))(local_48);
  }
  return 0;
}

