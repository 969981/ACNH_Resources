
void FUN_0369a030(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **local_60;
  long **pplStack_58;
  long *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_40 = (long *)0x0;
  lVar10 = *(long *)PTR_DAT_04bb3968;
  local_38 = 0x100;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    uVar1 = *param_1;
    if ((((uVar1 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar1)) {
      plVar8 = (long *)0x0;
    }
    local_40 = plVar8;
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if ((0x10 < iVar4) &&
         (4 < *(uint *)(lVar7 + 0x5e8) ||
          (1 << (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 0x1aU) == 0)) goto LAB_0369a104;
    }
    else {
LAB_0369a104:
      local_38._0_2_ = (ushort)(byte)local_38;
    }
    uVar1 = local_38;
    if (plVar8 == (long *)0x0) goto LAB_0369a158;
    local_38 = CONCAT31(local_38._1_3_,(int)plVar8[0x2a] == 1);
    uVar3 = local_38;
    local_38._3_1_ = SUB41(uVar1,3);
    local_38._0_2_ = (ushort)uVar3;
    local_38 = CONCAT13(local_38._3_1_,
                        CONCAT12((char)(*(uint *)(plVar8 + 0x49) >> 4),(ushort)local_38)) &
               0xff01ffff;
    if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb59a0);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5998);
    if ((uVar6 & 1) != 0) goto LAB_0369a158;
  }
  local_38._0_2_ = (ushort)(byte)local_38;
LAB_0369a158:
  if ((((lVar10 != 0) && (local_40 != (long *)0x0)) && ((byte)local_38 != '\0')) &&
     (local_38._1_1_ != '\0')) {
    pplStack_58 = &local_40;
    local_60 = &PTR_FUN_04b436c0;
    if (*(int *)(lVar10 + 0xb88) != 0) {
      lVar7 = (long)*(int *)(lVar10 + 0xb88) << 3;
      puVar9 = *(undefined8 **)(lVar10 + 0xb90);
      do {
        (*(code *)*local_60)(&local_60,*puVar9);
        lVar7 = lVar7 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  return;
}

