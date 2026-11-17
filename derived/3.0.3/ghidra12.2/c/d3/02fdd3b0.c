
void FUN_02fdd3b0(ulong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  float fStack_54;
  long local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = 0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 != 0) {
    if (((((int)param_1 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             (param_1 >> 0x14 & 0xfff) * 8), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || ((int)plVar7[0x46] != (int)param_1)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_02fdd48c;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02fdd48c:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar8;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        uStack_5c = 0;
        local_60 = 0;
        local_48 = plVar7[0x51];
        fStack_54 = 0.0;
        lVar6 = plVar7[0xd];
        if (lVar6 != 0) {
          local_60 = *(undefined4 *)(lVar6 + 0x278);
          uStack_5c = *(undefined4 *)(lVar6 + 0x27c);
          uVar9 = *(undefined4 *)(lVar6 + 0x280);
          fStack_54 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x2b4));
          fStack_54 = fStack_54 * 1.4629181e-09;
        }
        goto LAB_02fdd534;
      }
    }
  }
  uStack_5c = 0;
  local_60 = 0;
  fStack_54 = 0.0;
LAB_02fdd534:
  local_80 = *param_3;
  local_78 = 0;
  local_74 = *param_2;
  local_6c = *(undefined4 *)(param_2 + 1);
  local_68 = 0x300000004;
  uStack_7c = param_4;
  local_58 = uVar9;
  FUN_029a7898(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_80);
  return;
}

