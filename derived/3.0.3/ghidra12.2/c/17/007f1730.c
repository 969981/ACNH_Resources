
void FUN_007f1730(undefined8 param_1,char *param_2,ushort *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_170a [2];
  undefined1 auStack_1708 [16];
  long local_16f8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_007ef010(auStack_170a,param_3);
  FUN_007e4920(auStack_1708,auStack_170a);
  uVar9 = FUN_007e4bb0(auStack_1708);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (local_16f8 == 0) {
    return;
  }
  lVar12 = *(long *)(local_16f8 + 0x28);
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar12 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(local_16f8 + 0x28) == 0) goto LAB_007f17f4;
      plVar10 = *(long **)(*(long *)(local_16f8 + 0x28) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_68 = *(undefined8 *)(local_16f8 + 8);
      uStack_60 = *(undefined8 *)(local_16f8 + 0x10);
      local_58 = 0x8a8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_007f17f4:
  puVar1 = (undefined4 *)(*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8));
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar13 = *(undefined8 *)(param_4 + 6);
  uVar16 = *(undefined8 *)(param_4 + 8);
  uVar17 = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_4 + 10);
  *(undefined8 *)(puVar1 + 0xc) = uVar17;
  *(undefined8 *)(puVar1 + 6) = uVar13;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  uVar17 = *(undefined8 *)(param_4 + 0x12);
  uVar13 = *(undefined8 *)(param_4 + 0xe);
  uVar16 = *(undefined8 *)(param_4 + 0x10);
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_4 + 0x14);
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x12) = uVar17;
  *(undefined8 *)(puVar1 + 0xe) = uVar13;
  uVar13 = *(undefined8 *)(param_4 + 0x15);
  uVar16 = *(undefined8 *)(param_4 + 0x17);
  *(undefined8 *)(puVar1 + 0x19) = *(undefined8 *)(param_4 + 0x19);
  *(undefined8 *)(puVar1 + 0x17) = uVar16;
  *(undefined8 *)(puVar1 + 0x15) = uVar13;
  uVar3 = param_4[0x1b];
  if (1 < uVar3) {
    uVar3 = 0;
  }
  puVar1[0x1b] = uVar3;
  *(undefined1 *)(puVar1 + 0x1c) = *(undefined1 *)(param_4 + 0x1c);
  *(undefined1 *)((long)puVar1 + 0x71) = *(undefined1 *)((long)param_4 + 0x71);
  *(undefined2 *)((long)puVar1 + 0x72) = *(undefined2 *)((long)param_4 + 0x72);
  uVar13 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(param_4 + 0x1e);
  *(undefined8 *)(puVar1 + 0x20) = uVar13;
  uVar17 = *(undefined8 *)(param_4 + 0x26);
  uVar13 = *(undefined8 *)(param_4 + 0x22);
  uVar16 = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x9d) = *(undefined8 *)((long)param_4 + 0x9d);
  *(undefined8 *)(puVar1 + 0x24) = uVar16;
  *(undefined8 *)(puVar1 + 0x26) = uVar17;
  *(undefined8 *)(puVar1 + 0x22) = uVar13;
  memcpy((void *)((long)puVar1 + 0xa5),(void *)((long)param_4 + 0xa5),0x800);
  uVar4 = *(undefined1 *)((long)param_4 + 0x8a5);
  *(undefined2 *)((long)puVar1 + 0x8a6) = 0;
  *(undefined1 *)((long)puVar1 + 0x8a5) = uVar4;
  FUN_027c1b80(puVar1);
  puVar7 = PTR_DAT_04bb3128;
  lVar12 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar12 + 0x473);
  pcVar14 = PTR_DAT_04bc1220;
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar2 = (uint *)(lVar12 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pcVar14 = (char *)(lVar12 + 0x472);
    }
  }
  if (*param_2 == *pcVar14) {
    uVar5 = *param_3;
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar15 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar15 * 4) == (uint)(uVar5 >> 0xb)) goto LAB_007f1970;
        uVar15 = uVar15 + 1;
      } while (DAT_04c8c0f0 != uVar15);
    }
    uVar15 = 0;
LAB_007f1970:
    local_68 = CONCAT44(local_68._4_4_,(int)uVar15);
    if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    lVar12 = DAT_0520f098;
    uVar3 = (uint)local_68;
    if (DAT_04c8c0f0 <= (uint)local_68) {
      uVar3 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) == 1) {
      if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
        FUN_01525dc8(DAT_0520f098,param_3);
      }
      uVar15 = (ulong)*param_3 & 0x7f;
      if ((uint)uVar15 < 100) {
        lVar12 = lVar12 + (uVar15 >> 3);
        *(byte *)(lVar12 + 0x3b) = *(byte *)(lVar12 + 0x3b) | (byte)(1 << (ulong)(*param_3 & 7));
      }
    }
  }
  puVar7 = PTR_DAT_04bb3128;
  if ((DAT_0537d558 != (long *)0x0) && ((int)DAT_0537d558[0x10] == 3)) {
    uVar5 = *param_3;
    if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar15 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar15 * 4) == (uint)(uVar5 >> 0xb)) goto LAB_007f1a5c;
        uVar15 = uVar15 + 1;
      } while (DAT_04c8c0f0 != uVar15);
    }
    uVar15 = 0;
LAB_007f1a5c:
    local_68 = CONCAT44(local_68._4_4_,(int)uVar15);
    if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar3 = (uint)local_68;
    if (DAT_04c8c0f0 <= (uint)local_68) {
      uVar3 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) == 0x1a) {
      uVar5 = *param_3;
      if ((uVar5 & 0x780) == 0x80) {
        if ((uint)((ulong)uVar5 & 0x7f) < 100) {
          lVar12 = *(long *)PTR_DAT_04bb4c80 + (((ulong)uVar5 & 0x7f) >> 3);
          *(byte *)(lVar12 + 0x55) = *(byte *)(lVar12 + 0x55) | (byte)(1 << (ulong)(uVar5 & 7));
          uVar5 = *param_3;
        }
        *(ushort *)(DAT_05739190 + 0x500) = uVar5;
      }
    }
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(local_16f8 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(local_16f8 + 0x28) + 0x18), puVar11 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar11)();
  }
  return;
}

