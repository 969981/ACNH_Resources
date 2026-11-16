
undefined8 FUN_028498f8(long param_1,undefined4 param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte local_84 [4];
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined1 local_5d;
  undefined8 local_58;
  uint local_38 [2];
  
  local_84[0] = *param_3;
  if (7 < local_84[0]) {
    local_84[0] = 0xff;
  }
  lVar7 = FUN_025830c0(DAT_055021a0,local_84,1);
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = FUN_0265b400(param_2,0);
  FUN_0265b400(param_2,1);
  if ((*(long **)(lVar7 + 0x17f68) != (long *)0x0) &&
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17f68), puVar8 != (undefined8 *)0x0)) {
    uVar9 = (**(code **)*puVar8)();
    uVar9 = uVar9 & 0xffffffff;
    if (uVar4 < 7) goto LAB_028499b4;
LAB_0284999c:
    uVar16 = 0;
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    goto LAB_02849e24;
  }
  uVar9 = 0;
  if (6 < uVar4) goto LAB_0284999c;
LAB_028499b4:
  puVar14 = local_80;
  switch((ulong)(&switchD_028499cc::switchdataD_0417baff)[uVar4] * 4 + 0x28499d0) {
  case 0x28499d0:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    *(undefined1 *)(param_1 + 0x37) = 3;
    break;
  case 0x28499ec:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    *(undefined1 *)(param_1 + 0x73) = 3;
    break;
  case 0x2849a00:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    *(undefined1 *)(param_1 + 0xaf) = 3;
    break;
  case 0x2849a14:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    cVar3 = *(char *)(param_1 + 0xec);
    *(undefined1 *)(param_1 + 0xef) = 3;
    puVar13 = &DAT_053fe348 + (ulong)(uint)(int)cVar3 * 0xba0;
    if (9 < (uint)(int)cVar3) {
      puVar13 = &DAT_053fe348;
    }
    if ((*(long *)(puVar13 + 0xaa0) == 0) || (*(int *)(*(long *)(puVar13 + 0xaa0) + 4) != 0x13)) {
      if (*(int *)(puVar13 + 0xa94) == 0x13) {
        *(undefined2 *)(puVar13 + 0xa98) = 0;
        puVar13[0xa9a] = 0;
        *(undefined8 *)(puVar13 + 0xa90) = 0x22001d0005;
        local_38[0] = 0x13;
        local_58 = CONCAT53(local_58._3_5_,0x10000);
        local_80._6_2_ = (ushort)((ulong)puVar14 >> 0x30) & 0xff00;
        local_80 = (undefined *)CONCAT26(local_80._6_2_,0xff0000000000);
        local_58._0_2_ = CONCAT11(0x13,cVar3);
        if (-1 < DAT_053d0e00) {
          puVar12 = (uint *)&local_58;
          uVar16 = 3;
          iVar6 = DAT_053d0e00;
          goto LAB_02849dbc;
        }
      }
    }
    else {
      FUN_0214eb90(puVar13 + 0x8b0,(long)cVar3,1);
    }
    break;
  case 0x2849a64:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    *(undefined1 *)(param_1 + 299) = 3;
    uVar11 = FUN_02917058((long)*(char *)(param_1 + 0x128));
    if ((uVar11 & 1) != 0) {
      local_5d = 0;
      local_70 = 0x10;
      local_64 = 0;
      local_6c = 0x65636e6172746e45;
      puStack_78 = &local_6c;
      local_80 = PTR_DAT_04bb2ab0 + 0x10;
      uVar5 = FUN_02931830(PTR_DAT_04bc39e0,&local_80,0);
      if (((-1 < (int)uVar5) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (((iVar6 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
           ((lVar10 = *(long *)(DAT_05aed670 + 0x330), lVar10 != 0 &&
            (uVar5 < *(uint *)(lVar10 + 0x260))))) {
          lVar10 = lVar10 + 0x250;
          uVar1 = uVar5 + 1 & 3;
          if (2 < uVar5) {
            uVar5 = uVar5 + 1 & 0xfffffffc;
            do {
              uVar5 = uVar5 - 4;
              lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 8) + 8);
            } while (uVar5 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar10 = *(long *)(lVar10 + 8);
          }
          if ((lVar10 != 0) && (lVar10 != 0x40)) {
            *(undefined1 *)(lVar10 + -4) = 0;
          }
        }
      }
    }
    cVar3 = *(char *)(param_1 + 0x128);
    goto LAB_02849bb0;
  case 0x2849b9c:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    cVar3 = *(char *)(param_1 + 0x160);
    *(undefined1 *)(param_1 + 0x163) = 3;
LAB_02849bb0:
    puVar14 = &DAT_053fe348 + (ulong)(uint)(int)cVar3 * 0xba0;
    if (9 < (uint)(int)cVar3) {
      puVar14 = &DAT_053fe348;
    }
    FUN_0214f030(puVar14 + 0x8b0);
    break;
  case 0x2849bd4:
    puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x17f50) + *(long *)(lVar7 + 0x17f48));
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    *(undefined1 *)(param_1 + 0x19b) = 3;
    uVar15 = puVar8[2];
    uVar16 = *puVar8;
    uVar2 = puVar8[1];
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(puVar8 + 3);
    *(undefined8 *)(param_1 + 0x17c) = uVar15;
    *(undefined8 *)(param_1 + 0x16c) = uVar16;
    *(undefined8 *)(param_1 + 0x174) = uVar2;
    local_58 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_80 = (undefined *)(lVar10 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar16 = local_58;
    uVar5 = (uint)local_58;
    uVar11 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,uVar5);
    local_58 = CONCAT26((short)uVar11,(undefined6)local_58) & 0xff00ffffffffffff;
    uVar11 = nn::time::IsValidDate
                       (uVar5 & 0xffff,uVar5 >> 0x10 & 0xff,(uint)((ulong)uVar16 >> 0x18) & 0xff);
    if ((uVar11 & 1) != 0) {
      *(short *)(param_1 + 0x1a0) = (short)uVar16;
      *(char *)(param_1 + 0x1a2) = (char)((ulong)uVar16 >> 0x10);
      *(char *)(param_1 + 0x1a3) = (char)((ulong)uVar16 >> 0x18);
    }
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_80 = (undefined *)(lVar10 + 0x54600);
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    uVar11 = (ulong)*(byte *)(param_1 + 0x198);
    *(ulong *)(param_1 + 400) = local_58;
    if ((uVar11 < 10) && ((&DAT_053fee41)[uVar11 * 0xba0] != '\0')) {
      lVar10 = uVar11 * 0xba0;
      (&DAT_053fe830)[uVar11 * 0x2e8] = 0;
      *(undefined2 *)(&DAT_053fe834 + lVar10) = 0;
      (&DAT_053fe83a)[lVar10] = 0;
      (&DAT_053fe83c)[lVar10] = 0;
      *(undefined4 *)(&DAT_053febe0 + lVar10) = 0xffffffff;
      *(undefined4 *)(&DAT_053fe836 + lVar10) = 0x101;
      (&DAT_053febe4)[lVar10] = 0xff;
      FUN_0219be30(&DAT_053fe348 + lVar10);
      local_38[1] = 0;
      local_80._6_2_ = (ushort)((ulong)local_80 >> 0x30) & 0xff00;
      local_38[0] = CONCAT31((int3)(local_38[0] >> 8),(&DAT_053fee40)[lVar10]) & 0xffff00ff;
      local_80 = (undefined *)CONCAT26(local_80._6_2_,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        puVar12 = local_38;
        uVar16 = 8;
        iVar6 = DAT_053d0d10;
LAB_02849dbc:
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar6,&local_80,puVar12,uVar16,0);
      }
    }
  }
  if ((param_4 & 1) != 0) {
    local_38[0] = CONCAT31(local_38[0]._1_3_,(char)uVar4);
    local_80._6_2_ = (ushort)((ulong)local_80 >> 0x30) & 0xff00;
    local_80 = (undefined *)CONCAT26(local_80._6_2_,0xff0000000000);
    if (-1 < DAT_053d0da0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0da0,&local_80,local_38,1,0);
    }
  }
  uVar16 = 1;
  if ((uVar9 & 1) != 0) {
LAB_02849e24:
    if ((*(long *)(lVar7 + 0x17f68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17f68) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return uVar16;
}

