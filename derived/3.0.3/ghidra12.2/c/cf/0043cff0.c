
void FUN_0043cff0(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar8 = PTR_DAT_048607b8;
  lVar7 = param_1[1];
  iVar5 = *(int *)((long)param_1 + 0xc);
  if (iVar5 < (int)lVar7 * 2) {
    uVar6 = iVar5 * 2;
    uVar1 = uVar6 + 2;
    lVar12 = *param_1;
    puVar9 = (undefined8 *)
             (**(code **)(*(long *)PTR_DAT_048607b8 + 0x10))
                       (PTR_DAT_048607b8,(long)(int)(uVar1 * 0x10),0);
    if (puVar9 != (undefined8 *)0x0) {
      *param_1 = (long)puVar9;
      if (0 < (int)uVar1) {
        *puVar9 = 0xffffffffffffffff;
        if (uVar6 == 0) {
          lVar10 = 1;
        }
        else {
          lVar11 = 0;
          lVar2 = 0;
          do {
            lVar10 = lVar2;
            *(undefined8 *)(*param_1 + lVar11 + 0x10) = 0xffffffffffffffff;
            lVar2 = lVar10 + 2;
            lVar3 = *param_1 + lVar11;
            lVar11 = lVar11 + 0x20;
            *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
          } while ((ulong)uVar1 - 2 != lVar2);
          lVar10 = lVar10 + 3;
        }
        *(undefined8 *)(*param_1 + lVar10 * 0x10) = 0xffffffffffffffff;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(uint *)((long)param_1 + 0xc) = uVar6 | 1;
      if (-1 < iVar5) {
        uVar13 = (ulong)(iVar5 + 1);
        puVar9 = (undefined8 *)(lVar12 + 8);
        do {
          if (puVar9[-1] != -1) {
            FUN_0043cff0(param_1,puVar9[-1],*puVar9);
          }
          puVar9 = puVar9 + 2;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (-1 < (int)lVar7) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,lVar12,(long)(iVar5 * 0x10 + 0x10));
      }
    }
  }
  uVar1 = (int)(param_2 >> 4) * -0x61c8864f;
  do {
    uVar6 = uVar1 & *(uint *)((long)param_1 + 0xc);
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar1 = uVar6 + 1;
  } while (*puVar4 != 0xffffffffffffffff);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *puVar4 = param_2;
  *(undefined8 *)(*param_1 + (ulong)uVar6 * 0x10 + 8) = param_3;
  return;
}

