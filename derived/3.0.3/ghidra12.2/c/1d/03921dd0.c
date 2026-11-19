
void FUN_03921dd0(long param_1,long param_2,long *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar6 = PTR_DAT_04bb2698;
  uVar12 = *(uint *)(param_2 + 0x208);
  if (0 < (int)uVar12) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      pvVar9 = malloc((ulong)uVar12 << 3);
    }
    else {
      plVar8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar14 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03921e68;
      }
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar12 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      *(uint *)(param_1 + 0x28) = uVar12;
      *(void **)(param_1 + 0x30) = pvVar9;
    }
  }
LAB_03921e68:
  uVar12 = DAT_05ae7c2c;
  uVar13 = (ulong)DAT_05ae7c2c;
  if ((int)DAT_05ae7c2c < 1) {
LAB_03921efc:
    uVar12 = *(uint *)(param_1 + 0x18);
    if (uVar12 == 0) goto LAB_03921f50;
    pvVar9 = *(void **)(param_1 + 0x20);
  }
  else {
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
      pvVar9 = malloc(uVar13 << 2);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar14 + 8);
        if (lVar7 != 0) {
          puVar2 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) goto LAB_03921efc;
      }
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar13 << 2,8);
    }
    if (pvVar9 == (void *)0x0) goto LAB_03921efc;
    *(uint *)(param_1 + 0x18) = uVar12;
    *(void **)(param_1 + 0x20) = pvVar9;
  }
  uVar13 = 0;
  sVar10 = 0;
  uVar11 = 0;
  do {
    psVar1 = (short *)((long)pvVar9 + ((long)(uVar11 << 0x20) >> 0x1e));
    uVar3 = uVar11;
    if (0x7f < (uint)uVar13) {
      uVar3 = 0;
    }
    *psVar1 = sVar10;
    sVar5 = (short)*(undefined4 *)(param_2 + 8 + uVar3 * 4);
    psVar1[1] = sVar5;
    sVar10 = sVar10 + sVar5;
    uVar13 = uVar11 + 1;
    uVar11 = uVar13 & 0xffffffff;
  } while (uVar12 != (uint)uVar13);
LAB_03921f50:
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 0) {
    lVar14 = *(long *)(param_1 + 0x30);
    uVar13 = 0;
    do {
      *(undefined8 *)(lVar14 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) = 0;
      uVar11 = uVar13 + 1;
      uVar13 = uVar11 & 0xffffffff;
    } while (iVar4 != (int)uVar11);
  }
  return;
}

