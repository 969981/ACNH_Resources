
void FUN_01f0c110(long *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *__src;
  uint uVar8;
  long lVar9;
  undefined4 local_170 [2];
  undefined *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined *puStack_150;
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
  
  if (!NAN(*param_2)) {
    lVar9 = param_1[3];
    uVar6 = FUN_02085a50(lVar9,3,0);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(lVar9 + 0x801) = 1;
      lVar1 = lVar9 + 0x10;
      lVar3 = lVar1 + (ulong)*(uint *)(lVar9 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar9 + 0x294)) {
        lVar3 = lVar1;
      }
      *(float *)(lVar3 + 0xc) = *param_2;
      *(float *)(lVar3 + 0x10) = param_2[1];
      *(float *)(lVar3 + 0x14) = param_2[2];
      lVar3 = lVar1 + (ulong)*(uint *)(lVar9 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar9 + 0x294)) {
        lVar3 = lVar1;
      }
      *(undefined1 *)(lVar3 + 0x7e) = 0;
    }
  }
  local_170[0] = 0;
  local_148 = 0;
  local_134 = 0;
  uStack_130 = 0xfffe;
  local_12c = 0;
  local_168 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_160 = PTR_DAT_04bb2010 + 0x10;
  local_158 = 0;
  puStack_150 = puStack_160;
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
  lVar9 = param_1[1];
  local_54 = 1;
  uVar8 = *(uint *)(lVar9 + 0x288);
  *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
  uVar8 = uVar8 ^ uVar8 << 0xb;
  *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
  uVar4 = *(uint *)(lVar9 + 0x294);
  *(uint *)(lVar9 + 0x290) = uVar4;
  uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
  *(uint *)(lVar9 + 0x294) = uVar8;
  uVar8 = *(uint *)((long)&local_5c + ((ulong)uVar8 + (ulong)uVar8 * 2 >> 0x1e & 0xc));
  if ((int)uVar8 < 0x6d) {
    if (0x6c < uVar8) {
LAB_01f0c350:
      __src = &DAT_0407ebb1;
      goto LAB_01f0c368;
    }
    puVar7 = PTR_s_EmotEnd_04bb4608 + 0x528;
  }
  else {
    if (0x78 < uVar8) goto LAB_01f0c350;
    puVar7 = (undefined *)FUN_007c3ad0();
    uVar8 = uVar8 - 0x6d;
  }
  __src = *(undefined8 **)(puVar7 + (ulong)uVar8 * 8);
LAB_01f0c368:
  puVar5 = local_c8;
  if (local_c8 != __src) {
    lVar9 = 0;
    do {
      if (*(char *)((long)__src + lVar9) == '\0') goto LAB_01f0c3bc;
      if (*(char *)((long)__src + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01f0c3bc;
      }
      if (*(char *)((long)__src + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01f0c3bc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01f0c3bc:
    iVar2 = (int)lVar9;
    if (local_c0 <= (int)lVar9) {
      iVar2 = local_c0 + -1;
    }
    memcpy(local_c8,__src,(long)iVar2);
    *(undefined1 *)((long)puVar5 + (long)iVar2) = 0;
  }
  local_fc = *(undefined4 *)(param_1[1] + 0x750);
  (**(code **)(*param_1 + 0x38))(param_1,0x3f,local_170,1);
  return;
}

