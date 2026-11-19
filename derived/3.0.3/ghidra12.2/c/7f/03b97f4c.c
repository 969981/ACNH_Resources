
void FUN_03b97f4c(undefined8 *param_1,int param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  float fVar10;
  
  *param_1 = &PTR_FUN_04b793c8;
  *(int *)((long)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  fVar10 = SQRT((float)param_2);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  if (NAN(fVar10)) {
    fVar10 = sqrtf((float)param_2);
  }
  lVar6 = DAT_05ae7600;
  if (-2 < (int)fVar10) {
    uVar1 = (int)fVar10 + 2;
    sVar5 = (ulong)uVar1 << 2;
    if (DAT_05ae7600 == 0) {
      pvVar9 = malloc(sVar5);
    }
    else {
      plVar8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar6 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03b98014;
      }
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar5,0x20);
    }
    if (pvVar9 != (void *)0x0) {
      *(uint *)(param_1 + 2) = uVar1;
      param_1[3] = pvVar9;
    }
  }
LAB_03b98014:
  lVar6 = DAT_05ae7600;
  iVar4 = *(int *)((long)param_1 + 0xc);
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 1;
  }
  if (1 < iVar4) {
    sVar5 = (ulong)(uint)(iVar2 >> 1) << 2;
    if (DAT_05ae7600 == 0) {
      pvVar9 = malloc(sVar5);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar6 + 8);
        if (lVar7 != 0) {
          puVar3 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*puVar3;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar5,0x20);
    }
    if (pvVar9 != (void *)0x0) {
      *(int *)(param_1 + 4) = iVar2 >> 1;
      param_1[5] = pvVar9;
    }
  }
  return;
}

