
void FUN_03c4cb10(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(long **)PTR_DAT_04bb26a0 == (long *)0x0) {
    uVar8 = 0x400;
  }
  else {
    uVar2 = (**(code **)(**(long **)PTR_DAT_04bb26a0 + 0x30))();
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto LAB_03c4cc54;
  }
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(uVar8 * 0xa8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar1 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_03c4cc54;
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar8 * 0xa8,8);
  }
  if (pvVar5 != (void *)0x0) {
    uVar7 = (uint)uVar8;
    uVar2 = uVar7 - 1;
    *(void **)(param_1 + 0x1f8) = pvVar5;
    if (1 < uVar7) {
      if (uVar2 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        plVar4 = (long *)((long)pvVar5 + 0xa0);
        do {
          uVar6 = uVar6 + 2;
          plVar4[-0x14] = (long)plVar4;
          *plVar4 = (long)(plVar4 + 0x14);
          plVar4 = plVar4 + 0x28;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
      }
      if ((uVar2 & 1) != 0) {
        plVar4 = (long *)((long)pvVar5 + uVar6 * 0xa0);
        *plVar4 = (long)(plVar4 + 0x14);
      }
    }
    *(undefined8 *)((long)pvVar5 + (long)(int)(uVar2 * 0x14) * 8) = 0;
    *(void **)(param_1 + 0x200) = pvVar5;
    if ((0 < (int)uVar7) && (pvVar5 = (void *)((long)pvVar5 + uVar8 * 0xa0), pvVar5 != (void *)0x0))
    {
      *(void **)(param_1 + 0x1f0) = pvVar5;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      *(uint *)(param_1 + 0x1ec) = uVar7;
    }
  }
LAB_03c4cc54:
  *(undefined1 *)(param_1 + 0x208) = 1;
  return;
}

