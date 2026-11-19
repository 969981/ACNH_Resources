
void FUN_03babd50(long param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = DAT_05ae7600;
  iVar2 = *param_2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc((ulong)(uint)(iVar2 << 3));
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_03babde4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)(uint)(iVar2 << 3),8);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0x10) = pvVar5;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0xc) = iVar2;
  }
LAB_03babde4:
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) == 0)) &&
     (iVar2 = *param_2, iVar2 != 0)) {
    lVar7 = *(long *)(param_2 + 2);
    uVar8 = 0;
    do {
      uVar6 = FUN_03bab514(*(undefined4 *)
                            (lVar7 + (-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2)),param_3);
      if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = uVar6;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      uVar1 = uVar8 + 1;
      uVar8 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  return;
}

