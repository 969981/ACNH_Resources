
void FUN_008bf450(long param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *__dest;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  size_t __n;
  long *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb3350;
  plVar1 = (long *)(param_1 + 0x37f38);
  plVar7 = *(long **)(param_1 + 0x307d0);
  if (plVar7 != (long *)0x0) {
    lVar11 = *(long *)(param_1 + 0x38020);
    if (lVar11 == 0) {
      lVar10 = 1;
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)(lVar3 + 0xa8);
      *(long *)(lVar3 + 0xa8) = lVar11;
      plVar7 = *(long **)(param_1 + 0x307d0);
    }
    uVar4 = *(uint *)(param_1 + 0x358);
    if (0 < (int)uVar4) {
      __dest = *(undefined8 **)(param_1 + 0x360);
      uVar6 = 0;
      __n = (long)(int)uVar4 * 8;
      do {
        __n = __n - 8;
        if ((long *)*__dest == plVar7) {
          iVar5 = (int)uVar6;
          if (-1 < iVar5) {
            if (iVar5 < (int)uVar4) {
              if (iVar5 + 1 < (int)uVar4) {
                memmove(__dest,__dest + 1,__n);
                uVar4 = *(uint *)(param_1 + 0x358);
              }
              *(uint *)(param_1 + 0x358) = uVar4 - 1;
            }
            plVar7[4] = 0;
            plVar7 = *(long **)(param_1 + 0x307d0);
          }
          break;
        }
        uVar6 = uVar6 + 1;
        __dest = __dest + 1;
      } while (uVar4 != uVar6);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    *(undefined8 *)(param_1 + 0x307d0) = 0;
    if (lVar10 != 1) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar11 + 0xa8) = lVar10;
    }
  }
  if (param_2 != 0x22) {
    *(undefined1 *)(param_1 + 0x37fb4) = 0;
    *(undefined1 *)(param_1 + 0x37fb8) = 0;
    *(undefined4 *)(param_1 + 0x307b0) = 0;
    *(undefined1 *)(param_1 + 0x307e0) = 0;
  }
  if (*(char *)(param_1 + 0x37fb7) == '\0') goto LAB_008bf728;
  *(undefined1 *)(param_1 + 0x37fb7) = 0;
  local_128 = *(undefined8 *)(param_1 + 0x30890);
  local_104 = *(undefined8 *)(param_1 + 0x308b4);
  uVar8 = *(undefined8 *)(param_1 + 0x30950);
  local_120 = *(undefined4 *)(param_1 + 0x30898);
  local_f4 = *(undefined8 *)(param_1 + 0x308c4);
  local_fc = *(undefined8 *)(param_1 + 0x308bc);
  local_11c = *(undefined8 *)(param_1 + 0x3089c);
  local_ec = *(undefined4 *)(param_1 + 0x308cc);
  local_6c = *(undefined4 *)(param_1 + 0x3094c);
  local_114 = *(undefined8 *)(param_1 + 0x308a4);
  local_10c = *(undefined8 *)(param_1 + 0x308ac);
  local_e8 = *(undefined8 *)(param_1 + 0x308d0);
  local_e0 = *(undefined4 *)(param_1 + 0x308d8);
  local_c4 = *(undefined8 *)(param_1 + 0x308f4);
  local_bc = *(undefined8 *)(param_1 + 0x308fc);
  local_b4 = *(undefined8 *)(param_1 + 0x30904);
  local_ac = *(undefined4 *)(param_1 + 0x3090c);
  local_dc = *(undefined8 *)(param_1 + 0x308dc);
  local_d4 = *(undefined8 *)(param_1 + 0x308e4);
  local_cc = *(undefined8 *)(param_1 + 0x308ec);
  local_a8 = *(undefined8 *)(param_1 + 0x30910);
  local_a0 = *(undefined4 *)(param_1 + 0x30918);
  local_74 = *(undefined8 *)(param_1 + 0x30944);
  local_7c = *(undefined8 *)(param_1 + 0x3093c);
  local_84 = *(undefined8 *)(param_1 + 0x30934);
  local_8c = *(undefined8 *)(param_1 + 0x3092c);
  local_94 = *(undefined8 *)(param_1 + 0x30924);
  local_9c = *(undefined8 *)(param_1 + 0x3091c);
  uVar4 = *(uint *)(param_1 + 0x307e8);
  local_68 = uVar8;
  if (uVar4 == 0x62) {
    ppuVar9 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
LAB_008bf6c8:
    puStack_130 = (undefined8 *)*ppuVar9;
  }
  else {
    if (uVar4 < 99) {
      ppuVar9 = &PTR_s_cNormal_04922de8 + uVar4;
      goto LAB_008bf6c8;
    }
    puStack_130 = &DAT_0407ebb1;
  }
  local_150 = *(undefined8 *)(param_1 + 0x30970);
  uStack_148 = *(undefined8 *)(param_1 + 0x30978);
  local_138 = PTR_DAT_04bb2020 + 0x10;
  local_140 = *(undefined8 *)(param_1 + 0x30980);
  FUN_008c68e0(param_1,&local_128,&local_150,&local_138,0,0,
               (int)uVar8 == (int)((ulong)uVar8 >> 0x20));
  *(undefined4 *)(param_1 + 0x315d8) = 0;
  *(undefined4 *)(param_1 + 0x315d4) = local_a8._4_4_;
LAB_008bf728:
  uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((uVar6 & 1) != 0) {
    *plVar1 = (long)&PTR_LAB_04925c98;
  }
  *(undefined8 *)(param_1 + 0x307d8) = 1;
  return;
}

