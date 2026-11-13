
void FUN_010f9530(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar7 = malloc((long)(int)uVar2 * 0x68);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_010f9640;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)(int)uVar2 * 0x68,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x100) = pvVar7;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar6 = (long *)((long)pvVar7 + 0x68);
          do {
            uVar8 = uVar8 + 2;
            plVar6[-0xd] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0xd);
            plVar6 = plVar6 + 0x1a;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar7 + uVar8 * 0x68);
          *plVar6 = (long)(plVar6 + 0xd);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar3 * 0xd) * 8) = 0;
      *(void **)(param_1 + 0x108) = pvVar7;
      *(uint *)(param_1 + 0x110) = uVar2;
    }
  }
LAB_010f9640:
  uVar2 = *(uint *)(param_1 + 0x34);
  uVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      pvVar7 = malloc((long)(int)uVar2 * 0x30);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar9 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar7 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(int)uVar2 * 0x30,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x130) = pvVar7;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar6 = (long *)((long)pvVar7 + 0x30);
          do {
            uVar8 = uVar8 + 2;
            plVar6[-6] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 6);
            plVar6 = plVar6 + 0xc;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar7 + uVar8 * 0x30);
          *plVar6 = (long)(plVar6 + 6);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar3 * 6) * 8) = 0;
      *(void **)(param_1 + 0x138) = pvVar7;
      *(uint *)(param_1 + 0x140) = uVar2;
    }
  }
  return;
}

