
void FUN_0131f190(long param_1,long *param_2)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar5 = DAT_05ae7600;
  uVar2 = *(uint *)(param_2 + 1);
  uVar11 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    __size = uVar11 * 0x18 + 8;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(__size);
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar5 + 8);
        if (lVar6 != 0) {
          param_2 = (long *)(lVar6 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_0131f2b8;
      }
      puVar7 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (puVar7 != (ulong *)0x0) {
      puVar8 = puVar7 + 1;
      *puVar7 = uVar11;
      uVar10 = uVar11 * 0x18 - 0x18;
      uVar3 = *(undefined2 *)PTR_DAT_04bb3170;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10;
      puVar9 = puVar8;
      if ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
        *(undefined2 *)(puVar7 + 3) = uVar3;
        puVar7[1] = (ulong)&PTR_FUN_048f9730;
        puVar7[2] = 0;
        puVar9 = puVar7 + 4;
      }
      if (0x17 < uVar10) {
        puVar1 = PTR_DAT_04bb2018 + 0x10;
        do {
          *puVar9 = (ulong)puVar1;
          puVar9[1] = 0;
          *(undefined2 *)(puVar9 + 2) = uVar3;
          *(undefined2 *)(puVar9 + 5) = uVar3;
          puVar9[3] = (ulong)puVar1;
          puVar9[4] = 0;
          puVar9 = puVar9 + 6;
        } while (puVar9 != puVar8 + uVar11 * 3);
      }
      *(ulong **)(param_1 + 8) = puVar8;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(uint *)(param_1 + 0x10) = uVar2;
    }
  }
LAB_0131f2b8:
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

