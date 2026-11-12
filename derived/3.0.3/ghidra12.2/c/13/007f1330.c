
void FUN_007f1330(undefined8 param_1,char *param_2,ushort *param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined1 auStack_170a [2];
  undefined1 auStack_1708 [8];
  long local_1700;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_007ef010(auStack_170a,param_3);
  FUN_007e4920(auStack_1708,auStack_170a);
  uVar7 = FUN_007e4bb0(auStack_1708);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (local_1700 == 0) {
    return;
  }
  lVar10 = *(long *)(local_1700 + 0x28);
  if (lVar10 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(local_1700 + 0x28) == 0) goto LAB_007f13f4;
      plVar8 = *(long **)(*(long *)(local_1700 + 0x28) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_68 = *(undefined8 *)(local_1700 + 8);
      uStack_60 = *(undefined8 *)(local_1700 + 0x10);
      local_58 = 0x2a8;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
LAB_007f13f4:
  FUN_027c1640(*(long *)(local_1700 + 0x10) + *(long *)(local_1700 + 8),param_4);
  lVar10 = *DAT_0537d558;
  bVar4 = *(byte *)(lVar10 + 0x473);
  pcVar11 = PTR_DAT_04bc1220;
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar2 = (uint *)(lVar10 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pcVar11 = (char *)(lVar10 + 0x472);
    }
  }
  if (*param_2 == *pcVar11) {
    uVar3 = *param_3;
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar12 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar12 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007f14ac;
        uVar12 = uVar12 + 1;
      } while (DAT_04c8c0f0 != uVar12);
    }
    uVar12 = 0;
LAB_007f14ac:
    local_68 = CONCAT44(local_68._4_4_,(int)uVar12);
    if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    lVar10 = DAT_0520f098;
    uVar1 = (uint)local_68;
    if (DAT_04c8c0f0 <= (uint)local_68) {
      uVar1 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) == 0) {
      if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
        FUN_01525dc8(DAT_0520f098,param_3);
      }
      uVar12 = (ulong)*param_3 & 0x7f;
      if ((uint)uVar12 < 100) {
        lVar10 = lVar10 + (uVar12 >> 3);
        *(byte *)(lVar10 + 0x2e) = *(byte *)(lVar10 + 0x2e) | (byte)(1 << (ulong)(*param_3 & 7));
      }
    }
  }
  puVar5 = PTR_DAT_04bb3128;
  if ((DAT_0537d558 != (long *)0x0) && ((int)DAT_0537d558[0x10] == 3)) {
    uVar3 = *param_3;
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar12 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar12 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007f1590;
        uVar12 = uVar12 + 1;
      } while (DAT_04c8c0f0 != uVar12);
    }
    uVar12 = 0;
LAB_007f1590:
    local_68 = CONCAT44(local_68._4_4_,(int)uVar12);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar1 = (uint)local_68;
    if (DAT_04c8c0f0 <= (uint)local_68) {
      uVar1 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) == 0x1a) {
      uVar3 = *param_3;
      if ((uVar3 & 0x780) == 0) {
        if ((uint)((ulong)uVar3 & 0x7f) < 100) {
          lVar10 = *(long *)PTR_DAT_04bb4c80 + (((ulong)uVar3 & 0x7f) >> 3);
          *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) | (byte)(1 << (ulong)(uVar3 & 7));
          uVar3 = *param_3;
        }
        *(ushort *)(DAT_05739190 + 0x500) = uVar3;
      }
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(local_1700 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(local_1700 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
  return;
}

