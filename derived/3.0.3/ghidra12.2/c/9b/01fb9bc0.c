
void FUN_01fb9bc0(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_170 [2];
  undefined **local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined5 local_114;
  undefined3 uStack_10f;
  undefined5 uStack_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined *local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  undefined8 local_5c;
  undefined4 local_54;
  
  local_170[0] = 0;
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0xf;
  local_148 = 0;
  local_12c = 0;
  local_168 = &PTR_FUN_0498d548;
  puStack_160 = &DAT_048f9750;
  local_158 = 0;
  puStack_150 = &DAT_048f9750;
  local_134 = 0;
  uStack_130 = 0xfffe;
  FUN_0277d4ac(&uStack_130);
  local_114 = 0;
  uStack_10f = 0;
  uStack_10c = 0;
  local_118 = 0xbf800000;
  local_128 = 0x41c8000041800000;
  uStack_120 = 0xbf800000bf800000;
  local_104 = 0xfffe;
  FUN_0277d4ac(&local_104);
  local_fc = 0;
  local_9d = 0;
  local_c8 = (undefined8 *)local_bc;
  local_c0 = 0x20;
  local_d0 = PTR_DAT_04bb2028 + 0x10;
  local_88 = 0x20;
  local_90 = local_84;
  local_bc[0] = 0;
  local_65 = 0;
  local_84[0] = 0;
  local_170[0] = 0;
  local_158 = 0;
  uStack_138 = 0;
  local_134 = 0;
  local_5c = 0xfffe;
  local_148 = 0;
  uStack_140 = 0;
  local_98 = local_d0;
  FUN_0277d4ac(&local_5c);
  uStack_130 = (undefined4)local_5c;
  local_12c = local_5c._4_4_;
  local_128 = 0x41c8000041800000;
  uStack_120 = 0xbf800000bf800000;
  local_118 = 0xbf800000;
  local_114 = 0;
  uStack_10f = 0;
  uStack_10c = 0;
  local_5c = 0xfffe;
  FUN_0277d4ac(&local_5c);
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_104 = local_5c;
  *(undefined1 *)local_c8 = 0;
  *local_90 = 0;
  local_5c = 0x2500000015;
  lVar6 = param_1[1];
  local_54 = 1;
  uVar7 = *(uint *)(lVar6 + 0x288);
  *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
  uVar7 = uVar7 ^ uVar7 << 0xb;
  *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
  uVar2 = *(uint *)(lVar6 + 0x294);
  *(uint *)(lVar6 + 0x290) = uVar2;
  uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
  *(uint *)(lVar6 + 0x294) = uVar7;
  uVar7 = *(uint *)((long)&local_5c + ((ulong)uVar7 + (ulong)uVar7 * 2 >> 0x1e & 0xc));
  if ((int)uVar7 < 0x6d) {
    if (0x6c < uVar7) {
LAB_01fb9d9c:
      puVar5 = &DAT_0407ebb1;
      goto LAB_01fb9db4;
    }
    ppuVar4 = &PTR_s_EmotEnd_04913cd8;
  }
  else {
    if (0x78 < uVar7) goto LAB_01fb9d9c;
    ppuVar4 = (undefined **)FUN_007c3ad0();
    uVar7 = uVar7 - 0x6d;
  }
  puVar5 = (undefined8 *)ppuVar4[uVar7];
LAB_01fb9db4:
  puVar3 = local_c8;
  if (local_c8 != puVar5) {
    lVar6 = 0;
    do {
      if (*(char *)((long)puVar5 + lVar6) == '\0') goto LAB_01fb9e0c;
      if (*(char *)((long)puVar5 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01fb9e0c;
      }
      if (*(char *)((long)puVar5 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01fb9e0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01fb9e0c:
    iVar1 = (int)lVar6;
    if (local_c0 <= (int)lVar6) {
      iVar1 = local_c0 + -1;
    }
    memcpy(local_c8,puVar5,(long)iVar1);
    *(undefined1 *)((long)puVar3 + (long)iVar1) = 0;
  }
  puVar5 = (undefined8 *)FUN_01e57b44(param_1[2]);
  local_fc = *(undefined4 *)(param_1[1] + 0x750);
  local_104 = *puVar5;
  (**(code **)(*param_1 + 0x38))(param_1,0x3f,local_170,1);
  return;
}

