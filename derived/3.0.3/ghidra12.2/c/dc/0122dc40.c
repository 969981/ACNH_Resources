
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0122dc40(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04bb46b0;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_78 = CONCAT44(local_78._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  if ((DAT_0514f765 & 1) == 0) {
    if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      FUN_011f4890();
      DAT_0514e4c0 = 0;
      _DAT_0514e4c8 = 0;
      DAT_0514e4d0 = 0;
      DAT_0514e4d8 = 0;
      DAT_0514f764 = 1;
      DAT_0514f765 = 1;
      return;
    }
  }
  else if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    lVar15 = -8;
    puVar16 = (undefined4 *)((long)&DAT_0514e448 + 4);
    lVar17 = 0x904;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar12 = *(long *)puVar5;
      local_80 = 0;
      local_88 = puVar1;
      if (lVar12 == 0) {
LAB_0122dd90:
        lVar12 = 0;
      }
      else {
        puVar13 = *(undefined8 **)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
          lVar7 = (**(code **)(*(long *)*puVar13 + 0x38))();
          lVar12 = 0;
          if (lVar7 != 0) {
            lVar12 = lVar7 + 0x70;
          }
        }
        else {
          if (puVar13 == (undefined8 *)0x0) goto LAB_0122dd90;
          lVar12 = 0;
          if ((long *)puVar13[0x26] != (long *)0x0) {
            lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
          }
        }
      }
      if (*(long **)(lVar12 + 0x1c24e8) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar12 + 0x1c24e8);
        uVar8 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar13)();
        }
      }
      uVar11 = lVar15 + 8U & 0xfffffff8;
      lVar7 = *(long *)(lVar12 + 0x1c24d0) + *(long *)(lVar12 + 0x1c24c8);
      puVar2 = (uint *)(lVar7 + lVar17);
      if (uVar11 != 0) {
        puVar2 = (uint *)(lVar7 + 0x904);
      }
      uVar14 = *puVar2;
      local_80 = CONCAT44(uVar14 >> 10,uVar14) & 0x3ff000003ff;
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0x1c24e8) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x1c24e8) + 8), puVar13 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar13)();
      }
      uVar14 = uVar14 >> 0x14 & 7;
      if (uVar14 < 8 && (1 << (ulong)uVar14 & 0x86U) != 0) {
        uVar8 = FUN_01675820(&local_88);
        if ((uVar8 & 1) == 0) {
          if ((uVar14 < 8) && ((1 << (ulong)uVar14 & 0x86U) != 0)) {
            *(uint *)(lVar17 + 0x514dbbc) = uVar14;
            puVar16[-1] = (undefined4)local_80;
            *puVar16 = local_80._4_4_;
          }
        }
        else {
          lVar12 = *(long *)puVar5;
          if (lVar12 == 0) {
LAB_0122debc:
            lVar12 = 0;
          }
          else {
            puVar13 = *(undefined8 **)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
              lVar7 = (**(code **)(*(long *)*puVar13 + 0x38))();
              lVar12 = 0;
              if (lVar7 != 0) {
                lVar12 = lVar7 + 0x70;
              }
            }
            else {
              if (puVar13 == (undefined8 *)0x0) goto LAB_0122debc;
              lVar12 = 0;
              if ((long *)puVar13[0x26] != (long *)0x0) {
                lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
              }
            }
          }
          lVar7 = *(long *)(lVar12 + 0x1c24e8);
          if (lVar7 == 0) {
            uVar8 = 0;
          }
          else {
            if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
              uVar8 = 0;
              plVar9 = *(long **)(lVar7 + 0x20);
            }
            else {
              uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
              uVar8 = uVar8 & 0xffffffff;
              if (*(long *)(lVar12 + 0x1c24e8) == 0) goto LAB_0122df30;
              plVar9 = *(long **)(*(long *)(lVar12 + 0x1c24e8) + 0x20);
            }
            if (plVar9 != (long *)0x0) {
              local_78 = *(long *)(lVar12 + 0x1c24c8);
              local_70 = *(undefined8 *)(lVar12 + 0x1c24d0);
              uStack_68 = 0x928;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
LAB_0122df30:
          lVar7 = *(long *)(lVar12 + 0x1c24d0) + *(long *)(lVar12 + 0x1c24c8);
          puVar2 = (uint *)(lVar7 + lVar17);
          if (uVar11 != 0) {
            puVar2 = (uint *)(lVar7 + 0x904);
          }
          *puVar2 = *puVar2 & 0xff8fffff | 0x300000;
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0x1c24e8) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x1c24e8) + 0x18),
             puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)();
          }
          *(undefined4 *)(lVar17 + 0x514dbbc) = 3;
        }
      }
      lVar17 = lVar17 + 4;
      bVar6 = lVar15 != -1;
      lVar15 = lVar15 + 1;
      puVar16 = puVar16 + 4;
    } while (bVar6);
    DAT_0514f765 = 0;
    DAT_0514f764 = 0;
    goto LAB_0122dfd0;
  }
  if ((DAT_0514f764 & 1) != 0) {
    return;
  }
LAB_0122dfd0:
  puVar1 = PTR_DAT_04bb6298;
  local_90 = 0;
  FUN_02507c6c(&local_78,1,1,1,0);
  puVar5 = PTR_DAT_04bb5038;
  uVar14 = (uint)(byte)local_78;
  if ((byte)local_78 < 8) {
    local_88 = (undefined *)CONCAT71(local_88._1_7_,(byte)local_78);
    local_88 = (undefined *)CONCAT44(local_78._4_4_,(undefined4)local_88);
    local_80 = CONCAT62(local_80._2_6_,(undefined2)local_70);
    while( true ) {
      local_94[0] = (undefined1)uVar14;
      uVar10 = FUN_02582fe0(local_94);
      FUN_0122cdd0(uVar10,&local_90);
      uVar8 = (ulong)uVar14;
      do {
        if (uVar8 == 7) goto LAB_0122e030;
        uVar8 = uVar8 + 1;
        uVar11 = FUN_02507924(&local_88,puVar5 + uVar8);
      } while ((uVar11 & 1) == 0);
      bVar3 = puVar5[uVar8];
      uVar14 = (uint)bVar3;
      if (7 < uVar14) break;
      local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar3);
    }
  }
  else {
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x55b5d9de) &&
       (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x43080996)) {
      return;
    }
    uVar10 = FUN_0252d29c();
    FUN_0122cdd0(uVar10,&local_90);
  }
LAB_0122e030:
  if ((char)local_90 == '\0') {
    DAT_0514e4c0 = DAT_0514e4c0 & 0xffffffff00000000;
  }
  if (local_90._1_1_ == '\0') {
    DAT_0514e4c0 = DAT_0514e4c0 & 0xffffffff;
  }
  if (local_90._2_1_ == '\0') {
    _DAT_0514e4c8 = _DAT_0514e4c8 & 0xffffffff00000000;
  }
  if (local_90._3_1_ == '\0') {
    _DAT_0514e4c8 = _DAT_0514e4c8 & 0xffffffff;
  }
  if (local_90._4_1_ == '\0') {
    DAT_0514e4d0 = DAT_0514e4d0 & 0xffffffff00000000;
  }
  if (local_90._5_1_ == '\0') {
    DAT_0514e4d0 = DAT_0514e4d0 & 0xffffffff;
  }
  if (local_90._6_1_ == '\0') {
    DAT_0514e4d8 = DAT_0514e4d8 & 0xffffffff00000000;
  }
  if (local_90._7_1_ == '\0') {
    DAT_0514e4d8 = DAT_0514e4d8 & 0xffffffff;
  }
  sVar4 = *(short *)puVar1;
  if (sVar4 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 3 & 1) == 0) {
    return;
  }
  DAT_0514f764 = 1;
  return;
}

