
void FUN_03b55d70(long param_1,long *param_2,uint param_3)

{
  size_t sVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') goto LAB_03b55fb4;
  *(uint *)(param_1 + 0x28) = param_3;
  puVar3 = PTR_DAT_04bb2698;
  sVar1 = (ulong)param_3 << 1;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if ((int)param_3 < 0) {
    sVar1 = 0xffffffffffffffff;
  }
  if (lVar11 == 0) {
    pvVar6 = malloc(sVar1);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar6 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_03b55e1c;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar1,8);
  }
LAB_03b55e1c:
  *(void **)(param_1 + 0x30) = pvVar6;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar11 = 0;
    do {
      lVar4 = lVar11 + 1;
      *(short *)(*(long *)(param_1 + 0x30) + lVar11 * 2) = (short)lVar4;
      lVar11 = lVar4;
    } while (lVar4 < *(int *)(param_1 + 0x28));
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  uVar12 = (ulong)(int)param_3;
  *(undefined2 *)((long)pvVar6 + (long)(int)param_3 * 2 + -2) = 0xffff;
  *(uint *)(param_1 + 0x18) = param_3;
  uVar9 = (-(ulong)(param_3 >> 0x1f) & 0xffffffc000000000 | (ulong)param_3 << 6) +
          (long)(int)param_3 * -8;
  *(uint *)(param_1 + 0x1c) = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12;
  lVar11 = *(long *)puVar3;
  sVar1 = uVar9 + 8;
  if (0xfffffffffffffff7 < uVar9 || SUB168(auVar2 * ZEXT816(0x38),8) != 0) {
    sVar1 = 0xffffffffffffffff;
  }
  if (lVar11 == 0) {
    puVar7 = malloc(sVar1);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        param_2 = (long *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar7 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar1,0x20);
  }
  puVar8 = puVar7 + 1;
  *puVar7 = uVar12;
  if (param_3 != 0) {
    uVar9 = uVar12 * 0x38 - 0x38;
    puVar10 = puVar8;
    if ((uVar9 / 0x38 & 1) == 0) {
      puVar7[6] = 0;
      puVar7[2] = (ulong)&PTR_LAB_04b76a78;
      puVar7[3] = 0;
      puVar10 = puVar7 + 8;
      *(undefined2 *)(puVar7 + 1) = 0xffff;
      *(undefined2 *)(puVar7 + 7) = 0xffff;
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    if (0x37 < uVar9) {
      do {
        *(undefined2 *)puVar10 = 0xffff;
        puVar10[5] = 0;
        *(undefined2 *)(puVar10 + 6) = 0xffff;
        *(undefined2 *)(puVar10 + 7) = 0xffff;
        puVar10[0xc] = 0;
        *(undefined2 *)(puVar10 + 0xd) = 0xffff;
        puVar10[1] = (ulong)&PTR_LAB_04b76a78;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[8] = (ulong)&PTR_LAB_04b76a78;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10 = puVar10 + 0xe;
      } while (puVar10 != puVar8 + uVar12 * 7);
    }
  }
  *(ulong **)(param_1 + 0x10) = puVar8;
  *(undefined1 *)(param_1 + 8) = 1;
LAB_03b55fb4:
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}

