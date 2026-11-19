
/* WARNING: Removing unreachable block (ram,0x03c11d94) */
/* WARNING: Removing unreachable block (ram,0x03c12180) */
/* WARNING: Removing unreachable block (ram,0x03c1219c) */

void FUN_03c11d20(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined *local_2a0;
  char *local_298;
  undefined *local_290;
  char *local_288;
  int local_280;
  char local_27c [8];
  char local_274 [8];
  char local_26c [8];
  char local_264 [8];
  undefined1 local_25c;
  undefined1 local_17d;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [8];
  char local_15c [8];
  char local_154 [8];
  undefined2 local_14c;
  undefined1 local_65;
  
  uVar6 = (**(code **)(*DAT_05aec888 + 0xd0))();
  puVar4 = PTR_DAT_04bb2628;
  if ((uVar6 & 1) != 0) {
    local_170 = local_164;
    uVar11 = *(undefined8 *)(*(long *)PTR_DAT_04bb2628 + 0x100);
    local_164[0] = s_System_Font_nvn_font_jis1_040bd64b[0];
    local_164[1] = s_System_Font_nvn_font_jis1_040bd64b[1];
    local_164[2] = s_System_Font_nvn_font_jis1_040bd64b[2];
    local_164[3] = s_System_Font_nvn_font_jis1_040bd64b[3];
    local_164[4] = s_System_Font_nvn_font_jis1_040bd64b[4];
    local_164[5] = s_System_Font_nvn_font_jis1_040bd64b[5];
    local_164[6] = s_System_Font_nvn_font_jis1_040bd64b[6];
    local_164[7] = s_System_Font_nvn_font_jis1_040bd64b[7];
    local_15c[0] = s_System_Font_nvn_font_jis1_040bd64b[8];
    local_15c[1] = s_System_Font_nvn_font_jis1_040bd64b[9];
    local_15c[2] = s_System_Font_nvn_font_jis1_040bd64b[10];
    local_15c[3] = s_System_Font_nvn_font_jis1_040bd64b[0xb];
    local_15c[4] = s_System_Font_nvn_font_jis1_040bd64b[0xc];
    local_15c[5] = s_System_Font_nvn_font_jis1_040bd64b[0xd];
    local_15c[6] = s_System_Font_nvn_font_jis1_040bd64b[0xe];
    local_15c[7] = s_System_Font_nvn_font_jis1_040bd64b[0xf];
    local_65 = 0;
    local_154[0] = s_System_Font_nvn_font_jis1_040bd64b[0x10];
    local_154[1] = s_System_Font_nvn_font_jis1_040bd64b[0x11];
    local_154[2] = s_System_Font_nvn_font_jis1_040bd64b[0x12];
    local_154[3] = s_System_Font_nvn_font_jis1_040bd64b[0x13];
    local_154[4] = s_System_Font_nvn_font_jis1_040bd64b[0x14];
    local_154[5] = s_System_Font_nvn_font_jis1_040bd64b[0x15];
    local_154[6] = s_System_Font_nvn_font_jis1_040bd64b[0x16];
    local_154[7] = s_System_Font_nvn_font_jis1_040bd64b[0x17];
    local_168 = 0x100;
    local_14c = 0x31;
    local_280 = 0x100;
    local_17d = 0;
    local_25c = 0;
    local_290 = PTR_DAT_04bb21f8 + 0x10;
    local_274[0] = s_System_Font_nvn_font_shader_jis1_0406a165[8];
    local_274[1] = s_System_Font_nvn_font_shader_jis1_0406a165[9];
    local_274[2] = s_System_Font_nvn_font_shader_jis1_0406a165[10];
    local_274[3] = s_System_Font_nvn_font_shader_jis1_0406a165[0xb];
    local_274[4] = s_System_Font_nvn_font_shader_jis1_0406a165[0xc];
    local_274[5] = s_System_Font_nvn_font_shader_jis1_0406a165[0xd];
    local_274[6] = s_System_Font_nvn_font_shader_jis1_0406a165[0xe];
    local_274[7] = s_System_Font_nvn_font_shader_jis1_0406a165[0xf];
    local_27c[0] = s_System_Font_nvn_font_shader_jis1_0406a165[0];
    local_27c[1] = s_System_Font_nvn_font_shader_jis1_0406a165[1];
    local_27c[2] = s_System_Font_nvn_font_shader_jis1_0406a165[2];
    local_27c[3] = s_System_Font_nvn_font_shader_jis1_0406a165[3];
    local_27c[4] = s_System_Font_nvn_font_shader_jis1_0406a165[4];
    local_27c[5] = s_System_Font_nvn_font_shader_jis1_0406a165[5];
    local_27c[6] = s_System_Font_nvn_font_shader_jis1_0406a165[6];
    local_27c[7] = s_System_Font_nvn_font_shader_jis1_0406a165[7];
    local_288 = local_27c;
    local_26c[0] = s_System_Font_nvn_font_shader_jis1_0406a165[0x10];
    local_26c[1] = s_System_Font_nvn_font_shader_jis1_0406a165[0x11];
    local_26c[2] = s_System_Font_nvn_font_shader_jis1_0406a165[0x12];
    local_26c[3] = s_System_Font_nvn_font_shader_jis1_0406a165[0x13];
    local_26c[4] = s_System_Font_nvn_font_shader_jis1_0406a165[0x14];
    local_26c[5] = s_System_Font_nvn_font_shader_jis1_0406a165[0x15];
    local_26c[6] = s_System_Font_nvn_font_shader_jis1_0406a165[0x16];
    local_26c[7] = s_System_Font_nvn_font_shader_jis1_0406a165[0x17];
    local_264[0] = s_System_Font_nvn_font_shader_jis1_0406a165[0x18];
    local_264[1] = s_System_Font_nvn_font_shader_jis1_0406a165[0x19];
    local_264[2] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1a];
    local_264[3] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1b];
    local_264[4] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1c];
    local_264[5] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1d];
    local_264[6] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1e];
    local_264[7] = s_System_Font_nvn_font_shader_jis1_0406a165[0x1f];
    local_178 = local_290;
    uVar6 = (**(code **)(*DAT_05aec888 + 0xd8))();
    pcVar5 = local_170;
    puVar3 = PTR_DAT_04bb2020;
    if ((uVar6 & 1) != 0) {
      local_2a0 = PTR_DAT_04bb2020 + 0x10;
      local_298 = "_mipmap";
      (**(code **)(local_178 + 0x18))(&local_178);
      lVar10 = 0;
      do {
        if (local_170[lVar10] == '\0') goto LAB_03c11e8c;
        if (local_170[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_03c11e8c;
        }
        if (local_170[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_03c11e8c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_03c11e8c:
      uVar1 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_2a0 + 0x18))(&local_2a0);
      lVar10 = 0;
      do {
        if (local_298[lVar10] == '\0') goto LAB_03c11eec;
        if (local_298[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_03c11eec;
        }
        if (local_298[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_03c11eec;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_03c11eec:
      uVar2 = (uint)lVar10;
      if ((int)(local_168 - uVar1) <= (int)(uint)lVar10) {
        uVar2 = local_168 + ~uVar1;
      }
      if (0 < (int)uVar2) {
        (**(code **)(local_2a0 + 0x18))(&local_2a0);
        memcpy(pcVar5 + uVar1,local_298,(ulong)uVar2);
        pcVar5[(int)(uVar2 + uVar1)] = '\0';
      }
      pcVar5 = local_288;
      (**(code **)(local_290 + 0x18))(&local_290);
      lVar10 = 0;
      do {
        if (local_288[lVar10] == '\0') goto LAB_03c11f8c;
        if (local_288[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_03c11f8c;
        }
        if (local_288[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_03c11f8c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_03c11f8c:
      uVar1 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      uVar2 = 7;
      if ((int)(local_280 - uVar1) < 8) {
        uVar2 = local_280 + ~uVar1;
      }
      if (0 < (int)uVar2) {
        memcpy(pcVar5 + uVar1,&DAT_040bd665,(ulong)uVar2);
        pcVar5[(ulong)uVar2 + (ulong)uVar1] = '\0';
      }
    }
    pcVar5 = local_170;
    (**(code **)(local_178 + 0x18))(&local_178);
    lVar10 = 0;
    do {
      if (local_170[lVar10] == '\0') goto LAB_03c1202c;
      if (local_170[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03c1202c;
      }
      if (local_170[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03c1202c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03c1202c:
    uVar1 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
    uVar2 = 4;
    if ((int)(local_168 - uVar1) < 5) {
      uVar2 = local_168 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy(pcVar5 + uVar1,&DAT_040a3735,(ulong)uVar2);
      pcVar5[(ulong)uVar2 + (ulong)uVar1] = '\0';
    }
    pcVar5 = local_288;
    (**(code **)(local_290 + 0x18))(&local_290);
    lVar10 = 0;
    do {
      if (local_288[lVar10] == '\0') goto LAB_03c120cc;
      if (local_288[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03c120cc;
      }
      if (local_288[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03c120cc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03c120cc:
    uVar1 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
    uVar2 = 4;
    if ((int)(local_280 - uVar1) < 5) {
      uVar2 = local_280 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy(pcVar5 + uVar1,&DAT_040d7449,(ulong)uVar2);
      pcVar5[(ulong)uVar2 + (ulong)uVar1] = '\0';
    }
    lVar10 = FUN_03eba220(&local_178,0x1000,0,1);
    lVar7 = FUN_03eba220(&local_290,0x1000,0,1);
    local_2a0 = puVar3 + 0x10;
    local_298 = "System/Font/nvn_font_jis1_tbl.bin";
    lVar8 = FUN_03eba220(&local_2a0,0x1000,0,1);
    puVar3 = PTR_DAT_04bb3350;
    uVar6 = (ulong)local_2a0 >> 0x20;
    local_2a0 = (undefined *)(uVar6 << 0x20);
    if (*(long *)(*(long *)puVar4 + 0x100) != 0) {
      local_2a0 = (undefined *)(uVar6 << 0x20);
      plVar12 = *(long **)(*(long *)puVar4 + 0x100);
      if (plVar12 == (long *)0x0) {
        lVar13 = 1;
      }
      else {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar13 = *(long *)(lVar9 + 0xa8);
        *(long **)(lVar9 + 0xa8) = plVar12;
      }
      (**(code **)(*plVar12 + 0x78))(plVar12);
      FUN_038c11d8(0);
      (**(code **)(*plVar12 + 0x78))(plVar12);
      if (lVar13 != 1) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        *(long *)(lVar9 + 0xa8) = lVar13;
      }
    }
    puVar4 = PTR_DAT_04bd0c60;
    FUN_038c1340(*(undefined8 *)PTR_DAT_04bd0c60,uVar11,*(undefined8 *)(lVar7 + 8),
                 *(undefined4 *)(lVar7 + 0x10),*(undefined8 *)(lVar10 + 8),
                 *(undefined4 *)(lVar10 + 0x10),*(undefined8 *)(lVar8 + 8),0x100000);
    *(undefined8 *)PTR_DAT_04bd0ef8 = *(undefined8 *)puVar4;
  }
  return;
}

