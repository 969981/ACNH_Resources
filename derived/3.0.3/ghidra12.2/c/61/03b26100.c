
void FUN_03b26100(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[0xc] = 0;
  plVar9 = param_1 + 9;
  *plVar9 = 0;
  param_1[8] = 0x2201f;
  param_1[4] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_04b74170;
  param_1[1] = param_1 + 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_2 + 0x40) & 0x40 | 0x2201f;
  uVar3 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))
                    (*(long **)(param_3 + 0x18),*(long *)(param_2 + 0x58) + 0xb0,1);
  param_1[0xb] = uVar3;
  lVar7 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x20);
  }
  else {
    plVar5 = param_4;
    if (param_4 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03b26200;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
LAB_03b26200:
  FUN_03b1b070(pvVar6,*(undefined8 *)(param_2 + 0x48),param_3,param_4);
  *plVar9 = (long)pvVar6;
  iVar2 = *(int *)((long)pvVar6 + 8);
  if (iVar2 != 0) {
    lVar7 = *(long *)((long)pvVar6 + 0x10);
    uVar8 = 0;
    do {
      lVar4 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x57) = *(byte *)(lVar4 + 0x57) | 0x10;
      }
      uVar1 = uVar8 + 1;
      uVar8 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
    iVar2 = *(int *)(*plVar9 + 8);
    if (iVar2 != 0) {
      lVar7 = *(long *)(*plVar9 + 0x10);
      uVar8 = 0;
      do {
        lVar4 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x57) = *(byte *)(lVar4 + 0x57) & 0xdf;
        }
        uVar1 = uVar8 + 1;
        uVar8 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
    }
  }
  param_1[3] = param_1[0xb] + 0xb0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
  return;
}

