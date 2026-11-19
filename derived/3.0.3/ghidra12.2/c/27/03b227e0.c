
void FUN_03b227e0(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  *(long *)(param_1 + 0x20) = param_3;
  *(uint *)(param_1 + 0x40) =
       *(uint *)(param_1 + 0x40) & 0xfffff7bf | *(uint *)(param_2 + 0x40) & 0x40;
  lVar7 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x20);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_03b2288c;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
LAB_03b2288c:
  FUN_03b1b070(pvVar5,*(undefined8 *)(param_2 + 0x48),param_3,param_4);
  *(void **)(param_1 + 0x48) = pvVar5;
  iVar2 = *(int *)((long)pvVar5 + 8);
  if (iVar2 != 0) {
    lVar7 = *(long *)((long)pvVar5 + 0x10);
    uVar8 = 0;
    do {
      lVar3 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) | 0x10;
      }
      uVar1 = uVar8 + 1;
      uVar8 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
    iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 8);
    if (iVar2 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      uVar8 = 0;
      do {
        lVar3 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
        if (lVar3 != 0) {
          *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) & 0xdf;
        }
        uVar1 = uVar8 + 1;
        uVar8 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x60);
    lVar7 = FUN_03b185ec(param_3,lVar7 + (ulong)*(uint *)(lVar7 + 0xc),1);
    *(long *)(param_1 + 0x50) = lVar7;
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x57) = *(byte *)(lVar7 + 0x57) & 0xdf;
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))
                      (*(long **)(param_3 + 0x18),*(long *)(param_2 + 0x58) + 0xb0,1);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))
                      (*(long **)(param_3 + 0x18),*(long *)(param_2 + 0x60) + 0xb0,1);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    plVar4 = (long *)(**(code **)(**(long **)(param_3 + 0x88) + 0x48))
                               (*(long **)(param_3 + 0x88),param_4);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1,*(undefined8 *)(param_3 + 0x88));
  }
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0) {
    lVar7 = *(long *)(param_3 + 0x30);
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18) + 0xb0;
  }
  *(long *)(param_1 + 0x18) = lVar7;
  return;
}

