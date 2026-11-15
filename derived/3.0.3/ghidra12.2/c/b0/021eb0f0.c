
undefined8 FUN_021eb0f0(long *param_1,ulong *param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 local_38;
  long local_18;
  
  puVar2 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (param_2 != (ulong *)0x0) {
    puVar2 = param_2;
  }
  local_38 = *puVar2;
  if ((param_3 & 1) != 0) {
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar9 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar9,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  puVar3 = PTR_DAT_04bb4138;
  lVar12 = *(long *)PTR_DAT_04bb4138;
  if (lVar12 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar5 = FUN_006bd550(param_1[1],0);
    local_18 = CONCAT44(local_18._4_4_,uVar5);
    lVar12 = FUN_0079e770(lVar12,&local_18);
    if (lVar12 != 0) {
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar5 = FUN_006bd550(param_1[1],0);
      local_18 = CONCAT44(local_18._4_4_,uVar5);
      puVar6 = (uint *)FUN_0079e770(lVar12,&local_18);
      puVar4 = PTR_DAT_04bb40b8;
      puVar3 = PTR_DAT_04bb40b0;
      if (puVar6 == (uint *)0x0) {
        return 0;
      }
      if (*puVar6 == 0) {
LAB_021eb528:
        uVar8 = 0;
      }
      else {
        cVar7 = *PTR_DAT_04bb40b0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 100);
            if (-1 < (int)uVar8) {
              if ((byte *)((ulong)uVar8 + (long)puVar6) == (byte *)0x0) goto LAB_021eb528;
              uVar8 = (uint)*(byte *)((ulong)uVar8 + (long)puVar6);
              goto LAB_021eb52c;
            }
            if (uVar8 != 0xffffffff) goto LAB_021eb528;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar8 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021eb52c;
          lVar12 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) goto LAB_021eb528;
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 100) = 0xfffffffe;
          uVar8 = 0;
          if (uVar9 == 0) goto LAB_021eb52c;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != -0x6ba9495d) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              uVar8 = 0;
              goto LAB_021eb52c;
            }
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar4 + 100) = iVar1;
        } while (*puVar6 != 0);
        uVar8 = 0;
      }
LAB_021eb52c:
      puVar4 = PTR_DAT_04bb40b8;
      puVar3 = PTR_DAT_04bb40b0;
      if (uVar8 != (int)local_38._2_1_) {
        return 0;
      }
      if (*puVar6 != 0) {
        cVar7 = *PTR_DAT_04bb40b0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x60);
            if (-1 < (int)uVar8) goto LAB_021eb62c;
            if (uVar8 != 0xffffffff) goto LAB_021eb63c;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar8 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021eb640;
          lVar12 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) goto LAB_021eb63c;
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x60) = 0xfffffffe;
          uVar8 = 0;
          if (uVar9 == 0) goto LAB_021eb640;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != -0x6e615ad6) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              uVar8 = 0;
              goto LAB_021eb640;
            }
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar4 + 0x60) = iVar1;
        } while (*puVar6 != 0);
        uVar8 = 0;
        goto LAB_021eb640;
      }
      goto LAB_021eb63c;
    }
  }
  lVar12 = *(long *)PTR_DAT_04bb4130;
  if (lVar12 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar5 = FUN_006bd550(param_1[1],0);
  local_18 = CONCAT44(local_18._4_4_,uVar5);
  puVar6 = (uint *)FUN_0079e4d0(lVar12,&local_18);
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 == 0) {
LAB_021eb418:
    uVar8 = 0;
  }
  else {
    cVar7 = *PTR_DAT_04bb40a0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x48);
        if (-1 < (int)uVar8) {
          if ((byte *)((ulong)uVar8 + (long)puVar6) == (byte *)0x0) goto LAB_021eb418;
          uVar8 = (uint)*(byte *)((ulong)uVar8 + (long)puVar6);
          goto LAB_021eb41c;
        }
        if (uVar8 != 0xffffffff) goto LAB_021eb418;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      uVar8 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021eb41c;
      lVar12 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) goto LAB_021eb418;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
      uVar8 = 0;
      if (uVar9 == 0) goto LAB_021eb41c;
      piVar11 = (int *)(lVar12 + 4);
      while (piVar11[-1] != -0x6ba9495d) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar8 = 0;
          goto LAB_021eb41c;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar4 + 0x48) = iVar1;
    } while (*puVar6 != 0);
    uVar8 = 0;
  }
LAB_021eb41c:
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if (uVar8 != (int)local_38._2_1_) {
    return 0;
  }
  if (*puVar6 != 0) {
    cVar7 = *PTR_DAT_04bb40a0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x44);
        if (-1 < (int)uVar8) goto LAB_021eb62c;
        if (uVar8 != 0xffffffff) goto LAB_021eb63c;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      uVar8 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021eb640;
      lVar12 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) goto LAB_021eb63c;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
      uVar8 = 0;
      if (uVar9 == 0) goto LAB_021eb640;
      piVar11 = (int *)(lVar12 + 4);
      while (piVar11[-1] != -0x6e615ad6) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar8 = 0;
          goto LAB_021eb640;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar4 + 0x44) = iVar1;
    } while (*puVar6 != 0);
    uVar8 = 0;
    goto LAB_021eb640;
  }
LAB_021eb63c:
  uVar8 = 0;
LAB_021eb640:
  if (uVar8 == (int)local_38._3_1_) {
    return 1;
  }
  return 0;
LAB_021eb62c:
  if ((byte *)((ulong)uVar8 + (long)puVar6) != (byte *)0x0) {
    uVar8 = (uint)*(byte *)((ulong)uVar8 + (long)puVar6);
    goto LAB_021eb640;
  }
  goto LAB_021eb63c;
}

