
void FUN_03bf4190(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  void *__s;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_04bb2698;
  param_2 = param_2 & 0xffffffff;
  puVar11 = (uint *)param_1[param_2 + 4];
  lVar12 = *(long *)(*(long *)(*(long *)(param_1[6] + 0x18) + param_2 * 8 + 0x18) + 8);
  uVar2 = *(uint *)(lVar12 + 0xc);
  uVar13 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    sVar10 = uVar13 * 0x18 + 8;
    if (lVar14 == 0) {
      puVar6 = malloc(sVar10);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar14 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03bf42f8;
      }
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar10,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6 + 1;
      *puVar6 = uVar13;
      uVar8 = uVar13 * 0x18 - 0x18;
      uVar1 = ((uint)(uVar8 / 0x18) & 0xfffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      puVar6 = puVar7;
      if ((uVar1 & 3) != 0) {
        do {
          *puVar6 = (ulong)&PTR_LAB_04b7bfb8;
          puVar6[1] = 0;
          uVar9 = uVar9 - 1;
          *(undefined1 *)(puVar6 + 2) = 1;
          puVar6 = puVar6 + 3;
        } while (uVar9 != 0);
      }
      if (0x47 < uVar8) {
        do {
          *puVar6 = (ulong)&PTR_LAB_04b7bfb8;
          puVar6[1] = 0;
          *(undefined1 *)(puVar6 + 2) = 1;
          *(undefined1 *)(puVar6 + 5) = 1;
          *(undefined1 *)(puVar6 + 8) = 1;
          *(undefined1 *)(puVar6 + 0xb) = 1;
          puVar6[3] = (ulong)&PTR_LAB_04b7bfb8;
          puVar6[4] = 0;
          puVar6[6] = (ulong)&PTR_LAB_04b7bfb8;
          puVar6[7] = 0;
          puVar6[9] = (ulong)&PTR_LAB_04b7bfb8;
          puVar6[10] = 0;
          puVar6 = puVar6 + 0xc;
        } while (puVar6 != puVar7 + uVar13 * 3);
      }
      *puVar11 = uVar2;
      *(ulong **)(puVar11 + 2) = puVar7;
    }
  }
LAB_03bf42f8:
  uVar2 = *(uint *)(lVar12 + 0x10);
  if (0 < (int)uVar2) {
    lVar12 = *(long *)puVar3;
    sVar10 = (ulong)uVar2 << 3;
    if (lVar12 == 0) {
      __s = malloc(sVar10);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar12 + 8);
        if (lVar14 != 0) {
          plVar5 = (long *)(lVar14 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03bf437c;
      }
      __s = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar10,8);
    }
    if (__s != (void *)0x0) {
      memset(__s,0,sVar10);
      puVar11[4] = uVar2;
      *(void **)(puVar11 + 6) = __s;
    }
  }
LAB_03bf437c:
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
  *(undefined1 *)(puVar11 + 8) = 1;
  return;
}

