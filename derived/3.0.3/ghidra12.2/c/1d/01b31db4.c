
void FUN_01b31db4(long *param_1,long *param_2)

{
  ushort *puVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*(long *)*param_1 == 0) {
    return;
  }
  lVar15 = *param_2;
  lVar17 = lVar15 + 0x194b0;
  if (*(long *)(lVar15 + 0x194b8) == 0) {
    lVar17 = *(long *)(DAT_05574040 + 0x20);
    lVar15 = *(long *)(lVar17 + 0x28);
    if (lVar15 == 0) goto LAB_01b31e48;
LAB_01b31e04:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar17 + 0x28) == 0) goto LAB_01b31e80;
      plVar10 = *(long **)(*(long *)(lVar17 + 0x28) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar17 + 8);
      uStack_70 = *(undefined8 *)(lVar17 + 0x10);
      local_68 = 0x3ce60;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x194d8);
    if (lVar15 != 0) goto LAB_01b31e04;
LAB_01b31e48:
    uVar9 = 0;
  }
LAB_01b31e80:
  lVar15 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
  puVar1 = (ushort *)(lVar15 + 0x13690);
  pbVar18 = (byte *)(lVar15 + 0x13692);
  pbVar19 = (byte *)(lVar15 + 0x13693);
  uVar11 = nn::time::IsValidDate((uint)*puVar1,(uint)*pbVar18,(uint)*pbVar19);
  if ((uVar11 & 1) == 0) goto joined_r0x01b32160;
  lVar15 = *param_1;
  uVar12 = FUN_0272eca4(puVar1,1);
  if ((uint)*(ushort *)(lVar15 + 0x10) == ((uint)uVar12 & 0xffff)) {
    if ((uint)*(byte *)(lVar15 + 0x12) == ((uint)((ulong)uVar12 >> 0x10) & 0xff)) {
      if ((int)*(char *)(lVar15 + 0x13) < (int)(uint)uVar12 >> 0x18) {
LAB_01b32130:
        lVar15 = *param_1;
        uVar5 = *(ushort *)(lVar15 + 0x10);
        bVar3 = *(byte *)(lVar15 + 0x12);
        bVar4 = *(byte *)(lVar15 + 0x13);
        uVar11 = nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
        if ((uVar11 & 1) != 0) {
          *puVar1 = uVar5;
          *pbVar18 = bVar3;
          *pbVar19 = bVar4;
        }
        goto joined_r0x01b32160;
      }
    }
    else if ((char)*(byte *)(lVar15 + 0x12) <= (char)((ulong)uVar12 >> 0x10)) goto LAB_01b32130;
  }
  else if ((short)*(ushort *)(lVar15 + 0x10) <= (short)uVar12) goto LAB_01b32130;
  uVar11 = nn::time::IsValidDate((uint)*puVar1,(uint)*pbVar18,(uint)*pbVar19);
  uVar14 = (uint)*puVar1;
  if ((uVar11 & 1) == 0) {
    uVar14 = 2000;
  }
  if (uVar14 == (int)*(short *)(*param_1 + 0x10)) {
    uVar11 = nn::time::IsValidDate((uint)*puVar1,(uint)*pbVar18,(uint)*pbVar19);
    uVar14 = (uint)*pbVar18;
    if ((uVar11 & 1) == 0) {
      uVar14 = 1;
    }
    if (uVar14 == (int)*(char *)(*param_1 + 0x12)) goto joined_r0x01b32160;
  }
  iVar7 = FUN_0272eca4(puVar1,0);
  lVar15 = *param_1;
  local_80 = *(undefined8 *)(lVar15 + 0x10);
  local_78 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
  local_78 = local_78 + -0x190c80;
  local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  local_88 = *(undefined8 *)(lVar15 + 0x10);
  local_78 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
  iVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  uVar14 = iVar7 >> 0x18 | iVar7 << 0x10 | ((iVar7 << 8) >> 0x18) << 8;
  if ((uVar14 < ((int)local_80._2_1_ << 8 | (uint)(ushort)local_80 << 0x10 | (int)local_80._3_1_))
     || (bVar6 = false,
        ((iVar8 << 8) >> 0x10 & 0xffffff00U | iVar8 << 0x10 | iVar8 >> 0x18) < uVar14)) {
    uVar14 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar14 = uVar14 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar14 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    bVar6 = (uint)((ulong)uVar14 * 100 >> 0x20) < 0x3c;
    DAT_05582b7c = uVar14;
  }
  lVar15 = *param_1;
  uVar5 = *(ushort *)(lVar15 + 0x10);
  bVar2 = false;
  if (*(char *)((long)param_2 + 0x1f6) == '\0') {
    bVar2 = bVar6;
  }
  uVar14 = (uint)*(byte *)(lVar15 + 0x12);
  if (uVar14 - 0xd < 0xfffffff4) {
    uVar14 = 1;
  }
  if ((((uVar5 & 3) == 0) &&
      ((uVar5 & 0xf) == 0 || 0x28f5c28 < ((uint)uVar5 * -0x3d70a3d7 >> 2 | (uint)uVar5 * 0x40000000)
      )) && (uVar14 == 2)) {
    uVar14 = 0x1d;
  }
  else {
    uVar14 = (uint)(byte)(&DAT_0416812f)[uVar14];
  }
  if ((bool)((int)*(char *)(lVar15 + 0x13) != uVar14 & (bVar2 ^ 1U))) goto joined_r0x01b32160;
  local_78 = 0xfffe;
  FUN_0277d4ac(&local_78);
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar14) {
    uVar14 = 0;
  }
  if (uVar14 == 1) {
    switch(*(undefined1 *)(*param_1 + 0x12)) {
    case 1:
      local_88 = 0x1be3;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x15;
      break;
    case 2:
      local_88 = 0x1beb;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x16;
      break;
    case 3:
      local_88 = 0x1be8;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x17;
      break;
    case 4:
      local_88 = 0x1be2;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x18;
      break;
    case 5:
      FUN_01b339f0(&local_80,param_1,param_2);
      uVar12 = 0x19;
      break;
    case 6:
      FUN_01b337e0(&local_80,param_1,0x3f1,param_2);
      uVar12 = 0x1a;
      break;
    case 7:
      local_88 = 0x1be5;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x1b;
      break;
    case 8:
      local_88 = 0x1be9;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x1c;
      break;
    case 9:
      local_88 = 0x1be7;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x1d;
      break;
    case 10:
      local_88 = 0x1be4;
      FUN_0277d4ac(&local_88);
      FUN_01b336f0(&local_80,param_1,&local_88,param_2);
      uVar12 = 0x1e;
      break;
    case 0xb:
      FUN_01b337e0(&local_80,param_1,0x3bb,param_2);
      uVar12 = 0x1f;
      break;
    case 0xc:
      FUN_01b337e0(&local_80,param_1,0x3f2,param_2);
      uVar12 = 0x20;
      break;
    default:
switchD_01b320f0_default:
      uVar12 = 0;
      goto LAB_01b325d0;
    }
LAB_01b325cc:
    local_78 = CONCAT44(local_80._4_4_,(undefined4)local_80);
  }
  else {
    uVar12 = 0;
    if (uVar14 == 0) {
      switch(*(undefined1 *)(*param_1 + 0x12)) {
      case 1:
        local_88 = 0x1be3;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 1;
        break;
      case 2:
        local_88 = 0x1be9;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 2;
        break;
      case 3:
        local_88 = 0x1be7;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 3;
        break;
      case 4:
        local_88 = 0x1be4;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 4;
        break;
      case 5:
        FUN_01b337e0(&local_80,param_1,0x3bb,param_2);
        uVar12 = 5;
        break;
      case 6:
        FUN_01b337e0(&local_80,param_1,0x3f2,param_2);
        uVar12 = 6;
        break;
      case 7:
        local_88 = 0x1beb;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 7;
        break;
      case 8:
        local_88 = 0x1be5;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 8;
        break;
      case 9:
        local_88 = 0x1be8;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 9;
        break;
      case 10:
        local_88 = 0x1be2;
        FUN_0277d4ac(&local_88);
        FUN_01b336f0(&local_80,param_1,&local_88,param_2);
        uVar12 = 10;
        break;
      case 0xb:
        FUN_01b339f0(&local_80,param_1,param_2);
        uVar12 = 0xb;
        break;
      case 0xc:
        FUN_01b337e0(&local_80,param_1,0x3f1,param_2);
        uVar12 = 0xc;
        break;
      default:
        goto switchD_01b320f0_default;
      }
      goto LAB_01b325cc;
    }
  }
LAB_01b325d0:
  lVar16 = *param_1;
  lVar15 = param_2[8];
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar16 + 0x10));
  nn::time::IsValidDate
            ((uint)*(ushort *)(lVar16 + 0x10),(uint)*(byte *)(lVar16 + 0x12),
             (uint)*(byte *)(lVar16 + 0x13));
  FUN_01b333b0((int)lVar15,uVar12,&local_80,&local_78,1);
  lVar15 = *param_1;
  uVar5 = *(ushort *)(lVar15 + 0x10);
  bVar3 = *(byte *)(lVar15 + 0x12);
  bVar4 = *(byte *)(lVar15 + 0x13);
  uVar11 = nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
  if ((uVar11 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar18 = bVar3;
    *pbVar19 = bVar4;
  }
  *(undefined1 *)((long)param_2 + 0x1f6) = 1;
joined_r0x01b32160:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return;
}

