
void FUN_039008b0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong __size;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    __size = uVar10 << 7 | 8;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar11 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_039009fc;
      }
      puVar6 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar8 = puVar6 + 1;
      *puVar6 = uVar10;
      puVar3 = PTR_DAT_04bd11b8;
      puVar9 = puVar8;
      if ((uVar2 & 1) != 0) {
        puVar1 = PTR_DAT_04bd11b8 + 0x10;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[7] = 0;
        *(undefined1 *)((long)puVar6 + 0x44) = 0;
        puVar6[0xf] = 0;
        puVar6[1] = (ulong)puVar1;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 8) = 0x10001;
        puVar9 = puVar6 + 0x11;
        puVar6[5] = 0;
        puVar6[6] = 0;
      }
      if ((uVar10 - 1 & 0x1ffffffffffffff) != 0) {
        do {
          *puVar9 = (ulong)(puVar3 + 0x10);
          puVar9[1] = 0;
          puVar9[6] = 0;
          *(undefined4 *)(puVar9 + 7) = 0x10001;
          *(undefined1 *)((long)puVar9 + 0x3c) = 0;
          puVar9[0xe] = 0;
          puVar9[0x16] = 0;
          *(undefined4 *)(puVar9 + 0x17) = 0x10001;
          *(undefined1 *)((long)puVar9 + 0xbc) = 0;
          puVar9[0x1e] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[0x10] = (ulong)(puVar3 + 0x10);
          puVar9[0x11] = 0;
          puVar9[0x12] = 0;
          puVar9[0x13] = 0;
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9 = puVar9 + 0x20;
        } while (puVar9 != puVar8 + uVar10 * 0x10);
      }
      *(uint *)(param_1 + 0x40) = uVar2;
      *(ulong **)(param_1 + 0x48) = puVar8;
    }
  }
LAB_039009fc:
  lVar11 = param_2[2];
  if (lVar11 != 0) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      lVar5 = *plVar4;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar7 = *(undefined8 *)PTR_DAT_04bd0fa8;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
    *(undefined2 *)(param_1 + 0x32) = 0;
    FUN_038f8590(uVar7,param_1 + 8,lVar5,lVar11,0x100,2);
    *(undefined2 *)(param_1 + 0x32) = 2;
  }
  *(int *)(param_1 + 0x50) = (int)param_2[1] + -1;
  *(int *)(param_1 + 0x54) = (int)param_2[2] + -1;
  *(int *)(param_1 + 0x58) = (int)param_2[1] + -1;
  *(int *)(param_1 + 0x5c) = (int)param_2[2] + -1;
  return;
}

