
/* WARNING: Type propagation algorithm not settling */

bool FUN_009a4e7c(long param_1,undefined4 *param_2,byte *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  long *plVar18;
  undefined1 *__src;
  uint uVar19;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *puStack_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  
  uVar10 = FUN_0277d6c4(param_2);
  puVar8 = PTR_DAT_04bb27c0;
  if (7 < *param_3) {
    return false;
  }
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return false;
  }
  uVar19 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar19 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
      ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar19)) {
    plVar18 = (long *)0x0;
  }
  if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar8;
    iVar11 = (**(code **)(*plVar12 + 0x60))();
    if (iVar11 < 0x11) {
      uVar19 = 1;
    }
    else {
      if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_009a4f6c;
      uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a4f6c:
    uVar19 = 0;
  }
  if (plVar18 == (long *)0x0) {
    return false;
  }
  lVar15 = plVar18[0x2a];
  if (((*PTR_DAT_04bb6038 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb6030);
  uVar4 = 0;
  if ((int)lVar15 == 1) {
    uVar4 = uVar19;
  }
  if ((uVar13 & 1) == 0) {
    return false;
  }
  if (uVar4 == 0) {
    return false;
  }
  bVar6 = *param_3;
  puVar1 = (undefined2 *)(param_1 + 8);
  bVar9 = 7 < bVar6;
  if (bVar9) {
    bVar6 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x10;
  if (bVar9) {
    puVar2 = puVar1;
  }
  *puVar2 = *(undefined2 *)param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar2 + 2) = param_2[1];
  *(undefined4 *)(puVar2 + 4) = param_2[2];
  *(undefined4 *)(puVar2 + 6) = param_2[3];
  *(undefined4 *)(puVar2 + 8) = param_2[4];
  *(undefined4 *)(puVar2 + 10) = param_2[5];
  *(undefined4 *)(puVar2 + 0xc) = param_2[6];
  *(undefined4 *)(puVar2 + 0xe) = param_2[7];
  uVar13 = (ulong)*param_3;
  if (uVar13 < 8) {
    plVar12 = plVar18 + uVar13 * 0x34 + 0x4f;
    plVar14 = plVar12 + 0x1d;
    if ((short)*plVar12 == -2) goto LAB_009a505c;
    puVar16 = (uint *)(plVar18 + uVar13 * 0x34 + 0x6e);
    lVar15 = uVar13 * 0x1a0 + 0x374;
    uVar13 = (**(code **)(*plVar14 + 0x28))
                       (plVar14,(long)plVar18 + (ulong)(*puVar16 & 1) * 0x18 + lVar15,plVar12);
    uVar19 = *puVar16 & 1;
    if ((uVar13 & 1) == 0) {
      uVar13 = (**(code **)(*plVar14 + 0x28))
                         (plVar14,(long)plVar18 + (ulong)(uVar19 ^ 1) * 0x18 + lVar15,plVar12);
      if ((uVar13 & 1) != 0) {
        uVar19 = ~*puVar16 & 1;
        goto LAB_009a5170;
      }
      puVar16 = (uint *)PTR_DAT_04bb3238;
    }
    else {
LAB_009a5170:
      puVar16 = (uint *)((long)plVar18 + (ulong)uVar19 * 0x18 + lVar15 + 0xc);
    }
    uVar19 = *puVar16;
  }
  else {
LAB_009a505c:
    uVar19 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar19 == 0) {
    bVar6 = *param_3;
    puVar1 = (undefined2 *)(param_1 + 0x1a8);
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    uVar13 = FUN_009a46c4(puVar2 + 4,param_2);
    if ((uVar13 & 1) == 0) {
      return false;
    }
    bVar6 = *param_3;
    local_8d = 0;
    local_10c[0] = 0;
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    *puVar2 = *(undefined2 *)param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(puVar2 + 2) = param_2[1];
    bVar6 = *param_3;
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    bVar6 = *param_3;
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    *(byte *)(puVar2 + 0x56) = bVar6;
    local_74 = *param_2;
    uStack_70 = param_2[1];
    local_6c = 0x29;
    local_110 = 0x80;
    local_80 = 0;
    local_84 = 0;
    local_134 = 0;
    local_12c = 0;
    local_140 = param_2[4];
    local_120 = PTR_DAT_04bb2d88 + 0x10;
    local_88 = 7;
    local_148 = *(undefined8 *)(param_2 + 2);
    local_150 = 0xffffffff00000000;
    local_13c = 0x3f800000;
    bVar6 = *param_3;
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    plVar12 = (long *)(puVar2 + 4);
    puStack_118 = local_10c;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    __src = *(undefined1 **)(puVar2 + 8);
    if (local_10c != __src) {
      (**(code **)(*(long *)(puVar2 + 4) + 0x18))(plVar12);
      lVar15 = 0;
      do {
        if (*(char *)(*(long *)(puVar2 + 8) + lVar15) == '\0') goto LAB_009a55e0;
        lVar3 = *(long *)(puVar2 + 8) + lVar15;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_009a55e0;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_009a55e0;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_009a55e0:
      iVar11 = (int)lVar15;
      if (local_110 <= (int)lVar15) {
        iVar11 = local_110 + -1;
      }
      memcpy(local_10c,__src,(long)iVar11);
      local_10c[iVar11] = 0;
    }
    local_134 = CONCAT44(local_134._4_4_,uVar10);
    local_150 = CONCAT44(0x29,(undefined4)local_150);
    bVar6 = *param_3;
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar6 * 0x58;
    if (bVar9) {
      puVar2 = puVar1;
    }
    plVar12 = (long *)(puVar2 + 4);
    local_12c._4_4_ = (int)(char)bVar6;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcVar17 = *(char **)(puVar2 + 8);
    if (pcVar17 == "cvrt") {
      iVar11 = 2;
    }
    else if (((*pcVar17 == 'c') && (pcVar17[1] == 'v')) && (pcVar17[2] == 'r')) {
      iVar11 = (uint)(pcVar17[3] == 't') << 1;
    }
    else {
      iVar11 = 0;
    }
    local_134 = CONCAT44(iVar11,(undefined4)local_134);
    local_12c = (ulong)local_12c._4_4_ << 0x20;
    iVar11 = FUN_0099f200(plVar18,param_3,&local_74,&local_150);
    if (iVar11 == 0) {
      FUN_0099f500(plVar18,param_3);
      FUN_009a4550(param_1,param_3);
      return false;
    }
    return iVar11 != 0;
  }
  lVar15 = *(long *)puVar8;
  if (lVar15 == 0) {
    return true;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) + ((ulong)(uVar19 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar19)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar8;
    iVar11 = (**(code **)(*plVar14 + 0x60))();
    if (iVar11 < 0x11) {
      uVar19 = 1;
      goto LAB_009a518c;
    }
    if (*(uint *)(lVar15 + 0x5e8) < 5) {
      uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      goto LAB_009a518c;
    }
  }
  uVar19 = 0;
LAB_009a518c:
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[0x2a];
    if (((*PTR_DAT_04bb4000 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar11 != 0)) {
      *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4000);
    }
    uVar13 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3ff8);
    uVar4 = 0;
    if ((int)lVar15 == 1) {
      uVar4 = uVar19;
    }
    if ((uVar13 & 1) == 0) {
      return true;
    }
    if (uVar4 == 0) {
      return true;
    }
    *(undefined2 *)(plVar12 + 0x58) = *(undefined2 *)param_2;
    *(undefined1 *)((long)plVar12 + 0x2c2) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)plVar12 + 0x2c3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)((long)plVar12 + 0x2c4) = param_2[1];
    *(undefined4 *)(plVar12 + 0x59) = param_2[2];
    *(undefined4 *)((long)plVar12 + 0x2cc) = param_2[3];
    *(undefined4 *)(plVar12 + 0x5a) = param_2[4];
    *(undefined4 *)((long)plVar12 + 0x2d4) = param_2[5];
    *(undefined4 *)(plVar12 + 0x5b) = param_2[6];
    *(undefined4 *)((long)plVar12 + 0x2dc) = param_2[7];
    FUN_00999ab0(plVar12);
    lVar15 = 0;
    if (plVar12[0xe] != 0) {
      lVar15 = plVar12[0xe] + 0x278;
    }
    if (*(int *)(lVar15 + 8) != 1) {
      FUN_03ebb160(lVar15,1);
    }
    bVar6 = *param_3;
    puVar2 = (undefined2 *)(param_1 + 0x1a8);
    bVar9 = 7 < bVar6;
    if (bVar9) {
      bVar6 = 0xff;
    }
    puVar5 = puVar2 + ((long)(char)bVar6 & 0xffffffffU) * 0x58;
    puVar7 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x10;
    if (bVar9) {
      puVar5 = puVar2;
      puVar7 = puVar1;
    }
    uVar13 = FUN_0277d7b4(puVar5,puVar7);
    if ((((uVar13 & 1) == 0) || (*(char *)((long)puVar5 + 3) != *(char *)((long)puVar7 + 3))) ||
       (*(int *)(puVar5 + 2) != *(int *)(puVar7 + 2))) {
      bVar6 = *param_3;
      bVar9 = 7 < bVar6;
      if (bVar9) {
        bVar6 = 0xff;
      }
      puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar6 * 0x58;
      if (bVar9) {
        puVar1 = puVar2;
      }
      uVar13 = FUN_009a46c4(puVar1 + 4,param_2);
      if ((uVar13 & 1) != 0) {
        bVar6 = *param_3;
        local_6c = 0x29;
        bVar9 = 7 < bVar6;
        if (bVar9) {
          bVar6 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar6 * 0x58;
        if (bVar9) {
          puVar1 = puVar2;
        }
        *puVar1 = *(undefined2 *)param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(puVar1 + 2) = param_2[1];
        bVar6 = *param_3;
        bVar9 = 7 < bVar6;
        if (bVar9) {
          bVar6 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar6 * 0x58;
        if (bVar9) {
          puVar1 = puVar2;
        }
        *(undefined8 *)(puVar1 + 0x50) = 0;
        *(undefined4 *)(puVar1 + 0x54) = 0;
        bVar6 = *param_3;
        bVar9 = 7 < bVar6;
        if (bVar9) {
          bVar6 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar6 * 0x58;
        if (bVar9) {
          puVar1 = puVar2;
        }
        *(byte *)(puVar1 + 0x56) = bVar6;
        local_74 = *param_2;
        uStack_70 = param_2[1];
        FUN_007091b4(&local_150);
        local_148 = *(undefined8 *)(param_2 + 2);
        local_140 = param_2[4];
        local_13c = 0x3f800000;
        bVar6 = *param_3;
        bVar9 = 7 < bVar6;
        if (bVar9) {
          bVar6 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar6 * 0x58;
        if (bVar9) {
          puVar1 = puVar2;
        }
        FUN_00709380(&local_150,puVar1 + 4);
        bVar6 = *param_3;
        local_150 = CONCAT44(0x29,(undefined4)local_150);
        local_134 = CONCAT44(local_134._4_4_,uVar10);
        bVar9 = 7 < bVar6;
        if (bVar9) {
          bVar6 = 0xff;
        }
        local_12c._4_4_ = (uint)(char)bVar6;
        puVar1 = puVar2 + (ulong)local_12c._4_4_ * 0x58;
        if (bVar9) {
          puVar1 = puVar2;
        }
        uVar13 = FUN_009a4dec(puVar1 + 4);
        uVar10 = 2;
        if ((uVar13 & 1) == 0) {
          uVar10 = 0;
        }
        local_134 = CONCAT44(uVar10,(undefined4)local_134);
        local_12c = (ulong)local_12c._4_4_ << 0x20;
        iVar11 = FUN_0099f200(plVar18,param_3,&local_74,&local_150);
        if (iVar11 != 0) {
          return true;
        }
        FUN_0099f500(plVar18,param_3);
        FUN_009a4550(param_1,param_3);
      }
      return false;
    }
  }
  return true;
}

