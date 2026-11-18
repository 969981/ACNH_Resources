
void FUN_0339c470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_x21;
  long *plVar12;
  long lVar13;
  long lVar14;
  long unaff_x28;
  undefined1 auVar15 [16];
  undefined **ppuStack_1088;
  undefined4 uStack_1080;
  undefined2 uStack_107c;
  byte bStack_107a;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined *puStack_120;
  char *pcStack_118;
  undefined8 *puStack_110;
  code *pcStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined **ppuStack_b8;
  undefined1 *local_b0;
  undefined **local_a0;
  undefined1 uStack_81;
  long local_80;
  undefined8 local_78 [2];
  uint local_64;
  
  puVar2 = PTR_DAT_04bc4cc8;
  puVar1 = PTR_DAT_04bc4cc0;
  local_b0 = &uStack_81;
  ppuStack_b8 = &local_c0;
  local_c0 = &DAT_04b24218;
  local_a0 = ppuStack_b8;
  if (*(long *)(param_1 + 0x48) != param_1 + 0x40) {
    lVar13 = (long)*(int *)(param_1 + 0x54);
    local_d0 = local_78;
    lVar14 = *(long *)(param_1 + 0x48) - lVar13;
    local_c8 = -lVar13;
    local_d8 = PTR_DAT_04bc4cd0 + 0x10;
LAB_0339c500:
    lVar8 = *(long *)(lVar14 + 0xa0);
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x80) != lVar8 + 0x78) {
        unaff_x28 = (long)*(int *)(lVar8 + 0x8c);
        unaff_x21 = (undefined8 *)(*(long *)(lVar8 + 0x80) - unaff_x28);
        do {
          if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar2), iVar3 != 0)) {
            *(undefined **)puVar1 = local_d8;
            __cxa_guard_release(puVar2);
          }
          if (((((unaff_x21 != (undefined8 *)0x0) &&
                (uVar4 = (**(code **)*unaff_x21)(unaff_x21,puVar1), (uVar4 & 1) != 0)) &&
               (lVar9 = unaff_x21[0x42], lVar9 != 0)) &&
              ((lVar11 = *(long *)(lVar9 + 0x48), lVar11 != 0 && (*(int *)(lVar11 + 0x18) != 0))))
             && ((**(long **)(lVar11 + 0x20) != 0 &&
                 (*(long *)(**(long **)(lVar11 + 0x20) + 0x10) != 0)))) {
            if (*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) != 0) {
              *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) + 0x26c) = 1;
              lVar9 = unaff_x21[0x42];
            }
            if (((*(int *)(*(long *)(lVar9 + 0x48) + 0x18) != 0) &&
                (lVar9 = **(long **)(*(long *)(lVar9 + 0x48) + 0x20), lVar9 != 0)) &&
               (lVar11 = *(long *)(lVar9 + 0x10), lVar11 != 0)) {
              local_64 = 1;
              *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(lVar11 + 0x14a0);
              *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(lVar11 + 0x14a4);
              *local_d0 = 0;
              local_d0[1] = 0;
              puVar10 = (undefined8 *)(lVar11 + 0x20) + (ulong)local_64 * 4;
              if (1 < local_64) {
                puVar10 = (undefined8 *)(lVar11 + 0x20);
              }
              local_80 = lVar11;
              (**(code **)*puVar10)(puVar10,(ulong)local_64,&local_80);
              *(undefined8 *)(lVar9 + 0x10) = 0;
            }
          }
          unaff_x21 = (undefined8 *)(*(long *)((long)unaff_x21 + unaff_x28 + 8) - unaff_x28);
        } while (unaff_x21 != (undefined8 *)((lVar8 + 0x78) - unaff_x28));
      }
    }
    local_80 = lVar14;
    if (local_a0 != (undefined **)0x0) goto code_r0x0339c650;
    auVar15 = FUN_032d2700();
    uVar7 = auVar15._8_8_;
    puVar6 = auVar15._0_8_;
    pcStack_108 = FUN_0339c6d0;
    puStack_f0 = puVar1;
    puStack_e8 = puVar2;
    plVar12 = (long *)(puVar6 + 4);
    puStack_110 = local_78 + 3;
    lStack_100 = unaff_x28;
    puStack_f8 = unaff_x21;
    uVar4 = (**(code **)(*plVar12 + 8))(plVar12);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0339c72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(puVar6 + 4))(plVar12,uVar7,*puVar6,puVar6 + 1);
      return;
    }
    switch(*puVar6) {
    case 0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xb;
      FUN_03387e08(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x19;
      FUN_033a36b4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x2e;
      FUN_033a38bc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x46;
      FUN_033a3ad8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x5e;
      FUN_033a43bc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 5:
      uStack_1078 = puVar6[2];
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1074 = 0x30;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6a;
      goto LAB_033a2858;
    case 6:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x78;
      FUN_0338948c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 7:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x88;
      FUN_033a8be0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x9c;
      FUN_033ab5d0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xae;
      FUN_033ab740(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 10:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc0;
      FUN_03387f84(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xb:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xce;
      FUN_033a8de0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xc:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xe2;
      FUN_033a914c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xd:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xf8;
      FUN_033a8f50(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x10d;
      FUN_033a4244(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x119;
      FUN_033a45f0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x10:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x127;
      FUN_033a7508(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x11:
      FUN_033a5bd0(&ppuStack_1088);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1078 = puVar6[2];
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x132;
      FUN_02e9b8ec(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x12:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x142;
      FUN_033a5c74(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x13:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x152;
      FUN_033a5e84(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x14:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x161;
      FUN_033a6da8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x15:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x170;
      FUN_033a6f18(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x16:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x189;
      FUN_033a77f8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x17:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 400;
      FUN_033ac578(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x18:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x19f;
      FUN_033a8408(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x19:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1ad;
      FUN_033a8580(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1bd;
      FUN_033a4768(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1cf;
      FUN_033a5308(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1dd;
      FUN_033a6c30(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1ed;
      FUN_033a7680(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1f9;
      FUN_033a8868(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x1f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x207;
      FUN_033a658c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x20:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x210;
      FUN_033a66fc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x21:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x21d;
      FUN_033a686c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x22:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x22a;
      FUN_033a9368(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x23:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x237;
      FUN_033aa5b4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x24:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x24a;
      FUN_033aa72c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x25:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x261;
      goto LAB_0339feb0;
    case 0x26:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x277;
      FUN_033b2960(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x27:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x288;
      FUN_033a5768(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x28:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x293;
      FUN_033a58e0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x29:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x2a4;
      FUN_033aa89c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x2be;
      FUN_033aaa0c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x2e1;
      FUN_033aab7c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x307;
      FUN_033aacec(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 799;
      FUN_033aae64(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x337;
      FUN_033ab098(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x2f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x353;
      FUN_033ab208(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x30:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x36d;
      FUN_033b0bd8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x31:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x382;
      FUN_033a4e04(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x32:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x38d;
      FUN_033ac7b4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x33:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3a0;
      FUN_033a5a58(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x34:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3b7;
      FUN_033a4c94(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x35:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3ca;
      FUN_033a4a48(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x36:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3d9;
      FUN_033a7200(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x37:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3e6;
      FUN_033a5480(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x38:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3ee;
      FUN_033a8a70(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x39:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x3fb;
      FUN_033a7384(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x40c;
      FUN_033aa1f8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x41b;
      FUN_033a3c50(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x42c;
      FUN_033a69e4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3d:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc8568 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x43a;
      FUN_0316b5d8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3e:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc70a0 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      uStack_1070 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x445;
      FUN_02ec283c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x3f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x44f;
      FUN_033aa43c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x40:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x460;
      FUN_033a3eb8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x41:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x478;
      FUN_033a5ff4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x42:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x485;
      FUN_033a5190(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x43:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x492;
      FUN_02d1c6cc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x44:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4a0;
      FUN_033a55f0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x45:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4af;
      FUN_033a40d4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x46:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4ca;
      FUN_033a61fc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x47:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4d2;
      FUN_033a6374(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x48:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4df;
      FUN_033b1c94(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x49:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4eb;
      FUN_033b27e8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x4fb;
      FUN_033a4f7c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x506;
      FUN_033a7088(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x514;
      FUN_033a7970(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x521;
      FUN_033a7ae0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x534;
      FUN_033a94e0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x4f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x53d;
      FUN_033a96fc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x50:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x552;
      FUN_033a9874(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x51:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x56c;
      FUN_033acca0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x52:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x580;
      FUN_033b148c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x53:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x595;
      FUN_033b1e0c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x54:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x5b2;
      FUN_033b2258(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x55:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x5cd;
      FUN_033b2468(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x56:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x5ee;
      FUN_033ab458(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x57:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x5ff;
      FUN_033b182c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x58:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x614;
      FUN_033b19a4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x59:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x62f;
      FUN_0315908c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x645;
      FUN_033a7d18(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x65f;
      FUN_033a7e90(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x67a;
      FUN_033a8000(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x68e;
      FUN_033a820c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6ab;
      FUN_033b0f74(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x5f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6ba;
      FUN_033b2678(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x60:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6c7;
      FUN_033b1264(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x61:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6db;
      FUN_033b10ec(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x62:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6e7;
      FUN_033b16bc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 99:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x6fb;
      FUN_033b1b1c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 100:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x70c;
      FUN_033ad3e0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x65:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x723;
      FUN_033af740(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x66:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x735;
      FUN_033aedf8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x67:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x74c;
      FUN_033af8b0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x68:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x761;
      FUN_033afab0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x69:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x773;
      FUN_033aef68(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x78c;
      FUN_033afcac(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x7a9;
      FUN_033afe24(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x7c7;
      FUN_033b028c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x7e2;
      FUN_033ad558(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x7eb;
      FUN_033ace10(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x6f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x804;
      FUN_033acf80(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x70:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x81d;
      FUN_033add48(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x71:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x835;
      FUN_033adf58(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x72:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x84d;
LAB_0339feb0:
      uStack_1070 = 0;
      uStack_1074 = 0;
      uStack_107c = 1;
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc7080 + 0x10);
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      FUN_02ec113c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x73:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x861;
      FUN_033ada54(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x74:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x880;
      FUN_033ad0f0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x75:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x895;
      FUN_033ae0d8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x76:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc7150 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x8ac;
      FUN_02ec8054(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x77:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x8ca;
      FUN_033ae3b8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x78:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x8df;
      FUN_033b07fc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x79:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x8f4;
      FUN_033ae248(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x8fc;
      FUN_02c53430(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7b:
      uStack_1078 = puVar6[2];
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc59c0 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_107c = 1;
      uStack_1074 = 0xffffffff;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x908;
      FUN_02c53818(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x923;
      FUN_033aeb08(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x93b;
      FUN_033af0d8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7e:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc7100 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x94d;
      FUN_02ec5d58(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x7f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x95c;
      FUN_033af3c8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x80:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x97f;
      FUN_033af5c8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x81:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x996;
      FUN_033ad268(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x82:
      ppuStack_1088 = &PTR_LAB_04b24040;
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x9ac;
      FUN_033adbcc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x83:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x9d1;
      FUN_033ac92c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x84:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x9ea;
      FUN_033acaa4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x85:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa07;
      FUN_033ad764(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x86:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa23;
      FUN_033ad8dc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x87:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa3f;
      FUN_033ae990(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x88:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa61;
      FUN_033ae528(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x89:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa79;
      FUN_033ae6a0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xa97;
      FUN_033ae818(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8b:
      bStack_107a = *(byte *)(puVar6 + 1);
      ppuStack_1088 = &PTR_LAB_04b24060;
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1070 = 0x4b24260;
      uStack_106c = 0;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xaaf;
      FUN_033aec80(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8c:
      bStack_107a = *(byte *)(puVar6 + 1);
      ppuStack_1088 = &PTR_LAB_04b24080;
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1070 = 0x4b24260;
      uStack_106c = 0;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xad5;
      FUN_033af250(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xafa;
      FUN_033aff9c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8e:
      bStack_107a = *(byte *)(puVar6 + 1);
      ppuStack_1088 = &PTR_LAB_04b240a0;
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1070 = 0x4b24288;
      uStack_106c = 0;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xb25;
      FUN_033b0114(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x8f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xb54;
      FUN_033b0490(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x90:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xb7e;
      FUN_033b0600(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x91:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbab;
      FUN_033a86f0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x92:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbba;
      FUN_033b0a64(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x93:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbd0;
      FUN_033a9a84(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x94:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbdb;
      FUN_033a9bf8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x95:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbee;
      FUN_033a9df8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x96:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xbf9;
      FUN_033a9ff8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x97:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc07;
      FUN_033ab940(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x98:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc17;
      FUN_033abb50(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x99:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc2b;
      FUN_033abf50(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9a:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc3d;
      FUN_033abd50(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9b:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc4f;
      FUN_033b0d48(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9c:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc6b;
      FUN_033b2010(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9d:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xc8c;
      FUN_033ac160(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9e:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xca7;
      FUN_033ac370(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0x9f:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xcc2;
      FUN_03387c94(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xcd2;
      FUN_03388ae0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xcdb;
      FUN_03388320(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xce7;
      FUN_0338852c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xcf8;
      FUN_03389318(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd0a;
      FUN_03388c54(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd16;
      FUN_03388dc8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa6:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc5ad0 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd1f;
      FUN_03388754(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa7:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd2f;
      FUN_033880f8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd3d;
      FUN_03388f3c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xa9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd4b;
      FUN_033888c8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xaa:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0xd5b;
      FUN_033891a4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xab:
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      goto LAB_033a2840;
    case 0xac:
      uStack_1078 = puVar6[2];
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1074 = 1;
      goto LAB_033a2840;
    case 0xad:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 2;
      goto LAB_033a2840;
    case 0xae:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 3;
      goto LAB_033a2840;
    case 0xaf:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 4;
      goto LAB_033a2840;
    case 0xb0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 5;
      goto LAB_033a2840;
    case 0xb1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 6;
      goto LAB_033a2840;
    case 0xb2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 7;
      goto LAB_033a2840;
    case 0xb3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 8;
      goto LAB_033a2840;
    case 0xb4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 9;
      goto LAB_033a2840;
    case 0xb5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 10;
      goto LAB_033a2840;
    case 0xb6:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0xb;
      goto LAB_033a2840;
    case 0xb7:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0xc;
      goto LAB_033a2840;
    case 0xb8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0xd;
      goto LAB_033a2840;
    case 0xb9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0xe;
      goto LAB_033a2840;
    case 0xba:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0xf;
      goto LAB_033a2840;
    case 0xbb:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x10;
      goto LAB_033a2840;
    case 0xbc:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x11;
      goto LAB_033a2840;
    case 0xbd:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x12;
      goto LAB_033a2840;
    case 0xbe:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x13;
      goto LAB_033a2840;
    case 0xbf:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x14;
      goto LAB_033a2840;
    case 0xc0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x15;
      goto LAB_033a2840;
    case 0xc1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x16;
      goto LAB_033a2840;
    case 0xc2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x17;
      goto LAB_033a2840;
    case 0xc3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x18;
      goto LAB_033a2840;
    case 0xc4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x19;
      goto LAB_033a2840;
    case 0xc5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1a;
      goto LAB_033a2840;
    case 0xc6:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1b;
      goto LAB_033a2840;
    case 199:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1c;
      goto LAB_033a2840;
    case 200:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1d;
      goto LAB_033a2840;
    case 0xc9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1e;
      goto LAB_033a2840;
    case 0xca:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x1f;
      goto LAB_033a2840;
    case 0xcb:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x20;
      goto LAB_033a2840;
    case 0xcc:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x21;
      goto LAB_033a2840;
    case 0xcd:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x22;
      goto LAB_033a2840;
    case 0xce:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x23;
      goto LAB_033a2840;
    case 0xcf:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x24;
      goto LAB_033a2840;
    case 0xd0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x25;
      goto LAB_033a2840;
    case 0xd1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x26;
      goto LAB_033a2840;
    case 0xd2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x27;
      goto LAB_033a2840;
    case 0xd3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x28;
      goto LAB_033a2840;
    case 0xd4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x29;
      goto LAB_033a2840;
    case 0xd5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2a;
      goto LAB_033a2840;
    case 0xd6:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2b;
      goto LAB_033a2840;
    case 0xd7:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2c;
      goto LAB_033a2840;
    case 0xd8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2d;
      goto LAB_033a2840;
    case 0xd9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2e;
      goto LAB_033a2840;
    case 0xda:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_1078 = puVar6[2];
      uStack_1074 = 0x2f;
LAB_033a2840:
      pcStack_118 = "SwkbdInputSeq";
LAB_033a2858:
      uStack_107c = 1;
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc5780 + 0x10);
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      FUN_033a48d8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xdb:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1164;
      FUN_033b2ad0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xdc:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc7060 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1074 = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x117d;
      FUN_02ebfc54(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xdd:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1191;
      FUN_033b2c40(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xde:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x11a9;
      FUN_033b2db8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xdf:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x11c6;
      FUN_033b2f30(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x11e7;
      FUN_033b312c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe1:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1207;
      FUN_033b32a4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1223;
      FUN_033b34b0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1233;
      FUN_033b3628(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x124e;
      FUN_033b3828(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x125a;
      FUN_033b39a0(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe6:
      FUN_033b3b18(&ppuStack_1088);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x126f;
      FUN_02ebe17c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe7:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1285;
      FUN_033b3c2c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1298;
      FUN_033b3d9c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xe9:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x12b1;
      FUN_033b3f18(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xea:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x12ca;
      FUN_033b4164(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xeb:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x12dc;
      FUN_033b4390(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xed:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1308;
      FUN_033b4500(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xee:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x131f;
      FUN_033b4678(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xef:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1338;
      FUN_033b47e8(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf0:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1358;
      FUN_033b4958(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf1:
      FUN_033b4ac8(&ppuStack_1088);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x136f;
      FUN_02da6f6c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf2:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x138a;
      FUN_033b4b5c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf3:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x13a8;
      FUN_033b4cd4(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf4:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x13c0;
      FUN_033b4e4c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf5:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x13e1;
      FUN_033b4fbc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf6:
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc62e0 + 0x10);
      bStack_107a = *(byte *)(puVar6 + 1);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      uStack_1070 = 0;
      uStack_106c = 0;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x13fb;
      FUN_033b51bc(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf7:
      bStack_107a = *(byte *)(puVar6 + 1);
      ppuStack_1088 = &PTR_LAB_04b240c0;
      uStack_1078 = puVar6[2];
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1074 = 0x30;
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x1418;
      FUN_033b532c(uVar7,&puStack_120,&ppuStack_1088);
      break;
    case 0xf8:
      bStack_107a = *(byte *)(puVar6 + 1);
      if (7 < bStack_107a) {
        bStack_107a = 0xff;
      }
      ppuStack_1088 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
      uStack_1080 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      uStack_107c = 1;
      uStack_1078 = puVar6[2];
      puStack_120 = PTR_DAT_04bb2020 + 0x10;
      pcStack_118 = PTR_s_cInvalid_04bc6398 + 0x143b;
      FUN_033b549c(uVar7,&puStack_120,&ppuStack_1088);
    }
    return;
  }
LAB_0339c69c:
  puVar10 = (undefined8 *)(local_c0 + 0x20);
  ppuVar5 = &local_c0;
LAB_0339c6a4:
  (*(code *)*puVar10)(ppuVar5);
  return;
code_r0x0339c650:
  (**(code **)(*local_a0 + 0x30))(local_a0,&local_80);
  lVar14 = *(long *)(lVar14 + lVar13 + 8) + local_c8;
  if (lVar14 == (param_1 + 0x40) - lVar13) goto code_r0x0339c678;
  goto LAB_0339c500;
code_r0x0339c678:
  if (local_a0 != &local_c0) {
    if (local_a0 == (undefined **)0x0) {
      return;
    }
    puVar10 = (undefined8 *)(*local_a0 + 0x28);
    ppuVar5 = local_a0;
    goto LAB_0339c6a4;
  }
  goto LAB_0339c69c;
}

