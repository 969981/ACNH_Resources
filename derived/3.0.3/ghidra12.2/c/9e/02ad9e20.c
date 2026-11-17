
void FUN_02ad9e20(long param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 local_34 [4];
  
  lVar3 = DAT_05ae7600;
  uVar1 = param_4 * param_3;
  local_34[0] = 0;
  uVar2 = uVar1 - 1;
  if (0 < (int)uVar1) {
    if (DAT_05ae7600 == 0) {
      pvVar5 = malloc((ulong)uVar1 * 0x38);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar3 + 8);
        if (lVar4 != 0) {
          param_2 = (long *)(lVar4 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_02ad9f40;
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)uVar1 * 0x38,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x98) = pvVar5;
      if (1 < uVar1) {
        if (uVar2 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          plVar7 = (long *)((long)pvVar5 + 0x30);
          do {
            uVar6 = uVar6 + 2;
            plVar7[-6] = (long)plVar7;
            *plVar7 = (long)(plVar7 + 6);
            plVar7 = plVar7 + 0xc;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
        }
        if ((uVar2 & 1) != 0) {
          plVar7 = (long *)((long)pvVar5 + uVar6 * 0x30);
          *plVar7 = (long)(plVar7 + 6);
        }
      }
      *(undefined8 *)((long)pvVar5 + (long)(int)(uVar2 * 6) * 8) = 0;
      *(void **)(param_1 + 0xa0) = pvVar5;
      pvVar5 = (void *)((long)pvVar5 + (ulong)uVar1 * 0x30);
      if (pvVar5 != (void *)0x0) {
        *(void **)(param_1 + 0x90) = pvVar5;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(uint *)(param_1 + 0x8c) = uVar1;
      }
    }
  }
LAB_02ad9f40:
  (**(code **)(*(long *)(param_1 + 0x50) + 0x170))((long *)(param_1 + 0x50),local_34);
  *(int *)(param_1 + 0x30) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  return;
}

