
void FUN_01476a50(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  ushort uVar14;
  long *plVar15;
  long lVar16;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined4 local_58;
  uint local_54;
  
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  puVar2 = PTR_DAT_04bb43c0;
  uStack_64 = *(undefined4 *)(param_2 + 0x28c);
  local_60 = (uint *)0x0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = *(undefined4 *)(param_2 + 0x288);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(param_2 + 0x288);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8),
         puVar13 != (uint *)0x0)) {
        local_60 = puVar13;
      }
    }
  }
  FUN_01afade0(&local_70,*(int *)(*(long *)(param_2 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e);
  puVar9 = PTR_DAT_04bbcce0;
  puVar8 = PTR_DAT_04bbccd8;
  puVar7 = PTR_DAT_04bbcc60;
  puVar6 = PTR_DAT_04bbcc58;
  puVar5 = PTR_DAT_04bbcb88;
  puVar1 = PTR_DAT_04bbcb80;
  puVar4 = PTR_DAT_04bb65e8;
  puVar2 = PTR_DAT_04bb65e0;
  if (local_60 == (uint *)0x0) {
LAB_01477008:
    uVar14 = 0;
  }
  else {
    uVar10 = *local_60;
    local_54 = 0;
    if ((uVar10 != 0) && (local_60 != (uint *)(ulong)uVar10)) {
      puVar13 = (uint *)((long)local_60 - (long)(ulong)uVar10);
      local_54 = 0;
      if (*puVar13 != 0) {
        uVar10 = puVar13[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar16 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)local_60 - lVar16) / (ulong)uVar10);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
               (local_54 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2)
               , local_54 < 0x52)) goto LAB_01476be0;
          }
        }
        local_54 = 0;
      }
    }
LAB_01476be0:
    if ((local_54 & 0xfffffffe) == 0x12) {
      if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
        lVar16 = (long)*(int *)(param_2 + 0xbc);
        plVar15 = (long *)(*(long *)(param_2 + 0xb0) - lVar16);
        puVar2 = PTR_DAT_04bb65f0 + 0x10;
        do {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            *(undefined **)puVar1 = puVar2;
            __cxa_guard_release(puVar5);
          }
          if ((plVar15 != (long *)0x0) &&
             (uVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar1), (uVar12 & 1) != 0)) {
            FUN_01aea570(&local_70,(int)plVar15[0xa8]);
            break;
          }
          plVar15 = (long *)(*(long *)((long)plVar15 + lVar16 + 8) - lVar16);
        } while (plVar15 != (long *)((param_2 + 0xa8) - lVar16));
      }
      goto LAB_014770f4;
    }
    uVar14 = 0;
    uVar10 = *local_60;
    if ((uVar10 != 0) && (local_60 != (uint *)(ulong)uVar10)) {
      puVar13 = (uint *)((long)local_60 - (long)(ulong)uVar10);
      uVar14 = 0;
      if (*puVar13 != 0) {
        uVar10 = puVar13[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar16 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)local_60 - lVar16) / (ulong)uVar10);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
               uVar14 < 0x52)) goto LAB_01476c88;
          }
        }
        uVar14 = 0;
      }
    }
LAB_01476c88:
    if (uVar14 == 0x3e) {
      local_54 = 0x3e;
      if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
        lVar16 = (long)*(int *)(param_2 + 0xbc);
        plVar15 = (long *)(*(long *)(param_2 + 0xb0) - lVar16);
        puVar2 = PTR_DAT_04bb65f0 + 0x10;
        local_58 = 0x3e;
        do {
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            *(undefined **)puVar8 = puVar2;
            __cxa_guard_release(puVar9);
          }
          if ((plVar15 != (long *)0x0) &&
             (uVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar8), (uVar12 & 1) != 0)) {
            FUN_01aeabb0(&local_70,(char)plVar15[0xa8]);
            break;
          }
          plVar15 = (long *)(*(long *)((long)plVar15 + lVar16 + 8) - lVar16);
        } while (plVar15 != (long *)((param_2 + 0xa8) - lVar16));
      }
      goto LAB_014770f4;
    }
    if (local_60 == (uint *)0x0) goto LAB_01477008;
    uVar10 = *local_60;
    uVar14 = 0;
    if ((uVar10 != 0) && (local_60 != (uint *)(ulong)uVar10)) {
      puVar13 = (uint *)((long)local_60 - (long)(ulong)uVar10);
      uVar14 = 0;
      if (*puVar13 != 0) {
        uVar10 = puVar13[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar16 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)local_60 - lVar16) / (ulong)uVar10);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
               uVar14 < 0x52)) goto LAB_01476d34;
          }
        }
        uVar14 = 0;
      }
    }
LAB_01476d34:
    if (uVar14 == 0x49) {
      local_54 = 0x49;
      if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
        lVar16 = (long)*(int *)(param_2 + 0xbc);
        plVar15 = (long *)(*(long *)(param_2 + 0xb0) - lVar16);
        puVar1 = PTR_DAT_04bb65f0 + 0x10;
        local_58 = 0x49;
        do {
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar15 != (long *)0x0) &&
             (uVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar2), (uVar12 & 1) != 0)) {
            FUN_01aeb1f0(&local_70,(int)plVar15[0xa8]);
            break;
          }
          plVar15 = (long *)(*(long *)((long)plVar15 + lVar16 + 8) - lVar16);
        } while (plVar15 != (long *)((param_2 + 0xa8) - lVar16));
      }
      goto LAB_014770f4;
    }
    uVar14 = 0;
    uVar10 = *local_60;
    if ((uVar10 != 0) && (local_60 != (uint *)(ulong)uVar10)) {
      puVar13 = (uint *)((long)local_60 - (long)(ulong)uVar10);
      uVar14 = 0;
      if (*puVar13 != 0) {
        uVar10 = puVar13[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar16 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)local_60 - lVar16) / (ulong)uVar10);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
               uVar14 < 0x52)) goto LAB_01477014;
          }
        }
        uVar14 = 0;
      }
    }
  }
LAB_01477014:
  local_54 = 0x4f;
  if (uVar14 == 0x4f) {
    if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
      lVar16 = (long)*(int *)(param_2 + 0xbc);
      plVar15 = (long *)(*(long *)(param_2 + 0xb0) - lVar16);
      puVar2 = PTR_DAT_04bb6608 + 0x10;
      local_58 = 0x4f;
      do {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          *(undefined **)puVar6 = puVar2;
          __cxa_guard_release(puVar7);
        }
        if ((plVar15 != (long *)0x0) &&
           (uVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar6), (uVar12 & 1) != 0)) {
          FUN_01b0a4f8(&local_70,*(undefined4 *)((long)plVar15 + 0x35c));
          break;
        }
        plVar15 = (long *)(*(long *)((long)plVar15 + lVar16 + 8) - lVar16);
      } while (plVar15 != (long *)((param_2 + 0xa8) - lVar16));
    }
  }
LAB_014770f4:
  *(undefined4 *)param_1 = local_68;
  *(undefined4 *)((long)param_1 + 4) = uStack_64;
  return;
}

