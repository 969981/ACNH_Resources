
undefined8 FUN_01de4394(long param_1,void *param_2,undefined8 param_3,uint param_4)

{
  undefined8 *__s;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined *local_610;
  char *pcStack_608;
  undefined8 local_600;
  undefined8 *local_5f8;
  undefined1 *puStack_5f0;
  undefined *local_5e8;
  undefined *puStack_5e0;
  undefined1 local_59c;
  undefined1 local_540;
  undefined8 local_53c;
  undefined4 local_534;
  undefined1 local_530;
  undefined1 local_52c;
  undefined8 local_52a;
  undefined8 uStack_522;
  undefined8 local_51a;
  undefined8 uStack_512;
  undefined8 local_50a;
  undefined8 uStack_502;
  undefined8 local_4fa;
  undefined8 uStack_4f2;
  undefined8 local_4ea;
  undefined8 uStack_4e2;
  undefined8 local_4da;
  undefined8 uStack_4d2;
  undefined1 auStack_4ca [480];
  undefined8 local_2ea;
  undefined8 uStack_2e2;
  undefined8 local_2da;
  undefined8 uStack_2d2;
  undefined8 local_2ca;
  undefined8 uStack_2c2;
  undefined8 local_2ba;
  undefined8 uStack_2b2;
  undefined8 local_2aa;
  undefined8 uStack_2a2;
  undefined8 local_29a;
  undefined8 uStack_292;
  undefined4 local_28a;
  undefined *local_280;
  uint local_278;
  undefined4 local_274;
  long local_270;
  uint local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  ushort local_11c;
  short local_11a;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [60];
  undefined4 local_6c [3];
  
  memset(param_2,0,0x3c8);
  puVar12 = (undefined2 *)((long)param_2 + 0xc0);
  *puVar12 = 0xfffe;
  *(undefined1 *)((long)param_2 + 0xc3) = 0;
  FUN_0277d4ac(puVar12);
  __s = (undefined8 *)((long)param_2 + 0xce);
  *(undefined1 *)((long)param_2 + 200) = 0;
  *(undefined1 *)((long)param_2 + 0xcc) = 0;
  memset(__s,0,0x2a2);
  *(undefined2 *)((long)param_2 + 0x370) = 0xfffe;
  *(undefined8 *)((long)param_2 + 0x374) = 0;
  *(undefined8 *)((long)param_2 + 0x37c) = 0;
  *(undefined8 *)((long)param_2 + 900) = 0;
  *(undefined8 *)((long)param_2 + 0x38c) = 0;
  *(undefined8 *)((long)param_2 + 0x394) = 0;
  *(undefined8 *)((long)param_2 + 0x39c) = 0;
  *(undefined8 *)((long)param_2 + 0x3a4) = 0;
  *(undefined8 *)((long)param_2 + 0x3ac) = 0;
  lVar9 = *(long *)(param_1 + 8);
  uVar11 = (ulong)*(uint *)(lVar9 + 0x10);
  if (1 < *(uint *)(lVar9 + 0x10)) {
    uVar11 = 0;
  }
  if (*(int *)(*(long *)(lVar9 + uVar11 * 8) + 0x10) <= (int)param_4) {
    return 0;
  }
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  local_250 = 0;
  local_21c = 0;
  local_214 = 0;
  local_20c = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_258 = 0;
  local_260 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  uStack_124 = 0;
  uVar11 = (ulong)*(uint *)(lVar9 + 0x10);
  if (1 < *(uint *)(lVar9 + 0x10)) {
    uVar11 = 0;
  }
  puVar10 = *(uint **)(lVar9 + uVar11 * 8);
  lVar9 = *(long *)(puVar10 + 2);
  if (*puVar10 <= param_4) {
    param_4 = 0;
  }
  if (*(long *)(lVar9 + (long)(int)param_4 * 0x410 + 0x408) != 0) {
    FUN_00699eb4(auStack_a8,lVar9 + (long)(int)param_4 * 0x410 + 8);
    uVar11 = FUN_0069aa28(auStack_a8);
    puVar1 = PTR_DAT_04bc11d0;
    if ((uVar11 & 1) != 0) {
      local_5f8 = &local_260;
      local_5e8 = PTR_DAT_04bb2020 + 0x10;
      puStack_5e0 = &DAT_0409f795;
      puStack_5f0 = auStack_a8;
      uVar11 = (*(code *)**(undefined8 **)(PTR_DAT_04bc11d0 + 0x30))
                         (PTR_DAT_04bc11d0 + 0x30,&local_5f8);
      uVar4 = (*(code *)**(undefined8 **)(puVar1 + 0xe0))(puVar1 + 0xe0,&local_5f8);
      uVar5 = (*(code *)**(undefined8 **)(puVar1 + 400))(puVar1 + 400,&local_5f8);
      uVar6 = (*(code *)**(undefined8 **)(puVar1 + 0x240))(puVar1 + 0x240,&local_5f8);
      uVar7 = (*(code *)**(undefined8 **)(puVar1 + 0x2f0))(puVar1 + 0x2f0,&local_5f8);
      uVar8 = (*(code *)**(undefined8 **)(puVar1 + 0x3a0))(puVar1 + 0x3a0,&local_5f8);
      if ((((((uVar11 & 1) != 0) || ((uVar4 & 1) != 0)) || ((uVar5 & 1) != 0)) ||
          (((uVar6 & 1) != 0 || ((uVar7 & 1) != 0)))) || ((uVar8 & 1) != 0)) {
        local_264 = 0;
        local_268 = (uint)local_11c;
        FUN_0277d4ac(&local_268);
        puVar1 = PTR_DAT_04bb43c0;
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(&local_268);
        lVar9 = *(long *)puVar1;
        if (lVar9 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            local_270 = 0;
            local_280 = PTR_DAT_04bc0510 + 0x10;
            local_278 = local_268;
            local_274 = local_264;
            uVar2 = FUN_0277d6c4(&local_278);
            if (*(long *)puVar1 != 0) {
              lVar9 = *(long *)(lVar9 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                lVar9 = *(long *)PTR_DAT_04bc0428;
                uVar2 = FUN_0277d6c4(&local_268);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
                   (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8), lVar9 != 0))
                {
                  local_270 = lVar9;
                }
              }
            }
            if (local_11a != -1) {
              iVar3 = FUN_01ad7260(&local_280);
              if (iVar3 == 0) {
                return 0;
              }
              if (local_11a < 0) {
                return 0;
              }
              iVar3 = FUN_01ad7260(&local_280);
              if (iVar3 <= local_11a) {
                return 0;
              }
              FUN_01af1f00(&local_280);
            }
            local_5f8 = (undefined8 *)((ulong)local_5f8 & 0xffffffffffff0000);
            local_59c = 0;
            local_540 = 0;
            local_53c = 0xfffe00000000;
            local_534 = 0;
            FUN_0277d4ac((long)&local_53c + 4);
            local_530 = 0;
            local_52c = 0;
            memset(&local_52a,0,0x2a2);
            local_28a = CONCAT22(0xfffe,(undefined2)local_28a);
            local_600 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar3 != 0)) {
              FUN_00dd5f80(PTR_DAT_04bb8aa0);
              __cxa_guard_release(PTR_DAT_04bb8aa8);
            }
            if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
              uVar11 = 0;
              do {
                if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x59)
                goto LAB_01de47f4;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
            }
            uVar11 = 0;
LAB_01de47f4:
            local_6c[0] = (undefined4)uVar11;
            local_610 = PTR_DAT_04bb2020 + 0x10;
            pcStack_608 = "MAIL_SP_Blanco";
            FUN_006d8678(auStack_a8,"0%02d",1);
            FUN_006d8678(auStack_e0,"1%02d",1);
            FUN_006d8678(auStack_118,"2%02d",1);
            FUN_027b1524(&local_5f8,local_6c,param_3,&local_610,auStack_a8,auStack_e0,auStack_118,
                         &local_600,0,0,0);
            memset(param_2,0,0x3c8);
            *(undefined2 *)((long)param_2 + 0xc0) = 0xfffe;
            FUN_0277d4ac(puVar12);
            *(undefined1 *)((long)param_2 + 200) = 0;
            *(undefined1 *)((long)param_2 + 0xcc) = 0;
            memset(__s,0,0x2a2);
            *(undefined2 *)((long)param_2 + 0x370) = 0xfffe;
            *(undefined8 *)((long)param_2 + 0x374) = 0;
            *(undefined8 *)((long)param_2 + 0x37c) = 0;
            *(undefined8 *)((long)param_2 + 900) = 0;
            *(undefined8 *)((long)param_2 + 0x38c) = 0;
            *(undefined8 *)((long)param_2 + 0x394) = 0;
            *(undefined8 *)((long)param_2 + 0x39c) = 0;
            *(undefined8 *)((long)param_2 + 0x3a4) = 0;
            *(undefined8 *)((long)param_2 + 0x3ac) = 0;
            FUN_027adf94(param_2,&local_5f8);
            *(undefined1 *)((long)param_2 + 0xcc) = local_52c;
            *(undefined8 *)((long)param_2 + 0x10e) = local_4ea;
            *(undefined8 *)((long)param_2 + 0x116) = uStack_4e2;
            *(undefined8 *)((long)param_2 + 0x11e) = local_4da;
            *(undefined8 *)((long)param_2 + 0x126) = uStack_4d2;
            *(undefined8 *)((long)param_2 + 0xee) = local_50a;
            *(undefined8 *)((long)param_2 + 0xf6) = uStack_502;
            *(undefined8 *)((long)param_2 + 0xfe) = local_4fa;
            *(undefined8 *)((long)param_2 + 0x106) = uStack_4f2;
            *__s = local_52a;
            *(undefined8 *)((long)param_2 + 0xd6) = uStack_522;
            *(undefined8 *)((long)param_2 + 0xde) = local_51a;
            *(undefined8 *)((long)param_2 + 0xe6) = uStack_512;
            memcpy((void *)((long)param_2 + 0x12e),auStack_4ca,0x1e0);
            *(undefined8 *)((long)param_2 + 0x34e) = local_2aa;
            *(undefined8 *)((long)param_2 + 0x356) = uStack_2a2;
            *(undefined8 *)((long)param_2 + 0x35e) = local_29a;
            *(undefined8 *)((long)param_2 + 0x366) = uStack_292;
            *(undefined8 *)((long)param_2 + 0x32e) = local_2ca;
            *(undefined8 *)((long)param_2 + 0x336) = uStack_2c2;
            *(undefined8 *)((long)param_2 + 0x33e) = local_2ba;
            *(undefined8 *)((long)param_2 + 0x346) = uStack_2b2;
            *(undefined8 *)((long)param_2 + 0x30e) = local_2ea;
            *(undefined8 *)((long)param_2 + 0x316) = uStack_2e2;
            *(undefined8 *)((long)param_2 + 0x31e) = local_2da;
            *(undefined8 *)((long)param_2 + 0x326) = uStack_2d2;
            *(undefined4 *)((long)param_2 + 0x36e) = local_28a;
            *(uint *)((long)param_2 + 0xc0) = local_278;
            *(undefined4 *)((long)param_2 + 0xc4) = local_274;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

