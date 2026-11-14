
long * FUN_01b40e50(long param_1,long *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined4 uVar16;
  ushort *puVar17;
  int local_414;
  undefined **local_410;
  long local_408;
  char local_400;
  byte local_3ff;
  undefined2 local_3f4;
  undefined1 local_3f2;
  undefined2 local_3f0 [46];
  undefined1 local_394;
  undefined1 local_338;
  undefined8 local_334;
  undefined4 local_32c;
  undefined1 local_328;
  char local_324;
  undefined1 auStack_322 [672];
  ushort local_82;
  undefined2 local_80;
  int local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (local_7c = param_3,
     lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar7 == 0)) {
    return (long *)0x0;
  }
  if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar8)();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_3f0[0] = 0;
  local_394 = 0;
  local_338 = 0;
  local_334 = 0xfffe00000000;
  local_32c = 0;
  FUN_0277d4ac((long)&local_334 + 4);
  local_328 = 0;
  local_324 = '\0';
  memset(auStack_322,0,0x2a2);
  local_80 = 0xfffe;
  uVar10 = FUN_01b413d0(param_1,local_3f0,*(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90),
                        param_4);
  uVar2 = local_3f4;
  if ((uVar10 & 1) != 0) {
    if (local_324 == '\0') {
      uVar10 = FUN_027aed78(local_3f0,0);
      plVar15 = (long *)0x0;
      if (((uVar10 & 1) == 0) || (local_334._4_2_ == -2)) goto LAB_01b41080;
    }
    else {
      uVar5 = FUN_027aed78(local_3f0,0);
      uVar3 = (uint)local_82 - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
      uVar2 = local_3f4;
      if ((*(uint *)(DAT_05336138 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar3 * 8) == 0 ||
          ((uVar5 ^ 0xffffffff) & 1) != 0)) goto LAB_01b4107c;
    }
    lVar11 = FUN_0265c2a0(*(undefined4 *)(param_1 + 0x20));
    if (lVar11 == 0) {
      puVar17 = (ushort *)&DAT_053e6f44;
    }
    else if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
            (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar8 == (undefined8 *)0x0)) {
      puVar17 = (ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    }
    else {
      uVar10 = (**(code **)*puVar8)();
      puVar17 = (ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
    local_3f2 = (undefined1)puVar17[1];
    uVar2 = *puVar17;
    uVar10 = (ulong)(uVar2 & 0xff);
    if (((uVar10 < 0x23) &&
        (local_3f4._1_1_ = (byte)(uVar2 >> 8), local_3f4._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar10]))
       && (((uint)(&DAT_053e6eb8)[uVar10] >> (ulong)(local_3f4._1_1_ & 0x1f) & 1) != 0)) {
      if (*(long *)(lVar7 + 0x194b8) == 0) {
        lVar11 = *(long *)(*(long *)puVar4 + 0x20);
      }
      else {
        lVar11 = lVar7 + 0x194b0;
      }
      local_400 = '\0';
      local_408 = lVar11 + 0x8500;
      local_3f4 = uVar2;
      if (*(long *)(lVar11 + 0x8528) == 0) {
        local_3ff = 0;
      }
      else {
        puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x8528) + 0x10);
        local_3ff = 0;
        if (puVar8 != (undefined8 *)0x0) {
          local_3ff = (**(code **)*puVar8)();
        }
      }
      local_3ff = local_3ff & 1;
      local_414 = -1;
      local_410 = (undefined **)(PTR_DAT_04bb4c20 + 0x10);
      if (*(char *)(param_1 + 0x34) == '\0') {
        if (local_7c == 3) {
          uVar12 = FUN_01b419f0(&local_410);
          lVar11 = FUN_02830670(uVar12,&local_414);
          iVar14 = local_414;
          plVar15 = (long *)0x0;
          if ((lVar11 != 0) && (-1 < local_414)) {
            FUN_02829424(lVar11,local_3f0,&local_3f4);
LAB_01b4122c:
            uVar16 = 2;
            goto LAB_01b412b4;
          }
        }
        else if (local_7c == 2) {
          uVar12 = FUN_01b419f0(&local_410);
          lVar11 = FUN_02830310(uVar12,&local_414);
          iVar14 = local_414;
          plVar15 = (long *)0x0;
          if ((lVar11 != 0) && (-1 < local_414)) {
            FUN_02828a24(lVar11,local_3f0,&local_3f4);
            FUN_01b419f0(&local_410);
            iVar6 = FUN_0282e220();
            if (iVar6 == 0) {
              FUN_028289a0(lVar11,*(undefined4 *)(param_1 + 8),iVar14);
            }
            else if (iVar6 == 1) {
              uVar12 = FUN_01b419f0(&local_410);
              FUN_0282e020(uVar12,*(undefined4 *)(param_1 + 8));
              uVar16 = 0;
              goto LAB_01b412b4;
            }
            uVar16 = 0;
            goto LAB_01b412b4;
          }
        }
        else if (local_7c == 1) {
          uVar12 = FUN_01b419f0(&local_410);
          lVar11 = FUN_02830670(uVar12,&local_414);
          iVar14 = local_414;
          plVar15 = (long *)0x0;
          if ((lVar11 != 0) && (-1 < local_414)) {
            FUN_0282916c(lVar11,local_3f0,&local_3f4);
            goto LAB_01b4122c;
          }
        }
        else {
LAB_01b41310:
          plVar15 = (long *)0x0;
        }
      }
      else {
        if ((*(long *)(lVar11 + 0x8528) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar11 + 0x8528) + 0x20), plVar15 != (long *)0x0)) {
          local_78 = *(long *)(lVar11 + 0x8508);
          local_70 = *(undefined8 *)(lVar11 + 0x8510);
          local_68 = 0xeab4;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
        }
        lVar11 = FUN_02830b10(*(long *)(lVar11 + 0x8510) + *(long *)(lVar11 + 0x8508),&local_414);
        iVar14 = local_414;
        plVar15 = (long *)0x0;
        if ((lVar11 != 0) && (-1 < local_414)) {
          if (local_7c == 3) {
            FUN_0282ad70(lVar11,local_3f0,&local_3f4);
          }
          else if (local_7c == 2) {
            FUN_0282aab4(lVar11,local_3f0,&local_3f4);
          }
          else {
            if (local_7c != 1) goto LAB_01b41310;
            FUN_0282a7fc(lVar11,local_3f0,&local_3f4);
          }
          uVar16 = 5;
LAB_01b412b4:
          lVar11 = DAT_05ae7600;
          if (DAT_05ae7600 == 0) {
            plVar15 = malloc(0x28);
          }
          else {
            if (param_2 == (long *)0x0) {
              lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              puVar8 = (undefined8 *)(lVar11 + 8);
              if (lVar13 != 0) {
                puVar8 = (undefined8 *)(lVar13 + 0xa8);
              }
              param_2 = (long *)*puVar8;
              if (param_2 == (long *)0x0) goto LAB_01b41310;
            }
            plVar15 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x28,8);
          }
          if (plVar15 != (long *)0x0) {
            *(undefined4 *)(plVar15 + 1) = 0xffffffff;
            *(undefined8 *)((long)plVar15 + 0xc) = 0;
            *(undefined8 *)((long)plVar15 + 0x14) = 0;
            *(undefined4 *)((long)plVar15 + 0x1c) = 0;
            *plVar15 = (long)(PTR_DAT_04bc05b8 + 0x10);
            plVar15[4] = -0x100000000;
            *(undefined4 *)(plVar15 + 1) = *(undefined4 *)(param_1 + 8);
            uVar1 = *(undefined4 *)(param_1 + 0xc);
            *(undefined4 *)(plVar15 + 4) = uVar16;
            *(int *)((long)plVar15 + 0x24) = iVar14;
            *(undefined4 *)((long)plVar15 + 0xc) = uVar1;
          }
        }
      }
      local_410 = &PTR_FUN_04a882d0;
      if (local_3ff != 0) {
        lVar11 = *(long *)(local_408 + 0x28);
        if (local_400 == '\0') {
          if (lVar11 == 0) goto LAB_01b41080;
          puVar8 = *(undefined8 **)(lVar11 + 0x18);
        }
        else {
          if (lVar11 == 0) goto LAB_01b41080;
          puVar8 = *(undefined8 **)(lVar11 + 8);
        }
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)();
        }
      }
      goto LAB_01b41080;
    }
  }
LAB_01b4107c:
  local_3f4 = uVar2;
  plVar15 = (long *)0x0;
LAB_01b41080:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return plVar15;
}

