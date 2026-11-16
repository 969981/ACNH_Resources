
bool FUN_0253c110(byte *param_1)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_24;
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_24 = *puVar7;
  FUN_0071c8d0(&local_38,&local_24,PTR_DAT_04bb3238,0);
  plVar3 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_2f = '\0';
    }
  }
  puVar2 = PTR_DAT_04bb2720;
  bVar1 = ((local_38 != (long *)0x0 && local_30 != '\0') && local_2f != '\0') && local_2e != '\0';
  if (((local_38 == (long *)0x0 || local_30 == '\0') || local_2f == '\0') || local_2e == '\0') {
    return bVar1;
  }
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  uStack_5c = 0;
  if (lVar8 == 0) goto LAB_0253c25c;
  if (*(long *)(lVar8 + 0x330) != 0) {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
    iVar4 = FUN_006bd550(*puVar6,0);
    uStack_5c = 0;
    if (iVar4 != 0x758f7eaf) goto LAB_0253c25c;
    uStack_5c = 0;
    if (*(long *)puVar2 == 0) goto LAB_0253c25c;
    lVar8 = *(long *)(*(long *)puVar2 + 0x330);
    if (lVar8 != 0) {
      FUN_029174a0(lVar8,&local_50,0);
      uStack_5c = local_40;
      goto LAB_0253c25c;
    }
  }
  uStack_5c = 0;
LAB_0253c25c:
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_02452aa0(local_38,&local_68);
  return bVar1;
}

