
void FUN_02825b10(long param_1,undefined1 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined4 local_80;
  uint uStack_7c;
  long local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_98 = (undefined *)0x30e2;
  FUN_0277d4ac(&local_98);
  puVar6 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (undefined4)local_98;
  uStack_7c = local_98._4_4_;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar6 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_98);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0)) {
        local_78 = lVar11;
      }
    }
  }
  FUN_01af2bc0(&local_88,10);
  local_38 = CONCAT44(uStack_7c,local_80);
  FUN_01b46be0(&local_88);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar8 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar12 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar12 * 4) == 0x2a) goto LAB_02825c6c;
      uVar12 = uVar12 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar12);
  }
  uVar12 = 0;
LAB_02825c6c:
  uVar5 = *(ushort *)(param_1 + 0x10);
  bVar3 = *(byte *)(param_1 + 0x12);
  bVar4 = *(byte *)(param_1 + 0x13);
  nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
  local_68 = (undefined4)uVar12;
  uStack_64 = 0x16;
  uStack_7c = (uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5;
  local_5c = (undefined4)local_38;
  uStack_58 = local_38._4_4_;
  local_54 = 0;
  local_80 = uVar2;
  local_60 = param_2;
  lVar11 = (**(code **)(local_88 + 0x20))(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
  if (lVar11 != 0) {
    plVar9 = *(long **)PTR_DAT_04bb4fa8;
    lVar10 = *plVar9;
    plVar1 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
    *plVar9 = (long)plVar1;
    *plVar1 = lVar10;
    plVar1[1] = (long)plVar9;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar1;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "PynEvent_SendMailThisYear";
  FUN_0274d104((undefined4 *)(param_1 + 0x30),&local_98,1);
  return;
}

