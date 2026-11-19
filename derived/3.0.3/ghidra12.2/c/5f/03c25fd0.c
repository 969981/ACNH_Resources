
void FUN_03c25fd0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  size_t __size;
  long lVar8;
  
  FUN_03c11314(param_1,param_2,"LuaMgr");
  plVar5 = DAT_05aecbf0;
  *param_1 = &PTR_FUN_04b7e508;
  param_1[0x45] = &PTR_LAB_04b7e5e0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  lVar3 = (**(code **)(*plVar5 + 0x30))();
  if (lVar3 == 0) {
    lVar8 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar3;
  }
  uVar2 = (**(code **)(*DAT_05aecbf0 + 0x28))();
  lVar3 = DAT_05ae7600;
  uVar1 = uVar2 - 1;
  if (0 < (int)uVar2) {
    __size = ((ulong)uVar2 + (ulong)uVar2 * 8) * 0x20;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_03c26170;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      param_1[0x49] = pvVar6;
      if (1 < uVar2) {
        if (uVar1 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          plVar5 = (long *)((long)pvVar6 + 0x118);
          do {
            uVar7 = uVar7 + 2;
            plVar5[-0x23] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 0x23);
            plVar5 = plVar5 + 0x46;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
        }
        if ((uVar1 & 1) != 0) {
          plVar5 = (long *)((long)pvVar6 + uVar7 * 0x118);
          *plVar5 = (long)(plVar5 + 0x23);
        }
      }
      *(undefined8 *)((long)pvVar6 + (long)(int)(uVar1 * 0x23) * 8) = 0;
      param_1[0x4a] = pvVar6;
      pvVar6 = (void *)((long)pvVar6 + (ulong)uVar2 * 0x118);
      if (pvVar6 != (void *)0x0) {
        param_1[0x48] = pvVar6;
        *(undefined4 *)(param_1 + 0x47) = 0;
        *(uint *)((long)param_1 + 0x23c) = uVar2;
      }
    }
  }
LAB_03c26170:
  if (lVar8 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar8;
  }
  return;
}

