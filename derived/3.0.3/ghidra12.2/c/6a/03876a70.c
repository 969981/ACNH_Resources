
void FUN_03876a70(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = &PTR_LAB_04b60380;
  param_1[1] = 0;
  uVar10 = (ulong)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_038e18e4(param_1 + 5);
  lVar4 = DAT_05ae7600;
  if (0 < (int)param_2) {
    uVar11 = (uVar10 + (ulong)param_2 * 4) * 0x40 | 8;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(uVar11);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar4 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar11,8);
    }
    if (puVar7 != (ulong *)0x0) {
      puVar8 = puVar7 + 1;
      *puVar7 = uVar10;
      puVar1 = PTR_DAT_04bc1120;
      uVar11 = uVar10 * 0x140 - 0x140;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      puVar9 = puVar8;
      if ((SUB164(auVar3 * ZEXT816(0xcccccccccccccccd),8) >> 8 & 1) == 0) {
        *(undefined1 *)((long)puVar7 + 0x44) = 0;
        puVar9 = puVar7 + 0x29;
        puVar7[7] = (ulong)((long)puVar7 + 0x44);
        *(undefined4 *)(puVar7 + 8) = 0x101;
        *(undefined1 *)((long)puVar7 + 0x144) = 0;
        puVar7[6] = (ulong)(puVar1 + 0x10);
      }
      if (0x13f < uVar11) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined1 *)((long)puVar9 + 0x3c) = 0;
          puVar9[6] = (ulong)((long)puVar9 + 0x3c);
          puVar7 = puVar9 + 0x2d;
          uVar11 = (long)puVar9 + 0x17c;
          *(undefined4 *)(puVar9 + 7) = 0x101;
          puVar2 = puVar9 + 0x2e;
          *(undefined1 *)((long)puVar9 + 0x13c) = 0;
          puVar9[5] = (ulong)puVar1;
          *(undefined4 *)(puVar9 + 0x2f) = 0x101;
          *(undefined1 *)((long)puVar9 + 0x27c) = 0;
          *(undefined1 *)((long)puVar9 + 0x17c) = 0;
          puVar9 = puVar9 + 0x50;
          *puVar2 = uVar11;
          *puVar7 = (ulong)puVar1;
        } while (puVar9 != puVar8 + uVar10 * 0x28);
      }
      param_1[2] = puVar8;
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
      *(uint *)(param_1 + 3) = param_2;
    }
  }
  return;
}

