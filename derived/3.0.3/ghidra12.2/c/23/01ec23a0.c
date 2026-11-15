
/* WARNING: Removing unreachable block (ram,0x01ec2630) */
/* WARNING: Removing unreachable block (ram,0x01ec2798) */

void FUN_01ec23a0(undefined8 *param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  
  FUN_01e9dbb0();
  param_1[0x15e8] = 0;
  *param_1 = &PTR_LAB_04a618c0;
  param_1[0x15e7] = &PTR_LAB_04a61c98;
  param_1[0x15eb] = &PTR_LAB_04a61c98;
  param_1[0x15e9] = 0;
  param_1[0x15ea] = 0;
  param_1[0x15ec] = 0;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  param_1[0x15f0] = 0;
  param_1[0x15f1] = 0;
  param_1[0x15f2] = 0;
  param_1[0x15ef] = &PTR_LAB_04a61c48;
  param_1[0x15f4] = 0;
  param_1[0x15f5] = 0;
  param_1[0x15f6] = 0;
  param_1[0x15f3] = &PTR_LAB_04a61c48;
  param_1[0x15f7] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x15f7);
  param_1[0x15f8] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x15f8);
  param_1[0x15f9] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x15f9);
  *(undefined1 *)(param_1 + 0x15fa) = 0;
  puVar5 = PTR_DAT_04bb6298;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      lVar10 = param_1[1];
      (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
      (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
      pcVar8 = *(char **)(lVar10 + 1000);
      if (pcVar8 != "NpcPlayer") {
        if (*pcVar8 != 'N') {
code_r0x01ec25cc:
          param_1[0x15f0] = param_1;
          param_1[0x15f1] = FUN_01ec27b0;
          param_1[0x15f2] = 0;
          if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
            *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) =
                 param_1 + 0x15ef;
            *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
          }
          goto LAB_01ec2638;
        }
        lVar10 = 0;
        do {
          if ((lVar10 == 0x80000) || (lVar4 = lVar10 + 1, pcVar8[lVar4] != "NpcPlayer"[lVar10 + 1]))
          goto code_r0x01ec25cc;
          lVar10 = lVar10 + 1;
        } while (pcVar8[lVar4] != '\0');
      }
    }
    sVar3 = *(short *)puVar5;
    if (sVar3 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 & 1) != 0) {
        lVar10 = param_1[1];
        (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
        (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
        pcVar8 = *(char **)(lVar10 + 1000);
        if (pcVar8 != "NpcPlayer") {
          if (*pcVar8 == 'N') {
            lVar10 = 0;
            do {
              if ((lVar10 == 0x80000) ||
                 (lVar4 = lVar10 + 1, pcVar8[lVar4] != "NpcPlayer"[lVar10 + 1]))
              goto code_r0x01ec260c;
              lVar10 = lVar10 + 1;
            } while (pcVar8[lVar4] != '\0');
          }
          else {
code_r0x01ec260c:
            param_1[0x15e8] = param_1;
            param_1[0x15e9] = &LAB_01ec3568;
            param_1[0x15ea] = 0;
            param_1[0x1590] = param_1 + 0x15e7;
          }
        }
      }
    }
  }
LAB_01ec2638:
  lVar10 = param_1[1];
  (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
  (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
  if (*(char **)(lVar10 + 1000) == "NpcPlayer") {
LAB_01ec26b0:
    param_1[0x100f] = &LAB_01ec3648;
    param_1[0x1010] = 0;
    param_1[0x100d] = &PTR_LAB_04a61ce8;
    param_1[0x100e] = param_1;
    param_1[0x1013] = &LAB_01ec3870;
    param_1[0x1014] = 0;
    param_1[0x1011] = &PTR_LAB_04a61d38;
    param_1[0x1012] = param_1;
  }
  else {
    uVar9 = 0;
    bVar7 = true;
    do {
      cVar2 = (*(char **)(lVar10 + 1000))[uVar9];
      if (cVar2 != "NpcPlayer"[uVar9]) break;
      if (cVar2 == '\0') {
        if (bVar7) goto LAB_01ec26b0;
        break;
      }
      bVar7 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  puVar6 = PTR_FUN_04bc20e8;
  sVar3 = *(short *)puVar5;
  if (sVar3 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      param_1[0x15f4] = param_1;
      param_1[0x15f6] = 0;
      param_1[0x15f5] = puVar6;
      if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
        *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x15f3;
        *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
      }
    }
  }
  param_1[0x15ec] = param_1;
  param_1[0x15ed] = &LAB_01ec3a54;
  param_1[0x15ee] = 0;
  param_1[0x158d] = param_1 + 0x15eb;
  return;
}

