
void FUN_01386e50(uint param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x7a57de51) {
    return;
  }
  FUN_01386d60(auStack_60);
  local_70 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      if (iVar4 != 0x758f7eaf) {
        puVar1 = &DAT_055c04a0;
      }
      puVar7 = puVar1;
    }
  }
  local_6c = *(undefined4 *)(puVar7 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  uVar5 = FUN_014fd19c(&local_78,auStack_58,0);
  if ((uVar5 & 1) == (param_1 & 1)) {
    return;
  }
  puVar8 = (uint *)FUN_014fbd50(&local_78,0,auStack_58);
  puVar3 = PTR_DAT_04bb27c0;
  uVar5 = *puVar8;
  if (uVar5 == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar5 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar5)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar9 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto joined_r0x01387010;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01387010;
    }
  }
  uVar5 = 0;
joined_r0x01387010:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    uVar2 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
    if (((((int)lVar10 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar2 >> 4 & 1) != 0)) &&
       (plVar11[0x151] != 0)) {
      FUN_01433290(plVar11[0x151],param_2,0);
    }
  }
  return;
}

