
bool FUN_011e78c8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  bool bVar6;
  long lVar7;
  undefined4 local_50;
  int local_4c;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined8 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))) {
    uVar2 = FUN_0277d6c4(param_2);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(&local_48,param_2);
      iVar3 = FUN_0123db50(&local_40,local_38);
      if ((iVar3 == 0x2d) || (iVar3 = FUN_0123db50(&local_40,local_38), iVar3 - 0x23U < 9)) {
        piVar5 = &DAT_050dfb30;
        goto LAB_011e79a8;
      }
    }
  }
  piVar5 = &DAT_050dfb2c;
LAB_011e79a8:
  local_4c = *piVar5;
  if (local_4c == 0) {
    bVar6 = false;
  }
  else {
    local_50 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_48,&local_4c,&local_50,0);
    plVar1 = local_48;
    if (local_48 != (long *)0x0) {
      if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb50);
      }
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
      if ((uVar4 & 1) == 0) {
        local_3f = '\0';
      }
    }
    bVar6 = ((local_48 != (long *)0x0 && local_40 != '\0') && local_3f != '\0') && local_3e != '\0';
    if (((local_48 != (long *)0x0 && local_40 != '\0') && local_3f != '\0') && local_3e != '\0') {
      FUN_011c8b20(local_48,*(undefined4 *)(param_2 + 0x58),param_3 & 1);
    }
  }
  return bVar6;
}

