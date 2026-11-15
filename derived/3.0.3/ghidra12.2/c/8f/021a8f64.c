
/* WARNING: Removing unreachable block (ram,0x021a948c) */

void FUN_021a8f64(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  
  puVar15 = (uint *)(param_1 + 0x92cc);
  if ((param_2 & 1) == 0) {
    puVar15 = (uint *)(param_1 + 0x92d8);
    uVar2 = *puVar15;
    uVar7 = *(uint *)(param_1 + 0x92ec);
    *(undefined4 *)(param_1 + 0x92ec) = 0xffffffff;
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      FUN_0214f240(lVar11 + 0x8b0,*puVar15);
    }
    uVar2 = *(uint *)(param_1 + 0x92dc);
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      FUN_0214f240(lVar11 + 0x8b0,*(undefined4 *)(param_1 + 0x92dc));
    }
    puVar14 = (uint *)(param_1 + 0x92e0);
    uVar2 = *puVar14;
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      goto LAB_021a93a4;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x92e8);
    lVar11 = *(long *)PTR_DAT_04bb46b0;
    if (lVar11 != 0) {
      puVar12 = *(undefined8 **)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
        lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
        if (lVar11 != 0) {
          lVar11 = lVar11 + 0x70;
          goto LAB_021a90f8;
        }
      }
      else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
              (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 != 0)) {
LAB_021a90f8:
        lVar13 = *(long *)(lVar11 + 0xd0);
        if (lVar13 == 0) {
          *(undefined1 *)(*(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0) + 0x1e335c) = 0xff;
        }
        else {
          if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
LAB_021a9144:
            plVar9 = *(long **)(lVar13 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_68 = *(undefined **)(lVar11 + 0xb0);
              pcStack_60 = *(char **)(lVar11 + 0xb8);
              local_58 = 0x1e3388;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_68);
            }
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            lVar13 = *(long *)(lVar11 + 0xd0);
            uVar8 = uVar8 & 0xffffffff;
            if (lVar13 != 0) goto LAB_021a9144;
          }
          *(undefined1 *)(*(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0) + 0x1e335c) = 0xff;
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 0x18),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
      }
    }
    uVar2 = *puVar15;
    *(undefined4 *)(param_1 + 0x92e8) = 0xffffffff;
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      local_38 = *(undefined1 *)(lVar11 + 0xaf8);
      local_37 = 0;
      local_34 = 0;
      local_68._6_2_ = (ushort)((ulong)local_68 >> 0x30) & 0xff00;
      local_68 = (undefined *)CONCAT26(local_68._6_2_,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_68,&local_38,8,0);
      }
      FUN_0214f240(lVar11 + 0x8b0,*puVar15);
    }
    uVar2 = *(uint *)(param_1 + 0x92d0);
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      local_38 = *(undefined1 *)(lVar11 + 0xaf8);
      local_37 = 0;
      local_34 = 0;
      local_68._6_2_ = (ushort)((ulong)local_68 >> 0x30) & 0xff00;
      local_68 = (undefined *)CONCAT26(local_68._6_2_,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_68,&local_38,8,0);
      }
      FUN_0214f240(lVar11 + 0x8b0,*(undefined4 *)(param_1 + 0x92d0));
    }
    puVar14 = (uint *)(param_1 + 0x92d4);
    uVar2 = *puVar14;
    if (uVar2 != 0xffffffff) {
      lVar11 = param_1 + (ulong)uVar2 * 0xba0;
      if (9 < uVar2) {
        lVar11 = param_1;
      }
      *(undefined4 *)(lVar11 + 0x4e8) = 0;
      *(undefined2 *)(lVar11 + 0x4ec) = 0;
      *(undefined1 *)(lVar11 + 0x4f2) = 0;
      *(undefined1 *)(lVar11 + 0x4f4) = 0;
      *(undefined4 *)(lVar11 + 0x898) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x4ee) = 0x101;
      *(undefined1 *)(lVar11 + 0x89c) = 0xff;
      FUN_0219be30(lVar11);
      local_38 = *(undefined1 *)(lVar11 + 0xaf8);
      local_37 = 0;
      local_34 = 0;
      local_68._6_2_ = (ushort)((ulong)local_68 >> 0x30) & 0xff00;
      local_68 = (undefined *)CONCAT26(local_68._6_2_,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_68,&local_38,8,0);
      }
LAB_021a93a4:
      FUN_0214f240(lVar11 + 0x8b0,*puVar14);
    }
  }
  puVar15[2] = 0xffffffff;
  puVar15[0] = 0xffffffff;
  puVar15[1] = 0xffffffff;
  if (9 < uVar7) {
    return;
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar7);
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar11 == 0) {
      return;
    }
    lVar11 = lVar11 + 0x70;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    if (lVar11 == 0) {
      return;
    }
  }
  if (9 < (uint)local_68) {
    return;
  }
  lVar13 = lVar11 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_68) {
    lVar13 = lVar11 + 0x1962d8;
  }
  if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar13 + 0x28);
    uVar8 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar12)();
    }
  }
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  cVar3 = *(char *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x1c4);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  iVar6 = (int)cVar3;
  if (iVar6 == -1) {
    return;
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "UseAudioType";
  iVar6 = FUN_0265c700(iVar6,&local_68);
  puVar4 = PTR_DAT_04bb26a8;
  lVar11 = *(long *)PTR_DAT_04bb26a8;
  if (uVar7 < 10) {
    uVar2 = uVar7 * 2 + 0xe5;
    if (*(uint *)(lVar11 + 0x770) <= uVar2) {
      uVar2 = 0;
    }
    lVar13 = *(long *)(lVar11 + 0x778) + (ulong)uVar2 * 400;
    if (*(long *)(lVar11 + 0x778) != 0) {
      local_68._0_4_ = uVar7;
      if (iVar6 == 1) {
        uVar5 = FUN_0277d6c4(PTR_DAT_04bb37e0);
        for (lVar11 = *(long *)(lVar11 + 0x19f800); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          while (*(ushort *)(lVar11 + 0x20) <= uVar5) {
            if (uVar5 <= *(ushort *)(lVar11 + 0x20)) goto LAB_021a9668;
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 == 0) goto LAB_021a9660;
          }
        }
      }
      else {
        FUN_026641e0(uVar7,0);
        lVar11 = FUN_0265c2a0();
        if (lVar11 == 0) {
          local_68._0_4_ = 0xfffe;
          local_68._4_4_ = 0;
          FUN_0277d4ac(&local_68);
        }
        else {
          if (*(long **)(lVar11 + 0x28) == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28);
            uVar8 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar8 = (**(code **)*puVar12)();
            }
          }
          lVar1 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
          local_68._0_4_ = *(undefined4 *)(lVar1 + 0x1320c);
          local_68._4_4_ = *(undefined4 *)(lVar1 + 0x13210);
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar12)();
          }
        }
        lVar11 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(&local_68);
        for (lVar11 = *(long *)(lVar11 + 0x19f800); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          while (*(ushort *)(lVar11 + 0x20) <= uVar5) {
            if (uVar5 <= *(ushort *)(lVar11 + 0x20)) goto LAB_021a9668;
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 == 0) goto LAB_021a9660;
          }
        }
      }
LAB_021a9660:
      uVar10 = 0;
      goto LAB_021a966c;
    }
  }
  goto LAB_021a967c;
LAB_021a97f8:
  uVar10 = *(undefined4 *)(lVar11 + 0x24);
  goto LAB_021a97fc;
LAB_021a9668:
  uVar10 = *(undefined4 *)(lVar11 + 0x24);
LAB_021a966c:
  *(undefined4 *)(lVar13 + 0x138) = uVar10;
  *(undefined8 *)(lVar13 + 0x140) = 0xffffffffffffffff;
  *(undefined2 *)(lVar13 + 0x131) = 0x101;
LAB_021a967c:
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar7);
  lVar11 = *(long *)puVar4;
  if (uVar7 < 10) {
    uVar2 = uVar7 * 2 + 0xe6;
    if (*(uint *)(lVar11 + 0x770) <= uVar2) {
      uVar2 = 0;
    }
    lVar13 = *(long *)(lVar11 + 0x778) + (ulong)uVar2 * 400;
    if (*(long *)(lVar11 + 0x778) != 0) {
      if (iVar6 == 1) {
        FUN_026641e0(uVar7,0);
        lVar11 = FUN_0265c2a0();
        if (lVar11 == 0) {
          local_68 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_68);
        }
        else {
          if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)*puVar12)();
            uVar7 = uVar7 ^ 1;
          }
          local_68 = *(undefined **)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x1320c);
          if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar12)();
          }
        }
        lVar11 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(&local_68);
        for (lVar11 = *(long *)(lVar11 + 0x19f800); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          while (*(ushort *)(lVar11 + 0x20) <= uVar5) {
            if (uVar5 <= *(ushort *)(lVar11 + 0x20)) goto LAB_021a97f8;
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 == 0) goto LAB_021a97f0;
          }
        }
      }
      else {
        uVar5 = FUN_0277d6c4(PTR_DAT_04bb37e0);
        for (lVar11 = *(long *)(lVar11 + 0x19f800); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          while (*(ushort *)(lVar11 + 0x20) <= uVar5) {
            if (uVar5 <= *(ushort *)(lVar11 + 0x20)) goto LAB_021a97f8;
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 == 0) goto LAB_021a97f0;
          }
        }
      }
LAB_021a97f0:
      uVar10 = 0;
LAB_021a97fc:
      *(undefined4 *)(lVar13 + 0x138) = uVar10;
      *(undefined8 *)(lVar13 + 0x140) = 0xffffffffffffffff;
      *(undefined2 *)(lVar13 + 0x131) = 0x101;
    }
  }
  return;
}

