
void FUN_03c67d50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = &PTR_FUN_04b82398;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar4 = param_1 + 3;
  *plVar4 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb2120;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  param_1[4] = puVar2;
  FUN_03c5a110(plVar4,param_2,0xffffffff,param_3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  uVar10 = 0;
  do {
    if (*(char *)(param_1[4] + uVar10) == '\0') goto LAB_03c67e1c;
    lVar11 = param_1[4] + uVar10;
    if (*(char *)(lVar11 + 1) == '\0') {
      uVar10 = uVar10 + 1;
      goto LAB_03c67e1c;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      uVar10 = uVar10 + 2;
      goto LAB_03c67e1c;
    }
    uVar10 = uVar10 + 3;
  } while (uVar10 != 0x80001);
  uVar10 = 0;
LAB_03c67e1c:
  (**(code **)(param_1[3] + 0x18))(plVar4);
  if ((int)uVar10 != 0) {
    if ((int)uVar10 == 1) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      do {
        pcVar1 = (char *)(param_1[4] + uVar8);
        uVar8 = uVar8 + 2;
        if (*pcVar1 == '{') {
          uVar9 = uVar9 + 1;
        }
        if (pcVar1[1] == '{') {
          uVar9 = uVar9 + 1;
        }
      } while ((uVar10 & 0xfffffffe) != uVar8);
    }
    if (((uVar10 & 1) != 0) && (*(char *)(param_1[4] + uVar8) == '{')) {
      uVar9 = uVar9 + 1;
    }
    if (0 < (int)uVar9) {
      uVar8 = (ulong)uVar9;
      uVar10 = uVar8 << 5 | 8;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        puVar5 = malloc(uVar10);
      }
      else {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar11 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return;
        }
        puVar5 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar10,8);
      }
      if (puVar5 != (ulong *)0x0) {
        puVar6 = puVar5 + 1;
        *puVar5 = uVar8;
        uVar10 = uVar8 & 7;
        puVar5 = puVar6;
        if ((uVar9 & 7) != 0) {
          puVar7 = puVar6;
          do {
            *(undefined1 *)(puVar7 + 3) = 0;
            uVar10 = uVar10 - 1;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar5 = puVar7 + 4;
            *puVar7 = 0;
            puVar7 = puVar5;
          } while (uVar10 != 0);
        }
        if (6 < (uVar8 - 1 & 0x7ffffffffffffff)) {
          do {
            *(undefined1 *)(puVar5 + 3) = 0;
            *puVar5 = 0;
            puVar5[6] = 0;
            *(undefined1 *)(puVar5 + 7) = 0;
            puVar5[10] = 0;
            *(undefined1 *)(puVar5 + 0xb) = 0;
            puVar5[0xe] = 0;
            *(undefined1 *)(puVar5 + 0xf) = 0;
            *(undefined1 *)(puVar5 + 0x13) = 0;
            puVar5[0x10] = 0;
            *(undefined1 *)(puVar5 + 0x17) = 0;
            puVar5[0x14] = 0;
            puVar5[0x1a] = 0;
            *(undefined1 *)(puVar5 + 0x1b) = 0;
            puVar5[0x1e] = 0;
            *(undefined1 *)(puVar5 + 0x1f) = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            puVar5[0x11] = 0;
            puVar5[0x12] = 0;
            puVar5[0x15] = 0;
            puVar5[0x16] = 0;
            puVar5[0x18] = 0;
            puVar5[0x19] = 0;
            puVar5[0x1c] = 0;
            puVar5[0x1d] = 0;
            puVar5 = puVar5 + 0x20;
          } while (puVar5 != puVar6 + uVar8 * 4);
        }
        param_1[9] = puVar6;
        *(undefined8 *)((long)param_1 + 0x54) = 0;
        *(uint *)(param_1 + 10) = uVar9;
      }
    }
  }
  return;
}

