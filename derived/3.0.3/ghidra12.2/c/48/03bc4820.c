
void FUN_03bc4820(long param_1,long *param_2)

{
  size_t sVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar5 = *(uint *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20) + 0x14);
  uVar15 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
LAB_03bc496c:
    uVar12 = *(uint *)(param_1 + 0x80);
  }
  else {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    sVar1 = (ulong)uVar5 * 0x28 + 8;
    if (lVar16 == 0) {
      puVar9 = malloc(sVar1);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar16 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03bc496c;
      }
      puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar1,8);
    }
    if (puVar9 == (ulong *)0x0) goto LAB_03bc496c;
    uVar13 = uVar15 * 0x28 - 0x28;
    puVar11 = puVar9 + 1;
    *puVar9 = uVar15;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13;
    puVar10 = puVar11;
    if ((SUB164(auVar6 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined8 *)((long)puVar9 + 0x24) = 0;
      *(undefined4 *)(puVar9 + 4) = 0x7f7fffff;
      puVar10 = puVar9 + 6;
      *(undefined1 *)((long)puVar9 + 0x2c) = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
    }
    if (0x27 < uVar13) {
      do {
        *(undefined4 *)puVar10 = 0;
        *(undefined4 *)(puVar10 + 3) = 0x7f7fffff;
        *(undefined8 *)((long)puVar10 + 0x1c) = 0;
        *(undefined1 *)((long)puVar10 + 0x24) = 0;
        *(undefined4 *)(puVar10 + 5) = 0;
        *(undefined4 *)(puVar10 + 8) = 0x7f7fffff;
        *(undefined8 *)((long)puVar10 + 0x44) = 0;
        *(undefined1 *)((long)puVar10 + 0x4c) = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10 = puVar10 + 10;
      } while (puVar10 != puVar11 + uVar15 * 5);
    }
    *(uint *)(param_1 + 0x80) = uVar5;
    *(ulong **)(param_1 + 0x88) = puVar11;
    uVar12 = uVar5;
  }
  if (0 < (int)uVar12) {
    uVar14 = 0;
    do {
      uVar3 = uVar14;
      if (uVar12 <= uVar14) {
        uVar3 = 0;
      }
      FUN_03bc6080(*(long *)(param_1 + 0x88) + (ulong)uVar3 * 0x28,param_2);
      uVar12 = *(uint *)(param_1 + 0x80);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar12);
  }
  if (0 < (int)uVar5) {
    lVar16 = *(long *)puVar2;
    sVar1 = (ulong)uVar5 * 0xa8 + 8;
    if (lVar16 == 0) {
      puVar9 = malloc(sVar1);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar4 = (undefined8 *)(lVar16 + 8);
        if (lVar7 != 0) {
          puVar4 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*puVar4;
        if (param_2 == (long *)0x0) goto LAB_03bc4a80;
      }
      puVar9 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar1,8);
    }
    if (puVar9 != (ulong *)0x0) {
      puVar10 = puVar9 + 10;
      *puVar9 = uVar15;
      lVar16 = (ulong)uVar5 * 0xa8;
      puVar2 = PTR_DAT_04bd20d0 + 0x10;
      do {
        puVar10[-9] = 0;
        puVar10[-8] = 0;
        lVar16 = lVar16 + -0xa8;
        puVar10[7] = 0;
        puVar10[-7] = 0;
        puVar10[-6] = (ulong)puVar2;
        puVar10[-5] = 0;
        puVar10[-4] = 0;
        puVar10[-3] = (ulong)puVar2;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = (ulong)puVar2;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = (ulong)puVar2;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = (ulong)puVar2;
        puVar10[8] = 0;
        puVar10[9] = (ulong)puVar2;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10 = puVar10 + 0x15;
      } while (lVar16 != 0);
      *(uint *)(param_1 + 200) = uVar5;
      *(ulong **)(param_1 + 0xd0) = puVar9 + 1;
    }
  }
LAB_03bc4a80:
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}

