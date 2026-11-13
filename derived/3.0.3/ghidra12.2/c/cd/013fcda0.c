
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fcda0(undefined8 param_1,long param_2,undefined4 param_3,ulong *param_4,long param_5)

{
  char cVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined1 local_84 [4];
  long local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_6c [4];
  undefined8 local_68;
  uint local_48;
  int local_44;
  
  if (param_2 == 0) {
    return;
  }
  puVar2 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (param_4 != (ulong *)0x0) {
    puVar2 = param_4;
  }
  uVar18 = *puVar2;
  uVar17 = uVar18 >> 0x20;
  if (param_5 == 0) {
    bVar15 = 0x17;
  }
  else {
    bVar15 = *(byte *)(param_5 + 4);
  }
  uVar9 = (uint)(uVar18 >> 0x20);
  cVar1 = (char)(uVar18 >> 0x20);
  local_68 = CONCAT17((char)(local_68 >> 0x38),0x1010000);
  if ((char)bVar15 < cVar1) {
    local_68 = uVar18;
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_80 = lVar5 + 0x15180;
    uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    local_68._7_1_ = (undefined1)((ulong)uVar6 >> 0x38);
    local_68._0_7_ = (uint7)(uint)uVar6;
    bVar16 = bVar15;
    bVar19 = 0x17;
  }
  else {
    bVar16 = 0;
    bVar19 = bVar15;
  }
  if (DAT_05574040 != 0) {
    puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar5 = 0;
      if (lVar7 != 0) {
        lVar5 = lVar7 + 0x70;
      }
      plVar11 = *(long **)(lVar5 + 0x28);
      goto joined_r0x013fced4;
    }
    if ((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) {
      lVar5 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      plVar11 = *(long **)(lVar5 + 0x28);
      goto joined_r0x013fced4;
    }
  }
  lVar5 = 0;
  plVar11 = _DAT_00000028;
joined_r0x013fced4:
  if (plVar11 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((undefined8 *)*plVar11 != (undefined8 *)0x0) {
      uVar8 = (*(code *)**(undefined8 **)*plVar11)();
    }
  }
  local_48 = *(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1e3604);
  if (1 < local_48) {
    local_48 = 0;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  local_6c[0] = 0;
  if ((uVar9 & 0xff) <= (uint)bVar19) {
    if ((uVar9 - 4 & 0xff) < 5) {
      uVar9 = 0;
    }
    else if ((uVar9 - 9 & 0xff) < 7) {
      uVar9 = 1;
    }
    else {
      uVar9 = (uint)(4 < (uVar9 - 0x10 & 0xff)) << 1;
    }
    uVar12 = 1 << (ulong)uVar9;
    if (2 < uVar9) {
      uVar12 = 0;
    }
    uVar9 = uVar12;
    do {
      iVar13 = (int)uVar17;
      if ((iVar13 - 4U & 0xff) < 5) {
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
        if (6 < (iVar13 - 9U & 0xff)) {
          uVar14 = (uint)(4 < (iVar13 - 0x10U & 0xff)) << 1;
        }
      }
      uVar17 = (ulong)(iVar13 + 1U);
      uVar3 = uVar9 | 1 << (ulong)uVar14;
      uVar4 = uVar3;
      if (2 < uVar14) {
        uVar3 = uVar9;
        uVar4 = uVar12;
      }
      uVar12 = uVar4;
      uVar9 = uVar3;
    } while ((iVar13 + 1U & 0xff) <= (uint)bVar19);
    local_6c[0] = (undefined1)uVar12;
  }
  local_80._0_4_ = ((uint)uVar18 >> 0x10 & 0xff) - 1;
  FUN_013fc880(param_1,param_2,param_3,&local_48,local_6c,&local_80);
  if ((char)bVar15 < cVar1) {
    uVar9 = 0;
    local_78 = 0;
    local_74 = 0;
    local_80 = CONCAT35(local_80._5_3_,0xfffe);
    local_84[0] = 0;
    if (local_68._4_1_ <= bVar16) {
      uVar9 = (uint)local_68._4_1_;
      if (uVar9 - 4 < 5) {
        uVar9 = 0;
      }
      else if (uVar9 - 9 < 7) {
        uVar9 = 1;
      }
      else {
        uVar9 = (uint)(4 < uVar9 - 0x10) << 1;
      }
      uVar12 = 1 << (ulong)uVar9;
      if (2 < uVar9) {
        uVar12 = 0;
      }
      uVar9 = uVar12;
      bVar15 = local_68._4_1_;
      do {
        if ((byte)(bVar15 - 4) < 5) {
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
          if (6 < (byte)(bVar15 - 9)) {
            uVar14 = (uint)(4 < (byte)(bVar15 - 0x10)) << 1;
          }
        }
        bVar15 = bVar15 + 1;
        uVar3 = uVar9 | 1 << (ulong)uVar14;
        uVar4 = uVar3;
        if (2 < uVar14) {
          uVar3 = uVar9;
          uVar4 = uVar12;
        }
        uVar12 = uVar4;
        uVar9 = uVar3;
      } while (bVar15 <= bVar16);
      uVar9 = uVar12 & 0xff;
      local_84[0] = (undefined1)uVar12;
    }
    local_44 = local_68._2_1_ - 1;
    FUN_013fc880(param_1,&local_80,param_3,&local_48,local_84,&local_44);
    if ((uVar9 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    }
    if ((uVar9 >> 1 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    }
    if ((uVar9 >> 2 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
    }
    if ((char)local_74 != '\0') {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    if (local_74._1_1_ == '\0') {
      *(undefined1 *)(param_2 + 0xd) = 0;
    }
  }
  return;
}

