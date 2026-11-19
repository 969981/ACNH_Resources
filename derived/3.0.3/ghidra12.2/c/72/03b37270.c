
void FUN_03b37270(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint *puVar7;
  
  if (DAT_05aebc00 == '\0') {
    if ((*PTR_DAT_04bcb018 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
      }
    }
    if (0 < (int)*(uint *)PTR_DAT_04bcb010) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + uVar5 * 4) == 0) goto LAB_03b375f8;
        uVar5 = uVar5 + 1;
      } while (*(uint *)PTR_DAT_04bcb010 != uVar5);
    }
    uVar5 = 0;
LAB_03b375f8:
    uVar4 = (uint)uVar5;
    if ((*PTR_DAT_04bcb018 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
      }
    }
    pbVar6 = PTR_DAT_04bcb018;
    puVar7 = (uint *)PTR_DAT_04bcb010;
    if (*(uint *)PTR_DAT_04bcb010 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar4 * 4);
    puVar1 = (undefined4 *)(param_1 + 0x108);
    puVar2 = puVar1 + uVar4;
    if (6 < uVar4) {
      puVar2 = puVar1;
    }
    *puVar2 = 0;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 1) goto LAB_03b3766c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3766c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 1;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 2) goto LAB_03b376dc;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b376dc:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 2;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 3) goto LAB_03b3774c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3774c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 3;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 4) goto LAB_03b377bc;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b377bc:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 4;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 5) goto LAB_03b3782c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3782c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 6) goto LAB_03b3789c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3789c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 0;
  }
  else {
    if ((*PTR_DAT_04bcb018 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
      }
    }
    if (0 < (int)*(uint *)PTR_DAT_04bcb010) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + uVar5 * 4) == 0) goto LAB_03b372cc;
        uVar5 = uVar5 + 1;
      } while (*(uint *)PTR_DAT_04bcb010 != uVar5);
    }
    uVar5 = 0;
LAB_03b372cc:
    uVar4 = (uint)uVar5;
    if ((*PTR_DAT_04bcb018 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
      }
    }
    pbVar6 = PTR_DAT_04bcb018;
    puVar7 = (uint *)PTR_DAT_04bcb010;
    puVar1 = (undefined4 *)(param_1 + 0x108);
    if (*(uint *)PTR_DAT_04bcb010 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar4 * 4);
    puVar2 = puVar1 + uVar4;
    if (6 < uVar4) {
      puVar2 = puVar1;
    }
    *puVar2 = 0;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 1) goto LAB_03b3733c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3733c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 1;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 2) goto LAB_03b373ac;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b373ac:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 2;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 3) goto LAB_03b3741c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3741c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 3;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 4) goto LAB_03b3748c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3748c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 4;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 5) goto LAB_03b374fc;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b374fc:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    puVar1[uVar5] = 5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      pbVar6 = PTR_DAT_04bcb018;
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        pbVar6 = PTR_DAT_04bcb018;
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (0 < (int)*puVar7) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 2) + uVar5 * 4) == 6) goto LAB_03b3756c;
        uVar5 = uVar5 + 1;
      } while (*puVar7 != uVar5);
    }
    uVar5 = 0;
LAB_03b3756c:
    uVar4 = (uint)uVar5;
    if ((*pbVar6 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018);
      puVar7 = (uint *)PTR_DAT_04bcb010;
      if (iVar3 != 0) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
        puVar7 = (uint *)PTR_DAT_04bcb010;
      }
    }
    if (*puVar7 <= uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
    puVar2 = puVar1 + uVar4;
    if (6 < uVar4) {
      puVar2 = puVar1;
    }
    *puVar2 = 0x3f;
    *(long *)(*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x168) + 0x200) = param_1 + 0x128;
  }
  return;
}

